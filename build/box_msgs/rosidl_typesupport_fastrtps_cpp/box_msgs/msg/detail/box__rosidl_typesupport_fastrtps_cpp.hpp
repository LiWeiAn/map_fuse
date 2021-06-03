// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from box_msgs:msg/Box.idl
// generated code does not contain a copyright notice

#ifndef BOX_MSGS__MSG__DETAIL__BOX__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BOX_MSGS__MSG__DETAIL__BOX__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "box_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "box_msgs/msg/detail/box__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace box_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_box_msgs
cdr_serialize(
  const box_msgs::msg::Box & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_box_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  box_msgs::msg::Box & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_box_msgs
get_serialized_size(
  const box_msgs::msg::Box & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_box_msgs
max_serialized_size_Box(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace box_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_box_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, box_msgs, msg, Box)();

#ifdef __cplusplus
}
#endif

#endif  // BOX_MSGS__MSG__DETAIL__BOX__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
