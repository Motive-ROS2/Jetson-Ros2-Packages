# jetmax_r2_packages
ROS2 packages for controlling and running Motive demonstrations.

**Requirements:**
- Use the Hiwonder Jetmax robot: https://www.hiwonder.com/products/hiwonder-jetmax-jetson-nano-robot-arm-ros-open-source-vision-recognition-program-robot?variant=39645677715543
- Make sure the robot is upgraded to Ubuntu 20.04 and has ROS2 Foxy installed
- The hiwonder library is made compatible with ROS2

**How To Run**
- The jetmax_control package contains topics and services to control the robot and its various grippers
- How to run the package: `ros2 run jetmax_control controller`
- A few notes:
  - DC motor 2 (servo 3) = vertical arm control (joint 3)
  - DC motor 1 (servo 2) = arm base control (joint 2)
  - serial_servo = base rotational motor (joint 1)
- The jetmax_demo_3 is a demo using the ROS2 Motive plugin (https://github.com/Motive-ROS2/Motive-Plugin). The purpose of the demo is to actively track the position of the robot and a rigid body. See video here: (TODO: add)
- To launch the demo: `ros2 launch jetmax_demo_3 ip:=<ip address of motive streaming> robot_name:=<name of marker set in motive of the robot> rigid_body_id:=<id # of object to be tracked>` 
