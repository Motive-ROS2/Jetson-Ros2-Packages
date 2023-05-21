import rclpy
from rclpy.node import Node

from optitrack_interfaces.msg import FrameData
from optitrack_interfaces.srv import OptiTrackService # may not need to enable/disable depending on how single-threaded callback_group behaves
from jetmax_msgs.srv import GetPosition

class PositionService(Node):
    def __init__(self):
        super().__init__("PositionService")
        self.get_logger().info("hello from service")
        self.declare_parameter("rigid_object_id", 1)
        self.declare_parameter("robot_base", 2) # rigid body
        self.declare_parameter("robot_arm", 2) # rigid body
        self.declare_parameter("robot_ee", 2) # rigid body
        self.find_robot = True
        # list of robot arm marker positions gathered from Motive. Used to transform motive pos into movement path.
        # Structure: [base-marker, mid-marker, ee-marker]
        self.robot_marker_pos = {}
        # (in m) reach from base [horizontal,vertical]. Based on aligning arm vector to point towards object
        self.bounds =  {"horizontal": 0.30, "vertical": 0.10}
        self.marker_ee_offset = (-2,3.5,-9) # (in cm) [x,y,z] x = along arm, y = front of arm
        
        self.sub_frame_data = self.create_subscription(FrameData, "Motive/FrameData", self.sub_callback, 10)
        self.positions_service = self.create_service(GetPosition, 'Demo/positions', self.srv_callback)
        self.plugin_client = self.create_client(OptiTrackService, "NatNet/Command")
        

    def srv_callback(self, request, response):
        # find robot position:
        self.find_robot = True
        self.enable_motive_publishing(True)
        self.get_logger().info("Searching for robot position in Motive...")
        while rclpy.ok():
            rclpy.spin_once(self, timeout_sec=1.0) # let backend run one callback (using singlethreaded executor)
            if not self.find_robot:
                break
        self.get_logger().info("Found robot at: {}".format(self.robot_marker_pos))        

        # account for marker offset:
        #self.robot_marker_pos[2].x += self.marker_ee_offset[0]
        #self.robot_marker_pos[2].y += self.marker_ee_offset[1]
        #self.robot_marker_pos[2].z += self.marker_ee_offset[2]

        # find object position:
        self.found_object = False
        self.get_logger().info("Searching for object position in Motive...")
        self.enable_motive_publishing(True)
        while rclpy.ok():
            rclpy.spin_once(self, timeout_sec=1.0) # let backend run one callback (using singlethreaded executor)
            if self.found_object:
                break
        self.get_logger().debug("Found object within range at: {}".format(self.object_pos))
        self.enable_motive_publishing(False)

        # set service response:
        response.object_pos = self.object_pos
        response.robot_markers = [self.robot_marker_pos["base"], self.robot_marker_pos["arm"], self.robot_marker_pos["ee"]]
        return response

    def sub_callback(self, msg):
        self.get_logger().info("callback ran")
        num_found = 0
        if self.find_robot == True:
            robot_base = self.get_parameter('robot_base').get_parameter_value().integer_value
            robot_arm = self.get_parameter('robot_arm').get_parameter_value().integer_value
            robot_ee = self.get_parameter('robot_ee').get_parameter_value().integer_value
            self.get_logger().info(f"{robot_base} {robot_arm} {robot_ee}")
            for rigid_body in msg.rigid_bodies:
                if rigid_body.id == robot_base:
                    self.robot_marker_pos["base"] = rigid_body.pos
                    # # only first 3 markers used for robot arm
                    # # for marker in markers:
                    # self.robot_marker_pos.append(rigid_body.pos) #(marker.pos.x, marker.pos.y, marker.pos.z))
                    num_found += 1
                elif rigid_body.id == robot_arm:
                    self.robot_marker_pos["arm"] = rigid_body.pos
                    num_found += 1
                elif rigid_body.id == robot_ee:
                    self.robot_marker_pos["ee"] = rigid_body.pos
                    num_found += 1
                if num_found >= 3:
                    self.find_robot = False
                    self.enable_motive_publishing(False)
                    self.get_logger().info(f"Found robot at: {self.robot_marker_pos}")        
                    return
        else:
            # find rigid body position to move to
            object_id = self.get_parameter('rigid_object_id').get_parameter_value().integer_value
            for rigid_body in msg.rigid_bodies:
                if rigid_body.id == object_id:
                    self.object_pos = rigid_body.pos #(rigid_body.pos.x, rigid_body.pos.y, rigid_body.pos.z)
                    if self.object_within_range():
                        self.found_object = True
                        self.enable_motive_publishing(False)
                    return

    # returns True if object is within reach of robot
    def object_within_range(self):
        base_marker = self.robot_marker_pos["base"]
        # x,y magnitude of object to base of robot
        vector_magnitude = math.sqrt(((base_marker.x - self.object_pos.x)**2) + ((base_marker.y - self.object_pos.y)**2))
        height_diff = abs(base_marker.z - self.object_pos.z)
        if vector_magnitude <= self.bounds["horizontal"] and height_diff <= self.bounds["vertical"]:
            return True
        return False

    # guaranteed to succeed -- spinning node until complete
    def enable_motive_publishing(self, start=True):
        request = OptiTrackService.Request()
        if start:
            request.message_type = 2
        else:
            request.message_type = 3
        self.connect_response = self.plugin_client.call_async(request)
        self.get_logger().info("Hello?!?!")
        #rclpy.spin_until_future_complete(self, self.connect_response) # spinning node until service complete (using singlethreaded executor)
        #self.spin_until_complete(self.connect_response)
        self.get_logger().info("Returned from enable")
        return #self.connect_response.result().return_code

    def spin_until_complete(self, future_obj):
        while rclpy.ok():
            rclpy.spin_once(self, timeout_sec=0.1)
            if future_obj.done():
                break
        return

def main(args=None):
    rclpy.init(args=args)
    service = PositionService()
    rclpy.spin(service)
    self.disconnect_motive()
    service.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
