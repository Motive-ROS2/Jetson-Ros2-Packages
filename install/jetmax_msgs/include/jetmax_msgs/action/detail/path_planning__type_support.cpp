// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from jetmax_msgs:action/PathPlanning.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "jetmax_msgs/action/detail/path_planning__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PathPlanning_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) jetmax_msgs::action::PathPlanning_Goal(_init);
}

void PathPlanning_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<jetmax_msgs::action::PathPlanning_Goal *>(message_memory);
  typed_message->~PathPlanning_Goal();
}

size_t size_function__PathPlanning_Goal__robot_markers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PathPlanning_Goal__robot_markers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__PathPlanning_Goal__robot_markers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void resize_function__PathPlanning_Goal__robot_markers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathPlanning_Goal_message_member_array[2] = {
  {
    "object_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs::action::PathPlanning_Goal, object_pos),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_markers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs::action::PathPlanning_Goal, robot_markers),  // bytes offset in struct
    nullptr,  // default value
    size_function__PathPlanning_Goal__robot_markers,  // size() function pointer
    get_const_function__PathPlanning_Goal__robot_markers,  // get_const(index) function pointer
    get_function__PathPlanning_Goal__robot_markers,  // get(index) function pointer
    resize_function__PathPlanning_Goal__robot_markers  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathPlanning_Goal_message_members = {
  "jetmax_msgs::action",  // message namespace
  "PathPlanning_Goal",  // message name
  2,  // number of fields
  sizeof(jetmax_msgs::action::PathPlanning_Goal),
  PathPlanning_Goal_message_member_array,  // message members
  PathPlanning_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  PathPlanning_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathPlanning_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathPlanning_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace jetmax_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_Goal>()
{
  return &::jetmax_msgs::action::rosidl_typesupport_introspection_cpp::PathPlanning_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, action, PathPlanning_Goal)() {
  return &::jetmax_msgs::action::rosidl_typesupport_introspection_cpp::PathPlanning_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PathPlanning_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) jetmax_msgs::action::PathPlanning_Result(_init);
}

void PathPlanning_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<jetmax_msgs::action::PathPlanning_Result *>(message_memory);
  typed_message->~PathPlanning_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathPlanning_Result_message_member_array[1] = {
  {
    "return_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs::action::PathPlanning_Result, return_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathPlanning_Result_message_members = {
  "jetmax_msgs::action",  // message namespace
  "PathPlanning_Result",  // message name
  1,  // number of fields
  sizeof(jetmax_msgs::action::PathPlanning_Result),
  PathPlanning_Result_message_member_array,  // message members
  PathPlanning_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  PathPlanning_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathPlanning_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathPlanning_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace jetmax_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_Result>()
{
  return &::jetmax_msgs::action::rosidl_typesupport_introspection_cpp::PathPlanning_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, action, PathPlanning_Result)() {
  return &::jetmax_msgs::action::rosidl_typesupport_introspection_cpp::PathPlanning_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PathPlanning_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) jetmax_msgs::action::PathPlanning_Feedback(_init);
}

void PathPlanning_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<jetmax_msgs::action::PathPlanning_Feedback *>(message_memory);
  typed_message->~PathPlanning_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathPlanning_Feedback_message_member_array[1] = {
  {
    "update_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs::action::PathPlanning_Feedback, update_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathPlanning_Feedback_message_members = {
  "jetmax_msgs::action",  // message namespace
  "PathPlanning_Feedback",  // message name
  1,  // number of fields
  sizeof(jetmax_msgs::action::PathPlanning_Feedback),
  PathPlanning_Feedback_message_member_array,  // message members
  PathPlanning_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  PathPlanning_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathPlanning_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathPlanning_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace jetmax_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_Feedback>()
{
  return &::jetmax_msgs::action::rosidl_typesupport_introspection_cpp::PathPlanning_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, action, PathPlanning_Feedback)() {
  return &::jetmax_msgs::action::rosidl_typesupport_introspection_cpp::PathPlanning_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PathPlanning_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) jetmax_msgs::action::PathPlanning_SendGoal_Request(_init);
}

void PathPlanning_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<jetmax_msgs::action::PathPlanning_SendGoal_Request *>(message_memory);
  typed_message->~PathPlanning_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathPlanning_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs::action::PathPlanning_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<jetmax_msgs::action::PathPlanning_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs::action::PathPlanning_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathPlanning_SendGoal_Request_message_members = {
  "jetmax_msgs::action",  // message namespace
  "PathPlanning_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(jetmax_msgs::action::PathPlanning_SendGoal_Request),
  PathPlanning_SendGoal_Request_message_member_array,  // message members
  PathPlanning_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PathPlanning_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathPlanning_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathPlanning_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace jetmax_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_SendGoal_Request>()
{
  return &::jetmax_msgs::action::rosidl_typesupport_introspection_cpp::PathPlanning_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, action, PathPlanning_SendGoal_Request)() {
  return &::jetmax_msgs::action::rosidl_typesupport_introspection_cpp::PathPlanning_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PathPlanning_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) jetmax_msgs::action::PathPlanning_SendGoal_Response(_init);
}

void PathPlanning_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<jetmax_msgs::action::PathPlanning_SendGoal_Response *>(message_memory);
  typed_message->~PathPlanning_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathPlanning_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs::action::PathPlanning_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs::action::PathPlanning_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathPlanning_SendGoal_Response_message_members = {
  "jetmax_msgs::action",  // message namespace
  "PathPlanning_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(jetmax_msgs::action::PathPlanning_SendGoal_Response),
  PathPlanning_SendGoal_Response_message_member_array,  // message members
  PathPlanning_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PathPlanning_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathPlanning_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathPlanning_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace jetmax_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_SendGoal_Response>()
{
  return &::jetmax_msgs::action::rosidl_typesupport_introspection_cpp::PathPlanning_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, action, PathPlanning_SendGoal_Response)() {
  return &::jetmax_msgs::action::rosidl_typesupport_introspection_cpp::PathPlanning_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers PathPlanning_SendGoal_service_members = {
  "jetmax_msgs::action",  // service namespace
  "PathPlanning_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<jetmax_msgs::action::PathPlanning_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t PathPlanning_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathPlanning_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace jetmax_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<jetmax_msgs::action::PathPlanning_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::jetmax_msgs::action::rosidl_typesupport_introspection_cpp::PathPlanning_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::jetmax_msgs::action::PathPlanning_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::jetmax_msgs::action::PathPlanning_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, action, PathPlanning_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<jetmax_msgs::action::PathPlanning_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PathPlanning_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) jetmax_msgs::action::PathPlanning_GetResult_Request(_init);
}

void PathPlanning_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<jetmax_msgs::action::PathPlanning_GetResult_Request *>(message_memory);
  typed_message->~PathPlanning_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathPlanning_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs::action::PathPlanning_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathPlanning_GetResult_Request_message_members = {
  "jetmax_msgs::action",  // message namespace
  "PathPlanning_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(jetmax_msgs::action::PathPlanning_GetResult_Request),
  PathPlanning_GetResult_Request_message_member_array,  // message members
  PathPlanning_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PathPlanning_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathPlanning_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathPlanning_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace jetmax_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_GetResult_Request>()
{
  return &::jetmax_msgs::action::rosidl_typesupport_introspection_cpp::PathPlanning_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, action, PathPlanning_GetResult_Request)() {
  return &::jetmax_msgs::action::rosidl_typesupport_introspection_cpp::PathPlanning_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PathPlanning_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) jetmax_msgs::action::PathPlanning_GetResult_Response(_init);
}

void PathPlanning_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<jetmax_msgs::action::PathPlanning_GetResult_Response *>(message_memory);
  typed_message->~PathPlanning_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathPlanning_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs::action::PathPlanning_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<jetmax_msgs::action::PathPlanning_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs::action::PathPlanning_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathPlanning_GetResult_Response_message_members = {
  "jetmax_msgs::action",  // message namespace
  "PathPlanning_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(jetmax_msgs::action::PathPlanning_GetResult_Response),
  PathPlanning_GetResult_Response_message_member_array,  // message members
  PathPlanning_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PathPlanning_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathPlanning_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathPlanning_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace jetmax_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_GetResult_Response>()
{
  return &::jetmax_msgs::action::rosidl_typesupport_introspection_cpp::PathPlanning_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, action, PathPlanning_GetResult_Response)() {
  return &::jetmax_msgs::action::rosidl_typesupport_introspection_cpp::PathPlanning_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers PathPlanning_GetResult_service_members = {
  "jetmax_msgs::action",  // service namespace
  "PathPlanning_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<jetmax_msgs::action::PathPlanning_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t PathPlanning_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathPlanning_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace jetmax_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<jetmax_msgs::action::PathPlanning_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::jetmax_msgs::action::rosidl_typesupport_introspection_cpp::PathPlanning_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::jetmax_msgs::action::PathPlanning_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::jetmax_msgs::action::PathPlanning_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, action, PathPlanning_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<jetmax_msgs::action::PathPlanning_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void PathPlanning_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) jetmax_msgs::action::PathPlanning_FeedbackMessage(_init);
}

void PathPlanning_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<jetmax_msgs::action::PathPlanning_FeedbackMessage *>(message_memory);
  typed_message->~PathPlanning_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PathPlanning_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs::action::PathPlanning_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<jetmax_msgs::action::PathPlanning_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs::action::PathPlanning_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PathPlanning_FeedbackMessage_message_members = {
  "jetmax_msgs::action",  // message namespace
  "PathPlanning_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(jetmax_msgs::action::PathPlanning_FeedbackMessage),
  PathPlanning_FeedbackMessage_message_member_array,  // message members
  PathPlanning_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  PathPlanning_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PathPlanning_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PathPlanning_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace jetmax_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_FeedbackMessage>()
{
  return &::jetmax_msgs::action::rosidl_typesupport_introspection_cpp::PathPlanning_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, action, PathPlanning_FeedbackMessage)() {
  return &::jetmax_msgs::action::rosidl_typesupport_introspection_cpp::PathPlanning_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
