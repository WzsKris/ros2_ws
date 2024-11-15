// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from core_interfaces:srv/UiMotor.idl
// generated code does not contain a copyright notice
#include "core_interfaces/srv/detail/ui_motor__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "core_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "core_interfaces/srv/detail/ui_motor__struct.h"
#include "core_interfaces/srv/detail/ui_motor__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _UiMotor_Request__ros_msg_type = core_interfaces__srv__UiMotor_Request;

static bool _UiMotor_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UiMotor_Request__ros_msg_type * ros_message = static_cast<const _UiMotor_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: leg1
  {
    cdr << ros_message->leg1;
  }

  // Field name: leg2
  {
    cdr << ros_message->leg2;
  }

  // Field name: leg3
  {
    cdr << ros_message->leg3;
  }

  return true;
}

static bool _UiMotor_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UiMotor_Request__ros_msg_type * ros_message = static_cast<_UiMotor_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: leg1
  {
    cdr >> ros_message->leg1;
  }

  // Field name: leg2
  {
    cdr >> ros_message->leg2;
  }

  // Field name: leg3
  {
    cdr >> ros_message->leg3;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_core_interfaces
size_t get_serialized_size_core_interfaces__srv__UiMotor_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UiMotor_Request__ros_msg_type * ros_message = static_cast<const _UiMotor_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name leg1
  {
    size_t item_size = sizeof(ros_message->leg1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name leg2
  {
    size_t item_size = sizeof(ros_message->leg2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name leg3
  {
    size_t item_size = sizeof(ros_message->leg3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _UiMotor_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_core_interfaces__srv__UiMotor_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_core_interfaces
size_t max_serialized_size_core_interfaces__srv__UiMotor_Request(
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

  // member: leg1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: leg2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: leg3
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
    using DataType = core_interfaces__srv__UiMotor_Request;
    is_plain =
      (
      offsetof(DataType, leg3) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _UiMotor_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_core_interfaces__srv__UiMotor_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_UiMotor_Request = {
  "core_interfaces::srv",
  "UiMotor_Request",
  _UiMotor_Request__cdr_serialize,
  _UiMotor_Request__cdr_deserialize,
  _UiMotor_Request__get_serialized_size,
  _UiMotor_Request__max_serialized_size
};

static rosidl_message_type_support_t _UiMotor_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UiMotor_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, core_interfaces, srv, UiMotor_Request)() {
  return &_UiMotor_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "core_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "core_interfaces/srv/detail/ui_motor__struct.h"
// already included above
// #include "core_interfaces/srv/detail/ui_motor__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _UiMotor_Response__ros_msg_type = core_interfaces__srv__UiMotor_Response;

static bool _UiMotor_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UiMotor_Response__ros_msg_type * ros_message = static_cast<const _UiMotor_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: beat
  {
    cdr << ros_message->beat;
  }

  return true;
}

static bool _UiMotor_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UiMotor_Response__ros_msg_type * ros_message = static_cast<_UiMotor_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: beat
  {
    cdr >> ros_message->beat;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_core_interfaces
size_t get_serialized_size_core_interfaces__srv__UiMotor_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UiMotor_Response__ros_msg_type * ros_message = static_cast<const _UiMotor_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name beat
  {
    size_t item_size = sizeof(ros_message->beat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _UiMotor_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_core_interfaces__srv__UiMotor_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_core_interfaces
size_t max_serialized_size_core_interfaces__srv__UiMotor_Response(
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

  // member: beat
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
    using DataType = core_interfaces__srv__UiMotor_Response;
    is_plain =
      (
      offsetof(DataType, beat) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _UiMotor_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_core_interfaces__srv__UiMotor_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_UiMotor_Response = {
  "core_interfaces::srv",
  "UiMotor_Response",
  _UiMotor_Response__cdr_serialize,
  _UiMotor_Response__cdr_deserialize,
  _UiMotor_Response__get_serialized_size,
  _UiMotor_Response__max_serialized_size
};

static rosidl_message_type_support_t _UiMotor_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UiMotor_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, core_interfaces, srv, UiMotor_Response)() {
  return &_UiMotor_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "core_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "core_interfaces/srv/ui_motor.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t UiMotor__callbacks = {
  "core_interfaces::srv",
  "UiMotor",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, core_interfaces, srv, UiMotor_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, core_interfaces, srv, UiMotor_Response)(),
};

static rosidl_service_type_support_t UiMotor__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &UiMotor__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, core_interfaces, srv, UiMotor)() {
  return &UiMotor__handle;
}

#if defined(__cplusplus)
}
#endif
