// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from jetmax_msgs:action/PathPlanning.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "jetmax_msgs/action/detail/path_planning__rosidl_typesupport_introspection_c.h"
#include "jetmax_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "jetmax_msgs/action/detail/path_planning__functions.h"
#include "jetmax_msgs/action/detail/path_planning__struct.h"


// Include directives for member types
// Member `object_pos`
// Member `robot_markers`
#include "geometry_msgs/msg/point.h"
// Member `object_pos`
// Member `robot_markers`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PathPlanning_Goal__rosidl_typesupport_introspection_c__PathPlanning_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  jetmax_msgs__action__PathPlanning_Goal__init(message_memory);
}

void PathPlanning_Goal__rosidl_typesupport_introspection_c__PathPlanning_Goal_fini_function(void * message_memory)
{
  jetmax_msgs__action__PathPlanning_Goal__fini(message_memory);
}

size_t PathPlanning_Goal__rosidl_typesupport_introspection_c__size_function__Point__robot_markers(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * PathPlanning_Goal__rosidl_typesupport_introspection_c__get_const_function__Point__robot_markers(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PathPlanning_Goal__rosidl_typesupport_introspection_c__get_function__Point__robot_markers(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PathPlanning_Goal__rosidl_typesupport_introspection_c__resize_function__Point__robot_markers(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PathPlanning_Goal__rosidl_typesupport_introspection_c__PathPlanning_Goal_message_member_array[2] = {
  {
    "object_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs__action__PathPlanning_Goal, object_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_markers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs__action__PathPlanning_Goal, robot_markers),  // bytes offset in struct
    NULL,  // default value
    PathPlanning_Goal__rosidl_typesupport_introspection_c__size_function__Point__robot_markers,  // size() function pointer
    PathPlanning_Goal__rosidl_typesupport_introspection_c__get_const_function__Point__robot_markers,  // get_const(index) function pointer
    PathPlanning_Goal__rosidl_typesupport_introspection_c__get_function__Point__robot_markers,  // get(index) function pointer
    PathPlanning_Goal__rosidl_typesupport_introspection_c__resize_function__Point__robot_markers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PathPlanning_Goal__rosidl_typesupport_introspection_c__PathPlanning_Goal_message_members = {
  "jetmax_msgs__action",  // message namespace
  "PathPlanning_Goal",  // message name
  2,  // number of fields
  sizeof(jetmax_msgs__action__PathPlanning_Goal),
  PathPlanning_Goal__rosidl_typesupport_introspection_c__PathPlanning_Goal_message_member_array,  // message members
  PathPlanning_Goal__rosidl_typesupport_introspection_c__PathPlanning_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  PathPlanning_Goal__rosidl_typesupport_introspection_c__PathPlanning_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PathPlanning_Goal__rosidl_typesupport_introspection_c__PathPlanning_Goal_message_type_support_handle = {
  0,
  &PathPlanning_Goal__rosidl_typesupport_introspection_c__PathPlanning_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jetmax_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_Goal)() {
  PathPlanning_Goal__rosidl_typesupport_introspection_c__PathPlanning_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  PathPlanning_Goal__rosidl_typesupport_introspection_c__PathPlanning_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!PathPlanning_Goal__rosidl_typesupport_introspection_c__PathPlanning_Goal_message_type_support_handle.typesupport_identifier) {
    PathPlanning_Goal__rosidl_typesupport_introspection_c__PathPlanning_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PathPlanning_Goal__rosidl_typesupport_introspection_c__PathPlanning_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "jetmax_msgs/action/detail/path_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "jetmax_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__functions.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void PathPlanning_Result__rosidl_typesupport_introspection_c__PathPlanning_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  jetmax_msgs__action__PathPlanning_Result__init(message_memory);
}

void PathPlanning_Result__rosidl_typesupport_introspection_c__PathPlanning_Result_fini_function(void * message_memory)
{
  jetmax_msgs__action__PathPlanning_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PathPlanning_Result__rosidl_typesupport_introspection_c__PathPlanning_Result_message_member_array[1] = {
  {
    "return_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs__action__PathPlanning_Result, return_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PathPlanning_Result__rosidl_typesupport_introspection_c__PathPlanning_Result_message_members = {
  "jetmax_msgs__action",  // message namespace
  "PathPlanning_Result",  // message name
  1,  // number of fields
  sizeof(jetmax_msgs__action__PathPlanning_Result),
  PathPlanning_Result__rosidl_typesupport_introspection_c__PathPlanning_Result_message_member_array,  // message members
  PathPlanning_Result__rosidl_typesupport_introspection_c__PathPlanning_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  PathPlanning_Result__rosidl_typesupport_introspection_c__PathPlanning_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PathPlanning_Result__rosidl_typesupport_introspection_c__PathPlanning_Result_message_type_support_handle = {
  0,
  &PathPlanning_Result__rosidl_typesupport_introspection_c__PathPlanning_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jetmax_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_Result)() {
  if (!PathPlanning_Result__rosidl_typesupport_introspection_c__PathPlanning_Result_message_type_support_handle.typesupport_identifier) {
    PathPlanning_Result__rosidl_typesupport_introspection_c__PathPlanning_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PathPlanning_Result__rosidl_typesupport_introspection_c__PathPlanning_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "jetmax_msgs/action/detail/path_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "jetmax_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__functions.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void PathPlanning_Feedback__rosidl_typesupport_introspection_c__PathPlanning_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  jetmax_msgs__action__PathPlanning_Feedback__init(message_memory);
}

void PathPlanning_Feedback__rosidl_typesupport_introspection_c__PathPlanning_Feedback_fini_function(void * message_memory)
{
  jetmax_msgs__action__PathPlanning_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PathPlanning_Feedback__rosidl_typesupport_introspection_c__PathPlanning_Feedback_message_member_array[1] = {
  {
    "update_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs__action__PathPlanning_Feedback, update_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PathPlanning_Feedback__rosidl_typesupport_introspection_c__PathPlanning_Feedback_message_members = {
  "jetmax_msgs__action",  // message namespace
  "PathPlanning_Feedback",  // message name
  1,  // number of fields
  sizeof(jetmax_msgs__action__PathPlanning_Feedback),
  PathPlanning_Feedback__rosidl_typesupport_introspection_c__PathPlanning_Feedback_message_member_array,  // message members
  PathPlanning_Feedback__rosidl_typesupport_introspection_c__PathPlanning_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  PathPlanning_Feedback__rosidl_typesupport_introspection_c__PathPlanning_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PathPlanning_Feedback__rosidl_typesupport_introspection_c__PathPlanning_Feedback_message_type_support_handle = {
  0,
  &PathPlanning_Feedback__rosidl_typesupport_introspection_c__PathPlanning_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jetmax_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_Feedback)() {
  if (!PathPlanning_Feedback__rosidl_typesupport_introspection_c__PathPlanning_Feedback_message_type_support_handle.typesupport_identifier) {
    PathPlanning_Feedback__rosidl_typesupport_introspection_c__PathPlanning_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PathPlanning_Feedback__rosidl_typesupport_introspection_c__PathPlanning_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "jetmax_msgs/action/detail/path_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "jetmax_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__functions.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "jetmax_msgs/action/path_planning.h"
// Member `goal`
// already included above
// #include "jetmax_msgs/action/detail/path_planning__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PathPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  jetmax_msgs__action__PathPlanning_SendGoal_Request__init(message_memory);
}

void PathPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Request_fini_function(void * message_memory)
{
  jetmax_msgs__action__PathPlanning_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PathPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs__action__PathPlanning_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs__action__PathPlanning_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PathPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Request_message_members = {
  "jetmax_msgs__action",  // message namespace
  "PathPlanning_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(jetmax_msgs__action__PathPlanning_SendGoal_Request),
  PathPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Request_message_member_array,  // message members
  PathPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PathPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PathPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Request_message_type_support_handle = {
  0,
  &PathPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jetmax_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_SendGoal_Request)() {
  PathPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  PathPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_Goal)();
  if (!PathPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    PathPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PathPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "jetmax_msgs/action/detail/path_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "jetmax_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__functions.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PathPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  jetmax_msgs__action__PathPlanning_SendGoal_Response__init(message_memory);
}

void PathPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Response_fini_function(void * message_memory)
{
  jetmax_msgs__action__PathPlanning_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PathPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs__action__PathPlanning_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs__action__PathPlanning_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PathPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Response_message_members = {
  "jetmax_msgs__action",  // message namespace
  "PathPlanning_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(jetmax_msgs__action__PathPlanning_SendGoal_Response),
  PathPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Response_message_member_array,  // message members
  PathPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PathPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PathPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Response_message_type_support_handle = {
  0,
  &PathPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jetmax_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_SendGoal_Response)() {
  PathPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!PathPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    PathPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PathPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "jetmax_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers jetmax_msgs__action__detail__path_planning__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_service_members = {
  "jetmax_msgs__action",  // service namespace
  "PathPlanning_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // jetmax_msgs__action__detail__path_planning__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // jetmax_msgs__action__detail__path_planning__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t jetmax_msgs__action__detail__path_planning__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_service_type_support_handle = {
  0,
  &jetmax_msgs__action__detail__path_planning__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jetmax_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_SendGoal)() {
  if (!jetmax_msgs__action__detail__path_planning__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_service_type_support_handle.typesupport_identifier) {
    jetmax_msgs__action__detail__path_planning__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)jetmax_msgs__action__detail__path_planning__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_SendGoal_Response)()->data;
  }

  return &jetmax_msgs__action__detail__path_planning__rosidl_typesupport_introspection_c__PathPlanning_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "jetmax_msgs/action/detail/path_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "jetmax_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__functions.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PathPlanning_GetResult_Request__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  jetmax_msgs__action__PathPlanning_GetResult_Request__init(message_memory);
}

void PathPlanning_GetResult_Request__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Request_fini_function(void * message_memory)
{
  jetmax_msgs__action__PathPlanning_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PathPlanning_GetResult_Request__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs__action__PathPlanning_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PathPlanning_GetResult_Request__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Request_message_members = {
  "jetmax_msgs__action",  // message namespace
  "PathPlanning_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(jetmax_msgs__action__PathPlanning_GetResult_Request),
  PathPlanning_GetResult_Request__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Request_message_member_array,  // message members
  PathPlanning_GetResult_Request__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PathPlanning_GetResult_Request__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PathPlanning_GetResult_Request__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Request_message_type_support_handle = {
  0,
  &PathPlanning_GetResult_Request__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jetmax_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_GetResult_Request)() {
  PathPlanning_GetResult_Request__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!PathPlanning_GetResult_Request__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    PathPlanning_GetResult_Request__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PathPlanning_GetResult_Request__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "jetmax_msgs/action/detail/path_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "jetmax_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__functions.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "jetmax_msgs/action/path_planning.h"
// Member `result`
// already included above
// #include "jetmax_msgs/action/detail/path_planning__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PathPlanning_GetResult_Response__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  jetmax_msgs__action__PathPlanning_GetResult_Response__init(message_memory);
}

void PathPlanning_GetResult_Response__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Response_fini_function(void * message_memory)
{
  jetmax_msgs__action__PathPlanning_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PathPlanning_GetResult_Response__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs__action__PathPlanning_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs__action__PathPlanning_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PathPlanning_GetResult_Response__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Response_message_members = {
  "jetmax_msgs__action",  // message namespace
  "PathPlanning_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(jetmax_msgs__action__PathPlanning_GetResult_Response),
  PathPlanning_GetResult_Response__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Response_message_member_array,  // message members
  PathPlanning_GetResult_Response__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PathPlanning_GetResult_Response__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PathPlanning_GetResult_Response__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Response_message_type_support_handle = {
  0,
  &PathPlanning_GetResult_Response__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jetmax_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_GetResult_Response)() {
  PathPlanning_GetResult_Response__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_Result)();
  if (!PathPlanning_GetResult_Response__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    PathPlanning_GetResult_Response__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PathPlanning_GetResult_Response__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "jetmax_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers jetmax_msgs__action__detail__path_planning__rosidl_typesupport_introspection_c__PathPlanning_GetResult_service_members = {
  "jetmax_msgs__action",  // service namespace
  "PathPlanning_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // jetmax_msgs__action__detail__path_planning__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // jetmax_msgs__action__detail__path_planning__rosidl_typesupport_introspection_c__PathPlanning_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t jetmax_msgs__action__detail__path_planning__rosidl_typesupport_introspection_c__PathPlanning_GetResult_service_type_support_handle = {
  0,
  &jetmax_msgs__action__detail__path_planning__rosidl_typesupport_introspection_c__PathPlanning_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jetmax_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_GetResult)() {
  if (!jetmax_msgs__action__detail__path_planning__rosidl_typesupport_introspection_c__PathPlanning_GetResult_service_type_support_handle.typesupport_identifier) {
    jetmax_msgs__action__detail__path_planning__rosidl_typesupport_introspection_c__PathPlanning_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)jetmax_msgs__action__detail__path_planning__rosidl_typesupport_introspection_c__PathPlanning_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_GetResult_Response)()->data;
  }

  return &jetmax_msgs__action__detail__path_planning__rosidl_typesupport_introspection_c__PathPlanning_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "jetmax_msgs/action/detail/path_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "jetmax_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__functions.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "jetmax_msgs/action/path_planning.h"
// Member `feedback`
// already included above
// #include "jetmax_msgs/action/detail/path_planning__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PathPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__PathPlanning_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  jetmax_msgs__action__PathPlanning_FeedbackMessage__init(message_memory);
}

void PathPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__PathPlanning_FeedbackMessage_fini_function(void * message_memory)
{
  jetmax_msgs__action__PathPlanning_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PathPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__PathPlanning_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs__action__PathPlanning_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs__action__PathPlanning_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PathPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__PathPlanning_FeedbackMessage_message_members = {
  "jetmax_msgs__action",  // message namespace
  "PathPlanning_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(jetmax_msgs__action__PathPlanning_FeedbackMessage),
  PathPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__PathPlanning_FeedbackMessage_message_member_array,  // message members
  PathPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__PathPlanning_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  PathPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__PathPlanning_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PathPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__PathPlanning_FeedbackMessage_message_type_support_handle = {
  0,
  &PathPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__PathPlanning_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jetmax_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_FeedbackMessage)() {
  PathPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__PathPlanning_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  PathPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__PathPlanning_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, action, PathPlanning_Feedback)();
  if (!PathPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__PathPlanning_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    PathPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__PathPlanning_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PathPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__PathPlanning_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
