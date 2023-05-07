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
from jetmax_msgs.srv import GetPosition

from jetmax_msgs.action import PathPlanning

class StateEngine(Node):
    def __init__(self):
        super().__init__("StateEngine")
        self.declare_parameter("motive_ip_address", "")
        
        # either have sub in another node (multi-processing), or run in a multithreaded executor, or be adament about starting/stopping plugin publishing
        self.path_planner_client = ActionClient(self, PathPlanning, "Demo/pathPlanning")
        self.position_client = self.create_client(GetPosition, "Demo/positions")
        self.plugin_client = self.create_client(OptiTrackService, "NatNet/Command")

        while not self.plugin_client.wait_for_service(timeout_sec=2):
            self.get_logger().info("Waiting for NatNet/Command service to start: Make sure plugin is running")
        while not self.position_client.wait_for_service(timeout_sec=2):
            self.get_logger().info("Waiting for Demo/positions service to start: Make sure position_service.py is running")

        # connect plugin to motive:
        if self.connect_motive() != 0:
            return
        
        # get object and robot positions:
        object_pos, robot_markers = self.get_positions() # obsolete

        # move to object:
        #TODO: add feedback callback, and service for action server to use
        self.send_path_goal(object_pos, robot_markers)
        # finished for now - proceeds to spin indefinitely

        #TODO: add states after action goal set in case it fails (object goes out of range/etc)

    def get_positions(self):
        self.pos_response = self.position_client.call_async(None) # no request
        rclpy.spin_until_future_complete(self, self.pos_response) # spinning node until service complete (using singlethreaded executor)
        positions = self.pos_response.result()
        return (positions.object_pos, positions.robot_markers)

    def send_path_goal(self, object_pos, robot_markers):
        goal_msg = PathPlanning.Goal()
        goal_msg.object_pos = object_pos
        goal_msg.robot_markers = robot_markers
        # wait for action server to be available:
        self.path_planner_client.wait_for_server()
        self.path_planner_result = self.path_planner_client.send_goal_async(goal_msg, feedback_callback=self.path_feedback) # using future obj of python
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
        

def main(args=None):
    rclpy.init(args=args)
    behavior = StateEngine()
    rclpy.spin(behavior)
    self.disconnect_motive()
    behavior.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
