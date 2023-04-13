import rclpy
import hiwonder
import time
import math
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
# - (test) actually make a path for robot to take (in steps, so can check object pos in between)
# - ADD OFFSET of end-effector!
# robot_markers = [base_marker, arm_marker, ee_marker] : using <ee, base> vector for direction

class PathPlanner(Node):
    def __init__(self):
        super().__init__("PathPlanner")
        self.jetmax = hiwonder.JetMax()
        self.sucker = hiwonder.Sucker()
        self.robot_bounds = [30,10] # (in cm) reach from base [horizontal,vertical]. Based on aligning arm vector to point towards object
        self.marker_ee_offset = (-2,3.5,-9) # (in cm) [x,y,z] x = along arm, y = front of arm
        self.meter_per_degree = 0.0005 # PLACEHOLDER TODO: Find actual value

        self.path_execution_as = ActionServer(self, PathPlanning, "pathPlanning", self.as_callback)

    def as_callback(self, goal):
        self.get_logger().info("Executing Path Planning Goal: {}".format(goal.request.robot_markers[0]))
        feedback_msg = PathPlanning.Feedback()
        # set robot to home: (should not be necessary)
        self.jetmax.go_home(2)
        # move robot base to align with object:
        self.align_arm(goal.request.robot_markers, goal.request.object_pos)
        # ADD CHECK OBJ POS HERE
        feedback_msg.update_status = 0
        goal.publish_feedback(feedback_msg)
        # move robot arm to be above object:
        self.hover_arm(goal.request.robot_markers, goal.request.object_pos)
        # ADD CHECK OBJ POS HERE
        feedback_msg.update_status = 0
        goal.publish_feedback(feedback_msg)
        # move robot arm down to object and activate suck: TODO
        # ...
        # ADD CHECK OBJ POS HERE
        goal.succeed()
        result = PathPlanning.Result()
        result.return_code = 0
        return result

    # finds angle from robot arm to object using vector calc with the object and arm vectors
    # having same tail (the robot_base marker).
    # Note: may have to inverse angle sign
    def align_arm(self, robot_markers, obj):
        # calculate angle:
        arm_vect = (robot_markers[2].x - robot_markers[0].x, robot_markers[2].y - robot_markers[0].y)
        obj_vect = (obj.x - robot_markers[0].x, obj.y - robot_markers[0].y)
        arm_mag = math.sqrt((arm_vect[0]**2) + (arm_vect[1]**2))
        obj_mag = math.sqrt((obj_vect[0]**2) + (obj_vect[1]**2))
        dot_product = (arm_vect[0] * obj_vect[0]) + (arm_vect[1] * obj_vect[1])
        cos_angle = dot_product / (arm_mag * obj_mag)
        assert math.abs(cos_angle) > 1, "cosine of angle between arm and object > 1"
        angle = math.acos(cos_angle)
        # move base with a set speed (can make relative to how big angle is):
        self.jetmax.set_joint_relatively(1, angle, 3) # angle need to be int?
        time.sleep(3)
        return angle

    # move via m/deg ? Assumption: motive pos is smaller closer to the robot
    def hover_arm(self, robot_markers, obj):
        # self.jetmax.joints[i]
        ee_marker = robot_markers[2]
        dist_vect = (ee_marker.x - obj.x, ee_marker.y - obj.y) # used to know if need to go backward or forward
        dist_mag = math.sqrt((dist_vect[0]**2) + (dist_vect[0]**2)) # in meters
        angle = dist_mag / self.meter_per_degree
        if dist_vect < 0:
            angle = -angle
        self.jetmax.set_joint_relatively(2, angle, 3)
        time.sleep(3)
        return angle

def main(args=None):
    rclpy.init(args=args)
    planner = PathPlanner()
    rclpy.spin(planner)
    planner.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()