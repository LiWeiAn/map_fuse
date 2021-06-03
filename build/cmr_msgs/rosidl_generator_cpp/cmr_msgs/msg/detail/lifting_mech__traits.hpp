// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cmr_msgs:msg/LiftingMech.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__MSG__DETAIL__LIFTING_MECH__TRAITS_HPP_
#define CMR_MSGS__MSG__DETAIL__LIFTING_MECH__TRAITS_HPP_

#include "cmr_msgs/msg/detail/lifting_mech__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cmr_msgs::msg::LiftingMech>()
{
  return "cmr_msgs::msg::LiftingMech";
}

template<>
inline const char * name<cmr_msgs::msg::LiftingMech>()
{
  return "cmr_msgs/msg/LiftingMech";
}

template<>
struct has_fixed_size<cmr_msgs::msg::LiftingMech>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<cmr_msgs::msg::LiftingMech>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<cmr_msgs::msg::LiftingMech>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CMR_MSGS__MSG__DETAIL__LIFTING_MECH__TRAITS_HPP_
