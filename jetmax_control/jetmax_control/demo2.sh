#!/bin/bash

ros2 topic pub --once /jetmax/suction/activate std_msgs/msg/Bool "{data: True}"
sleep 0.3

ros2 topic pub --once /jetmax/joint1/move/relative jetmax_msgs/msg/SetMotion "{angle: 30, speed: 0.2}"
sleep 0.3

ros2 topic pub --once /jetmax/joint2/move/relative jetmax_msgs/msg/SetMotion "{angle: 20, speed: 0.5}"
sleep 0.5

ros2 topic pub --once /jetmax/joint1/move/relative jetmax_msgs/msg/SetMotion "{angle: -50, speed: 0.2}"
sleep 0.5


ros2 topic pub --once /jetmax/joint2/move/relative jetmax_msgs/msg/SetMotion "{angle: 30, speed: 0.3}"
sleep 0.5

ros2 topic pub --once /jetmax/joint1/move/relative jetmax_msgs/msg/SetMotion "{angle: -20, speed: 0.3}"
sleep 0.5

ros2 topic pub --once jetmax/origin/move/relatiive jetmax_msgs/msg/SetMotion "{angle: 0, speed: 0.5}"
sleep 1
