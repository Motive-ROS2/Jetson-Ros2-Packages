// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from jetmax_msgs:srv/Demo1.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "jetmax_msgs/srv/detail/demo1__rosidl_typesupport_introspection_c.h"
#include "jetmax_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "jetmax_msgs/srv/detail/demo1__functions.h"
#include "jetmax_msgs/srv/detail/demo1__struct.h"


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

void Demo1_Request__rosidl_typesupport_introspection_c__Demo1_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  jetmax_msgs__srv__Demo1_Request__init(message_memory);
}

void Demo1_Request__rosidl_typesupport_introspection_c__Demo1_Request_fini_function(void * message_memory)
{
  jetmax_msgs__srv__Demo1_Request__fini(message_memory);
}

size_t Demo1_Request__rosidl_typesupport_introspection_c__size_function__Point__robot_markers(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * Demo1_Request__rosidl_typesupport_introspection_c__get_const_function__Point__robot_markers(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Demo1_Request__rosidl_typesupport_introspection_c__get_function__Point__robot_markers(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Demo1_Request__rosidl_typesupport_introspection_c__resize_function__Point__robot_markers(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Demo1_Request__rosidl_typesupport_introspection_c__Demo1_Request_message_member_array[2] = {
  {
    "object_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs__srv__Demo1_Request, object_pos),  // bytes offset in struct
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
    offsetof(jetmax_msgs__srv__Demo1_Request, robot_markers),  // bytes offset in struct
    NULL,  // default value
    Demo1_Request__rosidl_typesupport_introspection_c__size_function__Point__robot_markers,  // size() function pointer
    Demo1_Request__rosidl_typesupport_introspection_c__get_const_function__Point__robot_markers,  // get_const(index) function pointer
    Demo1_Request__rosidl_typesupport_introspection_c__get_function__Point__robot_markers,  // get(index) function pointer
    Demo1_Request__rosidl_typesupport_introspection_c__resize_function__Point__robot_markers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Demo1_Request__rosidl_typesupport_introspection_c__Demo1_Request_message_members = {
  "jetmax_msgs__srv",  // message namespace
  "Demo1_Request",  // message name
  2,  // number of fields
  sizeof(jetmax_msgs__srv__Demo1_Request),
  Demo1_Request__rosidl_typesupport_introspection_c__Demo1_Request_message_member_array,  // message members
  Demo1_Request__rosidl_typesupport_introspection_c__Demo1_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Demo1_Request__rosidl_typesupport_introspection_c__Demo1_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Demo1_Request__rosidl_typesupport_introspection_c__Demo1_Request_message_type_support_handle = {
  0,
  &Demo1_Request__rosidl_typesupport_introspection_c__Demo1_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jetmax_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, srv, Demo1_Request)() {
  Demo1_Request__rosidl_typesupport_introspection_c__Demo1_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  Demo1_Request__rosidl_typesupport_introspection_c__Demo1_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!Demo1_Request__rosidl_typesupport_introspection_c__Demo1_Request_message_type_support_handle.typesupport_identifier) {
    Demo1_Request__rosidl_typesupport_introspection_c__Demo1_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Demo1_Request__rosidl_typesupport_introspection_c__Demo1_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "jetmax_msgs/srv/detail/demo1__rosidl_typesupport_introspection_c.h"
// already included above
// #include "jetmax_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "jetmax_msgs/srv/detail/demo1__functions.h"
// already included above
// #include "jetmax_msgs/srv/detail/demo1__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Demo1_Response__rosidl_typesupport_introspection_c__Demo1_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  jetmax_msgs__srv__Demo1_Response__init(message_memory);
}

void Demo1_Response__rosidl_typesupport_introspection_c__Demo1_Response_fini_function(void * message_memory)
{
  jetmax_msgs__srv__Demo1_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Demo1_Response__rosidl_typesupport_introspection_c__Demo1_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jetmax_msgs__srv__Demo1_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Demo1_Response__rosidl_typesupport_introspection_c__Demo1_Response_message_members = {
  "jetmax_msgs__srv",  // message namespace
  "Demo1_Response",  // message name
  1,  // number of fields
  sizeof(jetmax_msgs__srv__Demo1_Response),
  Demo1_Response__rosidl_typesupport_introspection_c__Demo1_Response_message_member_array,  // message members
  Demo1_Response__rosidl_typesupport_introspection_c__Demo1_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Demo1_Response__rosidl_typesupport_introspection_c__Demo1_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Demo1_Response__rosidl_typesupport_introspection_c__Demo1_Response_message_type_support_handle = {
  0,
  &Demo1_Response__rosidl_typesupport_introspection_c__Demo1_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jetmax_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, srv, Demo1_Response)() {
  if (!Demo1_Response__rosidl_typesupport_introspection_c__Demo1_Response_message_type_support_handle.typesupport_identifier) {
    Demo1_Response__rosidl_typesupport_introspection_c__Demo1_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Demo1_Response__rosidl_typesupport_introspection_c__Demo1_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "jetmax_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "jetmax_msgs/srv/detail/demo1__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers jetmax_msgs__srv__detail__demo1__rosidl_typesupport_introspection_c__Demo1_service_members = {
  "jetmax_msgs__srv",  // service namespace
  "Demo1",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // jetmax_msgs__srv__detail__demo1__rosidl_typesupport_introspection_c__Demo1_Request_message_type_support_handle,
  NULL  // response message
  // jetmax_msgs__srv__detail__demo1__rosidl_typesupport_introspection_c__Demo1_Response_message_type_support_handle
};

static rosidl_service_type_support_t jetmax_msgs__srv__detail__demo1__rosidl_typesupport_introspection_c__Demo1_service_type_support_handle = {
  0,
  &jetmax_msgs__srv__detail__demo1__rosidl_typesupport_introspection_c__Demo1_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, srv, Demo1_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, srv, Demo1_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jetmax_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, srv, Demo1)() {
  if (!jetmax_msgs__srv__detail__demo1__rosidl_typesupport_introspection_c__Demo1_service_type_support_handle.typesupport_identifier) {
    jetmax_msgs__srv__detail__demo1__rosidl_typesupport_introspection_c__Demo1_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)jetmax_msgs__srv__detail__demo1__rosidl_typesupport_introspection_c__Demo1_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, srv, Demo1_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jetmax_msgs, srv, Demo1_Response)()->data;
  }

  return &jetmax_msgs__srv__detail__demo1__rosidl_typesupport_introspection_c__Demo1_service_type_support_handle;
}
