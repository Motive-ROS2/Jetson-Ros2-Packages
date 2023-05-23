// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from jetmax_msgs:srv/Demo1.idl
// generated code does not contain a copyright notice
#include "jetmax_msgs/srv/detail/demo1__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "jetmax_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "jetmax_msgs/srv/detail/demo1__struct.h"
#include "jetmax_msgs/srv/detail/demo1__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/point__functions.h"  // object_pos, robot_markers

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jetmax_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jetmax_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jetmax_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();


using _Demo1_Request__ros_msg_type = jetmax_msgs__srv__Demo1_Request;

static bool _Demo1_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Demo1_Request__ros_msg_type * ros_message = static_cast<const _Demo1_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: object_pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_pos, cdr))
    {
      return false;
    }
  }

  // Field name: robot_markers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    size_t size = ros_message->robot_markers.size;
    auto array_ptr = ros_message->robot_markers.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _Demo1_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Demo1_Request__ros_msg_type * ros_message = static_cast<_Demo1_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: object_pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_pos))
    {
      return false;
    }
  }

  // Field name: robot_markers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->robot_markers.data) {
      geometry_msgs__msg__Point__Sequence__fini(&ros_message->robot_markers);
    }
    if (!geometry_msgs__msg__Point__Sequence__init(&ros_message->robot_markers, size)) {
      return "failed to create array for field 'robot_markers'";
    }
    auto array_ptr = ros_message->robot_markers.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetmax_msgs
size_t get_serialized_size_jetmax_msgs__srv__Demo1_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Demo1_Request__ros_msg_type * ros_message = static_cast<const _Demo1_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name object_pos

  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->object_pos), current_alignment);
  // field.name robot_markers
  {
    size_t array_size = ros_message->robot_markers.size;
    auto array_ptr = ros_message->robot_markers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Point(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Demo1_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jetmax_msgs__srv__Demo1_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetmax_msgs
size_t max_serialized_size_jetmax_msgs__srv__Demo1_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: object_pos
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point(
        full_bounded, current_alignment);
    }
  }
  // member: robot_markers
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Demo1_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_jetmax_msgs__srv__Demo1_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Demo1_Request = {
  "jetmax_msgs::srv",
  "Demo1_Request",
  _Demo1_Request__cdr_serialize,
  _Demo1_Request__cdr_deserialize,
  _Demo1_Request__get_serialized_size,
  _Demo1_Request__max_serialized_size
};

static rosidl_message_type_support_t _Demo1_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Demo1_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, srv, Demo1_Request)() {
  return &_Demo1_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "jetmax_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "jetmax_msgs/srv/detail/demo1__struct.h"
// already included above
// #include "jetmax_msgs/srv/detail/demo1__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Demo1_Response__ros_msg_type = jetmax_msgs__srv__Demo1_Response;

static bool _Demo1_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Demo1_Response__ros_msg_type * ros_message = static_cast<const _Demo1_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _Demo1_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Demo1_Response__ros_msg_type * ros_message = static_cast<_Demo1_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetmax_msgs
size_t get_serialized_size_jetmax_msgs__srv__Demo1_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Demo1_Response__ros_msg_type * ros_message = static_cast<const _Demo1_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Demo1_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jetmax_msgs__srv__Demo1_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetmax_msgs
size_t max_serialized_size_jetmax_msgs__srv__Demo1_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Demo1_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_jetmax_msgs__srv__Demo1_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Demo1_Response = {
  "jetmax_msgs::srv",
  "Demo1_Response",
  _Demo1_Response__cdr_serialize,
  _Demo1_Response__cdr_deserialize,
  _Demo1_Response__get_serialized_size,
  _Demo1_Response__max_serialized_size
};

static rosidl_message_type_support_t _Demo1_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Demo1_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, srv, Demo1_Response)() {
  return &_Demo1_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "jetmax_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "jetmax_msgs/srv/demo1.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Demo1__callbacks = {
  "jetmax_msgs::srv",
  "Demo1",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, srv, Demo1_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, srv, Demo1_Response)(),
};

static rosidl_service_type_support_t Demo1__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Demo1__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, srv, Demo1)() {
  return &Demo1__handle;
}

#if defined(__cplusplus)
}
#endif
