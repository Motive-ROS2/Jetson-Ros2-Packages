// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jetmax_msgs:srv/Demo1.idl
// generated code does not contain a copyright notice

#ifndef JETMAX_MSGS__SRV__DETAIL__DEMO1__TRAITS_HPP_
#define JETMAX_MSGS__SRV__DETAIL__DEMO1__TRAITS_HPP_

#include "jetmax_msgs/srv/detail/demo1__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'object_pos'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jetmax_msgs::srv::Demo1_Request>()
{
  return "jetmax_msgs::srv::Demo1_Request";
}

template<>
inline const char * name<jetmax_msgs::srv::Demo1_Request>()
{
  return "jetmax_msgs/srv/Demo1_Request";
}

template<>
struct has_fixed_size<jetmax_msgs::srv::Demo1_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<jetmax_msgs::srv::Demo1_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<jetmax_msgs::srv::Demo1_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jetmax_msgs::srv::Demo1_Response>()
{
  return "jetmax_msgs::srv::Demo1_Response";
}

template<>
inline const char * name<jetmax_msgs::srv::Demo1_Response>()
{
  return "jetmax_msgs/srv/Demo1_Response";
}

template<>
struct has_fixed_size<jetmax_msgs::srv::Demo1_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<jetmax_msgs::srv::Demo1_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<jetmax_msgs::srv::Demo1_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jetmax_msgs::srv::Demo1>()
{
  return "jetmax_msgs::srv::Demo1";
}

template<>
inline const char * name<jetmax_msgs::srv::Demo1>()
{
  return "jetmax_msgs/srv/Demo1";
}

template<>
struct has_fixed_size<jetmax_msgs::srv::Demo1>
  : std::integral_constant<
    bool,
    has_fixed_size<jetmax_msgs::srv::Demo1_Request>::value &&
    has_fixed_size<jetmax_msgs::srv::Demo1_Response>::value
  >
{
};

template<>
struct has_bounded_size<jetmax_msgs::srv::Demo1>
  : std::integral_constant<
    bool,
    has_bounded_size<jetmax_msgs::srv::Demo1_Request>::value &&
    has_bounded_size<jetmax_msgs::srv::Demo1_Response>::value
  >
{
};

template<>
struct is_service<jetmax_msgs::srv::Demo1>
  : std::true_type
{
};

template<>
struct is_service_request<jetmax_msgs::srv::Demo1_Request>
  : std::true_type
{
};

template<>
struct is_service_response<jetmax_msgs::srv::Demo1_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // JETMAX_MSGS__SRV__DETAIL__DEMO1__TRAITS_HPP_
