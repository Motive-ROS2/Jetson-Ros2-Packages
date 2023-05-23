// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jetmax_msgs:action/PathPlanning.idl
// generated code does not contain a copyright notice

#ifndef JETMAX_MSGS__ACTION__DETAIL__PATH_PLANNING__TRAITS_HPP_
#define JETMAX_MSGS__ACTION__DETAIL__PATH_PLANNING__TRAITS_HPP_

#include "jetmax_msgs/action/detail/path_planning__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'object_pos'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jetmax_msgs::action::PathPlanning_Goal>()
{
  return "jetmax_msgs::action::PathPlanning_Goal";
}

template<>
inline const char * name<jetmax_msgs::action::PathPlanning_Goal>()
{
  return "jetmax_msgs/action/PathPlanning_Goal";
}

template<>
struct has_fixed_size<jetmax_msgs::action::PathPlanning_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<jetmax_msgs::action::PathPlanning_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<jetmax_msgs::action::PathPlanning_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jetmax_msgs::action::PathPlanning_Result>()
{
  return "jetmax_msgs::action::PathPlanning_Result";
}

template<>
inline const char * name<jetmax_msgs::action::PathPlanning_Result>()
{
  return "jetmax_msgs/action/PathPlanning_Result";
}

template<>
struct has_fixed_size<jetmax_msgs::action::PathPlanning_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<jetmax_msgs::action::PathPlanning_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<jetmax_msgs::action::PathPlanning_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jetmax_msgs::action::PathPlanning_Feedback>()
{
  return "jetmax_msgs::action::PathPlanning_Feedback";
}

template<>
inline const char * name<jetmax_msgs::action::PathPlanning_Feedback>()
{
  return "jetmax_msgs/action/PathPlanning_Feedback";
}

template<>
struct has_fixed_size<jetmax_msgs::action::PathPlanning_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<jetmax_msgs::action::PathPlanning_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<jetmax_msgs::action::PathPlanning_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "jetmax_msgs/action/detail/path_planning__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jetmax_msgs::action::PathPlanning_SendGoal_Request>()
{
  return "jetmax_msgs::action::PathPlanning_SendGoal_Request";
}

template<>
inline const char * name<jetmax_msgs::action::PathPlanning_SendGoal_Request>()
{
  return "jetmax_msgs/action/PathPlanning_SendGoal_Request";
}

template<>
struct has_fixed_size<jetmax_msgs::action::PathPlanning_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<jetmax_msgs::action::PathPlanning_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<jetmax_msgs::action::PathPlanning_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<jetmax_msgs::action::PathPlanning_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<jetmax_msgs::action::PathPlanning_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jetmax_msgs::action::PathPlanning_SendGoal_Response>()
{
  return "jetmax_msgs::action::PathPlanning_SendGoal_Response";
}

template<>
inline const char * name<jetmax_msgs::action::PathPlanning_SendGoal_Response>()
{
  return "jetmax_msgs/action/PathPlanning_SendGoal_Response";
}

template<>
struct has_fixed_size<jetmax_msgs::action::PathPlanning_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<jetmax_msgs::action::PathPlanning_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<jetmax_msgs::action::PathPlanning_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jetmax_msgs::action::PathPlanning_SendGoal>()
{
  return "jetmax_msgs::action::PathPlanning_SendGoal";
}

template<>
inline const char * name<jetmax_msgs::action::PathPlanning_SendGoal>()
{
  return "jetmax_msgs/action/PathPlanning_SendGoal";
}

template<>
struct has_fixed_size<jetmax_msgs::action::PathPlanning_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<jetmax_msgs::action::PathPlanning_SendGoal_Request>::value &&
    has_fixed_size<jetmax_msgs::action::PathPlanning_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<jetmax_msgs::action::PathPlanning_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<jetmax_msgs::action::PathPlanning_SendGoal_Request>::value &&
    has_bounded_size<jetmax_msgs::action::PathPlanning_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<jetmax_msgs::action::PathPlanning_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<jetmax_msgs::action::PathPlanning_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<jetmax_msgs::action::PathPlanning_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jetmax_msgs::action::PathPlanning_GetResult_Request>()
{
  return "jetmax_msgs::action::PathPlanning_GetResult_Request";
}

template<>
inline const char * name<jetmax_msgs::action::PathPlanning_GetResult_Request>()
{
  return "jetmax_msgs/action/PathPlanning_GetResult_Request";
}

template<>
struct has_fixed_size<jetmax_msgs::action::PathPlanning_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<jetmax_msgs::action::PathPlanning_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<jetmax_msgs::action::PathPlanning_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "jetmax_msgs/action/detail/path_planning__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jetmax_msgs::action::PathPlanning_GetResult_Response>()
{
  return "jetmax_msgs::action::PathPlanning_GetResult_Response";
}

template<>
inline const char * name<jetmax_msgs::action::PathPlanning_GetResult_Response>()
{
  return "jetmax_msgs/action/PathPlanning_GetResult_Response";
}

template<>
struct has_fixed_size<jetmax_msgs::action::PathPlanning_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<jetmax_msgs::action::PathPlanning_Result>::value> {};

template<>
struct has_bounded_size<jetmax_msgs::action::PathPlanning_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<jetmax_msgs::action::PathPlanning_Result>::value> {};

template<>
struct is_message<jetmax_msgs::action::PathPlanning_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jetmax_msgs::action::PathPlanning_GetResult>()
{
  return "jetmax_msgs::action::PathPlanning_GetResult";
}

template<>
inline const char * name<jetmax_msgs::action::PathPlanning_GetResult>()
{
  return "jetmax_msgs/action/PathPlanning_GetResult";
}

template<>
struct has_fixed_size<jetmax_msgs::action::PathPlanning_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<jetmax_msgs::action::PathPlanning_GetResult_Request>::value &&
    has_fixed_size<jetmax_msgs::action::PathPlanning_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<jetmax_msgs::action::PathPlanning_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<jetmax_msgs::action::PathPlanning_GetResult_Request>::value &&
    has_bounded_size<jetmax_msgs::action::PathPlanning_GetResult_Response>::value
  >
{
};

template<>
struct is_service<jetmax_msgs::action::PathPlanning_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<jetmax_msgs::action::PathPlanning_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<jetmax_msgs::action::PathPlanning_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "jetmax_msgs/action/detail/path_planning__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jetmax_msgs::action::PathPlanning_FeedbackMessage>()
{
  return "jetmax_msgs::action::PathPlanning_FeedbackMessage";
}

template<>
inline const char * name<jetmax_msgs::action::PathPlanning_FeedbackMessage>()
{
  return "jetmax_msgs/action/PathPlanning_FeedbackMessage";
}

template<>
struct has_fixed_size<jetmax_msgs::action::PathPlanning_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<jetmax_msgs::action::PathPlanning_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<jetmax_msgs::action::PathPlanning_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<jetmax_msgs::action::PathPlanning_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<jetmax_msgs::action::PathPlanning_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<jetmax_msgs::action::PathPlanning>
  : std::true_type
{
};

template<>
struct is_action_goal<jetmax_msgs::action::PathPlanning_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<jetmax_msgs::action::PathPlanning_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<jetmax_msgs::action::PathPlanning_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // JETMAX_MSGS__ACTION__DETAIL__PATH_PLANNING__TRAITS_HPP_
