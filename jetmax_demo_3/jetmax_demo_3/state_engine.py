import rclpy
import time
import math
import netifaces
from functools import partial
from rclpy.node import Node
from rclpy.action import ActionClient

from jetmax_msgs.msg import SetMotion
from jetmax_msgs.msg import Position
from optitrack_interfaces.msg import FrameData
from std_msgs.msg import Float32
from std_msgs.msg import Bool

from optitrack_interfaces.srv import OptiTrackService

from jetmax_msgs.action import PathPlanning

class StateEngine(Node):
    def __init__(self):
        super().__init__("StateEngine")
        # parameter for ip address of host running optitrack_plugin. Default: host running this demo
        # (CHANGE ADAPTER TO ETH for jetson nano)
        default_ip = netifaces.ifaddresses("wifi0")[netifaces.AF_INET][0]["addr"]
        self.declare_parameter("plugin_ip_address", default_ip)
        self.declare_parameter("rigid_object_id", 0)
        self.declare_parameter("robot_name", "hiwonder") # marker set
        self.find_robot = True
        # list of robot arm marker positions gathered from Motive. Used to transform motive pos into movement path.
        # Structure: [base-marker, mid-marker, ee-marker]
        self.robot_marker_pos = []
        # self.object_pos # assuming only need pos for now
        self.vector_bound_mag = math.sqrt((30**2) + (10**2)) # (in cm) reach from base [horizontal,vertical]. Based on aligning arm vector to point towards object
        self.marker_ee_offset = (-2,3.5,-9) # (in cm) [x,y,z] x = along arm, y = front of arm
        
        # either have sub in another node (multi-processing), or run in a multithreaded executor, or be adament about starting/stopping plugin publishing
        self.sub_frame_data = self.create_subscription(FrameData, "Motive/FrameData", self.sub_callback, 10)
        self.path_planner_ac = ActionClient(self, PathPlanning, "pathPlanning")
        self.plugin_client = self.create_client(OptiTrackService, "NatNet/Command")
        while not self.plugin_client.wait_for_service(timeout_sec=1):
            self.get_logger().info("Waiting for NatNet/Command service to start: Make sure plugin is running")

        # connect plugin to motive:
        if self.connect_motive() != 0:
            return
        
        # find robot ee position (assunming marker set to know the direction of the robot arm):
        self.find_robot = True
        self.get_logger().info("Searching for robot position in Motive...")
        self.enable_motive_publishing(True)
        while rclpy.ok():
            rclpy.spin_once(self, timeout_sec=1.0) # let backend run one callback (using singlethreaded executor) (might be worth getting average pos from framedata)
            if not self.find_robot:
                self.enable_motive_publishing(False)
                break
        if not rclpy.ok():
            return
        self.get_logger().info("Found robot at: {}".format(self.robot_marker_pos))
        
        #set up robot position to one found from Motive
        self.robot_marker_pos[2].x += self.marker_ee_offset[0]
        self.robot_marker_pos[2].y += self.marker_ee_offset[1]
        self.robot_marker_pos[2].z += self.marker_ee_offset[2]
        #set up bounds of robot reach to compare in object pos.

        #search for rigid body and wait until within range
        self.find_robot = False
        self.found_object = False
        self.get_logger().info("Searching for object position in Motive...")
        self.enable_motive_publishing(True)
        while rclpy.ok():
            rclpy.spin_once(self, timeout_sec=1.0) # let backend run one callback (using singlethreaded executor) (might be worth getting average pos from framedata)
            if self.found_object:
                self.enable_motive_publishing(False)
                break
        if not rclpy.ok():
            return
        self.get_logger().info("Found object within range at: {}".format(self.object_pos))
        
        # start to move to object:
        #TODO: add feedback callback, and service for action server to use
        send_path_goal()
        # finished for now - proceeds to spin indefinitely

        #TODO: add states after action goal set in case it fails (object goes out of range/etc)

    def send_path_goal(self):
        goal_msg = PathPlanning.Goal()
        goal_msg.object_pos = self.object_pos
        goal_msg.robot_markers = self.robot_marker_pos
        # wait for action server to be available:
        self.path_planner_ac.wait_for_server()
        self.path_planner_result = self.path_planner_ac.send_goal_async(goal_msg, feedback_callback=self.path_feedback) # using future obj of python
        self.path_planner_result.add_done_callback(self.path_response_callback) # callback for whether goal was accepted or not

    def path_response_callback(self, response):
        goal = response.result() # result if goal was accepted/rejected
        if not goal.accepted:
            self.get_logger().info("Goal for path planner was rejected")
            return
        self.path_result_handler = goal.get_result_asnyc()
        self.path_result_handler.add_done_callback(self.path_result_callback)
    
    def path_result_callback(self, future):
        path_result = future.result().result
        self.get_logger().info("Path Action Finished with result: {}".format(path_result.return_code))
        

    def path_feedback(self, feedback):
         self.get_logger().info("Path Action Feedback: {}".format(feedback.update_status))

    # might need to be in another process
    def sub_callback(self, msg):
        if self.find_robot == True:
            robot_name = self.get_parameter('robot_name').get_parameter_value().string_value
            for marker_set in msg.marker_sets:
                if marker_set.sz_name == robot_name:
                    # only first 3 markers used for robot arm
                    for marker in markers:
                        self.robot_marker_pos.append(marker.pos) #(marker.pos.x, marker.pos.y, marker.pos.z))
                    self.find_robot = False
                    return
        else:
            # find rigid body position to move to
            object_id = self.get_parameter('rigid_object_id').get_parameter_value().double_value
            for rigid_body in msg.rigid_bodies:
                if rigid_body.id == object_id:
                    self.object_pos = rigid_body.pos #(rigid_body.pos.x, rigid_body.pos.y, rigid_body.pos.z)
                    if self.object_within_range():
                        self.found_object = True
                    return

    # returns True if object is within reach of robot
    def object_within_range(self):
        base_marker = self.robot_marker_pos[0]
        vector_magnitude = math.sqrt((abs(base_marker.x - self.object_pos.x)**2) + 
            (abs(base_marker.y - self.object_pos.y)**2) + (abs(base_marker.z - self.object_pos.z)**2))
        if vector_magnitude <= self.vector_bound_mag:
            return True
        else:
            return False

    # guaranteed to succeed (for now) -- spinning node until complete
    def enable_motive_publishing(self, start=True):
        request = OptiTrackService.Request()
        if start:
            request.message_type = 2
        else:
            request.message_type = 3
        self.connect_response = self.plugin_client.call_async(request)
        rclpy.spin_until_future_complete(self, self.connect_response) # spinning node until service complete (using singlethreaded executor)
        return self.connect_response.result().return_code

    # function for sending request to natnet command service to connect the NatNet client to Motive software -- spinning node until complete
    def connect_motive(self):
        request = OptiTrackService.Request()
        request.message_type = 0
        request.ip = self.get_parameter('plugin_ip_address').get_parameter_value().string_value
        request.connection_type = "m" # multimodal, change to 'u' for unicast
        self.connect_response = self.plugin_client.call_async(request)
        rclpy.spin_until_future_complete(self, self.connect_response) # spinning node until service complete (using singlethreaded executor)
        # if failed to connect, shutdown for now
        if self.connect_response.result().return_code != 0:
            self.get_logger().info("Failed To connect to Motive with IP address: {} and connection type: {} with error code {}".format
                (request.ip, request.connection_type, self.connect_response.result().return_code))
        else:
            self.get_logger().info("Connection to Motive successful")
        return self.connect_response.result().return_code

    def disconnect_motive(self):
        request = OptiTrackService.Request()
        request.message_type = 1
        self.connect_response = self.plugin_client.call(request) # blocking, guaranteed to be successful
        self.get_logger().info("Disconnected plugin from Motive")


def main(args=None):
    rclpy.init(args=args)
    behavior = StateEngine()
    rclpy.spin(behavior)
    self.disconnect_motive()
    behavior.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
