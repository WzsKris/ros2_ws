// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from core_interfaces:srv/UiMotor.idl
// generated code does not contain a copyright notice

#ifndef CORE_INTERFACES__SRV__DETAIL__UI_MOTOR__STRUCT_H_
#define CORE_INTERFACES__SRV__DETAIL__UI_MOTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/UiMotor in the package core_interfaces.
typedef struct core_interfaces__srv__UiMotor_Request
{
  uint8_t leg1;
  uint8_t leg2;
  uint8_t leg3;
} core_interfaces__srv__UiMotor_Request;

// Struct for a sequence of core_interfaces__srv__UiMotor_Request.
typedef struct core_interfaces__srv__UiMotor_Request__Sequence
{
  core_interfaces__srv__UiMotor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} core_interfaces__srv__UiMotor_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/UiMotor in the package core_interfaces.
typedef struct core_interfaces__srv__UiMotor_Response
{
  uint8_t beat;
} core_interfaces__srv__UiMotor_Response;

// Struct for a sequence of core_interfaces__srv__UiMotor_Response.
typedef struct core_interfaces__srv__UiMotor_Response__Sequence
{
  core_interfaces__srv__UiMotor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} core_interfaces__srv__UiMotor_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CORE_INTERFACES__SRV__DETAIL__UI_MOTOR__STRUCT_H_
