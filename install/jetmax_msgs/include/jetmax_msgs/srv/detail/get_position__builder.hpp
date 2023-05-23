// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jetmax_msgs:srv/GetPosition.idl
// generated code does not contain a copyright notice

#ifndef JETMAX_MSGS__SRV__DETAIL__GET_POSITION__BUILDER_HPP_
#define JETMAX_MSGS__SRV__DETAIL__GET_POSITION__BUILDER_HPP_

#include "jetmax_msgs/srv/detail/get_position__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace jetmax_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::jetmax_msgs::srv::GetPosition_Request>()
{
  return ::jetmax_msgs::srv::GetPosition_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace jetmax_msgs


namespace jetmax_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPosition_Response_robot_markers
{
public:
  explicit Init_GetPosition_Response_robot_markers(::jetmax_msgs::srv::GetPosition_Response & msg)
  : msg_(msg)
  {}
  ::jetmax_msgs::srv::GetPosition_Response robot_markers(::jetmax_msgs::srv::GetPosition_Response::_robot_markers_type arg)
  {
    msg_.robot_markers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jetmax_msgs::srv::GetPosition_Response msg_;
};

class Init_GetPosition_Response_object_pos
{
public:
  Init_GetPosition_Response_object_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPosition_Response_robot_markers object_pos(::jetmax_msgs::srv::GetPosition_Response::_object_pos_type arg)
  {
    msg_.object_pos = std::move(arg);
    return Init_GetPosition_Response_robot_markers(msg_);
  }

private:
  ::jetmax_msgs::srv::GetPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::jetmax_msgs::srv::GetPosition_Response>()
{
  return jetmax_msgs::srv::builder::Init_GetPosition_Response_object_pos();
}

}  // namespace jetmax_msgs

#endif  // JETMAX_MSGS__SRV__DETAIL__GET_POSITION__BUILDER_HPP_
