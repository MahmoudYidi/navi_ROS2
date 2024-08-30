// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from navigros2:msg/FloatList.idl
// generated code does not contain a copyright notice
#include "navigros2/msg/detail/float_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
navigros2__msg__FloatList__init(navigros2__msg__FloatList * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__float__Sequence__init(&msg->data, 0)) {
    navigros2__msg__FloatList__fini(msg);
    return false;
  }
  return true;
}

void
navigros2__msg__FloatList__fini(navigros2__msg__FloatList * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__float__Sequence__fini(&msg->data);
}

bool
navigros2__msg__FloatList__are_equal(const navigros2__msg__FloatList * lhs, const navigros2__msg__FloatList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
navigros2__msg__FloatList__copy(
  const navigros2__msg__FloatList * input,
  navigros2__msg__FloatList * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

navigros2__msg__FloatList *
navigros2__msg__FloatList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigros2__msg__FloatList * msg = (navigros2__msg__FloatList *)allocator.allocate(sizeof(navigros2__msg__FloatList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigros2__msg__FloatList));
  bool success = navigros2__msg__FloatList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigros2__msg__FloatList__destroy(navigros2__msg__FloatList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigros2__msg__FloatList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigros2__msg__FloatList__Sequence__init(navigros2__msg__FloatList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigros2__msg__FloatList * data = NULL;

  if (size) {
    data = (navigros2__msg__FloatList *)allocator.zero_allocate(size, sizeof(navigros2__msg__FloatList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigros2__msg__FloatList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigros2__msg__FloatList__fini(&data[i - 1]);
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
navigros2__msg__FloatList__Sequence__fini(navigros2__msg__FloatList__Sequence * array)
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
      navigros2__msg__FloatList__fini(&array->data[i]);
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

navigros2__msg__FloatList__Sequence *
navigros2__msg__FloatList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigros2__msg__FloatList__Sequence * array = (navigros2__msg__FloatList__Sequence *)allocator.allocate(sizeof(navigros2__msg__FloatList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigros2__msg__FloatList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigros2__msg__FloatList__Sequence__destroy(navigros2__msg__FloatList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigros2__msg__FloatList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigros2__msg__FloatList__Sequence__are_equal(const navigros2__msg__FloatList__Sequence * lhs, const navigros2__msg__FloatList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigros2__msg__FloatList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigros2__msg__FloatList__Sequence__copy(
  const navigros2__msg__FloatList__Sequence * input,
  navigros2__msg__FloatList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigros2__msg__FloatList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigros2__msg__FloatList * data =
      (navigros2__msg__FloatList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigros2__msg__FloatList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigros2__msg__FloatList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigros2__msg__FloatList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
