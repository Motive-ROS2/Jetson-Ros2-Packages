// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from jetmax_msgs:msg/SetMotion.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "jetmax_msgs/msg/detail/set_motion__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace jetmax_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SetMotion_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) jetmax_msgs::msg::SetMotion(_init);
}

void SetMotion_fini_function(void * message_memory)
{
  auto typed_message = static_cast<jetmax_msgs::msg::SetMotion *>(message_memory);
  typed_message->~SetMotion();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetMotion_message_member_array[2] = {
  {
    "angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs::msg::SetMotion, angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs::msg::SetMotion, speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetMotion_message_members = {
  "jetmax_msgs::msg",  // message namespace
  "SetMotion",  // message name
  2,  // number of fields
  sizeof(jetmax_msgs::msg::SetMotion),
  SetMotion_message_member_array,  // message members
  SetMotion_init_function,  // function to initialize message memory (memory has to be allocated)
  SetMotion_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetMotion_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetMotion_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace jetmax_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::msg::SetMotion>()
{
  return &::jetmax_msgs::msg::rosidl_typesupport_introspection_cpp::SetMotion_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, msg, SetMotion)() {
  return &::jetmax_msgs::msg::rosidl_typesupport_introspection_cpp::SetMotion_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
