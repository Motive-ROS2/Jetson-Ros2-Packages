# jetmax_Ros2_packages (Stable)
ROS@ Packages for controlling the Jetmax Hiwonder Robot with ROS2, as well as a demo package (jetmax_demo_3) that demonstrates use of the [ROS2 Motive plug-in](https://github.com/Motive-ROS2/Motive-Plugin). Seem the project [Wiki](https://github.com/Motive-ROS2/Jetson-Ros2-Packages/wiki) for more information on the project and its purpose.

## Pre-Requirements
* Familiarity with [ROS2](https://docs.ros.org/en/foxy/index.html)
* All packages must be running on the modified Jetmax Hiwonder robot. A modified Jetmax Hiwonder robot includes: 
  * Robot has been updated to run ubuntu 20.0.4
  * Robot has [ROS2 Foxy](https://docs.ros.org/en/foxy/Installation.html) installed
  * The hiwonder library for controlling the robot has been changed to run with ROS2 instead of ROS1.

## Running jetmax_control
If you want to simply control the robot through ROS2, then the [jetmax_control](https://github.com/Motive-ROS2/Jetson-Ros2-Packages/tree/main/jetmax_control) can be used which supplies a ROS2 interface for controlling each joint and motor of the Jetmax Hiwonder.

The package can be launched with: `ros2 run jetmax_control controller`

The package provides a list of topics which can be published to from the command line to move the robot (can run `ros2 topic list` to see all available topics).

To run a simple demonstration of the robot moving, you can run these shell scripts after launching the jetmax_control package:
* [demo1.sh](https://github.com/Motive-ROS2/Jetson-Ros2-Packages/blob/new_structure/jetmax_control/jetmax_control/demo1.sh)
* [demo2.sh](https://github.com/Motive-ROS2/Jetson-Ros2-Packages/blob/new_structure/jetmax_control/jetmax_control/demo2.sh)

## Running jetmax_demo_3 (Motive Demo)
`ros2 launch jetmax_demo_3 ip:=<ip address of motive streaming> robot_name:=<name of marker set in motive of the robot> rigid_body_id:=<id # of object to be tracked>`
