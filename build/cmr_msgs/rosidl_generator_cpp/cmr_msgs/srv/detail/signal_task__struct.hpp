// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cmr_msgs:srv/SignalTask.idl
// generated code does not contain a copyright notice

#ifndef CMR_MSGS__SRV__DETAIL__SIGNAL_TASK__STRUCT_HPP_
#define CMR_MSGS__SRV__DETAIL__SIGNAL_TASK__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'request'
#include "std_msgs/msg/detail/empty__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cmr_msgs__srv__SignalTask_Request __attribute__((deprecated))
#else
# define DEPRECATED__cmr_msgs__srv__SignalTask_Request __declspec(deprecated)
#endif

namespace cmr_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SignalTask_Request_
{
  using Type = SignalTask_Request_<ContainerAllocator>;

  explicit SignalTask_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init)
  {
    (void)_init;
  }

  explicit SignalTask_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _request_type =
    std_msgs::msg::Empty_<ContainerAllocator>;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const std_msgs::msg::Empty_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cmr_msgs::srv::SignalTask_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cmr_msgs::srv::SignalTask_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cmr_msgs::srv::SignalTask_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cmr_msgs::srv::SignalTask_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::srv::SignalTask_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::srv::SignalTask_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::srv::SignalTask_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::srv::SignalTask_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cmr_msgs::srv::SignalTask_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cmr_msgs::srv::SignalTask_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cmr_msgs__srv__SignalTask_Request
    std::shared_ptr<cmr_msgs::srv::SignalTask_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cmr_msgs__srv__SignalTask_Request
    std::shared_ptr<cmr_msgs::srv::SignalTask_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SignalTask_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const SignalTask_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SignalTask_Request_

// alias to use template instance with default allocator
using SignalTask_Request =
  cmr_msgs::srv::SignalTask_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cmr_msgs


// Include directives for member types
// Member 'response'
// already included above
// #include "std_msgs/msg/detail/empty__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cmr_msgs__srv__SignalTask_Response __attribute__((deprecated))
#else
# define DEPRECATED__cmr_msgs__srv__SignalTask_Response __declspec(deprecated)
#endif

namespace cmr_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SignalTask_Response_
{
  using Type = SignalTask_Response_<ContainerAllocator>;

  explicit SignalTask_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    (void)_init;
  }

  explicit SignalTask_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _response_type =
    std_msgs::msg::Empty_<ContainerAllocator>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const std_msgs::msg::Empty_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cmr_msgs::srv::SignalTask_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cmr_msgs::srv::SignalTask_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cmr_msgs::srv::SignalTask_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cmr_msgs::srv::SignalTask_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::srv::SignalTask_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::srv::SignalTask_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cmr_msgs::srv::SignalTask_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cmr_msgs::srv::SignalTask_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cmr_msgs::srv::SignalTask_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cmr_msgs::srv::SignalTask_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cmr_msgs__srv__SignalTask_Response
    std::shared_ptr<cmr_msgs::srv::SignalTask_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cmr_msgs__srv__SignalTask_Response
    std::shared_ptr<cmr_msgs::srv::SignalTask_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SignalTask_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SignalTask_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SignalTask_Response_

// alias to use template instance with default allocator
using SignalTask_Response =
  cmr_msgs::srv::SignalTask_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cmr_msgs

namespace cmr_msgs
{

namespace srv
{

struct SignalTask
{
  using Request = cmr_msgs::srv::SignalTask_Request;
  using Response = cmr_msgs::srv::SignalTask_Response;
};

}  // namespace srv

}  // namespace cmr_msgs

#endif  // CMR_MSGS__SRV__DETAIL__SIGNAL_TASK__STRUCT_HPP_
