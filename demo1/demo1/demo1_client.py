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

class Demo1_Client(Node):
    def __init__(self):
        super().__init__("Demo1_client")
        self.cli1 = self.create_client(Demo1, "jetmax/demo1/move_joint_rel")
        while not self.cli1.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        """self.cli2 = self.create_client(SetMotion, "jetmax/demo1/joint2/move")
        while not self.cli2.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.cli3 = self.create_client(SetMotion, "jetmax/demo1/joint3/move")
        while not self.cli3.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')"""
        self.req = Demo1.Request()
    
    def joint1_req(self, sucker, joint_id, angle, speed):
        self.req.sucker = sucker
        self.req.joint_id = joint_id
        self.req.angle = angle
        self.req.speed = speed
        self.future = self.cli1.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

    def joint2_req(self, angle, speed):
        self.req.angle = angle
        self.req.speed = speed
        self.future = self.cli2.call_asyn(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

    def joint3_req(self, angle, speed):
        self.req.angle = angle
        self.req.speed = speed
        self.future = self.cli3.call_asyn(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

# Entry point for ROS2 
def main(args=None):
    
    rclpy.init(args=args)

    demo1_client = Demo1_Client()
    demo1_client.joint1_req(False, 1, -15.0, 1.0)
    demo1_client.joint1_req(False, 2, 45.0, 1.0)
    demo1_client.joint1_req(False, 3, 37.0, 1.0)
    demo1_client.joint1_req(True, 1, 0.0, 0.5)
    demo1_client.joint1_req(False, 3, -37.0, 1.0)
    demo1_client.joint1_req(False, 2, -40.0, 1.0)
    demo1_client.joint1_req(False, 1, -40.0, 1.0)
    demo1_client.joint1_req(False, 1, 0.0, 25.0)
    #demo1_client.joint1_req(False, 3, -10.0, 1.0)
    demo1_client.joint1_req(False, 1, 65.0, 1.5)
    demo1_client.joint1_req(False, 2, 45.0, 1.0)
    demo1_client.joint1_req(False, 3, 35.0, 1.0)
    demo1_client.joint1_req(True, 1, 0.0, 0.5)
    demo1_client.joint1_req(False, 3, -35.0, 1.0)
    demo1_client.joint1_req(False, 2, -55.0, 1.0)
    demo1_client.joint1_req(False, 1, -48.0, 1.5)
    demo1_client.joint1_req(False, 2, 45.0, 1.0)
    demo1_client.joint1_req(False, 1, 0.0, 25.0)
    time.sleep(1)

    while rclpy.ok():
        rclpy.spin_once(demo1_client)
        if demo1_client.future.done():
            try:
                response = demo1_client.future.result()
            except Exception as e:
                demo1_client.get_logger().info(
                    'Service call failed %r' % (e,))
            else:
                demo1_client.get_logger().info(
                    'Result of move arm- Angle: %d Speed: %d Joint: %d' %
                    (demo1_client.req.angle, demo1_client.req.speed, demo1_client.req.joint_id))
            break

    demo1_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()