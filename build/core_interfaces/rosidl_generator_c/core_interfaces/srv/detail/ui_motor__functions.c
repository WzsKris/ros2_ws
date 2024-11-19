// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from core_interfaces:srv/UiMotor.idl
// generated code does not contain a copyright notice
#include "core_interfaces/srv/detail/ui_motor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
core_interfaces__srv__UiMotor_Request__init(core_interfaces__srv__UiMotor_Request * msg)
{
  if (!msg) {
    return false;
  }
  // leg1
  // leg2
  // leg3
  return true;
}

void
core_interfaces__srv__UiMotor_Request__fini(core_interfaces__srv__UiMotor_Request * msg)
{
  if (!msg) {
    return;
  }
  // leg1
  // leg2
  // leg3
}

bool
core_interfaces__srv__UiMotor_Request__are_equal(const core_interfaces__srv__UiMotor_Request * lhs, const core_interfaces__srv__UiMotor_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // leg1
  if (lhs->leg1 != rhs->leg1) {
    return false;
  }
  // leg2
  if (lhs->leg2 != rhs->leg2) {
    return false;
  }
  // leg3
  if (lhs->leg3 != rhs->leg3) {
    return false;
  }
  return true;
}

bool
core_interfaces__srv__UiMotor_Request__copy(
  const core_interfaces__srv__UiMotor_Request * input,
  core_interfaces__srv__UiMotor_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // leg1
  output->leg1 = input->leg1;
  // leg2
  output->leg2 = input->leg2;
  // leg3
  output->leg3 = input->leg3;
  return true;
}

core_interfaces__srv__UiMotor_Request *
core_interfaces__srv__UiMotor_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  core_interfaces__srv__UiMotor_Request * msg = (core_interfaces__srv__UiMotor_Request *)allocator.allocate(sizeof(core_interfaces__srv__UiMotor_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(core_interfaces__srv__UiMotor_Request));
  bool success = core_interfaces__srv__UiMotor_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
core_interfaces__srv__UiMotor_Request__destroy(core_interfaces__srv__UiMotor_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    core_interfaces__srv__UiMotor_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
core_interfaces__srv__UiMotor_Request__Sequence__init(core_interfaces__srv__UiMotor_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  core_interfaces__srv__UiMotor_Request * data = NULL;

  if (size) {
    data = (core_interfaces__srv__UiMotor_Request *)allocator.zero_allocate(size, sizeof(core_interfaces__srv__UiMotor_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = core_interfaces__srv__UiMotor_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        core_interfaces__srv__UiMotor_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
core_interfaces__srv__UiMotor_Request__Sequence__fini(core_interfaces__srv__UiMotor_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      core_interfaces__srv__UiMotor_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

core_interfaces__srv__UiMotor_Request__Sequence *
core_interfaces__srv__UiMotor_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  core_interfaces__srv__UiMotor_Request__Sequence * array = (core_interfaces__srv__UiMotor_Request__Sequence *)allocator.allocate(sizeof(core_interfaces__srv__UiMotor_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = core_interfaces__srv__UiMotor_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
core_interfaces__srv__UiMotor_Request__Sequence__destroy(core_interfaces__srv__UiMotor_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    core_interfaces__srv__UiMotor_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
core_interfaces__srv__UiMotor_Request__Sequence__are_equal(const core_interfaces__srv__UiMotor_Request__Sequence * lhs, const core_interfaces__srv__UiMotor_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!core_interfaces__srv__UiMotor_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
core_interfaces__srv__UiMotor_Request__Sequence__copy(
  const core_interfaces__srv__UiMotor_Request__Sequence * input,
  core_interfaces__srv__UiMotor_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(core_interfaces__srv__UiMotor_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    core_interfaces__srv__UiMotor_Request * data =
      (core_interfaces__srv__UiMotor_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!core_interfaces__srv__UiMotor_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          core_interfaces__srv__UiMotor_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!core_interfaces__srv__UiMotor_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
core_interfaces__srv__UiMotor_Response__init(core_interfaces__srv__UiMotor_Response * msg)
{
  if (!msg) {
    return false;
  }
  // beat
  return true;
}

void
core_interfaces__srv__UiMotor_Response__fini(core_interfaces__srv__UiMotor_Response * msg)
{
  if (!msg) {
    return;
  }
  // beat
}

bool
core_interfaces__srv__UiMotor_Response__are_equal(const core_interfaces__srv__UiMotor_Response * lhs, const core_interfaces__srv__UiMotor_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // beat
  if (lhs->beat != rhs->beat) {
    return false;
  }
  return true;
}

bool
core_interfaces__srv__UiMotor_Response__copy(
  const core_interfaces__srv__UiMotor_Response * input,
  core_interfaces__srv__UiMotor_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // beat
  output->beat = input->beat;
  return true;
}

core_interfaces__srv__UiMotor_Response *
core_interfaces__srv__UiMotor_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  core_interfaces__srv__UiMotor_Response * msg = (core_interfaces__srv__UiMotor_Response *)allocator.allocate(sizeof(core_interfaces__srv__UiMotor_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(core_interfaces__srv__UiMotor_Response));
  bool success = core_interfaces__srv__UiMotor_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
core_interfaces__srv__UiMotor_Response__destroy(core_interfaces__srv__UiMotor_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    core_interfaces__srv__UiMotor_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
core_interfaces__srv__UiMotor_Response__Sequence__init(core_interfaces__srv__UiMotor_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  core_interfaces__srv__UiMotor_Response * data = NULL;

  if (size) {
    data = (core_interfaces__srv__UiMotor_Response *)allocator.zero_allocate(size, sizeof(core_interfaces__srv__UiMotor_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = core_interfaces__srv__UiMotor_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        core_interfaces__srv__UiMotor_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
core_interfaces__srv__UiMotor_Response__Sequence__fini(core_interfaces__srv__UiMotor_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      core_interfaces__srv__UiMotor_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

core_interfaces__srv__UiMotor_Response__Sequence *
core_interfaces__srv__UiMotor_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  core_interfaces__srv__UiMotor_Response__Sequence * array = (core_interfaces__srv__UiMotor_Response__Sequence *)allocator.allocate(sizeof(core_interfaces__srv__UiMotor_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = core_interfaces__srv__UiMotor_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
core_interfaces__srv__UiMotor_Response__Sequence__destroy(core_interfaces__srv__UiMotor_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    core_interfaces__srv__UiMotor_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
core_interfaces__srv__UiMotor_Response__Sequence__are_equal(const core_interfaces__srv__UiMotor_Response__Sequence * lhs, const core_interfaces__srv__UiMotor_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!core_interfaces__srv__UiMotor_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
core_interfaces__srv__UiMotor_Response__Sequence__copy(
  const core_interfaces__srv__UiMotor_Response__Sequence * input,
  core_interfaces__srv__UiMotor_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(core_interfaces__srv__UiMotor_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    core_interfaces__srv__UiMotor_Response * data =
      (core_interfaces__srv__UiMotor_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!core_interfaces__srv__UiMotor_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          core_interfaces__srv__UiMotor_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!core_interfaces__srv__UiMotor_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
