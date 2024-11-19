// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from core_interfaces:srv/UiMotor.idl
// generated code does not contain a copyright notice

#ifndef CORE_INTERFACES__SRV__DETAIL__UI_MOTOR__STRUCT_HPP_
#define CORE_INTERFACES__SRV__DETAIL__UI_MOTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__core_interfaces__srv__UiMotor_Request __attribute__((deprecated))
#else
# define DEPRECATED__core_interfaces__srv__UiMotor_Request __declspec(deprecated)
#endif

namespace core_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UiMotor_Request_
{
  using Type = UiMotor_Request_<ContainerAllocator>;

  explicit UiMotor_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->leg1 = 0;
      this->leg2 = 0;
      this->leg3 = 0;
    }
  }

  explicit UiMotor_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->leg1 = 0;
      this->leg2 = 0;
      this->leg3 = 0;
    }
  }

  // field types and members
  using _leg1_type =
    uint8_t;
  _leg1_type leg1;
  using _leg2_type =
    uint8_t;
  _leg2_type leg2;
  using _leg3_type =
    uint8_t;
  _leg3_type leg3;

  // setters for named parameter idiom
  Type & set__leg1(
    const uint8_t & _arg)
  {
    this->leg1 = _arg;
    return *this;
  }
  Type & set__leg2(
    const uint8_t & _arg)
  {
    this->leg2 = _arg;
    return *this;
  }
  Type & set__leg3(
    const uint8_t & _arg)
  {
    this->leg3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    core_interfaces::srv::UiMotor_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const core_interfaces::srv::UiMotor_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<core_interfaces::srv::UiMotor_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<core_interfaces::srv::UiMotor_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      core_interfaces::srv::UiMotor_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<core_interfaces::srv::UiMotor_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      core_interfaces::srv::UiMotor_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<core_interfaces::srv::UiMotor_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<core_interfaces::srv::UiMotor_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<core_interfaces::srv::UiMotor_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__core_interfaces__srv__UiMotor_Request
    std::shared_ptr<core_interfaces::srv::UiMotor_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__core_interfaces__srv__UiMotor_Request
    std::shared_ptr<core_interfaces::srv::UiMotor_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UiMotor_Request_ & other) const
  {
    if (this->leg1 != other.leg1) {
      return false;
    }
    if (this->leg2 != other.leg2) {
      return false;
    }
    if (this->leg3 != other.leg3) {
      return false;
    }
    return true;
  }
  bool operator!=(const UiMotor_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UiMotor_Request_

// alias to use template instance with default allocator
using UiMotor_Request =
  core_interfaces::srv::UiMotor_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace core_interfaces


#ifndef _WIN32
# define DEPRECATED__core_interfaces__srv__UiMotor_Response __attribute__((deprecated))
#else
# define DEPRECATED__core_interfaces__srv__UiMotor_Response __declspec(deprecated)
#endif

namespace core_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UiMotor_Response_
{
  using Type = UiMotor_Response_<ContainerAllocator>;

  explicit UiMotor_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->beat = 0;
    }
  }

  explicit UiMotor_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->beat = 0;
    }
  }

  // field types and members
  using _beat_type =
    uint8_t;
  _beat_type beat;

  // setters for named parameter idiom
  Type & set__beat(
    const uint8_t & _arg)
  {
    this->beat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    core_interfaces::srv::UiMotor_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const core_interfaces::srv::UiMotor_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<core_interfaces::srv::UiMotor_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<core_interfaces::srv::UiMotor_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      core_interfaces::srv::UiMotor_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<core_interfaces::srv::UiMotor_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      core_interfaces::srv::UiMotor_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<core_interfaces::srv::UiMotor_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<core_interfaces::srv::UiMotor_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<core_interfaces::srv::UiMotor_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__core_interfaces__srv__UiMotor_Response
    std::shared_ptr<core_interfaces::srv::UiMotor_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__core_interfaces__srv__UiMotor_Response
    std::shared_ptr<core_interfaces::srv::UiMotor_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UiMotor_Response_ & other) const
  {
    if (this->beat != other.beat) {
      return false;
    }
    return true;
  }
  bool operator!=(const UiMotor_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UiMotor_Response_

// alias to use template instance with default allocator
using UiMotor_Response =
  core_interfaces::srv::UiMotor_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace core_interfaces

namespace core_interfaces
{

namespace srv
{

struct UiMotor
{
  using Request = core_interfaces::srv::UiMotor_Request;
  using Response = core_interfaces::srv::UiMotor_Response;
};

}  // namespace srv

}  // namespace core_interfaces

#endif  // CORE_INTERFACES__SRV__DETAIL__UI_MOTOR__STRUCT_HPP_
