# jetmax_Ros2_packages (Stable)
ROS@ Packages for controlling the Jetmax Hiwonder Robot with ROS2, as well as a demo package (jetmax_demo_3) that demonstrates use of the [ROS2 Motive plug-in](https://github.com/Motive-ROS2/Motive-Plugin). Seem the project [Wiki](https://github.com/Motive-ROS2/Jetson-Ros2-Packages/wiki) for more information on the project and its purpose.

## Requirements
* The packages must be running on the modified Jetmax Hiwonder robot. A modified Jetmax Hiwonder robot includes: 
..* Robot has been updated to run ubuntu 20.0.4
..* Robot has [ROS2 Foxy](https://docs.ros.org/en/foxy/Installation.html) installed
..* The hiwonder library for controlling the robot has been changed to run with ROS2 instead of ROS1.

`ros2 launch jetmax_demo_3 ip:=<ip address of motive streaming> robot_name:=<name of marker set in motive of the robot> rigid_body_id:=<id # of object to be tracked>`
