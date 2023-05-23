# Jetson_Ros2_Packages (Stable)
ROS2 Packages for controlling the Jetmax Hiwonder robot with ROS2, as well as a demo package (jetmax_demo_3) that demonstrates use of the [ROS2 Motive plug-in](https://github.com/Motive-ROS2/Motive-Plugin). See the project [Wiki](https://github.com/Motive-ROS2/Jetson-Ros2-Packages/wiki) for more information on the project and its purpose.

## Pre-Requirements
* Familiarity with [ROS2](https://docs.ros.org/en/foxy/index.html)
* All packages must be running on the modified Jetmax Hiwonder robot. A modified Jetmax Hiwonder robot includes: 
  * Robot has been updated to run ubuntu 20.0.4
  * Robot has [ROS2 Foxy](https://docs.ros.org/en/foxy/Installation.html) installed
  * The hiwonder python module for controlling the robot has been changed to run with ROS2 instead of ROS1.

## Installation
1. Clone repo in your ROS2 workspace
2. build packages and source workspace

## Running jetmax_control
If you want to simply control the robot through ROS2, then the [jetmax_control](https://github.com/Motive-ROS2/Jetson-Ros2-Packages/tree/main/jetmax_control) can be used which supplies a ROS2 interface for controlling each joint and motor of the Jetmax Hiwonder.

The package can be launched with: `ros2 run jetmax_control controller`

The package provides a list of topics which can be published to from the command line to move the robot (can run `ros2 topic list` to see all available topics).

To run a simple demonstration of the robot moving, you can run these shell scripts after launching the jetmax_control package:
* [demo1.sh](https://github.com/Motive-ROS2/Jetson-Ros2-Packages/blob/main/jetmax_control/jetmax_control/demo1.sh)
* [demo2.sh](https://github.com/Motive-ROS2/Jetson-Ros2-Packages/blob/main/jetmax_control/jetmax_control/demo2.sh)

## Running jetmax_demo_3 (Motive Demo)
This demo will use the [ROS2 Motive plug-in](https://github.com/Motive-ROS2/Motive-Plugin) to track the position of an object and once it is within range of the robot, go and pick up the object. The jetmax_control package does **not** need to be running for this.

### Requirements:
* Jetmax Hiwonder robot has the suction gripper attached
* Have a Motive license and a host machine to run Motive on
* Have a volume with Optitrack cameras connected to host machine running Motive
* Have the Jetmax Hiwonder robot markered up properly so it can be detected in Motive as 3 rigid bodies
* Have a markered object that can be detected in Motive as a rigid body and the robot can pick up the object with suction

### Setup and Running:
1. Install the Motive plug-in on the Jetmax Hiwonder robot in the same ROS2 workspace by following the [installation instructions](https://github.com/Motive-ROS2/Motive-Plugin#installation-instructions)
2. Launch Motive on the host machine. Define the robot and object as 4 rigid bodies in Motive as defined below: (TODO: add a figure)
   * Rigid body 1 is at the base of the robot arm. Call this rigid body "robot_base"
   * Rigid body 2 is at the middle of the robot arm. Call this rigid body "robot_arm"
   * Rigid body 3 is at the end of the robot arm above the gripper. Call this rigid body "robot_ee"
   * Rigid body 4 is at the very center of the object. Call this rigid body "rigid_object_id"
4. Make sure the robot can find the host machine running Motive be being on the same subnet (a good test is trying to ping the host machine).
5. Enable streaming in Motive and set it to Unicast and set the ip to be one that the robot can find (i.e. not local).
6. On the robot, launch the Motive plug-in with: `ros2 launch optitrack_plugin launch.py`
7. Launch the demo with: `ros2 launch jetmax_demo_3 ip:=<ip address set in Motive streaming> robot_base:=<id# of rb 1> robot_arm:=<id# of rb 2> robot_ee:=<id# of rb 3> rigid_body_id:=<id# of rb 4>`. Be sure to define the values of the launch parameters to those that are set in Motive
8. The demo should have launched and should then be looking for the object. To have the robot try to grap the object, move the object to about within 30cm of the robot and leave it there.

Below is a conceptual diagram of how the system should be set up to successfuly run jetmax_demo_3 and use the Motive plug-in in general:

![Conceptual overview of demo setup](https://github.com/Motive-ROS2/Jetson-Ros2-Packages/blob/main/media/System%20Conceptual%20Overview.drawio.png)
