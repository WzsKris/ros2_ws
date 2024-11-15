// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from core_interfaces:srv/UiMotor.idl
// generated code does not contain a copyright notice

#ifndef CORE_INTERFACES__SRV__DETAIL__UI_MOTOR__TRAITS_HPP_
#define CORE_INTERFACES__SRV__DETAIL__UI_MOTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "core_interfaces/srv/detail/ui_motor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace core_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const UiMotor_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: leg1
  {
    out << "leg1: ";
    rosidl_generator_traits::value_to_yaml(msg.leg1, out);
    out << ", ";
  }

  // member: leg2
  {
    out << "leg2: ";
    rosidl_generator_traits::value_to_yaml(msg.leg2, out);
    out << ", ";
  }

  // member: leg3
  {
    out << "leg3: ";
    rosidl_generator_traits::value_to_yaml(msg.leg3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UiMotor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: leg1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg1: ";
    rosidl_generator_traits::value_to_yaml(msg.leg1, out);
    out << "\n";
  }

  // member: leg2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg2: ";
    rosidl_generator_traits::value_to_yaml(msg.leg2, out);
    out << "\n";
  }

  // member: leg3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg3: ";
    rosidl_generator_traits::value_to_yaml(msg.leg3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UiMotor_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace core_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use core_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const core_interfaces::srv::UiMotor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  core_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use core_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const core_interfaces::srv::UiMotor_Request & msg)
{
  return core_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<core_interfaces::srv::UiMotor_Request>()
{
  return "core_interfaces::srv::UiMotor_Request";
}

template<>
inline const char * name<core_interfaces::srv::UiMotor_Request>()
{
  return "core_interfaces/srv/UiMotor_Request";
}

template<>
struct has_fixed_size<core_interfaces::srv::UiMotor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<core_interfaces::srv::UiMotor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<core_interfaces::srv::UiMotor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace core_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const UiMotor_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: beat
  {
    out << "beat: ";
    rosidl_generator_traits::value_to_yaml(msg.beat, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UiMotor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: beat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beat: ";
    rosidl_generator_traits::value_to_yaml(msg.beat, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UiMotor_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace core_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use core_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const core_interfaces::srv::UiMotor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  core_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use core_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const core_interfaces::srv::UiMotor_Response & msg)
{
  return core_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<core_interfaces::srv::UiMotor_Response>()
{
  return "core_interfaces::srv::UiMotor_Response";
}

template<>
inline const char * name<core_interfaces::srv::UiMotor_Response>()
{
  return "core_interfaces/srv/UiMotor_Response";
}

template<>
struct has_fixed_size<core_interfaces::srv::UiMotor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<core_interfaces::srv::UiMotor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<core_interfaces::srv::UiMotor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<core_interfaces::srv::UiMotor>()
{
  return "core_interfaces::srv::UiMotor";
}

template<>
inline const char * name<core_interfaces::srv::UiMotor>()
{
  return "core_interfaces/srv/UiMotor";
}

template<>
struct has_fixed_size<core_interfaces::srv::UiMotor>
  : std::integral_constant<
    bool,
    has_fixed_size<core_interfaces::srv::UiMotor_Request>::value &&
    has_fixed_size<core_interfaces::srv::UiMotor_Response>::value
  >
{
};

template<>
struct has_bounded_size<core_interfaces::srv::UiMotor>
  : std::integral_constant<
    bool,
    has_bounded_size<core_interfaces::srv::UiMotor_Request>::value &&
    has_bounded_size<core_interfaces::srv::UiMotor_Response>::value
  >
{
};

template<>
struct is_service<core_interfaces::srv::UiMotor>
  : std::true_type
{
};

template<>
struct is_service_request<core_interfaces::srv::UiMotor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<core_interfaces::srv::UiMotor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CORE_INTERFACES__SRV__DETAIL__UI_MOTOR__TRAITS_HPP_
