// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cmr_msgs:msg/StateChange.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__MSG__DETAIL__STATE_CHANGE__BUILDER_HPP_
#define CMR_MSGS__MSG__DETAIL__STATE_CHANGE__BUILDER_HPP_

#include "cmr_msgs/msg/detail/state_change__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cmr_msgs
{

namespace msg
{

namespace builder
{

class Init_StateChange_node_name
{
public:
  explicit Init_StateChange_node_name(::cmr_msgs::msg::StateChange & msg)
  : msg_(msg)
  {}
  ::cmr_msgs::msg::StateChange node_name(::cmr_msgs::msg::StateChange::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cmr_msgs::msg::StateChange msg_;
};

class Init_StateChange_control_state
{
public:
  explicit Init_StateChange_control_state(::cmr_msgs::msg::StateChange & msg)
  : msg_(msg)
  {}
  Init_StateChange_node_name control_state(::cmr_msgs::msg::StateChange::_control_state_type arg)
  {
    msg_.control_state = std::move(arg);
    return Init_StateChange_node_name(msg_);
  }

private:
  ::cmr_msgs::msg::StateChange msg_;
};

class Init_StateChange_header
{
public:
  Init_StateChange_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateChange_control_state header(::cmr_msgs::msg::StateChange::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StateChange_control_state(msg_);
  }

private:
  ::cmr_msgs::msg::StateChange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cmr_msgs::msg::StateChange>()
{
  return cmr_msgs::msg::builder::Init_StateChange_header();
}

}  // namespace cmr_msgs

#endif  // CMR_MSGS__MSG__DETAIL__STATE_CHANGE__BUILDER_HPP_
