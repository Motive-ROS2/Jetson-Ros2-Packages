// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jetmax_msgs:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef JETMAX_MSGS__MSG__DETAIL__POSITION__TRAITS_HPP_
#define JETMAX_MSGS__MSG__DETAIL__POSITION__TRAITS_HPP_

#include "jetmax_msgs/msg/detail/position__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jetmax_msgs::msg::Position>()
{
  return "jetmax_msgs::msg::Position";
}

template<>
inline const char * name<jetmax_msgs::msg::Position>()
{
  return "jetmax_msgs/msg/Position";
}

template<>
struct has_fixed_size<jetmax_msgs::msg::Position>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<jetmax_msgs::msg::Position>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<jetmax_msgs::msg::Position>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // JETMAX_MSGS__MSG__DETAIL__POSITION__TRAITS_HPP_
