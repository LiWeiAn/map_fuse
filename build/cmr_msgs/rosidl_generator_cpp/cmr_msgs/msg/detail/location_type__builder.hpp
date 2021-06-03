// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cmr_msgs:msg/LocationType.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__MSG__DETAIL__LOCATION_TYPE__BUILDER_HPP_
#define CMR_MSGS__MSG__DETAIL__LOCATION_TYPE__BUILDER_HPP_

#include "cmr_msgs/msg/detail/location_type__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cmr_msgs
{

namespace msg
{

namespace builder
{

class Init_LocationType_pose
{
public:
  explicit Init_LocationType_pose(::cmr_msgs::msg::LocationType & msg)
  : msg_(msg)
  {}
  ::cmr_msgs::msg::LocationType pose(::cmr_msgs::msg::LocationType::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cmr_msgs::msg::LocationType msg_;
};

class Init_LocationType_destination_type
{
public:
  explicit Init_LocationType_destination_type(::cmr_msgs::msg::LocationType & msg)
  : msg_(msg)
  {}
  Init_LocationType_pose destination_type(::cmr_msgs::msg::LocationType::_destination_type_type arg)
  {
    msg_.destination_type = std::move(arg);
    return Init_LocationType_pose(msg_);
  }

private:
  ::cmr_msgs::msg::LocationType msg_;
};

class Init_LocationType_header
{
public:
  Init_LocationType_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocationType_destination_type header(::cmr_msgs::msg::LocationType::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LocationType_destination_type(msg_);
  }

private:
  ::cmr_msgs::msg::LocationType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cmr_msgs::msg::LocationType>()
{
  return cmr_msgs::msg::builder::Init_LocationType_header();
}

}  // namespace cmr_msgs

#endif  // CMR_MSGS__MSG__DETAIL__LOCATION_TYPE__BUILDER_HPP_
