// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cmr_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_
#define CMR_MSGS__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_

#include "cmr_msgs/msg/detail/joint_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cmr_msgs
{

namespace msg
{

namespace builder
{

class Init_JointState_effort
{
public:
  explicit Init_JointState_effort(::cmr_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  ::cmr_msgs::msg::JointState effort(::cmr_msgs::msg::JointState::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cmr_msgs::msg::JointState msg_;
};

class Init_JointState_velocity
{
public:
  explicit Init_JointState_velocity(::cmr_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_effort velocity(::cmr_msgs::msg::JointState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_JointState_effort(msg_);
  }

private:
  ::cmr_msgs::msg::JointState msg_;
};

class Init_JointState_position
{
public:
  explicit Init_JointState_position(::cmr_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_velocity position(::cmr_msgs::msg::JointState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_JointState_velocity(msg_);
  }

private:
  ::cmr_msgs::msg::JointState msg_;
};

class Init_JointState_name
{
public:
  explicit Init_JointState_name(::cmr_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_position name(::cmr_msgs::msg::JointState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_JointState_position(msg_);
  }

private:
  ::cmr_msgs::msg::JointState msg_;
};

class Init_JointState_header
{
public:
  Init_JointState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointState_name header(::cmr_msgs::msg::JointState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointState_name(msg_);
  }

private:
  ::cmr_msgs::msg::JointState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cmr_msgs::msg::JointState>()
{
  return cmr_msgs::msg::builder::Init_JointState_header();
}

}  // namespace cmr_msgs

#endif  // CMR_MSGS__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_
