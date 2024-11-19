// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from core_interfaces:srv/UiMotor.idl
// generated code does not contain a copyright notice

#ifndef CORE_INTERFACES__SRV__DETAIL__UI_MOTOR__BUILDER_HPP_
#define CORE_INTERFACES__SRV__DETAIL__UI_MOTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "core_interfaces/srv/detail/ui_motor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace core_interfaces
{

namespace srv
{

namespace builder
{

class Init_UiMotor_Request_leg3
{
public:
  explicit Init_UiMotor_Request_leg3(::core_interfaces::srv::UiMotor_Request & msg)
  : msg_(msg)
  {}
  ::core_interfaces::srv::UiMotor_Request leg3(::core_interfaces::srv::UiMotor_Request::_leg3_type arg)
  {
    msg_.leg3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::core_interfaces::srv::UiMotor_Request msg_;
};

class Init_UiMotor_Request_leg2
{
public:
  explicit Init_UiMotor_Request_leg2(::core_interfaces::srv::UiMotor_Request & msg)
  : msg_(msg)
  {}
  Init_UiMotor_Request_leg3 leg2(::core_interfaces::srv::UiMotor_Request::_leg2_type arg)
  {
    msg_.leg2 = std::move(arg);
    return Init_UiMotor_Request_leg3(msg_);
  }

private:
  ::core_interfaces::srv::UiMotor_Request msg_;
};

class Init_UiMotor_Request_leg1
{
public:
  Init_UiMotor_Request_leg1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UiMotor_Request_leg2 leg1(::core_interfaces::srv::UiMotor_Request::_leg1_type arg)
  {
    msg_.leg1 = std::move(arg);
    return Init_UiMotor_Request_leg2(msg_);
  }

private:
  ::core_interfaces::srv::UiMotor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::core_interfaces::srv::UiMotor_Request>()
{
  return core_interfaces::srv::builder::Init_UiMotor_Request_leg1();
}

}  // namespace core_interfaces


namespace core_interfaces
{

namespace srv
{

namespace builder
{

class Init_UiMotor_Response_beat
{
public:
  Init_UiMotor_Response_beat()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::core_interfaces::srv::UiMotor_Response beat(::core_interfaces::srv::UiMotor_Response::_beat_type arg)
  {
    msg_.beat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::core_interfaces::srv::UiMotor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::core_interfaces::srv::UiMotor_Response>()
{
  return core_interfaces::srv::builder::Init_UiMotor_Response_beat();
}

}  // namespace core_interfaces

#endif  // CORE_INTERFACES__SRV__DETAIL__UI_MOTOR__BUILDER_HPP_
