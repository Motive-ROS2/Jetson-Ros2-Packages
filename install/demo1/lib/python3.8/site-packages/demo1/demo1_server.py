import rclpy
import hiwonder
import time
import math
from rclpy.node import Node

from jetmax_msgs.msg import SetMotion
from jetmax_msgs.msg import Position
from std_msgs.msg import Float32
from std_msgs.msg import Bool
from optitrack_interfaces.msg import FrameData

from std_srvs.srv import Trigger
from jetmax_msgs.srv import Demo1

# pwm_servo = gripper rotational motor (Note: pwm_servo2 is for claw gripper open/close - not attached)
# DC motor 2 (servo 3) = vertical arm control (joint 3)
# DC motor 1 (servo 2) = arm base control (joint 2)
# serial_servo = base rotational motor (joint 1)

# For direct controlling:
# - Use set_joint for moving the base and arm of the robot (all other commands do not work or do not work well at all)
# - Use hiwonder.pwm_servo1.set_position and hiwonder.pwm_servo2.set_position to control the gripper
# - after invoking either of the control functions, must run time.sleep(time) for the robot to actually run the commands (time must be >= duration)
# - Suggested to just use the topics made here for controlling the robot

class Demo1_Server(Node):
    def __init__(self):
        super().__init__("Demo1_Server")

        self.jetmax = hiwonder.JetMax()
        self.sucker = hiwonder.Sucker()
        self.robot_bounds = [30,10] # (in cm) reach from base [horizontal,vertical]. Based on aligning arm vector to point towards object
        self.marker_ee_offset = (-2,3.5,-9) # (in cm) [x,y,z] x = along arm, y = front of arm
        self.meter_per_degree = 0.0196 # PLACEHOLDER TODO: Find actual value
        self.demo1_find_block_srv = self.create_service(Demo1, "jetmax/demo1/place_block", self.find_block_callback)

    def find_block_callback(self, request, response):
        self.get_logger().info("Executing Path Planning Goal: {}".format(request.robot_markers[0]))
        # set robot to home: (should not be necessary)
        self.jetmax.go_home(2)
        # move robot base to align with object:
        base_angle = self.align_arm(request.robot_markers, request.object_pos)
        self.get_logger().info(f"Turning robot at angle: {base_angle}")
        # move robot arm to be above object:
        arm_angle = self.hover_arm(request.robot_markers, request.object_pos)
        self.get_logger().info(f"Moving robot to hover over item at angle: {arm_angle}")
        # move robot arm down to object and activate suck: TODO
        # ...
        # ADD CHECK OBJ POS HERE
        self.jetmax.go_home(2)
        # move robot base to align with object:
        base_angle = self.align_arm(request.robot_markers, request.final_location)
        self.get_logger().info(f"Turning robot at angle: {base_angle}")
        # move robot arm to be above object:
        arm_angle = self.hover_arm(request.robot_markers, request.final_location)
        self.get_logger().info(f"Moving robot to hover over item at angle: {arm_angle}")
        response.success = 0
        return response

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
        assert abs(cos_angle) < 1.0, f"cosine of angle: {cos_angle} between arm and object > 1"
        angle = math.acos(cos_angle) * (180.0/math.pi)
        direction = obj_mag * arm_mag * math.sin(angle)
        if direction > 0:
            angle = angle * -1
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
        # if dist_vect < 0:
        #     angle = -angle
        self.jetmax.set_joint_relatively(2, angle, 3)
        time.sleep(3)
        return angle


# Entry point for ROS2 
def main(args=None):
    
    rclpy.init(args=args)

    demo1_server = Demo1_Server()
    rclpy.spin(demo1_server)
    demo1_server.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()