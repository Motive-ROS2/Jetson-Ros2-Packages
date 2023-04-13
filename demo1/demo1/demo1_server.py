import rclpy
from rclpy.node import Node
import hiwonder
import time
from functools import partial

from jetmax_msgs.msg import SetMotion
from jetmax_msgs.msg import Position
from std_msgs.msg import Float32
from std_msgs.msg import Bool

from std_srvs.srv import Trigger
from jetmax_srvs.srv import Demo1

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
        super().__init__("Demo1_server")
        self.jetmax = hiwonder.JetMax()
        self.sucker = hiwonder.Sucker()
        self.jetmax.go_home(2) # Init robot upon controller start up to home position

        self.jointStateRelPubs = []
        self.jointStateAbsPubs = []
        for jointId in range(1,4):
            pub_rel = self.create_publisher(SetMotion, "jetmax/joint{}/move/relative".format(jointId), 10)
            pub_abs = self.create_publisher(SetMotion, "jetmax/joint{}/move/absolute".format(jointId), 10)
            self.jointStateRelPubs.append(pub_rel)
            self.jointStateAbsPubs.append(pub_abs)

        self.demo1_movejoint_rel_srv = self.create_service(Demo1, "jetmax/demo1/move_joint_rel", self.demo1_movejoint_rel_callback)
        self.demo1_movejoint_abs_srv = self.create_service(Demo1, "jetmax/demo1/move_joint_abs", self.demo1_movejoint_abs_callback)

    def demo1_movejoint_rel_callback(self, request, response):
        self.get_logger().info('Incoming request\nAngle: %d Speed: %d' % (request.angle, request.speed))
        if request.sucker:
            self.sucker.set_state(request.sucker)
        else:
            self.sucker.release()
        self.jetmax.set_joint_relatively(request.joint_id, request.angle, request.speed)
        time.sleep(request.speed)
        #self.jointStateRelPubs[request.joint_id].publish(Float32(data=self.jetmax.joints[request.joint_id]))
        response.success = True
        return response

    def demo1_movejoint_abs_callback(self, request, response):
        self.get_logger().info('Incoming request\nAngle: %d Speed: %d' % (request.angle, request.speed))
        self.jetmax.set_joint(request.joint_id, request.angle, request.speed)
        time.sleep(request.speed)
        self.jointStateAbsPubs[request.joint_id].publish(Float32(data=self.jetmax.joints[request.joint_id]))
        response.success = True
        return response


# Entry point for ROS2 
def main(args=None):
    
    rclpy.init(args=args)

    demo1_server = Demo1_Server()
    rclpy.spin(demo1_server)

    demo1_server.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()