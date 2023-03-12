import rclpy
# import hiwonder
import time
from rclpy.node import Node
from rclpy.action import ActionServer

from jetmax_msgs.msg import SetMotion
from jetmax_msgs.msg import Position
from optitrack_interfaces.msg import FrameData
from std_msgs.msg import Float32
from std_msgs.msg import Bool

from jetmax_msgs.action import PathPlanning

#TODO: 
# - during action server callback, get some service/sub to monitor active position of object (prob require new node or diff callback_group)
# - actually make a path for robot to take (in steps, so can check object pos in between)

class PathPlanner(Node):
    def __init__(self):
        super().__init__("PathPlanner")
        self.robot_bounds = [30,10] # (in cm) reach from base [horizontal,vertical]. Based on aligning arm vector to point towards object
        self.marker_ee_offset = (-2,3.5,-9) # (in cm) [x,y,z] x = along arm, y = front of arm

        self.path_execution_as = ActionServer(self, PathPlanning, "pathPlanning", self.as_callback)

    def as_callback(self, goal):
        self.get_logger().info("Executing Path Planning Goal")
        feedback_msg = PathPlanning.Feedback()
        # move robot base
        feedback_msg.update_status = 0
        goal.publish_feedback(feedback_msg)
        # move robot arm
        goal.succeed()
        result = PathPlanning.result()
        result.return_code = 0
        return result
        return

def main(args=None):
    rclpy.init(args=args)
    planner = PathPlanner()
    rclpy.spin(planner)
    planner.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()