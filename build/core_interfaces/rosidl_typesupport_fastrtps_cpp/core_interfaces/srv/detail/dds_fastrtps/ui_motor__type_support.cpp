// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from core_interfaces:srv/UiMotor.idl
// generated code does not contain a copyright notice
#include "core_interfaces/srv/detail/ui_motor__rosidl_typesupport_fastrtps_cpp.hpp"
#include "core_interfaces/srv/detail/ui_motor__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace core_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_core_interfaces
cdr_serialize(
  const core_interfaces::srv::UiMotor_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: leg1
  cdr << ros_message.leg1;
  // Member: leg2
  cdr << ros_message.leg2;
  // Member: leg3
  cdr << ros_message.leg3;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_core_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  core_interfaces::srv::UiMotor_Request & ros_message)
{
  // Member: leg1
  cdr >> ros_message.leg1;

  // Member: leg2
  cdr >> ros_message.leg2;

  // Member: leg3
  cdr >> ros_message.leg3;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_core_interfaces
get_serialized_size(
  const core_interfaces::srv::UiMotor_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: leg1
  {
    size_t item_size = sizeof(ros_message.leg1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: leg2
  {
    size_t item_size = sizeof(ros_message.leg2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: leg3
  {
    size_t item_size = sizeof(ros_message.leg3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_core_interfaces
max_serialized_size_UiMotor_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: leg1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: leg2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: leg3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = core_interfaces::srv::UiMotor_Request;
    is_plain =
      (
      offsetof(DataType, leg3) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _UiMotor_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const core_interfaces::srv::UiMotor_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UiMotor_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<core_interfaces::srv::UiMotor_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UiMotor_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const core_interfaces::srv::UiMotor_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UiMotor_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_UiMotor_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _UiMotor_Request__callbacks = {
  "core_interfaces::srv",
  "UiMotor_Request",
  _UiMotor_Request__cdr_serialize,
  _UiMotor_Request__cdr_deserialize,
  _UiMotor_Request__get_serialized_size,
  _UiMotor_Request__max_serialized_size
};

static rosidl_message_type_support_t _UiMotor_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_UiMotor_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace core_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_core_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<core_interfaces::srv::UiMotor_Request>()
{
  return &core_interfaces::srv::typesupport_fastrtps_cpp::_UiMotor_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, core_interfaces, srv, UiMotor_Request)() {
  return &core_interfaces::srv::typesupport_fastrtps_cpp::_UiMotor_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace core_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_core_interfaces
cdr_serialize(
  const core_interfaces::srv::UiMotor_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: beat
  cdr << ros_message.beat;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_core_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  core_interfaces::srv::UiMotor_Response & ros_message)
{
  // Member: beat
  cdr >> ros_message.beat;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_core_interfaces
get_serialized_size(
  const core_interfaces::srv::UiMotor_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: beat
  {
    size_t item_size = sizeof(ros_message.beat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_core_interfaces
max_serialized_size_UiMotor_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: beat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = core_interfaces::srv::UiMotor_Response;
    is_plain =
      (
      offsetof(DataType, beat) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _UiMotor_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const core_interfaces::srv::UiMotor_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UiMotor_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<core_interfaces::srv::UiMotor_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UiMotor_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const core_interfaces::srv::UiMotor_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UiMotor_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_UiMotor_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _UiMotor_Response__callbacks = {
  "core_interfaces::srv",
  "UiMotor_Response",
  _UiMotor_Response__cdr_serialize,
  _UiMotor_Response__cdr_deserialize,
  _UiMotor_Response__get_serialized_size,
  _UiMotor_Response__max_serialized_size
};

static rosidl_message_type_support_t _UiMotor_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_UiMotor_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace core_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_core_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<core_interfaces::srv::UiMotor_Response>()
{
  return &core_interfaces::srv::typesupport_fastrtps_cpp::_UiMotor_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, core_interfaces, srv, UiMotor_Response)() {
  return &core_interfaces::srv::typesupport_fastrtps_cpp::_UiMotor_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace core_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _UiMotor__callbacks = {
  "core_interfaces::srv",
  "UiMotor",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, core_interfaces, srv, UiMotor_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, core_interfaces, srv, UiMotor_Response)(),
};

static rosidl_service_type_support_t _UiMotor__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_UiMotor__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace core_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_core_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<core_interfaces::srv::UiMotor>()
{
  return &core_interfaces::srv::typesupport_fastrtps_cpp::_UiMotor__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, core_interfaces, srv, UiMotor)() {
  return &core_interfaces::srv::typesupport_fastrtps_cpp::_UiMotor__handle;
}

#ifdef __cplusplus
}
#endif
