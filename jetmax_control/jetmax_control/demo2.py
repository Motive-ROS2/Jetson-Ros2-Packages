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

class JetMaxDemo(Node):
    def __init__(self):
        super().__init__("JetMaxDemo")

        self.jetmax = hiwonder.JetMax()
        self.sucker = hiwonder.Sucker()
        self.jetmax.go_home(2)

        # Create service go to original position
        self.service_origin = self.create_service(Trigger, "jetmax/move/origin")
    
        # Create publisher for controlling gripper
        self.gripper_pub = self.create_publisher(SetMotion, "jetmax/gripper/move/actuate", 10)

        # Create publisher for moving arm base
        self.base_pub = self.create_publisher(SetMotion, "jetmax/joint1/move/absolute", 10)

        # Create publisher for moving arm up/down
        self.arm_pub = self.create_publisher(SetMotion, "jetmax/joint3/move/relative", 10)

        # Create subscriber for setting suction state
        self.suction_sub = self.create_subscription(Bool, "jetmax/suction/activate", self.suction_callback, 10)

        # Wait for JetMax controller to be ready
        while not self.service_origin.wait_for_service(timeout_sec=1):
            self.get_logger().info("Waiting for JetMax controller...")

        # Move JetMax to home position
        self.call_go_home()

        # Close gripper
        self.move_gripper(-1000)
        time.sleep(2)

        # Open gripper
        self.move_gripper(1000)
        time.sleep(2)

        # Move arm up
        self.move_arm(1000)
        time.sleep(2)

        # Move arm down
        self.move_arm(-1000)
        time.sleep(2)

        # Move base to new position
        self.move_base(1000)
        time.sleep(2)

        # Move JetMax to home position
        self.call_go_home()


    def call_go_home(self):
        # Call JetMax service to move to home position
        self.client = self.create_client(Trigger, "jetmax/move/origin")
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Waiting for JetMax go_home service...")
        req = Trigger.Request()
        future = client.call_async(req)
        rclpy.spin_until_future_complete(self, future)

    def move_gripper(self, position):
        # Move gripper to specified position
        msg = SetMotion()
        msg.position = position
        self.gripper_pub.publish(msg)

    def move_base(self, position):
        # Move arm base to specified position
        msg = SetMotion()
        msg.position = position
        self.base_pub.publish(msg)

    def move_arm(self, position):
        # Move arm up/down by specified position
        msg = SetMotion()
        msg.position = position
        self.arm_pub.publish(msg)

    def suction_callback(self, msg):
        # Set suction state
        self.get_logger().info("Setting suction state to {}".format(msg.data))
        client = self.create_client(SetMotion, "jetmax/suction/activate")
        while not client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn("Waiting for JetMax suction service...")
        req = SetMotion.Request()
        req.position = -1000 if msg.data else 1000
        future = client.call_async(req)
        rclpy.spin_until_future_complete(self, future)


def main(args=None):
    rclpy.init(args=args)

    demo = JetMaxDemo()
    rclpy.spin(demo)

    demo.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
