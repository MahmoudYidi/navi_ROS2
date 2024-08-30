// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from navigros2:srv/SetClockGain.idl
// generated code does not contain a copyright notice
#include "navigros2/srv/detail/set_clock_gain__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
navigros2__srv__SetClockGain_Request__init(navigros2__srv__SetClockGain_Request * msg)
{
  if (!msg) {
    return false;
  }
  // gain
  return true;
}

void
navigros2__srv__SetClockGain_Request__fini(navigros2__srv__SetClockGain_Request * msg)
{
  if (!msg) {
    return;
  }
  // gain
}

bool
navigros2__srv__SetClockGain_Request__are_equal(const navigros2__srv__SetClockGain_Request * lhs, const navigros2__srv__SetClockGain_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gain
  if (lhs->gain != rhs->gain) {
    return false;
  }
  return true;
}

bool
navigros2__srv__SetClockGain_Request__copy(
  const navigros2__srv__SetClockGain_Request * input,
  navigros2__srv__SetClockGain_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // gain
  output->gain = input->gain;
  return true;
}

navigros2__srv__SetClockGain_Request *
navigros2__srv__SetClockGain_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigros2__srv__SetClockGain_Request * msg = (navigros2__srv__SetClockGain_Request *)allocator.allocate(sizeof(navigros2__srv__SetClockGain_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigros2__srv__SetClockGain_Request));
  bool success = navigros2__srv__SetClockGain_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigros2__srv__SetClockGain_Request__destroy(navigros2__srv__SetClockGain_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigros2__srv__SetClockGain_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigros2__srv__SetClockGain_Request__Sequence__init(navigros2__srv__SetClockGain_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigros2__srv__SetClockGain_Request * data = NULL;

  if (size) {
    data = (navigros2__srv__SetClockGain_Request *)allocator.zero_allocate(size, sizeof(navigros2__srv__SetClockGain_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigros2__srv__SetClockGain_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigros2__srv__SetClockGain_Request__fini(&data[i - 1]);
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
navigros2__srv__SetClockGain_Request__Sequence__fini(navigros2__srv__SetClockGain_Request__Sequence * array)
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
      navigros2__srv__SetClockGain_Request__fini(&array->data[i]);
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

navigros2__srv__SetClockGain_Request__Sequence *
navigros2__srv__SetClockGain_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigros2__srv__SetClockGain_Request__Sequence * array = (navigros2__srv__SetClockGain_Request__Sequence *)allocator.allocate(sizeof(navigros2__srv__SetClockGain_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigros2__srv__SetClockGain_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigros2__srv__SetClockGain_Request__Sequence__destroy(navigros2__srv__SetClockGain_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigros2__srv__SetClockGain_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigros2__srv__SetClockGain_Request__Sequence__are_equal(const navigros2__srv__SetClockGain_Request__Sequence * lhs, const navigros2__srv__SetClockGain_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigros2__srv__SetClockGain_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigros2__srv__SetClockGain_Request__Sequence__copy(
  const navigros2__srv__SetClockGain_Request__Sequence * input,
  navigros2__srv__SetClockGain_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigros2__srv__SetClockGain_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigros2__srv__SetClockGain_Request * data =
      (navigros2__srv__SetClockGain_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigros2__srv__SetClockGain_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigros2__srv__SetClockGain_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigros2__srv__SetClockGain_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
navigros2__srv__SetClockGain_Response__init(navigros2__srv__SetClockGain_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
navigros2__srv__SetClockGain_Response__fini(navigros2__srv__SetClockGain_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
navigros2__srv__SetClockGain_Response__are_equal(const navigros2__srv__SetClockGain_Response * lhs, const navigros2__srv__SetClockGain_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
navigros2__srv__SetClockGain_Response__copy(
  const navigros2__srv__SetClockGain_Response * input,
  navigros2__srv__SetClockGain_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

navigros2__srv__SetClockGain_Response *
navigros2__srv__SetClockGain_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigros2__srv__SetClockGain_Response * msg = (navigros2__srv__SetClockGain_Response *)allocator.allocate(sizeof(navigros2__srv__SetClockGain_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigros2__srv__SetClockGain_Response));
  bool success = navigros2__srv__SetClockGain_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigros2__srv__SetClockGain_Response__destroy(navigros2__srv__SetClockGain_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigros2__srv__SetClockGain_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigros2__srv__SetClockGain_Response__Sequence__init(navigros2__srv__SetClockGain_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigros2__srv__SetClockGain_Response * data = NULL;

  if (size) {
    data = (navigros2__srv__SetClockGain_Response *)allocator.zero_allocate(size, sizeof(navigros2__srv__SetClockGain_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigros2__srv__SetClockGain_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigros2__srv__SetClockGain_Response__fini(&data[i - 1]);
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
navigros2__srv__SetClockGain_Response__Sequence__fini(navigros2__srv__SetClockGain_Response__Sequence * array)
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
      navigros2__srv__SetClockGain_Response__fini(&array->data[i]);
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

navigros2__srv__SetClockGain_Response__Sequence *
navigros2__srv__SetClockGain_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigros2__srv__SetClockGain_Response__Sequence * array = (navigros2__srv__SetClockGain_Response__Sequence *)allocator.allocate(sizeof(navigros2__srv__SetClockGain_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigros2__srv__SetClockGain_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigros2__srv__SetClockGain_Response__Sequence__destroy(navigros2__srv__SetClockGain_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigros2__srv__SetClockGain_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigros2__srv__SetClockGain_Response__Sequence__are_equal(const navigros2__srv__SetClockGain_Response__Sequence * lhs, const navigros2__srv__SetClockGain_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigros2__srv__SetClockGain_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigros2__srv__SetClockGain_Response__Sequence__copy(
  const navigros2__srv__SetClockGain_Response__Sequence * input,
  navigros2__srv__SetClockGain_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigros2__srv__SetClockGain_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigros2__srv__SetClockGain_Response * data =
      (navigros2__srv__SetClockGain_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigros2__srv__SetClockGain_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigros2__srv__SetClockGain_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigros2__srv__SetClockGain_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
