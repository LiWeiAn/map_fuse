// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cmr_msgs:srv/SignalTask.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__SRV__DETAIL__SIGNAL_TASK__TRAITS_HPP_
#define CMR_MSGS__SRV__DETAIL__SIGNAL_TASK__TRAITS_HPP_

#include "cmr_msgs/srv/detail/signal_task__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'request'
#include "std_msgs/msg/detail/empty__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cmr_msgs::srv::SignalTask_Request>()
{
  return "cmr_msgs::srv::SignalTask_Request";
}

template<>
inline const char * name<cmr_msgs::srv::SignalTask_Request>()
{
  return "cmr_msgs/srv/SignalTask_Request";
}

template<>
struct has_fixed_size<cmr_msgs::srv::SignalTask_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Empty>::value> {};

template<>
struct has_bounded_size<cmr_msgs::srv::SignalTask_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Empty>::value> {};

template<>
struct is_message<cmr_msgs::srv::SignalTask_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'response'
// already included above
// #include "std_msgs/msg/detail/empty__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cmr_msgs::srv::SignalTask_Response>()
{
  return "cmr_msgs::srv::SignalTask_Response";
}

template<>
inline const char * name<cmr_msgs::srv::SignalTask_Response>()
{
  return "cmr_msgs/srv/SignalTask_Response";
}

template<>
struct has_fixed_size<cmr_msgs::srv::SignalTask_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Empty>::value> {};

template<>
struct has_bounded_size<cmr_msgs::srv::SignalTask_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Empty>::value> {};

template<>
struct is_message<cmr_msgs::srv::SignalTask_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cmr_msgs::srv::SignalTask>()
{
  return "cmr_msgs::srv::SignalTask";
}

template<>
inline const char * name<cmr_msgs::srv::SignalTask>()
{
  return "cmr_msgs/srv/SignalTask";
}

template<>
struct has_fixed_size<cmr_msgs::srv::SignalTask>
  : std::integral_constant<
    bool,
    has_fixed_size<cmr_msgs::srv::SignalTask_Request>::value &&
    has_fixed_size<cmr_msgs::srv::SignalTask_Response>::value
  >
{
};

template<>
struct has_bounded_size<cmr_msgs::srv::SignalTask>
  : std::integral_constant<
    bool,
    has_bounded_size<cmr_msgs::srv::SignalTask_Request>::value &&
    has_bounded_size<cmr_msgs::srv::SignalTask_Response>::value
  >
{
};

template<>
struct is_service<cmr_msgs::srv::SignalTask>
  : std::true_type
{
};

template<>
struct is_service_request<cmr_msgs::srv::SignalTask_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cmr_msgs::srv::SignalTask_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CMR_MSGS__SRV__DETAIL__SIGNAL_TASK__TRAITS_HPP_
