// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cmr_msgs:msg/LiftingMech.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__MSG__DETAIL__LIFTING_MECH__BUILDER_HPP_
#define CMR_MSGS__MSG__DETAIL__LIFTING_MECH__BUILDER_HPP_

#include "cmr_msgs/msg/detail/lifting_mech__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cmr_msgs
{

namespace msg
{

namespace builder
{

class Init_LiftingMech_lifting_state
{
public:
  explicit Init_LiftingMech_lifting_state(::cmr_msgs::msg::LiftingMech & msg)
  : msg_(msg)
  {}
  ::cmr_msgs::msg::LiftingMech lifting_state(::cmr_msgs::msg::LiftingMech::_lifting_state_type arg)
  {
    msg_.lifting_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cmr_msgs::msg::LiftingMech msg_;
};

class Init_LiftingMech_header
{
public:
  Init_LiftingMech_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LiftingMech_lifting_state header(::cmr_msgs::msg::LiftingMech::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LiftingMech_lifting_state(msg_);
  }

private:
  ::cmr_msgs::msg::LiftingMech msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cmr_msgs::msg::LiftingMech>()
{
  return cmr_msgs::msg::builder::Init_LiftingMech_header();
}

}  // namespace cmr_msgs

#endif  // CMR_MSGS__MSG__DETAIL__LIFTING_MECH__BUILDER_HPP_
