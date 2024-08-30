// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from navigros2:msg/Alignment.idl
// generated code does not contain a copyright notice
#include "navigros2/msg/detail/alignment__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
navigros2__msg__Alignment__init(navigros2__msg__Alignment * msg)
{
  if (!msg) {
    return false;
  }
  // alignment
  // uncertainty
  return true;
}

void
navigros2__msg__Alignment__fini(navigros2__msg__Alignment * msg)
{
  if (!msg) {
    return;
  }
  // alignment
  // uncertainty
}

bool
navigros2__msg__Alignment__are_equal(const navigros2__msg__Alignment * lhs, const navigros2__msg__Alignment * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // alignment
  if (lhs->alignment != rhs->alignment) {
    return false;
  }
  // uncertainty
  if (lhs->uncertainty != rhs->uncertainty) {
    return false;
  }
  return true;
}

bool
navigros2__msg__Alignment__copy(
  const navigros2__msg__Alignment * input,
  navigros2__msg__Alignment * output)
{
  if (!input || !output) {
    return false;
  }
  // alignment
  output->alignment = input->alignment;
  // uncertainty
  output->uncertainty = input->uncertainty;
  return true;
}

navigros2__msg__Alignment *
navigros2__msg__Alignment__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigros2__msg__Alignment * msg = (navigros2__msg__Alignment *)allocator.allocate(sizeof(navigros2__msg__Alignment), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigros2__msg__Alignment));
  bool success = navigros2__msg__Alignment__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigros2__msg__Alignment__destroy(navigros2__msg__Alignment * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigros2__msg__Alignment__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigros2__msg__Alignment__Sequence__init(navigros2__msg__Alignment__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigros2__msg__Alignment * data = NULL;

  if (size) {
    data = (navigros2__msg__Alignment *)allocator.zero_allocate(size, sizeof(navigros2__msg__Alignment), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigros2__msg__Alignment__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigros2__msg__Alignment__fini(&data[i - 1]);
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
navigros2__msg__Alignment__Sequence__fini(navigros2__msg__Alignment__Sequence * array)
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
      navigros2__msg__Alignment__fini(&array->data[i]);
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

navigros2__msg__Alignment__Sequence *
navigros2__msg__Alignment__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigros2__msg__Alignment__Sequence * array = (navigros2__msg__Alignment__Sequence *)allocator.allocate(sizeof(navigros2__msg__Alignment__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigros2__msg__Alignment__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigros2__msg__Alignment__Sequence__destroy(navigros2__msg__Alignment__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigros2__msg__Alignment__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigros2__msg__Alignment__Sequence__are_equal(const navigros2__msg__Alignment__Sequence * lhs, const navigros2__msg__Alignment__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigros2__msg__Alignment__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigros2__msg__Alignment__Sequence__copy(
  const navigros2__msg__Alignment__Sequence * input,
  navigros2__msg__Alignment__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigros2__msg__Alignment);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigros2__msg__Alignment * data =
      (navigros2__msg__Alignment *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigros2__msg__Alignment__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigros2__msg__Alignment__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigros2__msg__Alignment__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
