// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cmr_msgs:msg/MaxonStatus.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__MSG__DETAIL__MAXON_STATUS__BUILDER_HPP_
#define CMR_MSGS__MSG__DETAIL__MAXON_STATUS__BUILDER_HPP_

#include "cmr_msgs/msg/detail/maxon_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cmr_msgs
{

namespace msg
{

namespace builder
{

class Init_MaxonStatus_error_history
{
public:
  explicit Init_MaxonStatus_error_history(::cmr_msgs::msg::MaxonStatus & msg)
  : msg_(msg)
  {}
  ::cmr_msgs::msg::MaxonStatus error_history(::cmr_msgs::msg::MaxonStatus::_error_history_type arg)
  {
    msg_.error_history = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cmr_msgs::msg::MaxonStatus msg_;
};

class Init_MaxonStatus_error
{
public:
  explicit Init_MaxonStatus_error(::cmr_msgs::msg::MaxonStatus & msg)
  : msg_(msg)
  {}
  Init_MaxonStatus_error_history error(::cmr_msgs::msg::MaxonStatus::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_MaxonStatus_error_history(msg_);
  }

private:
  ::cmr_msgs::msg::MaxonStatus msg_;
};

class Init_MaxonStatus_sense_vel_avg
{
public:
  explicit Init_MaxonStatus_sense_vel_avg(::cmr_msgs::msg::MaxonStatus & msg)
  : msg_(msg)
  {}
  Init_MaxonStatus_error sense_vel_avg(::cmr_msgs::msg::MaxonStatus::_sense_vel_avg_type arg)
  {
    msg_.sense_vel_avg = std::move(arg);
    return Init_MaxonStatus_error(msg_);
  }

private:
  ::cmr_msgs::msg::MaxonStatus msg_;
};

class Init_MaxonStatus_sense_vel_act
{
public:
  explicit Init_MaxonStatus_sense_vel_act(::cmr_msgs::msg::MaxonStatus & msg)
  : msg_(msg)
  {}
  Init_MaxonStatus_sense_vel_avg sense_vel_act(::cmr_msgs::msg::MaxonStatus::_sense_vel_act_type arg)
  {
    msg_.sense_vel_act = std::move(arg);
    return Init_MaxonStatus_sense_vel_avg(msg_);
  }

private:
  ::cmr_msgs::msg::MaxonStatus msg_;
};

class Init_MaxonStatus_current_act_avg
{
public:
  explicit Init_MaxonStatus_current_act_avg(::cmr_msgs::msg::MaxonStatus & msg)
  : msg_(msg)
  {}
  Init_MaxonStatus_sense_vel_act current_act_avg(::cmr_msgs::msg::MaxonStatus::_current_act_avg_type arg)
  {
    msg_.current_act_avg = std::move(arg);
    return Init_MaxonStatus_sense_vel_act(msg_);
  }

private:
  ::cmr_msgs::msg::MaxonStatus msg_;
};

class Init_MaxonStatus_current_act
{
public:
  explicit Init_MaxonStatus_current_act(::cmr_msgs::msg::MaxonStatus & msg)
  : msg_(msg)
  {}
  Init_MaxonStatus_current_act_avg current_act(::cmr_msgs::msg::MaxonStatus::_current_act_type arg)
  {
    msg_.current_act = std::move(arg);
    return Init_MaxonStatus_current_act_avg(msg_);
  }

private:
  ::cmr_msgs::msg::MaxonStatus msg_;
};

class Init_MaxonStatus_current_dem
{
public:
  explicit Init_MaxonStatus_current_dem(::cmr_msgs::msg::MaxonStatus & msg)
  : msg_(msg)
  {}
  Init_MaxonStatus_current_act current_dem(::cmr_msgs::msg::MaxonStatus::_current_dem_type arg)
  {
    msg_.current_dem = std::move(arg);
    return Init_MaxonStatus_current_act(msg_);
  }

private:
  ::cmr_msgs::msg::MaxonStatus msg_;
};

class Init_MaxonStatus_i2t_level_motor
{
public:
  explicit Init_MaxonStatus_i2t_level_motor(::cmr_msgs::msg::MaxonStatus & msg)
  : msg_(msg)
  {}
  Init_MaxonStatus_current_dem i2t_level_motor(::cmr_msgs::msg::MaxonStatus::_i2t_level_motor_type arg)
  {
    msg_.i2t_level_motor = std::move(arg);
    return Init_MaxonStatus_current_dem(msg_);
  }

private:
  ::cmr_msgs::msg::MaxonStatus msg_;
};

class Init_MaxonStatus_i2t_level_cont
{
public:
  explicit Init_MaxonStatus_i2t_level_cont(::cmr_msgs::msg::MaxonStatus & msg)
  : msg_(msg)
  {}
  Init_MaxonStatus_i2t_level_motor i2t_level_cont(::cmr_msgs::msg::MaxonStatus::_i2t_level_cont_type arg)
  {
    msg_.i2t_level_cont = std::move(arg);
    return Init_MaxonStatus_i2t_level_motor(msg_);
  }

private:
  ::cmr_msgs::msg::MaxonStatus msg_;
};

class Init_MaxonStatus_voltage
{
public:
  explicit Init_MaxonStatus_voltage(::cmr_msgs::msg::MaxonStatus & msg)
  : msg_(msg)
  {}
  Init_MaxonStatus_i2t_level_cont voltage(::cmr_msgs::msg::MaxonStatus::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_MaxonStatus_i2t_level_cont(msg_);
  }

private:
  ::cmr_msgs::msg::MaxonStatus msg_;
};

class Init_MaxonStatus_torque_act_avg
{
public:
  explicit Init_MaxonStatus_torque_act_avg(::cmr_msgs::msg::MaxonStatus & msg)
  : msg_(msg)
  {}
  Init_MaxonStatus_voltage torque_act_avg(::cmr_msgs::msg::MaxonStatus::_torque_act_avg_type arg)
  {
    msg_.torque_act_avg = std::move(arg);
    return Init_MaxonStatus_voltage(msg_);
  }

private:
  ::cmr_msgs::msg::MaxonStatus msg_;
};

class Init_MaxonStatus_velocity_act
{
public:
  explicit Init_MaxonStatus_velocity_act(::cmr_msgs::msg::MaxonStatus & msg)
  : msg_(msg)
  {}
  Init_MaxonStatus_torque_act_avg velocity_act(::cmr_msgs::msg::MaxonStatus::_velocity_act_type arg)
  {
    msg_.velocity_act = std::move(arg);
    return Init_MaxonStatus_torque_act_avg(msg_);
  }

private:
  ::cmr_msgs::msg::MaxonStatus msg_;
};

class Init_MaxonStatus_velocity_dem
{
public:
  explicit Init_MaxonStatus_velocity_dem(::cmr_msgs::msg::MaxonStatus & msg)
  : msg_(msg)
  {}
  Init_MaxonStatus_velocity_act velocity_dem(::cmr_msgs::msg::MaxonStatus::_velocity_dem_type arg)
  {
    msg_.velocity_dem = std::move(arg);
    return Init_MaxonStatus_velocity_act(msg_);
  }

private:
  ::cmr_msgs::msg::MaxonStatus msg_;
};

class Init_MaxonStatus_device_state
{
public:
  explicit Init_MaxonStatus_device_state(::cmr_msgs::msg::MaxonStatus & msg)
  : msg_(msg)
  {}
  Init_MaxonStatus_velocity_dem device_state(::cmr_msgs::msg::MaxonStatus::_device_state_type arg)
  {
    msg_.device_state = std::move(arg);
    return Init_MaxonStatus_velocity_dem(msg_);
  }

private:
  ::cmr_msgs::msg::MaxonStatus msg_;
};

class Init_MaxonStatus_header
{
public:
  Init_MaxonStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MaxonStatus_device_state header(::cmr_msgs::msg::MaxonStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MaxonStatus_device_state(msg_);
  }

private:
  ::cmr_msgs::msg::MaxonStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cmr_msgs::msg::MaxonStatus>()
{
  return cmr_msgs::msg::builder::Init_MaxonStatus_header();
}

}  // namespace cmr_msgs

#endif  // CMR_MSGS__MSG__DETAIL__MAXON_STATUS__BUILDER_HPP_
