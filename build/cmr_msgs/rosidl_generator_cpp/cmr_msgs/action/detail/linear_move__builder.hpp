// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cmr_msgs:action/LinearMove.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__ACTION__DETAIL__LINEAR_MOVE__BUILDER_HPP_
#define CMR_MSGS__ACTION__DETAIL__LINEAR_MOVE__BUILDER_HPP_

#include "cmr_msgs/action/detail/linear_move__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cmr_msgs
{

namespace action
{

namespace builder
{

class Init_LinearMove_Goal_point
{
public:
  Init_LinearMove_Goal_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cmr_msgs::action::LinearMove_Goal point(::cmr_msgs::action::LinearMove_Goal::_point_type arg)
  {
    msg_.point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cmr_msgs::action::LinearMove_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cmr_msgs::action::LinearMove_Goal>()
{
  return cmr_msgs::action::builder::Init_LinearMove_Goal_point();
}

}  // namespace cmr_msgs


namespace cmr_msgs
{

namespace action
{

namespace builder
{

class Init_LinearMove_Result_result
{
public:
  Init_LinearMove_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cmr_msgs::action::LinearMove_Result result(::cmr_msgs::action::LinearMove_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cmr_msgs::action::LinearMove_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cmr_msgs::action::LinearMove_Result>()
{
  return cmr_msgs::action::builder::Init_LinearMove_Result_result();
}

}  // namespace cmr_msgs


namespace cmr_msgs
{

namespace action
{

namespace builder
{

class Init_LinearMove_Feedback_status_flag
{
public:
  explicit Init_LinearMove_Feedback_status_flag(::cmr_msgs::action::LinearMove_Feedback & msg)
  : msg_(msg)
  {}
  ::cmr_msgs::action::LinearMove_Feedback status_flag(::cmr_msgs::action::LinearMove_Feedback::_status_flag_type arg)
  {
    msg_.status_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cmr_msgs::action::LinearMove_Feedback msg_;
};

class Init_LinearMove_Feedback_error
{
public:
  explicit Init_LinearMove_Feedback_error(::cmr_msgs::action::LinearMove_Feedback & msg)
  : msg_(msg)
  {}
  Init_LinearMove_Feedback_status_flag error(::cmr_msgs::action::LinearMove_Feedback::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_LinearMove_Feedback_status_flag(msg_);
  }

private:
  ::cmr_msgs::action::LinearMove_Feedback msg_;
};

class Init_LinearMove_Feedback_current
{
public:
  explicit Init_LinearMove_Feedback_current(::cmr_msgs::action::LinearMove_Feedback & msg)
  : msg_(msg)
  {}
  Init_LinearMove_Feedback_error current(::cmr_msgs::action::LinearMove_Feedback::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_LinearMove_Feedback_error(msg_);
  }

private:
  ::cmr_msgs::action::LinearMove_Feedback msg_;
};

class Init_LinearMove_Feedback_navigation_time
{
public:
  explicit Init_LinearMove_Feedback_navigation_time(::cmr_msgs::action::LinearMove_Feedback & msg)
  : msg_(msg)
  {}
  Init_LinearMove_Feedback_current navigation_time(::cmr_msgs::action::LinearMove_Feedback::_navigation_time_type arg)
  {
    msg_.navigation_time = std::move(arg);
    return Init_LinearMove_Feedback_current(msg_);
  }

private:
  ::cmr_msgs::action::LinearMove_Feedback msg_;
};

class Init_LinearMove_Feedback_current_pose
{
public:
  Init_LinearMove_Feedback_current_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinearMove_Feedback_navigation_time current_pose(::cmr_msgs::action::LinearMove_Feedback::_current_pose_type arg)
  {
    msg_.current_pose = std::move(arg);
    return Init_LinearMove_Feedback_navigation_time(msg_);
  }

private:
  ::cmr_msgs::action::LinearMove_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cmr_msgs::action::LinearMove_Feedback>()
{
  return cmr_msgs::action::builder::Init_LinearMove_Feedback_current_pose();
}

}  // namespace cmr_msgs


namespace cmr_msgs
{

namespace action
{

namespace builder
{

class Init_LinearMove_SendGoal_Request_goal
{
public:
  explicit Init_LinearMove_SendGoal_Request_goal(::cmr_msgs::action::LinearMove_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::cmr_msgs::action::LinearMove_SendGoal_Request goal(::cmr_msgs::action::LinearMove_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cmr_msgs::action::LinearMove_SendGoal_Request msg_;
};

class Init_LinearMove_SendGoal_Request_goal_id
{
public:
  Init_LinearMove_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinearMove_SendGoal_Request_goal goal_id(::cmr_msgs::action::LinearMove_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LinearMove_SendGoal_Request_goal(msg_);
  }

private:
  ::cmr_msgs::action::LinearMove_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cmr_msgs::action::LinearMove_SendGoal_Request>()
{
  return cmr_msgs::action::builder::Init_LinearMove_SendGoal_Request_goal_id();
}

}  // namespace cmr_msgs


namespace cmr_msgs
{

namespace action
{

namespace builder
{

class Init_LinearMove_SendGoal_Response_stamp
{
public:
  explicit Init_LinearMove_SendGoal_Response_stamp(::cmr_msgs::action::LinearMove_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::cmr_msgs::action::LinearMove_SendGoal_Response stamp(::cmr_msgs::action::LinearMove_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cmr_msgs::action::LinearMove_SendGoal_Response msg_;
};

class Init_LinearMove_SendGoal_Response_accepted
{
public:
  Init_LinearMove_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinearMove_SendGoal_Response_stamp accepted(::cmr_msgs::action::LinearMove_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_LinearMove_SendGoal_Response_stamp(msg_);
  }

private:
  ::cmr_msgs::action::LinearMove_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cmr_msgs::action::LinearMove_SendGoal_Response>()
{
  return cmr_msgs::action::builder::Init_LinearMove_SendGoal_Response_accepted();
}

}  // namespace cmr_msgs


namespace cmr_msgs
{

namespace action
{

namespace builder
{

class Init_LinearMove_GetResult_Request_goal_id
{
public:
  Init_LinearMove_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cmr_msgs::action::LinearMove_GetResult_Request goal_id(::cmr_msgs::action::LinearMove_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cmr_msgs::action::LinearMove_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cmr_msgs::action::LinearMove_GetResult_Request>()
{
  return cmr_msgs::action::builder::Init_LinearMove_GetResult_Request_goal_id();
}

}  // namespace cmr_msgs


namespace cmr_msgs
{

namespace action
{

namespace builder
{

class Init_LinearMove_GetResult_Response_result
{
public:
  explicit Init_LinearMove_GetResult_Response_result(::cmr_msgs::action::LinearMove_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::cmr_msgs::action::LinearMove_GetResult_Response result(::cmr_msgs::action::LinearMove_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cmr_msgs::action::LinearMove_GetResult_Response msg_;
};

class Init_LinearMove_GetResult_Response_status
{
public:
  Init_LinearMove_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinearMove_GetResult_Response_result status(::cmr_msgs::action::LinearMove_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LinearMove_GetResult_Response_result(msg_);
  }

private:
  ::cmr_msgs::action::LinearMove_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cmr_msgs::action::LinearMove_GetResult_Response>()
{
  return cmr_msgs::action::builder::Init_LinearMove_GetResult_Response_status();
}

}  // namespace cmr_msgs


namespace cmr_msgs
{

namespace action
{

namespace builder
{

class Init_LinearMove_FeedbackMessage_feedback
{
public:
  explicit Init_LinearMove_FeedbackMessage_feedback(::cmr_msgs::action::LinearMove_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::cmr_msgs::action::LinearMove_FeedbackMessage feedback(::cmr_msgs::action::LinearMove_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cmr_msgs::action::LinearMove_FeedbackMessage msg_;
};

class Init_LinearMove_FeedbackMessage_goal_id
{
public:
  Init_LinearMove_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinearMove_FeedbackMessage_feedback goal_id(::cmr_msgs::action::LinearMove_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LinearMove_FeedbackMessage_feedback(msg_);
  }

private:
  ::cmr_msgs::action::LinearMove_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cmr_msgs::action::LinearMove_FeedbackMessage>()
{
  return cmr_msgs::action::builder::Init_LinearMove_FeedbackMessage_goal_id();
}

}  // namespace cmr_msgs

#endif  // CMR_MSGS__ACTION__DETAIL__LINEAR_MOVE__BUILDER_HPP_
