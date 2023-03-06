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

# pwm_servo = gripper rotational motor (Note: pwm_servo2 is for claw gripper open/close - not attached)
# DC motor 2 (servo 3) = vertical arm control (joint 3)
# DC motor 1 (servo 2) = arm base control (joint 2)
# serial_servo = base rotational motor (joint 1)

# For direct controlling:
# - Use set_joint for moving the base and arm of the robot (all other commands do not work or do not work well at all)
# - Use hiwonder.pwm_servo1.set_position and hiwonder.pwm_servo2.set_position to control the gripper
# - after invoking either of the control functions, must run time.sleep(time) for the robot to actually run the commands (time must be >= duration)
# - Suggested to just use the topics made here for controlling the robot

class JointStateController(Node):
    def __init__(self):
        super().__init__("JointStateController")

        self.jetmax = hiwonder.JetMax()
        self.sucker = hiwonder.Sucker()
        self.jetmax.go_home(2) # Init robot upon controller start up to home position

        # Create subscribers and publishers for moving the jetmax robot and printing joint status:
        self.jointStateRelSubs = []
        self.jointStateAbsSubs = []
        self.jointStatePubs = []
        for jointId in range(1,4):
            sub_rel = self.create_subscription(SetMotion, "jetmax/joint{}/move/relative".format(jointId), partial(self.sub_rel_callback, jointId=jointId), 10)
            sub_abs = self.create_subscription(SetMotion, "jetmax/joint{}/move/absolute".format(jointId), partial(self.sub_abs_callback, jointId=jointId), 10)
            pub = self.create_publisher(Float32, "jetmax/joint{}/angle".format(jointId), 10)
            self.jointStateAbsSubs.append(sub_abs)
            self.jointStateRelSubs.append(sub_rel)
            self.jointStatePubs.append(pub)
        
        # subs for pwm_servo control (for the gripper)
        self.sub_gripper_rotate = self.create_subscription(SetMotion, "jetmax/gripper/move/rotate", partial(self.sub_gripper_callback, pwmServoId=1), 10)
        self.sub_gripper_rotate = self.create_subscription(SetMotion, "jetmax/gripper/move/actuate", partial(self.sub_gripper_callback, pwmServoId=2), 10)

        # pubs for gripper state
        self.pub_gripper_rotation = self.create_publisher(Float32, "jetmax/gripper/rotation", 10)
        self.pub_gripper_actuation = self.create_publisher(Float32, "jetmax/gripper/actuation", 10)

        # sub for changing the sucker state
        self.sub_sucker = self.create_subscription(Bool, "jetmax/suction/activate", lambda msg: self.sucker.set_state(msg.data), 10)

        # sub for changing origin position (resets every time controller resets back to jetmax.ORIGIN)
        self.sub_origin = self.create_subscription(Position, "jetmax/origin/set", self.sub_origin_callback, 10)

        # # service to go to specific end-effector position:
        # self.service_position = self.create_service(Trigger, "jetmax/move/origin", self.srv_pos_callback)

        # Service to go to origin position:
        self.service_origin = self.create_service(Trigger, "jetmax/move/origin", self.srv_origin_callback)

        # publishers for current origin position and current position of jetmax robot
        self.pub_origin = self.create_publisher(Position, "jetmax/origin/status", 10)
        self.pub_position = self.create_publisher(Position, "jetmax/position", 10)

        # timer for all publishers. Set to publish every 1 second (can be sped up if necessary)
        self.pub_timer = self.create_timer(1, self.pub_callback)
    
    def pub_callback(self):
        for i in range(0,3):
            self.jointStatePubs[i].publish(Float32(data=self.jetmax.joints[i]))
        
        self.pub_gripper_rotation.publish(Float32(data=float(hiwonder.pwm_servo1.get_position())))
        self.pub_gripper_actuation.publish(Float32(data=float(hiwonder.pwm_servo2.get_position())))

        pos_msg = Position()
        x, y, z = self.jetmax.origin
        # must do to catch inconsistencies within hiwonder module
        pos_msg.x = float(x)
        pos_msg.y = float(y)
        pos_msg.z = float(z)
        self.pub_origin.publish(pos_msg)
        x, y, z = self.jetmax.position
        pos_msg.x = float(x)
        pos_msg.y = float(y)
        pos_msg.z = float(z)
        self.pub_position.publish(pos_msg)

    def srv_origin_callback(self, request, response):
        try:
            self.jetmax.go_home(2)
            response.success = True
            response.message = "made it to origin: {}".format(self.jetmax.origin)
        except Exception as e:
            response.success = False
            response.message = str(e)
        return response

    def sub_origin_callback(self, msg):
        self.jetmax.origin = (msg.x, msg.y, msg.z)
        print(self.jetmax.origin)

    def sub_gripper_callback(self, msg, pwmServoId):
        if pwmServoId == 1: 
            hiwonder.pwm_servo1.set_position(msg.angle, msg.speed)
        else:
             hiwonder.pwm_servo2.set_position(msg.angle, msg.speed)
        time.sleep(msg.speed)

    def sub_rel_callback(self, msg, jointId):
        self.jetmax.set_joint_relatively(jointId, msg.angle, msg.speed)
        time.sleep(msg.speed) # max time to complete. Should be >= speed in set_joint (can add buffer if needed)
    
    def sub_abs_callback(self, msg, jointId):
        self.jetmax.set_joint(jointId, msg.angle, msg.speed)
        time.sleep(msg.speed)


# Entry point for ROS2 
def main(args=None):
    
    rclpy.init(args=args)

    controller = JointStateController()
    rclpy.spin(controller)

    controller.destroy_node()
    rclpy.shutdown()

     jetmax.set_joint_relatively(2, 45, 2) # +30deg to joint 2 in 2 sec  
    # jetmax.set_joint_relatively(1, 45, 2)
    time.sleep(2) # max time to complete. Should be >= duration in set_joint. Activates all preceding move commands that haven't ran yet.

    # # -- not good control
    # # jetmax.set_servo(2, 1, 1)
    # # time.sleep(1)

    # # -- works fine
    # # hiwonder.serial_servo.set_position(1, 1000, 3000)
    # # time.sleep(3)
    # # hiwonder.serial_servo.set_position(1, 0, 8000)
    # # time.sleep(8)
    # # p = 180 / 240 * 1000
    # # hiwonder.serial_servo.set_position(1, int(p), 4000)
    # # hiwonder.serial_servo.set_position(1, int(120 / 240 * 1000), 2000)

    # # -- works fine
    # # hiwonder.pwm_servo1.set_position(90, 1)
    # # time.sleep(2)
    # # hiwonder.pwm_servo1.set_position(180, 1)
    # # time.sleep(2)
    # # hiwonder.pwm_servo1.set_position(0, 2)
    # # time.sleep(3)


# Only for when we run this node as a script
if __name__ == '__main__':
    main()
