// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jetmax_msgs:srv/Demo1.idl
// generated code does not contain a copyright notice

#ifndef JETMAX_MSGS__SRV__DETAIL__DEMO1__BUILDER_HPP_
#define JETMAX_MSGS__SRV__DETAIL__DEMO1__BUILDER_HPP_

#include "jetmax_msgs/srv/detail/demo1__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace jetmax_msgs
{

namespace srv
{

namespace builder
{

class Init_Demo1_Request_robot_markers
{
public:
  explicit Init_Demo1_Request_robot_markers(::jetmax_msgs::srv::Demo1_Request & msg)
  : msg_(msg)
  {}
  ::jetmax_msgs::srv::Demo1_Request robot_markers(::jetmax_msgs::srv::Demo1_Request::_robot_markers_type arg)
  {
    msg_.robot_markers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jetmax_msgs::srv::Demo1_Request msg_;
};

class Init_Demo1_Request_object_pos
{
public:
  Init_Demo1_Request_object_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Demo1_Request_robot_markers object_pos(::jetmax_msgs::srv::Demo1_Request::_object_pos_type arg)
  {
    msg_.object_pos = std::move(arg);
    return Init_Demo1_Request_robot_markers(msg_);
  }

private:
  ::jetmax_msgs::srv::Demo1_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::jetmax_msgs::srv::Demo1_Request>()
{
  return jetmax_msgs::srv::builder::Init_Demo1_Request_object_pos();
}

}  // namespace jetmax_msgs


namespace jetmax_msgs
{

namespace srv
{

namespace builder
{

class Init_Demo1_Response_success
{
public:
  Init_Demo1_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::jetmax_msgs::srv::Demo1_Response success(::jetmax_msgs::srv::Demo1_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jetmax_msgs::srv::Demo1_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::jetmax_msgs::srv::Demo1_Response>()
{
  return jetmax_msgs::srv::builder::Init_Demo1_Response_success();
}

}  // namespace jetmax_msgs

#endif  // JETMAX_MSGS__SRV__DETAIL__DEMO1__BUILDER_HPP_
