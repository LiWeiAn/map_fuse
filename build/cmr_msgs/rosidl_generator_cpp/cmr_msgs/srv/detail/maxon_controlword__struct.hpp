// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cmr_msgs:srv/MaxonControlword.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__SRV__DETAIL__MAXON_CONTROLWORD__STRUCT_HPP_
#define CMR_MSGS__SRV__DETAIL__MAXON_CONTROLWORD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cmr_msgs__srv__MaxonControlword_Request __attribute__((deprecated))
#else
# define DEPRECATED__cmr_msgs__srv__MaxonControlword_Request __declspec(deprecated)
#endif

namespace cmr_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MaxonControlword_Request_
{
  using Type = MaxonControlword_Request_<ContainerAllocator>;

  explicit MaxonControlword_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0;
      this->switch_on = false;
      this->enable_voltage = false;
      this->quick_stop = false;
      this->enable_operation = false;
      this->fault_reset = false;
      this->halt = false;
    }
  }

  explicit MaxonControlword_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0;
      this->switch_on = false;
      this->enable_voltage = false;
      this->quick_stop = false;
      this->enable_operation = false;
      this->fault_reset = false;
      this->halt = false;
    }
  }

  // field types and members
  using _node_id_type =
    int8_t;
  _node_id_type node_id;
  using _switch_on_type =
    bool;
  _switch_on_type switch_on;
  using _enable_voltage_type =
    bool;
  _enable_voltage_type enable_voltage;
  using _quick_stop_type =
    bool;
  _quick_stop_type quick_stop;
  using _enable_operation_type =
    bool;
  _enable_operation_type enable_operation;
  using _fault_reset_type =
    bool;
  _fault_reset_type fault_reset;
  using _halt_type =
    bool;
  _halt_type halt;

  // setters for named parameter idiom
  Type & set__node_id(
    const int8_t & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__switch_on(
    const bool & _arg)
  {
    this->switch_on = _arg;
    return *this;
  }
  Type & set__enable_voltage(
    const bool & _arg)
  {
    this->enable_voltage = _arg;
    return *this;
  }
  Type & set__quick_stop(
    const bool & _arg)
  {
    this->quick_stop = _arg;
    return *this;
  }
  Type & set__enable_operation(
    const bool & _arg)
  {
    this->enable_operation = _arg;
    return *this;
  }
  Type & set__fault_reset(
    const bool & _arg)
  {
    this->fault_reset = _arg;
    return *this;
  }
  Type & set__halt(
    const bool & _arg)
  {
    this->halt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cmr_msgs::srv::MaxonControlword_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cmr_msgs::srv::MaxonControlword_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cmr_msgs::srv::MaxonControlword_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cmr_msgs::srv::MaxonControlword_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::srv::MaxonControlword_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::srv::MaxonControlword_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::srv::MaxonControlword_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::srv::MaxonControlword_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cmr_msgs::srv::MaxonControlword_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cmr_msgs::srv::MaxonControlword_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cmr_msgs__srv__MaxonControlword_Request
    std::shared_ptr<cmr_msgs::srv::MaxonControlword_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cmr_msgs__srv__MaxonControlword_Request
    std::shared_ptr<cmr_msgs::srv::MaxonControlword_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MaxonControlword_Request_ & other) const
  {
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->switch_on != other.switch_on) {
      return false;
    }
    if (this->enable_voltage != other.enable_voltage) {
      return false;
    }
    if (this->quick_stop != other.quick_stop) {
      return false;
    }
    if (this->enable_operation != other.enable_operation) {
      return false;
    }
    if (this->fault_reset != other.fault_reset) {
      return false;
    }
    if (this->halt != other.halt) {
      return false;
    }
    return true;
  }
  bool operator!=(const MaxonControlword_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MaxonControlword_Request_

// alias to use template instance with default allocator
using MaxonControlword_Request =
  cmr_msgs::srv::MaxonControlword_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cmr_msgs


#ifndef _WIN32
# define DEPRECATED__cmr_msgs__srv__MaxonControlword_Response __attribute__((deprecated))
#else
# define DEPRECATED__cmr_msgs__srv__MaxonControlword_Response __declspec(deprecated)
#endif

namespace cmr_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MaxonControlword_Response_
{
  using Type = MaxonControlword_Response_<ContainerAllocator>;

  explicit MaxonControlword_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = false;
    }
  }

  explicit MaxonControlword_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = false;
    }
  }

  // field types and members
  using _response_type =
    bool;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const bool & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cmr_msgs::srv::MaxonControlword_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cmr_msgs::srv::MaxonControlword_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cmr_msgs::srv::MaxonControlword_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cmr_msgs::srv::MaxonControlword_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::srv::MaxonControlword_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::srv::MaxonControlword_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::srv::MaxonControlword_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::srv::MaxonControlword_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cmr_msgs::srv::MaxonControlword_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cmr_msgs::srv::MaxonControlword_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cmr_msgs__srv__MaxonControlword_Response
    std::shared_ptr<cmr_msgs::srv::MaxonControlword_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cmr_msgs__srv__MaxonControlword_Response
    std::shared_ptr<cmr_msgs::srv::MaxonControlword_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MaxonControlword_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const MaxonControlword_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MaxonControlword_Response_

// alias to use template instance with default allocator
using MaxonControlword_Response =
  cmr_msgs::srv::MaxonControlword_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cmr_msgs

namespace cmr_msgs
{

namespace srv
{

struct MaxonControlword
{
  using Request = cmr_msgs::srv::MaxonControlword_Request;
  using Response = cmr_msgs::srv::MaxonControlword_Response;
};

}  // namespace srv

}  // namespace cmr_msgs

#endif  // CMR_MSGS__SRV__DETAIL__MAXON_CONTROLWORD__STRUCT_HPP_
