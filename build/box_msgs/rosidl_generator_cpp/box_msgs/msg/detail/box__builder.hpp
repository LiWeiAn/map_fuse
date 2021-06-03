// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from box_msgs:msg/Box.idl
// generated code does not contain a copyright notice

#ifndef BOX_MSGS__MSG__DETAIL__BOX__BUILDER_HPP_
#define BOX_MSGS__MSG__DETAIL__BOX__BUILDER_HPP_

#include "box_msgs/msg/detail/box__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace box_msgs
{

namespace msg
{

namespace builder
{

class Init_Box_b
{
public:
  explicit Init_Box_b(::box_msgs::msg::Box & msg)
  : msg_(msg)
  {}
  ::box_msgs::msg::Box b(::box_msgs::msg::Box::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::box_msgs::msg::Box msg_;
};

class Init_Box_t
{
public:
  explicit Init_Box_t(::box_msgs::msg::Box & msg)
  : msg_(msg)
  {}
  Init_Box_b t(::box_msgs::msg::Box::_t_type arg)
  {
    msg_.t = std::move(arg);
    return Init_Box_b(msg_);
  }

private:
  ::box_msgs::msg::Box msg_;
};

class Init_Box_r
{
public:
  explicit Init_Box_r(::box_msgs::msg::Box & msg)
  : msg_(msg)
  {}
  Init_Box_t r(::box_msgs::msg::Box::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_Box_t(msg_);
  }

private:
  ::box_msgs::msg::Box msg_;
};

class Init_Box_l
{
public:
  explicit Init_Box_l(::box_msgs::msg::Box & msg)
  : msg_(msg)
  {}
  Init_Box_r l(::box_msgs::msg::Box::_l_type arg)
  {
    msg_.l = std::move(arg);
    return Init_Box_r(msg_);
  }

private:
  ::box_msgs::msg::Box msg_;
};

class Init_Box_header
{
public:
  Init_Box_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Box_l header(::box_msgs::msg::Box::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Box_l(msg_);
  }

private:
  ::box_msgs::msg::Box msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::box_msgs::msg::Box>()
{
  return box_msgs::msg::builder::Init_Box_header();
}

}  // namespace box_msgs

#endif  // BOX_MSGS__MSG__DETAIL__BOX__BUILDER_HPP_
