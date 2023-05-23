// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from jetmax_msgs:action/PathPlanning.idl
// generated code does not contain a copyright notice
#include "jetmax_msgs/action/detail/path_planning__rosidl_typesupport_fastrtps_cpp.hpp"
#include "jetmax_msgs/action/detail/path_planning__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Point &);
size_t get_serialized_size(
  const geometry_msgs::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_Point(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Point &);
size_t get_serialized_size(
  const geometry_msgs::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_Point(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace jetmax_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
cdr_serialize(
  const jetmax_msgs::action::PathPlanning_Goal & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: object_pos
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.object_pos,
    cdr);
  // Member: robot_markers
  {
    size_t size = ros_message.robot_markers.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.robot_markers[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  jetmax_msgs::action::PathPlanning_Goal & ros_message)
{
  // Member: object_pos
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.object_pos);

  // Member: robot_markers
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.robot_markers.resize(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.robot_markers[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
get_serialized_size(
  const jetmax_msgs::action::PathPlanning_Goal & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: object_pos

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.object_pos, current_alignment);
  // Member: robot_markers
  {
    size_t array_size = ros_message.robot_markers.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.robot_markers[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
max_serialized_size_PathPlanning_Goal(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: object_pos
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        full_bounded, current_alignment);
    }
  }

  // Member: robot_markers
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PathPlanning_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const jetmax_msgs::action::PathPlanning_Goal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PathPlanning_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<jetmax_msgs::action::PathPlanning_Goal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PathPlanning_Goal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const jetmax_msgs::action::PathPlanning_Goal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PathPlanning_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PathPlanning_Goal(full_bounded, 0);
}

static message_type_support_callbacks_t _PathPlanning_Goal__callbacks = {
  "jetmax_msgs::action",
  "PathPlanning_Goal",
  _PathPlanning_Goal__cdr_serialize,
  _PathPlanning_Goal__cdr_deserialize,
  _PathPlanning_Goal__get_serialized_size,
  _PathPlanning_Goal__max_serialized_size
};

static rosidl_message_type_support_t _PathPlanning_Goal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PathPlanning_Goal__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_jetmax_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_Goal>()
{
  return &jetmax_msgs::action::typesupport_fastrtps_cpp::_PathPlanning_Goal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_Goal)() {
  return &jetmax_msgs::action::typesupport_fastrtps_cpp::_PathPlanning_Goal__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace jetmax_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
cdr_serialize(
  const jetmax_msgs::action::PathPlanning_Result & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: return_code
  cdr << ros_message.return_code;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  jetmax_msgs::action::PathPlanning_Result & ros_message)
{
  // Member: return_code
  cdr >> ros_message.return_code;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
get_serialized_size(
  const jetmax_msgs::action::PathPlanning_Result & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: return_code
  {
    size_t item_size = sizeof(ros_message.return_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
max_serialized_size_PathPlanning_Result(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: return_code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _PathPlanning_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const jetmax_msgs::action::PathPlanning_Result *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PathPlanning_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<jetmax_msgs::action::PathPlanning_Result *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PathPlanning_Result__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const jetmax_msgs::action::PathPlanning_Result *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PathPlanning_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PathPlanning_Result(full_bounded, 0);
}

static message_type_support_callbacks_t _PathPlanning_Result__callbacks = {
  "jetmax_msgs::action",
  "PathPlanning_Result",
  _PathPlanning_Result__cdr_serialize,
  _PathPlanning_Result__cdr_deserialize,
  _PathPlanning_Result__get_serialized_size,
  _PathPlanning_Result__max_serialized_size
};

static rosidl_message_type_support_t _PathPlanning_Result__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PathPlanning_Result__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_jetmax_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_Result>()
{
  return &jetmax_msgs::action::typesupport_fastrtps_cpp::_PathPlanning_Result__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_Result)() {
  return &jetmax_msgs::action::typesupport_fastrtps_cpp::_PathPlanning_Result__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace jetmax_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
cdr_serialize(
  const jetmax_msgs::action::PathPlanning_Feedback & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: update_status
  cdr << ros_message.update_status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  jetmax_msgs::action::PathPlanning_Feedback & ros_message)
{
  // Member: update_status
  cdr >> ros_message.update_status;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
get_serialized_size(
  const jetmax_msgs::action::PathPlanning_Feedback & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: update_status
  {
    size_t item_size = sizeof(ros_message.update_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
max_serialized_size_PathPlanning_Feedback(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: update_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _PathPlanning_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const jetmax_msgs::action::PathPlanning_Feedback *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PathPlanning_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<jetmax_msgs::action::PathPlanning_Feedback *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PathPlanning_Feedback__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const jetmax_msgs::action::PathPlanning_Feedback *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PathPlanning_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PathPlanning_Feedback(full_bounded, 0);
}

static message_type_support_callbacks_t _PathPlanning_Feedback__callbacks = {
  "jetmax_msgs::action",
  "PathPlanning_Feedback",
  _PathPlanning_Feedback__cdr_serialize,
  _PathPlanning_Feedback__cdr_deserialize,
  _PathPlanning_Feedback__get_serialized_size,
  _PathPlanning_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _PathPlanning_Feedback__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PathPlanning_Feedback__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_jetmax_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_Feedback>()
{
  return &jetmax_msgs::action::typesupport_fastrtps_cpp::_PathPlanning_Feedback__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_Feedback)() {
  return &jetmax_msgs::action::typesupport_fastrtps_cpp::_PathPlanning_Feedback__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace jetmax_msgs
{
namespace action
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const jetmax_msgs::action::PathPlanning_Goal &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  jetmax_msgs::action::PathPlanning_Goal &);
size_t get_serialized_size(
  const jetmax_msgs::action::PathPlanning_Goal &,
  size_t current_alignment);
size_t
max_serialized_size_PathPlanning_Goal(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace action
}  // namespace jetmax_msgs


namespace jetmax_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
cdr_serialize(
  const jetmax_msgs::action::PathPlanning_SendGoal_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: goal
  jetmax_msgs::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  jetmax_msgs::action::PathPlanning_SendGoal_Request & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  // Member: goal
  jetmax_msgs::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
get_serialized_size(
  const jetmax_msgs::action::PathPlanning_SendGoal_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);
  // Member: goal

  current_alignment +=
    jetmax_msgs::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
max_serialized_size_PathPlanning_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  // Member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        jetmax_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_PathPlanning_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PathPlanning_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const jetmax_msgs::action::PathPlanning_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PathPlanning_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<jetmax_msgs::action::PathPlanning_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PathPlanning_SendGoal_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const jetmax_msgs::action::PathPlanning_SendGoal_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PathPlanning_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PathPlanning_SendGoal_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _PathPlanning_SendGoal_Request__callbacks = {
  "jetmax_msgs::action",
  "PathPlanning_SendGoal_Request",
  _PathPlanning_SendGoal_Request__cdr_serialize,
  _PathPlanning_SendGoal_Request__cdr_deserialize,
  _PathPlanning_SendGoal_Request__get_serialized_size,
  _PathPlanning_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _PathPlanning_SendGoal_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PathPlanning_SendGoal_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_jetmax_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_SendGoal_Request>()
{
  return &jetmax_msgs::action::typesupport_fastrtps_cpp::_PathPlanning_SendGoal_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_SendGoal_Request)() {
  return &jetmax_msgs::action::typesupport_fastrtps_cpp::_PathPlanning_SendGoal_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace jetmax_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
cdr_serialize(
  const jetmax_msgs::action::PathPlanning_SendGoal_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: accepted
  cdr << (ros_message.accepted ? true : false);
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  jetmax_msgs::action::PathPlanning_SendGoal_Response & ros_message)
{
  // Member: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accepted = tmp ? true : false;
  }

  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
get_serialized_size(
  const jetmax_msgs::action::PathPlanning_SendGoal_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: accepted
  {
    size_t item_size = sizeof(ros_message.accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
max_serialized_size_PathPlanning_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PathPlanning_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const jetmax_msgs::action::PathPlanning_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PathPlanning_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<jetmax_msgs::action::PathPlanning_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PathPlanning_SendGoal_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const jetmax_msgs::action::PathPlanning_SendGoal_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PathPlanning_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PathPlanning_SendGoal_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _PathPlanning_SendGoal_Response__callbacks = {
  "jetmax_msgs::action",
  "PathPlanning_SendGoal_Response",
  _PathPlanning_SendGoal_Response__cdr_serialize,
  _PathPlanning_SendGoal_Response__cdr_deserialize,
  _PathPlanning_SendGoal_Response__get_serialized_size,
  _PathPlanning_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _PathPlanning_SendGoal_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PathPlanning_SendGoal_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_jetmax_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_SendGoal_Response>()
{
  return &jetmax_msgs::action::typesupport_fastrtps_cpp::_PathPlanning_SendGoal_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_SendGoal_Response)() {
  return &jetmax_msgs::action::typesupport_fastrtps_cpp::_PathPlanning_SendGoal_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace jetmax_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _PathPlanning_SendGoal__callbacks = {
  "jetmax_msgs::action",
  "PathPlanning_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_SendGoal_Response)(),
};

static rosidl_service_type_support_t _PathPlanning_SendGoal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PathPlanning_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_jetmax_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<jetmax_msgs::action::PathPlanning_SendGoal>()
{
  return &jetmax_msgs::action::typesupport_fastrtps_cpp::_PathPlanning_SendGoal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_SendGoal)() {
  return &jetmax_msgs::action::typesupport_fastrtps_cpp::_PathPlanning_SendGoal__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs


namespace jetmax_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
cdr_serialize(
  const jetmax_msgs::action::PathPlanning_GetResult_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  jetmax_msgs::action::PathPlanning_GetResult_Request & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
get_serialized_size(
  const jetmax_msgs::action::PathPlanning_GetResult_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
max_serialized_size_PathPlanning_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PathPlanning_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const jetmax_msgs::action::PathPlanning_GetResult_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PathPlanning_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<jetmax_msgs::action::PathPlanning_GetResult_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PathPlanning_GetResult_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const jetmax_msgs::action::PathPlanning_GetResult_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PathPlanning_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PathPlanning_GetResult_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _PathPlanning_GetResult_Request__callbacks = {
  "jetmax_msgs::action",
  "PathPlanning_GetResult_Request",
  _PathPlanning_GetResult_Request__cdr_serialize,
  _PathPlanning_GetResult_Request__cdr_deserialize,
  _PathPlanning_GetResult_Request__get_serialized_size,
  _PathPlanning_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _PathPlanning_GetResult_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PathPlanning_GetResult_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_jetmax_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_GetResult_Request>()
{
  return &jetmax_msgs::action::typesupport_fastrtps_cpp::_PathPlanning_GetResult_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_GetResult_Request)() {
  return &jetmax_msgs::action::typesupport_fastrtps_cpp::_PathPlanning_GetResult_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace jetmax_msgs
{
namespace action
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const jetmax_msgs::action::PathPlanning_Result &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  jetmax_msgs::action::PathPlanning_Result &);
size_t get_serialized_size(
  const jetmax_msgs::action::PathPlanning_Result &,
  size_t current_alignment);
size_t
max_serialized_size_PathPlanning_Result(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace action
}  // namespace jetmax_msgs


namespace jetmax_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
cdr_serialize(
  const jetmax_msgs::action::PathPlanning_GetResult_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  cdr << ros_message.status;
  // Member: result
  jetmax_msgs::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.result,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  jetmax_msgs::action::PathPlanning_GetResult_Response & ros_message)
{
  // Member: status
  cdr >> ros_message.status;

  // Member: result
  jetmax_msgs::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.result);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
get_serialized_size(
  const jetmax_msgs::action::PathPlanning_GetResult_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: result

  current_alignment +=
    jetmax_msgs::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.result, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
max_serialized_size_PathPlanning_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        jetmax_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_PathPlanning_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PathPlanning_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const jetmax_msgs::action::PathPlanning_GetResult_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PathPlanning_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<jetmax_msgs::action::PathPlanning_GetResult_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PathPlanning_GetResult_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const jetmax_msgs::action::PathPlanning_GetResult_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PathPlanning_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PathPlanning_GetResult_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _PathPlanning_GetResult_Response__callbacks = {
  "jetmax_msgs::action",
  "PathPlanning_GetResult_Response",
  _PathPlanning_GetResult_Response__cdr_serialize,
  _PathPlanning_GetResult_Response__cdr_deserialize,
  _PathPlanning_GetResult_Response__get_serialized_size,
  _PathPlanning_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _PathPlanning_GetResult_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PathPlanning_GetResult_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_jetmax_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_GetResult_Response>()
{
  return &jetmax_msgs::action::typesupport_fastrtps_cpp::_PathPlanning_GetResult_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_GetResult_Response)() {
  return &jetmax_msgs::action::typesupport_fastrtps_cpp::_PathPlanning_GetResult_Response__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace jetmax_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _PathPlanning_GetResult__callbacks = {
  "jetmax_msgs::action",
  "PathPlanning_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_GetResult_Response)(),
};

static rosidl_service_type_support_t _PathPlanning_GetResult__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PathPlanning_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_jetmax_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<jetmax_msgs::action::PathPlanning_GetResult>()
{
  return &jetmax_msgs::action::typesupport_fastrtps_cpp::_PathPlanning_GetResult__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_GetResult)() {
  return &jetmax_msgs::action::typesupport_fastrtps_cpp::_PathPlanning_GetResult__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace jetmax_msgs
{
namespace action
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const jetmax_msgs::action::PathPlanning_Feedback &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  jetmax_msgs::action::PathPlanning_Feedback &);
size_t get_serialized_size(
  const jetmax_msgs::action::PathPlanning_Feedback &,
  size_t current_alignment);
size_t
max_serialized_size_PathPlanning_Feedback(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace action
}  // namespace jetmax_msgs


namespace jetmax_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
cdr_serialize(
  const jetmax_msgs::action::PathPlanning_FeedbackMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: feedback
  jetmax_msgs::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.feedback,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  jetmax_msgs::action::PathPlanning_FeedbackMessage & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  // Member: feedback
  jetmax_msgs::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.feedback);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
get_serialized_size(
  const jetmax_msgs::action::PathPlanning_FeedbackMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);
  // Member: feedback

  current_alignment +=
    jetmax_msgs::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.feedback, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetmax_msgs
max_serialized_size_PathPlanning_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  // Member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        jetmax_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_PathPlanning_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PathPlanning_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const jetmax_msgs::action::PathPlanning_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PathPlanning_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<jetmax_msgs::action::PathPlanning_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PathPlanning_FeedbackMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const jetmax_msgs::action::PathPlanning_FeedbackMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PathPlanning_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PathPlanning_FeedbackMessage(full_bounded, 0);
}

static message_type_support_callbacks_t _PathPlanning_FeedbackMessage__callbacks = {
  "jetmax_msgs::action",
  "PathPlanning_FeedbackMessage",
  _PathPlanning_FeedbackMessage__cdr_serialize,
  _PathPlanning_FeedbackMessage__cdr_deserialize,
  _PathPlanning_FeedbackMessage__get_serialized_size,
  _PathPlanning_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _PathPlanning_FeedbackMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PathPlanning_FeedbackMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_jetmax_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_FeedbackMessage>()
{
  return &jetmax_msgs::action::typesupport_fastrtps_cpp::_PathPlanning_FeedbackMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_FeedbackMessage)() {
  return &jetmax_msgs::action::typesupport_fastrtps_cpp::_PathPlanning_FeedbackMessage__handle;
}

#ifdef __cplusplus
}
#endif
