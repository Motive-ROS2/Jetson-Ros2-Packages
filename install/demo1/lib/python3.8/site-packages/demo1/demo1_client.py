import rclpy
import time
import math
import netifaces
from functools import partial
from rclpy.node import Node

from jetmax_msgs.msg import SetMotion
from jetmax_msgs.msg import Position
from optitrack_interfaces.msg import FrameData
from std_msgs.msg import Float32
from std_msgs.msg import Bool

from std_srvs.srv import Trigger
from jetmax_msgs.srv import Demo1
from optitrack_interfaces.srv import OptiTrackService

# pwm_servo = gripper rotational motor (Note: pwm_servo2 is for claw gripper open/close - not attached)
# DC motor 2 (servo 3) = vertical arm control (joint 3)
# DC motor 1 (servo 2) = arm base control (joint 2)
# serial_servo = base rotational motor (joint 1)

# For direct controlling:
# - Use set_joint for moving the base and arm of the robot (all other commands do not work or do not work well at all)
# - Use hiwonder.pwm_servo1.set_position and hiwonder.pwm_servo2.set_position to control the gripper
# - after invoking either of the control functions, must run time.sleep(time) for the robot to actually run the commands (time must be >= duration)
# - Suggested to just use the topics made here for controlling the robot

class Demo1_Client(Node):
    def __init__(self):
        super().__init__("Demo1_client")
        # parameter for ip address of host running optitrack_plugin. Default: host running this demo
        # (CHANGE ADAPTER TO ETH for jetson nano)
        # default_ip = netifaces.ifaddresses("eth0")[netifaces.AF_INET][0]["addr"]
        self.declare_parameter("motive_ip_address", "")
        self.declare_parameter("rigid_object_id", 1)
        self.declare_parameter("robot_base", 2) # rigid body
        self.declare_parameter("robot_arm", 2) # rigid body
        self.declare_parameter("robot_ee", 2) # rigid body
        self.declare_parameter("rigid_final_id", 1)
        self.find_robot = True
        # list of robot arm marker positions gathered from Motive. Used to transform motive pos into movement path.
        # Structure: [base-marker, mid-marker, ee-marker]
        self.robot_marker_pos = {}
        # (in cm) reach from base [horizontal,vertical]. Based on aligning arm vector to point towards object
        self.bounds =  {"horizontal": 0.30, "vertical": 0.10}
        self.marker_ee_offset = (-2,3.5,-9) # (in cm) [x,y,z] x = along arm, y = front of arm
        
        # either have sub in another node (multi-processing), or run in a multithreaded executor, or be adament about starting/stopping plugin publishing
        self.sub_frame_data = self.create_subscription(FrameData, "Motive/FrameData", self.sub_callback, 10)
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
        #self.robot_marker_pos[2].x += self.marker_ee_offset[0]
        #self.robot_marker_pos[2].y += self.marker_ee_offset[1]
        #self.robot_marker_pos[2].z += self.marker_ee_offset[2]
        #set up bounds of robot reach to compare in object pos.

        #search for rigid body and wait until within range
        self.find_robot = False
        self.find_object = True
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

        #search for rigid body and wait until within range
        self.find_object = False
        self.find_final = True
        self.found_final = False
        self.get_logger().info("Searching for object position in Motive...")
        self.enable_motive_publishing(True)
        while rclpy.ok():
            rclpy.spin_once(self, timeout_sec=1.0) # let backend run one callback (using singlethreaded executor) (might be worth getting average pos from framedata)
            if self.found_final:
                self.enable_motive_publishing(False)
                break
        if not rclpy.ok():
            return
        self.get_logger().info("Found final within range at: {}".format(self.final_location))

        self.cli = self.create_client(Demo1, "jetmax/demo1/place_block")
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')

        self.send_srv_info()
    
    def send_srv_info(self):
        self.req = Demo1.Request()
        self.req.robot_markers = [self.robot_marker_pos["base"], self.robot_marker_pos["arm"], self.robot_marker_pos["ee"]]
        self.req.object_pos = self.object_pos
        self.req.final_location = self.final_location
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
    
    # might need to be in another process
    def sub_callback(self, msg):
        num_found = 0
        if self.find_robot == True:
            robot_base = self.get_parameter('robot_base').get_parameter_value().integer_value
            robot_arm = self.get_parameter('robot_arm').get_parameter_value().integer_value
            robot_ee = self.get_parameter('robot_ee').get_parameter_value().integer_value
            self.get_logger().info("Robot id being used: {}".format(robot_base))
            for rigid_body in msg.rigid_bodies:
                if rigid_body.id == robot_base:
                    self.robot_marker_pos["base"] = rigid_body.pos
                    #  or rigid_body.id == robot_arm or rigid_body.id == robot_ee:
                    # # only first 3 markers used for robot arm
                    # # for marker in markers:
                    # self.robot_marker_pos.append(rigid_body.pos) #(marker.pos.x, marker.pos.y, marker.pos.z))
                    num_found += 1
                    if num_found >= 3:
                        self.find_robot = False
                        return
                elif rigid_body.id == robot_arm:
                    self.robot_marker_pos["arm"] = rigid_body.pos
                    num_found += 1
                    if num_found >= 3:
                        self.find_robot = False
                        return
                elif rigid_body.id == robot_ee:
                    self.robot_marker_pos["ee"] = rigid_body.pos
                    num_found += 1
                    if num_found >= 3:
                        self.find_robot = False
                        return
        elif self.find_object == True:
            # find rigid body position to move to
            object_id = self.get_parameter('rigid_object_id').get_parameter_value().integer_value
            for rigid_body in msg.rigid_bodies:
                if rigid_body.id == object_id:
                    self.object_pos = rigid_body.pos #(rigid_body.pos.x, rigid_body.pos.y, rigid_body.pos.z)
                    if self.object_within_range():
                        self.found_object = True
                    return
        else:
            # find rigid body position to move to
            final_id = self.get_parameter('rigid_final_id').get_parameter_value().integer_value
            for rigid_body in msg.rigid_bodies:
                if rigid_body.id == final_id:
                    self.final_location = rigid_body.pos #(rigid_body.pos.x, rigid_body.pos.y, rigid_body.pos.z)
                    if self.object_within_range():
                        self.found_final = True
                    return

    # returns True if object is within reach of robot
    def object_within_range(self):
        base_marker = self.robot_marker_pos["base"]
        # x,y magnitude of object to base of robot
        vector_magnitude = math.sqrt(((base_marker.x - self.object_pos.x)**2) + ((base_marker.y - self.object_pos.y)**2))
        height_diff = abs(base_marker.z - self.object_pos.z)
        # self.get_logger().info("height: {} vector: {}".format(height_diff, vector_magnitude))
        if vector_magnitude <= self.bounds["horizontal"] and height_diff <= self.bounds["vertical"]:
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
        request.ip = self.get_parameter('motive_ip_address').get_parameter_value().string_value
        request.connection_type = "u" # multimodal, change to 'u' for unicast
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

# Entry point for ROS2 
def main(args=None):
    
    rclpy.init(args=args)
    client = Demo1_Client()
    rclpy.spin(client)
    self.disconnect_motive()
    client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()