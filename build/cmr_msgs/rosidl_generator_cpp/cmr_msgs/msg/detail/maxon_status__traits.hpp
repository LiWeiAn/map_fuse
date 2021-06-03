// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cmr_msgs:msg/MaxonStatus.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__MSG__DETAIL__MAXON_STATUS__TRAITS_HPP_
#define CMR_MSGS__MSG__DETAIL__MAXON_STATUS__TRAITS_HPP_

#include "cmr_msgs/msg/detail/maxon_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cmr_msgs::msg::MaxonStatus>()
{
  return "cmr_msgs::msg::MaxonStatus";
}

template<>
inline const char * name<cmr_msgs::msg::MaxonStatus>()
{
  return "cmr_msgs/msg/MaxonStatus";
}

template<>
struct has_fixed_size<cmr_msgs::msg::MaxonStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cmr_msgs::msg::MaxonStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cmr_msgs::msg::MaxonStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CMR_MSGS__MSG__DETAIL__MAXON_STATUS__TRAITS_HPP_
