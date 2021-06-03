// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cmr_msgs:srv/MaxonControlword.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__SRV__DETAIL__MAXON_CONTROLWORD__TRAITS_HPP_
#define CMR_MSGS__SRV__DETAIL__MAXON_CONTROLWORD__TRAITS_HPP_

#include "cmr_msgs/srv/detail/maxon_controlword__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cmr_msgs::srv::MaxonControlword_Request>()
{
  return "cmr_msgs::srv::MaxonControlword_Request";
}

template<>
inline const char * name<cmr_msgs::srv::MaxonControlword_Request>()
{
  return "cmr_msgs/srv/MaxonControlword_Request";
}

template<>
struct has_fixed_size<cmr_msgs::srv::MaxonControlword_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cmr_msgs::srv::MaxonControlword_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cmr_msgs::srv::MaxonControlword_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cmr_msgs::srv::MaxonControlword_Response>()
{
  return "cmr_msgs::srv::MaxonControlword_Response";
}

template<>
inline const char * name<cmr_msgs::srv::MaxonControlword_Response>()
{
  return "cmr_msgs/srv/MaxonControlword_Response";
}

template<>
struct has_fixed_size<cmr_msgs::srv::MaxonControlword_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cmr_msgs::srv::MaxonControlword_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cmr_msgs::srv::MaxonControlword_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cmr_msgs::srv::MaxonControlword>()
{
  return "cmr_msgs::srv::MaxonControlword";
}

template<>
inline const char * name<cmr_msgs::srv::MaxonControlword>()
{
  return "cmr_msgs/srv/MaxonControlword";
}

template<>
struct has_fixed_size<cmr_msgs::srv::MaxonControlword>
  : std::integral_constant<
    bool,
    has_fixed_size<cmr_msgs::srv::MaxonControlword_Request>::value &&
    has_fixed_size<cmr_msgs::srv::MaxonControlword_Response>::value
  >
{
};

template<>
struct has_bounded_size<cmr_msgs::srv::MaxonControlword>
  : std::integral_constant<
    bool,
    has_bounded_size<cmr_msgs::srv::MaxonControlword_Request>::value &&
    has_bounded_size<cmr_msgs::srv::MaxonControlword_Response>::value
  >
{
};

template<>
struct is_service<cmr_msgs::srv::MaxonControlword>
  : std::true_type
{
};

template<>
struct is_service_request<cmr_msgs::srv::MaxonControlword_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cmr_msgs::srv::MaxonControlword_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CMR_MSGS__SRV__DETAIL__MAXON_CONTROLWORD__TRAITS_HPP_
