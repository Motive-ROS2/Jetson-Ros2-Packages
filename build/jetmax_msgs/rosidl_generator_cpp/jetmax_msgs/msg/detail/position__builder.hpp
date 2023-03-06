// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jetmax_msgs:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef JETMAX_MSGS__MSG__DETAIL__POSITION__BUILDER_HPP_
#define JETMAX_MSGS__MSG__DETAIL__POSITION__BUILDER_HPP_

#include "jetmax_msgs/msg/detail/position__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace jetmax_msgs
{

namespace msg
{

namespace builder
{

class Init_Position_z
{
public:
  explicit Init_Position_z(::jetmax_msgs::msg::Position & msg)
  : msg_(msg)
  {}
  ::jetmax_msgs::msg::Position z(::jetmax_msgs::msg::Position::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jetmax_msgs::msg::Position msg_;
};

class Init_Position_y
{
public:
  explicit Init_Position_y(::jetmax_msgs::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_z y(::jetmax_msgs::msg::Position::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Position_z(msg_);
  }

private:
  ::jetmax_msgs::msg::Position msg_;
};

class Init_Position_x
{
public:
  Init_Position_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Position_y x(::jetmax_msgs::msg::Position::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Position_y(msg_);
  }

private:
  ::jetmax_msgs::msg::Position msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::jetmax_msgs::msg::Position>()
{
  return jetmax_msgs::msg::builder::Init_Position_x();
}

}  // namespace jetmax_msgs

#endif  // JETMAX_MSGS__MSG__DETAIL__POSITION__BUILDER_HPP_
