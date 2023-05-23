// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jetmax_msgs:action/PathPlanning.idl
// generated code does not contain a copyright notice

#ifndef JETMAX_MSGS__ACTION__DETAIL__PATH_PLANNING__STRUCT_H_
#define JETMAX_MSGS__ACTION__DETAIL__PATH_PLANNING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_pos'
// Member 'robot_markers'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in action/PathPlanning in the package jetmax_msgs.
typedef struct jetmax_msgs__action__PathPlanning_Goal
{
  geometry_msgs__msg__Point object_pos;
  geometry_msgs__msg__Point__Sequence robot_markers;
} jetmax_msgs__action__PathPlanning_Goal;

// Struct for a sequence of jetmax_msgs__action__PathPlanning_Goal.
typedef struct jetmax_msgs__action__PathPlanning_Goal__Sequence
{
  jetmax_msgs__action__PathPlanning_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jetmax_msgs__action__PathPlanning_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/PathPlanning in the package jetmax_msgs.
typedef struct jetmax_msgs__action__PathPlanning_Result
{
  int32_t return_code;
} jetmax_msgs__action__PathPlanning_Result;

// Struct for a sequence of jetmax_msgs__action__PathPlanning_Result.
typedef struct jetmax_msgs__action__PathPlanning_Result__Sequence
{
  jetmax_msgs__action__PathPlanning_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jetmax_msgs__action__PathPlanning_Result__Sequence;


// Constants defined in the message

// Struct defined in action/PathPlanning in the package jetmax_msgs.
typedef struct jetmax_msgs__action__PathPlanning_Feedback
{
  int32_t update_status;
} jetmax_msgs__action__PathPlanning_Feedback;

// Struct for a sequence of jetmax_msgs__action__PathPlanning_Feedback.
typedef struct jetmax_msgs__action__PathPlanning_Feedback__Sequence
{
  jetmax_msgs__action__PathPlanning_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jetmax_msgs__action__PathPlanning_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "jetmax_msgs/action/detail/path_planning__struct.h"

// Struct defined in action/PathPlanning in the package jetmax_msgs.
typedef struct jetmax_msgs__action__PathPlanning_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  jetmax_msgs__action__PathPlanning_Goal goal;
} jetmax_msgs__action__PathPlanning_SendGoal_Request;

// Struct for a sequence of jetmax_msgs__action__PathPlanning_SendGoal_Request.
typedef struct jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence
{
  jetmax_msgs__action__PathPlanning_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jetmax_msgs__action__PathPlanning_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/PathPlanning in the package jetmax_msgs.
typedef struct jetmax_msgs__action__PathPlanning_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} jetmax_msgs__action__PathPlanning_SendGoal_Response;

// Struct for a sequence of jetmax_msgs__action__PathPlanning_SendGoal_Response.
typedef struct jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence
{
  jetmax_msgs__action__PathPlanning_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jetmax_msgs__action__PathPlanning_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/PathPlanning in the package jetmax_msgs.
typedef struct jetmax_msgs__action__PathPlanning_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} jetmax_msgs__action__PathPlanning_GetResult_Request;

// Struct for a sequence of jetmax_msgs__action__PathPlanning_GetResult_Request.
typedef struct jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence
{
  jetmax_msgs__action__PathPlanning_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jetmax_msgs__action__PathPlanning_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.h"

// Struct defined in action/PathPlanning in the package jetmax_msgs.
typedef struct jetmax_msgs__action__PathPlanning_GetResult_Response
{
  int8_t status;
  jetmax_msgs__action__PathPlanning_Result result;
} jetmax_msgs__action__PathPlanning_GetResult_Response;

// Struct for a sequence of jetmax_msgs__action__PathPlanning_GetResult_Response.
typedef struct jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence
{
  jetmax_msgs__action__PathPlanning_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jetmax_msgs__action__PathPlanning_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.h"

// Struct defined in action/PathPlanning in the package jetmax_msgs.
typedef struct jetmax_msgs__action__PathPlanning_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  jetmax_msgs__action__PathPlanning_Feedback feedback;
} jetmax_msgs__action__PathPlanning_FeedbackMessage;

// Struct for a sequence of jetmax_msgs__action__PathPlanning_FeedbackMessage.
typedef struct jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence
{
  jetmax_msgs__action__PathPlanning_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jetmax_msgs__action__PathPlanning_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JETMAX_MSGS__ACTION__DETAIL__PATH_PLANNING__STRUCT_H_
