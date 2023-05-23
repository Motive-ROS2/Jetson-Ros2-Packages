// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from jetmax_msgs:action/PathPlanning.idl
// generated code does not contain a copyright notice
#include "jetmax_msgs/action/detail/path_planning__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "jetmax_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "jetmax_msgs/action/detail/path_planning__struct.h"
#include "jetmax_msgs/action/detail/path_planning__functions.h"
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


using _PathPlanning_Goal__ros_msg_type = jetmax_msgs__action__PathPlanning_Goal;

static bool _PathPlanning_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PathPlanning_Goal__ros_msg_type * ros_message = static_cast<const _PathPlanning_Goal__ros_msg_type *>(untyped_ros_message);
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

static bool _PathPlanning_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PathPlanning_Goal__ros_msg_type * ros_message = static_cast<_PathPlanning_Goal__ros_msg_type *>(untyped_ros_message);
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
size_t get_serialized_size_jetmax_msgs__action__PathPlanning_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PathPlanning_Goal__ros_msg_type * ros_message = static_cast<const _PathPlanning_Goal__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _PathPlanning_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jetmax_msgs__action__PathPlanning_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetmax_msgs
size_t max_serialized_size_jetmax_msgs__action__PathPlanning_Goal(
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

static size_t _PathPlanning_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_jetmax_msgs__action__PathPlanning_Goal(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PathPlanning_Goal = {
  "jetmax_msgs::action",
  "PathPlanning_Goal",
  _PathPlanning_Goal__cdr_serialize,
  _PathPlanning_Goal__cdr_deserialize,
  _PathPlanning_Goal__get_serialized_size,
  _PathPlanning_Goal__max_serialized_size
};

static rosidl_message_type_support_t _PathPlanning_Goal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PathPlanning_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_Goal)() {
  return &_PathPlanning_Goal__type_support;
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
// #include "jetmax_msgs/action/detail/path_planning__struct.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__functions.h"
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


using _PathPlanning_Result__ros_msg_type = jetmax_msgs__action__PathPlanning_Result;

static bool _PathPlanning_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PathPlanning_Result__ros_msg_type * ros_message = static_cast<const _PathPlanning_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: return_code
  {
    cdr << ros_message->return_code;
  }

  return true;
}

static bool _PathPlanning_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PathPlanning_Result__ros_msg_type * ros_message = static_cast<_PathPlanning_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: return_code
  {
    cdr >> ros_message->return_code;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetmax_msgs
size_t get_serialized_size_jetmax_msgs__action__PathPlanning_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PathPlanning_Result__ros_msg_type * ros_message = static_cast<const _PathPlanning_Result__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name return_code
  {
    size_t item_size = sizeof(ros_message->return_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PathPlanning_Result__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jetmax_msgs__action__PathPlanning_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetmax_msgs
size_t max_serialized_size_jetmax_msgs__action__PathPlanning_Result(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: return_code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PathPlanning_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_jetmax_msgs__action__PathPlanning_Result(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PathPlanning_Result = {
  "jetmax_msgs::action",
  "PathPlanning_Result",
  _PathPlanning_Result__cdr_serialize,
  _PathPlanning_Result__cdr_deserialize,
  _PathPlanning_Result__get_serialized_size,
  _PathPlanning_Result__max_serialized_size
};

static rosidl_message_type_support_t _PathPlanning_Result__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PathPlanning_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_Result)() {
  return &_PathPlanning_Result__type_support;
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
// #include "jetmax_msgs/action/detail/path_planning__struct.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__functions.h"
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


using _PathPlanning_Feedback__ros_msg_type = jetmax_msgs__action__PathPlanning_Feedback;

static bool _PathPlanning_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PathPlanning_Feedback__ros_msg_type * ros_message = static_cast<const _PathPlanning_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: update_status
  {
    cdr << ros_message->update_status;
  }

  return true;
}

static bool _PathPlanning_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PathPlanning_Feedback__ros_msg_type * ros_message = static_cast<_PathPlanning_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: update_status
  {
    cdr >> ros_message->update_status;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetmax_msgs
size_t get_serialized_size_jetmax_msgs__action__PathPlanning_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PathPlanning_Feedback__ros_msg_type * ros_message = static_cast<const _PathPlanning_Feedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name update_status
  {
    size_t item_size = sizeof(ros_message->update_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PathPlanning_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jetmax_msgs__action__PathPlanning_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetmax_msgs
size_t max_serialized_size_jetmax_msgs__action__PathPlanning_Feedback(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: update_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PathPlanning_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_jetmax_msgs__action__PathPlanning_Feedback(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PathPlanning_Feedback = {
  "jetmax_msgs::action",
  "PathPlanning_Feedback",
  _PathPlanning_Feedback__cdr_serialize,
  _PathPlanning_Feedback__cdr_deserialize,
  _PathPlanning_Feedback__get_serialized_size,
  _PathPlanning_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _PathPlanning_Feedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PathPlanning_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_Feedback)() {
  return &_PathPlanning_Feedback__type_support;
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
// #include "jetmax_msgs/action/detail/path_planning__struct.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__functions.h"
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

// already included above
// #include "jetmax_msgs/action/detail/path_planning__functions.h"  // goal
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_jetmax_msgs__action__PathPlanning_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_jetmax_msgs__action__PathPlanning_Goal(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_Goal)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jetmax_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jetmax_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jetmax_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _PathPlanning_SendGoal_Request__ros_msg_type = jetmax_msgs__action__PathPlanning_SendGoal_Request;

static bool _PathPlanning_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PathPlanning_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _PathPlanning_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_Goal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PathPlanning_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PathPlanning_SendGoal_Request__ros_msg_type * ros_message = static_cast<_PathPlanning_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_Goal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetmax_msgs
size_t get_serialized_size_jetmax_msgs__action__PathPlanning_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PathPlanning_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _PathPlanning_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name goal

  current_alignment += get_serialized_size_jetmax_msgs__action__PathPlanning_Goal(
    &(ros_message->goal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PathPlanning_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jetmax_msgs__action__PathPlanning_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetmax_msgs
size_t max_serialized_size_jetmax_msgs__action__PathPlanning_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_jetmax_msgs__action__PathPlanning_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PathPlanning_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_jetmax_msgs__action__PathPlanning_SendGoal_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PathPlanning_SendGoal_Request = {
  "jetmax_msgs::action",
  "PathPlanning_SendGoal_Request",
  _PathPlanning_SendGoal_Request__cdr_serialize,
  _PathPlanning_SendGoal_Request__cdr_deserialize,
  _PathPlanning_SendGoal_Request__get_serialized_size,
  _PathPlanning_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _PathPlanning_SendGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PathPlanning_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_SendGoal_Request)() {
  return &_PathPlanning_SendGoal_Request__type_support;
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
// #include "jetmax_msgs/action/detail/path_planning__struct.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jetmax_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jetmax_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jetmax_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _PathPlanning_SendGoal_Response__ros_msg_type = jetmax_msgs__action__PathPlanning_SendGoal_Response;

static bool _PathPlanning_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PathPlanning_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _PathPlanning_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PathPlanning_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PathPlanning_SendGoal_Response__ros_msg_type * ros_message = static_cast<_PathPlanning_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepted = tmp ? true : false;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetmax_msgs
size_t get_serialized_size_jetmax_msgs__action__PathPlanning_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PathPlanning_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _PathPlanning_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PathPlanning_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jetmax_msgs__action__PathPlanning_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetmax_msgs
size_t max_serialized_size_jetmax_msgs__action__PathPlanning_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PathPlanning_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_jetmax_msgs__action__PathPlanning_SendGoal_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PathPlanning_SendGoal_Response = {
  "jetmax_msgs::action",
  "PathPlanning_SendGoal_Response",
  _PathPlanning_SendGoal_Response__cdr_serialize,
  _PathPlanning_SendGoal_Response__cdr_deserialize,
  _PathPlanning_SendGoal_Response__get_serialized_size,
  _PathPlanning_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _PathPlanning_SendGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PathPlanning_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_SendGoal_Response)() {
  return &_PathPlanning_SendGoal_Response__type_support;
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
#include "jetmax_msgs/action/path_planning.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PathPlanning_SendGoal__callbacks = {
  "jetmax_msgs::action",
  "PathPlanning_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_SendGoal_Response)(),
};

static rosidl_service_type_support_t PathPlanning_SendGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PathPlanning_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_SendGoal)() {
  return &PathPlanning_SendGoal__handle;
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
// #include "jetmax_msgs/action/detail/path_planning__struct.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__functions.h"
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

// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jetmax_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jetmax_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jetmax_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _PathPlanning_GetResult_Request__ros_msg_type = jetmax_msgs__action__PathPlanning_GetResult_Request;

static bool _PathPlanning_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PathPlanning_GetResult_Request__ros_msg_type * ros_message = static_cast<const _PathPlanning_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PathPlanning_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PathPlanning_GetResult_Request__ros_msg_type * ros_message = static_cast<_PathPlanning_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetmax_msgs
size_t get_serialized_size_jetmax_msgs__action__PathPlanning_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PathPlanning_GetResult_Request__ros_msg_type * ros_message = static_cast<const _PathPlanning_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PathPlanning_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jetmax_msgs__action__PathPlanning_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetmax_msgs
size_t max_serialized_size_jetmax_msgs__action__PathPlanning_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PathPlanning_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_jetmax_msgs__action__PathPlanning_GetResult_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PathPlanning_GetResult_Request = {
  "jetmax_msgs::action",
  "PathPlanning_GetResult_Request",
  _PathPlanning_GetResult_Request__cdr_serialize,
  _PathPlanning_GetResult_Request__cdr_deserialize,
  _PathPlanning_GetResult_Request__get_serialized_size,
  _PathPlanning_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _PathPlanning_GetResult_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PathPlanning_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_GetResult_Request)() {
  return &_PathPlanning_GetResult_Request__type_support;
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
// #include "jetmax_msgs/action/detail/path_planning__struct.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__functions.h"
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

// already included above
// #include "jetmax_msgs/action/detail/path_planning__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_jetmax_msgs__action__PathPlanning_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_jetmax_msgs__action__PathPlanning_Result(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_Result)();


using _PathPlanning_GetResult_Response__ros_msg_type = jetmax_msgs__action__PathPlanning_GetResult_Response;

static bool _PathPlanning_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PathPlanning_GetResult_Response__ros_msg_type * ros_message = static_cast<const _PathPlanning_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_Result
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PathPlanning_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PathPlanning_GetResult_Response__ros_msg_type * ros_message = static_cast<_PathPlanning_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_Result
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetmax_msgs
size_t get_serialized_size_jetmax_msgs__action__PathPlanning_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PathPlanning_GetResult_Response__ros_msg_type * ros_message = static_cast<const _PathPlanning_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result

  current_alignment += get_serialized_size_jetmax_msgs__action__PathPlanning_Result(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PathPlanning_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jetmax_msgs__action__PathPlanning_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetmax_msgs
size_t max_serialized_size_jetmax_msgs__action__PathPlanning_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_jetmax_msgs__action__PathPlanning_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PathPlanning_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_jetmax_msgs__action__PathPlanning_GetResult_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PathPlanning_GetResult_Response = {
  "jetmax_msgs::action",
  "PathPlanning_GetResult_Response",
  _PathPlanning_GetResult_Response__cdr_serialize,
  _PathPlanning_GetResult_Response__cdr_deserialize,
  _PathPlanning_GetResult_Response__get_serialized_size,
  _PathPlanning_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _PathPlanning_GetResult_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PathPlanning_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_GetResult_Response)() {
  return &_PathPlanning_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "jetmax_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "jetmax_msgs/action/path_planning.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PathPlanning_GetResult__callbacks = {
  "jetmax_msgs::action",
  "PathPlanning_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_GetResult_Response)(),
};

static rosidl_service_type_support_t PathPlanning_GetResult__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PathPlanning_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_GetResult)() {
  return &PathPlanning_GetResult__handle;
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
// #include "jetmax_msgs/action/detail/path_planning__struct.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__functions.h"
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

// already included above
// #include "jetmax_msgs/action/detail/path_planning__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_jetmax_msgs__action__PathPlanning_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_jetmax_msgs__action__PathPlanning_Feedback(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_Feedback)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jetmax_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jetmax_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jetmax_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _PathPlanning_FeedbackMessage__ros_msg_type = jetmax_msgs__action__PathPlanning_FeedbackMessage;

static bool _PathPlanning_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PathPlanning_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _PathPlanning_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_Feedback
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->feedback, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PathPlanning_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PathPlanning_FeedbackMessage__ros_msg_type * ros_message = static_cast<_PathPlanning_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_Feedback
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->feedback))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetmax_msgs
size_t get_serialized_size_jetmax_msgs__action__PathPlanning_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PathPlanning_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _PathPlanning_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name feedback

  current_alignment += get_serialized_size_jetmax_msgs__action__PathPlanning_Feedback(
    &(ros_message->feedback), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PathPlanning_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jetmax_msgs__action__PathPlanning_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetmax_msgs
size_t max_serialized_size_jetmax_msgs__action__PathPlanning_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_jetmax_msgs__action__PathPlanning_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PathPlanning_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_jetmax_msgs__action__PathPlanning_FeedbackMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PathPlanning_FeedbackMessage = {
  "jetmax_msgs::action",
  "PathPlanning_FeedbackMessage",
  _PathPlanning_FeedbackMessage__cdr_serialize,
  _PathPlanning_FeedbackMessage__cdr_deserialize,
  _PathPlanning_FeedbackMessage__get_serialized_size,
  _PathPlanning_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _PathPlanning_FeedbackMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PathPlanning_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetmax_msgs, action, PathPlanning_FeedbackMessage)() {
  return &_PathPlanning_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
