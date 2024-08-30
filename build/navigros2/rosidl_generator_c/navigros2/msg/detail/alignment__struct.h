// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from navigros2:msg/Alignment.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__MSG__DETAIL__ALIGNMENT__STRUCT_H_
#define NAVIGROS2__MSG__DETAIL__ALIGNMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Alignment in the package navigros2.
typedef struct navigros2__msg__Alignment
{
  float alignment;
  float uncertainty;
} navigros2__msg__Alignment;

// Struct for a sequence of navigros2__msg__Alignment.
typedef struct navigros2__msg__Alignment__Sequence
{
  navigros2__msg__Alignment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigros2__msg__Alignment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAVIGROS2__MSG__DETAIL__ALIGNMENT__STRUCT_H_
