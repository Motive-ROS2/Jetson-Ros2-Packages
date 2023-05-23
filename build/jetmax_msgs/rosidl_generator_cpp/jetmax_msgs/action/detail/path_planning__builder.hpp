// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jetmax_msgs:action/PathPlanning.idl
// generated code does not contain a copyright notice

#ifndef JETMAX_MSGS__ACTION__DETAIL__PATH_PLANNING__BUILDER_HPP_
#define JETMAX_MSGS__ACTION__DETAIL__PATH_PLANNING__BUILDER_HPP_

#include "jetmax_msgs/action/detail/path_planning__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace jetmax_msgs
{

namespace action
{

namespace builder
{

class Init_PathPlanning_Goal_robot_markers
{
public:
  explicit Init_PathPlanning_Goal_robot_markers(::jetmax_msgs::action::PathPlanning_Goal & msg)
  : msg_(msg)
  {}
  ::jetmax_msgs::action::PathPlanning_Goal robot_markers(::jetmax_msgs::action::PathPlanning_Goal::_robot_markers_type arg)
  {
    msg_.robot_markers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jetmax_msgs::action::PathPlanning_Goal msg_;
};

class Init_PathPlanning_Goal_object_pos
{
public:
  Init_PathPlanning_Goal_object_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathPlanning_Goal_robot_markers object_pos(::jetmax_msgs::action::PathPlanning_Goal::_object_pos_type arg)
  {
    msg_.object_pos = std::move(arg);
    return Init_PathPlanning_Goal_robot_markers(msg_);
  }

private:
  ::jetmax_msgs::action::PathPlanning_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::jetmax_msgs::action::PathPlanning_Goal>()
{
  return jetmax_msgs::action::builder::Init_PathPlanning_Goal_object_pos();
}

}  // namespace jetmax_msgs


namespace jetmax_msgs
{

namespace action
{

namespace builder
{

class Init_PathPlanning_Result_return_code
{
public:
  Init_PathPlanning_Result_return_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::jetmax_msgs::action::PathPlanning_Result return_code(::jetmax_msgs::action::PathPlanning_Result::_return_code_type arg)
  {
    msg_.return_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jetmax_msgs::action::PathPlanning_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::jetmax_msgs::action::PathPlanning_Result>()
{
  return jetmax_msgs::action::builder::Init_PathPlanning_Result_return_code();
}

}  // namespace jetmax_msgs


namespace jetmax_msgs
{

namespace action
{

namespace builder
{

class Init_PathPlanning_Feedback_update_status
{
public:
  Init_PathPlanning_Feedback_update_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::jetmax_msgs::action::PathPlanning_Feedback update_status(::jetmax_msgs::action::PathPlanning_Feedback::_update_status_type arg)
  {
    msg_.update_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jetmax_msgs::action::PathPlanning_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::jetmax_msgs::action::PathPlanning_Feedback>()
{
  return jetmax_msgs::action::builder::Init_PathPlanning_Feedback_update_status();
}

}  // namespace jetmax_msgs


namespace jetmax_msgs
{

namespace action
{

namespace builder
{

class Init_PathPlanning_SendGoal_Request_goal
{
public:
  explicit Init_PathPlanning_SendGoal_Request_goal(::jetmax_msgs::action::PathPlanning_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::jetmax_msgs::action::PathPlanning_SendGoal_Request goal(::jetmax_msgs::action::PathPlanning_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jetmax_msgs::action::PathPlanning_SendGoal_Request msg_;
};

class Init_PathPlanning_SendGoal_Request_goal_id
{
public:
  Init_PathPlanning_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathPlanning_SendGoal_Request_goal goal_id(::jetmax_msgs::action::PathPlanning_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PathPlanning_SendGoal_Request_goal(msg_);
  }

private:
  ::jetmax_msgs::action::PathPlanning_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::jetmax_msgs::action::PathPlanning_SendGoal_Request>()
{
  return jetmax_msgs::action::builder::Init_PathPlanning_SendGoal_Request_goal_id();
}

}  // namespace jetmax_msgs


namespace jetmax_msgs
{

namespace action
{

namespace builder
{

class Init_PathPlanning_SendGoal_Response_stamp
{
public:
  explicit Init_PathPlanning_SendGoal_Response_stamp(::jetmax_msgs::action::PathPlanning_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::jetmax_msgs::action::PathPlanning_SendGoal_Response stamp(::jetmax_msgs::action::PathPlanning_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jetmax_msgs::action::PathPlanning_SendGoal_Response msg_;
};

class Init_PathPlanning_SendGoal_Response_accepted
{
public:
  Init_PathPlanning_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathPlanning_SendGoal_Response_stamp accepted(::jetmax_msgs::action::PathPlanning_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PathPlanning_SendGoal_Response_stamp(msg_);
  }

private:
  ::jetmax_msgs::action::PathPlanning_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::jetmax_msgs::action::PathPlanning_SendGoal_Response>()
{
  return jetmax_msgs::action::builder::Init_PathPlanning_SendGoal_Response_accepted();
}

}  // namespace jetmax_msgs


namespace jetmax_msgs
{

namespace action
{

namespace builder
{

class Init_PathPlanning_GetResult_Request_goal_id
{
public:
  Init_PathPlanning_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::jetmax_msgs::action::PathPlanning_GetResult_Request goal_id(::jetmax_msgs::action::PathPlanning_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jetmax_msgs::action::PathPlanning_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::jetmax_msgs::action::PathPlanning_GetResult_Request>()
{
  return jetmax_msgs::action::builder::Init_PathPlanning_GetResult_Request_goal_id();
}

}  // namespace jetmax_msgs


namespace jetmax_msgs
{

namespace action
{

namespace builder
{

class Init_PathPlanning_GetResult_Response_result
{
public:
  explicit Init_PathPlanning_GetResult_Response_result(::jetmax_msgs::action::PathPlanning_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::jetmax_msgs::action::PathPlanning_GetResult_Response result(::jetmax_msgs::action::PathPlanning_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jetmax_msgs::action::PathPlanning_GetResult_Response msg_;
};

class Init_PathPlanning_GetResult_Response_status
{
public:
  Init_PathPlanning_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathPlanning_GetResult_Response_result status(::jetmax_msgs::action::PathPlanning_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PathPlanning_GetResult_Response_result(msg_);
  }

private:
  ::jetmax_msgs::action::PathPlanning_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::jetmax_msgs::action::PathPlanning_GetResult_Response>()
{
  return jetmax_msgs::action::builder::Init_PathPlanning_GetResult_Response_status();
}

}  // namespace jetmax_msgs


namespace jetmax_msgs
{

namespace action
{

namespace builder
{

class Init_PathPlanning_FeedbackMessage_feedback
{
public:
  explicit Init_PathPlanning_FeedbackMessage_feedback(::jetmax_msgs::action::PathPlanning_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::jetmax_msgs::action::PathPlanning_FeedbackMessage feedback(::jetmax_msgs::action::PathPlanning_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jetmax_msgs::action::PathPlanning_FeedbackMessage msg_;
};

class Init_PathPlanning_FeedbackMessage_goal_id
{
public:
  Init_PathPlanning_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathPlanning_FeedbackMessage_feedback goal_id(::jetmax_msgs::action::PathPlanning_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PathPlanning_FeedbackMessage_feedback(msg_);
  }

private:
  ::jetmax_msgs::action::PathPlanning_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::jetmax_msgs::action::PathPlanning_FeedbackMessage>()
{
  return jetmax_msgs::action::builder::Init_PathPlanning_FeedbackMessage_goal_id();
}

}  // namespace jetmax_msgs

#endif  // JETMAX_MSGS__ACTION__DETAIL__PATH_PLANNING__BUILDER_HPP_
