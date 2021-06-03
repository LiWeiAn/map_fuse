// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cmr_msgs:srv/MaxonControlword.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__SRV__DETAIL__MAXON_CONTROLWORD__BUILDER_HPP_
#define CMR_MSGS__SRV__DETAIL__MAXON_CONTROLWORD__BUILDER_HPP_

#include "cmr_msgs/srv/detail/maxon_controlword__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cmr_msgs
{

namespace srv
{

namespace builder
{

class Init_MaxonControlword_Request_halt
{
public:
  explicit Init_MaxonControlword_Request_halt(::cmr_msgs::srv::MaxonControlword_Request & msg)
  : msg_(msg)
  {}
  ::cmr_msgs::srv::MaxonControlword_Request halt(::cmr_msgs::srv::MaxonControlword_Request::_halt_type arg)
  {
    msg_.halt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cmr_msgs::srv::MaxonControlword_Request msg_;
};

class Init_MaxonControlword_Request_fault_reset
{
public:
  explicit Init_MaxonControlword_Request_fault_reset(::cmr_msgs::srv::MaxonControlword_Request & msg)
  : msg_(msg)
  {}
  Init_MaxonControlword_Request_halt fault_reset(::cmr_msgs::srv::MaxonControlword_Request::_fault_reset_type arg)
  {
    msg_.fault_reset = std::move(arg);
    return Init_MaxonControlword_Request_halt(msg_);
  }

private:
  ::cmr_msgs::srv::MaxonControlword_Request msg_;
};

class Init_MaxonControlword_Request_enable_operation
{
public:
  explicit Init_MaxonControlword_Request_enable_operation(::cmr_msgs::srv::MaxonControlword_Request & msg)
  : msg_(msg)
  {}
  Init_MaxonControlword_Request_fault_reset enable_operation(::cmr_msgs::srv::MaxonControlword_Request::_enable_operation_type arg)
  {
    msg_.enable_operation = std::move(arg);
    return Init_MaxonControlword_Request_fault_reset(msg_);
  }

private:
  ::cmr_msgs::srv::MaxonControlword_Request msg_;
};

class Init_MaxonControlword_Request_quick_stop
{
public:
  explicit Init_MaxonControlword_Request_quick_stop(::cmr_msgs::srv::MaxonControlword_Request & msg)
  : msg_(msg)
  {}
  Init_MaxonControlword_Request_enable_operation quick_stop(::cmr_msgs::srv::MaxonControlword_Request::_quick_stop_type arg)
  {
    msg_.quick_stop = std::move(arg);
    return Init_MaxonControlword_Request_enable_operation(msg_);
  }

private:
  ::cmr_msgs::srv::MaxonControlword_Request msg_;
};

class Init_MaxonControlword_Request_enable_voltage
{
public:
  explicit Init_MaxonControlword_Request_enable_voltage(::cmr_msgs::srv::MaxonControlword_Request & msg)
  : msg_(msg)
  {}
  Init_MaxonControlword_Request_quick_stop enable_voltage(::cmr_msgs::srv::MaxonControlword_Request::_enable_voltage_type arg)
  {
    msg_.enable_voltage = std::move(arg);
    return Init_MaxonControlword_Request_quick_stop(msg_);
  }

private:
  ::cmr_msgs::srv::MaxonControlword_Request msg_;
};

class Init_MaxonControlword_Request_switch_on
{
public:
  explicit Init_MaxonControlword_Request_switch_on(::cmr_msgs::srv::MaxonControlword_Request & msg)
  : msg_(msg)
  {}
  Init_MaxonControlword_Request_enable_voltage switch_on(::cmr_msgs::srv::MaxonControlword_Request::_switch_on_type arg)
  {
    msg_.switch_on = std::move(arg);
    return Init_MaxonControlword_Request_enable_voltage(msg_);
  }

private:
  ::cmr_msgs::srv::MaxonControlword_Request msg_;
};

class Init_MaxonControlword_Request_node_id
{
public:
  Init_MaxonControlword_Request_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MaxonControlword_Request_switch_on node_id(::cmr_msgs::srv::MaxonControlword_Request::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_MaxonControlword_Request_switch_on(msg_);
  }

private:
  ::cmr_msgs::srv::MaxonControlword_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cmr_msgs::srv::MaxonControlword_Request>()
{
  return cmr_msgs::srv::builder::Init_MaxonControlword_Request_node_id();
}

}  // namespace cmr_msgs


namespace cmr_msgs
{

namespace srv
{

namespace builder
{

class Init_MaxonControlword_Response_response
{
public:
  Init_MaxonControlword_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cmr_msgs::srv::MaxonControlword_Response response(::cmr_msgs::srv::MaxonControlword_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cmr_msgs::srv::MaxonControlword_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cmr_msgs::srv::MaxonControlword_Response>()
{
  return cmr_msgs::srv::builder::Init_MaxonControlword_Response_response();
}

}  // namespace cmr_msgs

#endif  // CMR_MSGS__SRV__DETAIL__MAXON_CONTROLWORD__BUILDER_HPP_
