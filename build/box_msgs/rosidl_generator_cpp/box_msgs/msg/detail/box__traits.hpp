// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from box_msgs:msg/Box.idl
// generated code does not contain a copyright notice

#ifndef BOX_MSGS__MSG__DETAIL__BOX__TRAITS_HPP_
#define BOX_MSGS__MSG__DETAIL__BOX__TRAITS_HPP_

#include "box_msgs/msg/detail/box__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<box_msgs::msg::Box>()
{
  return "box_msgs::msg::Box";
}

template<>
inline const char * name<box_msgs::msg::Box>()
{
  return "box_msgs/msg/Box";
}

template<>
struct has_fixed_size<box_msgs::msg::Box>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<box_msgs::msg::Box>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<box_msgs::msg::Box>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOX_MSGS__MSG__DETAIL__BOX__TRAITS_HPP_
