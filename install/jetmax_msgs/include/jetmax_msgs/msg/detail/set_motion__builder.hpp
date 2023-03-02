// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jetmax_msgs:msg/SetMotion.idl
// generated code does not contain a copyright notice

#ifndef JETMAX_MSGS__MSG__DETAIL__SET_MOTION__BUILDER_HPP_
#define JETMAX_MSGS__MSG__DETAIL__SET_MOTION__BUILDER_HPP_

#include "jetmax_msgs/msg/detail/set_motion__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace jetmax_msgs
{

namespace msg
{

namespace builder
{

class Init_SetMotion_speed
{
public:
  explicit Init_SetMotion_speed(::jetmax_msgs::msg::SetMotion & msg)
  : msg_(msg)
  {}
  ::jetmax_msgs::msg::SetMotion speed(::jetmax_msgs::msg::SetMotion::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jetmax_msgs::msg::SetMotion msg_;
};

class Init_SetMotion_angle
{
public:
  Init_SetMotion_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMotion_speed angle(::jetmax_msgs::msg::SetMotion::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_SetMotion_speed(msg_);
  }

private:
  ::jetmax_msgs::msg::SetMotion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::jetmax_msgs::msg::SetMotion>()
{
  return jetmax_msgs::msg::builder::Init_SetMotion_angle();
}

}  // namespace jetmax_msgs

#endif  // JETMAX_MSGS__MSG__DETAIL__SET_MOTION__BUILDER_HPP_
