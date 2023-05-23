// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from jetmax_msgs:srv/GetPosition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "jetmax_msgs/srv/detail/get_position__rosidl_typesupport_introspection_c.h"
#include "jetmax_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "jetmax_msgs/srv/detail/get_position__functions.h"
#include "jetmax_msgs/srv/detail/get_position__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  jetmax_msgs__srv__GetPosition_Request__init(message_memory);
}

void GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_fini_function(void * message_memory)
{
  jetmax_msgs__srv__GetPosition_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs__srv__GetPosition_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_members = {
  "jetmax_msgs__srv",  // message namespace
  "GetPosition_Request",  // message name
  1,  // number of fields
  sizeof(jetmax_msgs__srv__GetPosition_Request),
  GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_member_array,  // message members
  GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_type_support_handle = {
  0,
  &GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jetmax_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, srv, GetPosition_Request)() {
  if (!GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_type_support_handle.typesupport_identifier) {
    GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "jetmax_msgs/srv/detail/get_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "jetmax_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "jetmax_msgs/srv/detail/get_position__functions.h"
// already included above
// #include "jetmax_msgs/srv/detail/get_position__struct.h"


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

void GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  jetmax_msgs__srv__GetPosition_Response__init(message_memory);
}

void GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_fini_function(void * message_memory)
{
  jetmax_msgs__srv__GetPosition_Response__fini(message_memory);
}

size_t GetPosition_Response__rosidl_typesupport_introspection_c__size_function__Point__robot_markers(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * GetPosition_Response__rosidl_typesupport_introspection_c__get_const_function__Point__robot_markers(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GetPosition_Response__rosidl_typesupport_introspection_c__get_function__Point__robot_markers(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GetPosition_Response__rosidl_typesupport_introspection_c__resize_function__Point__robot_markers(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_member_array[2] = {
  {
    "object_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs__srv__GetPosition_Response, object_pos),  // bytes offset in struct
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
    offsetof(jetmax_msgs__srv__GetPosition_Response, robot_markers),  // bytes offset in struct
    NULL,  // default value
    GetPosition_Response__rosidl_typesupport_introspection_c__size_function__Point__robot_markers,  // size() function pointer
    GetPosition_Response__rosidl_typesupport_introspection_c__get_const_function__Point__robot_markers,  // get_const(index) function pointer
    GetPosition_Response__rosidl_typesupport_introspection_c__get_function__Point__robot_markers,  // get(index) function pointer
    GetPosition_Response__rosidl_typesupport_introspection_c__resize_function__Point__robot_markers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_members = {
  "jetmax_msgs__srv",  // message namespace
  "GetPosition_Response",  // message name
  2,  // number of fields
  sizeof(jetmax_msgs__srv__GetPosition_Response),
  GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_member_array,  // message members
  GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_type_support_handle = {
  0,
  &GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jetmax_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, srv, GetPosition_Response)() {
  GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_type_support_handle.typesupport_identifier) {
    GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "jetmax_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "jetmax_msgs/srv/detail/get_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers jetmax_msgs__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_members = {
  "jetmax_msgs__srv",  // service namespace
  "GetPosition",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // jetmax_msgs__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_Request_message_type_support_handle,
  NULL  // response message
  // jetmax_msgs__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_Response_message_type_support_handle
};

static rosidl_service_type_support_t jetmax_msgs__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_type_support_handle = {
  0,
  &jetmax_msgs__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, srv, GetPosition_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, srv, GetPosition_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jetmax_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, srv, GetPosition)() {
  if (!jetmax_msgs__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_type_support_handle.typesupport_identifier) {
    jetmax_msgs__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)jetmax_msgs__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, srv, GetPosition_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, srv, GetPosition_Response)()->data;
  }

  return &jetmax_msgs__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_type_support_handle;
}
