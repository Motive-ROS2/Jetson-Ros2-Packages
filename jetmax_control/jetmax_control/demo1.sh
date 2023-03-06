#!/bin/bash
ros2 topic pub --once /jetmax/suction/activate std_msgs/msg/Bool "{data: True}"
sleep 0.5
ros2 topic pub --once /jetmax/joint3/move/relative jetmax_msgs/msg/SetMotion "{angle: 14, speed: 0.5}"
sleep 0.5
ros2 topic pub --once /jetmax/joint3/move/relative jetmax_msgs/msg/SetMotion "{angle: -14, speed: 0.5}"
sleep 1

ros2 topic pub --once /jetmax/joint1/move/relative jetmax_msgs/msg/SetMotion "{angle: 90, speed: 1}"
sleep 1.5
ros2 topic pub --once /jetmax/joint2/move/relative jetmax_msgs/msg/SetMotion "{angle: 60, speed: 1}"
sleep 1
ros2 topic pub --once /jetmax/joint3/move/relative jetmax_msgs/msg/SetMotion "{angle: 15, speed: 0.5}"
sleep 1
ros2 topic pub --once /jetmax/suction/activate std_msgs/msg/Bool "{data: False}"
sleep 0.5

ros2 topic pub --once /jetmax/joint3/move/relative jetmax_msgs/msg/SetMotion "{angle: -15, speed: 0.5}"
sleep 1
ros2 topic pub --once /jetmax/joint2/move/relative jetmax_msgs/msg/SetMotion "{angle: -60, speed: 1}"
sleep 1
ros2 topic pub --once /jetmax/joint1/move/relative jetmax_msgs/msg/SetMotion "{angle: -90, speed: 1}"
sleep 1