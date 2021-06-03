// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cmr_msgs:srv/SignalTask.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__SRV__DETAIL__SIGNAL_TASK__BUILDER_HPP_
#define CMR_MSGS__SRV__DETAIL__SIGNAL_TASK__BUILDER_HPP_

#include "cmr_msgs/srv/detail/signal_task__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cmr_msgs
{

namespace srv
{

namespace builder
{

class Init_SignalTask_Request_request
{
public:
  Init_SignalTask_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cmr_msgs::srv::SignalTask_Request request(::cmr_msgs::srv::SignalTask_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cmr_msgs::srv::SignalTask_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cmr_msgs::srv::SignalTask_Request>()
{
  return cmr_msgs::srv::builder::Init_SignalTask_Request_request();
}

}  // namespace cmr_msgs


namespace cmr_msgs
{

namespace srv
{

namespace builder
{

class Init_SignalTask_Response_response
{
public:
  Init_SignalTask_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cmr_msgs::srv::SignalTask_Response response(::cmr_msgs::srv::SignalTask_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cmr_msgs::srv::SignalTask_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cmr_msgs::srv::SignalTask_Response>()
{
  return cmr_msgs::srv::builder::Init_SignalTask_Response_response();
}

}  // namespace cmr_msgs

#endif  // CMR_MSGS__SRV__DETAIL__SIGNAL_TASK__BUILDER_HPP_
