// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from navigros2:msg/FeatureLocations.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__MSG__DETAIL__FEATURE_LOCATIONS__STRUCT_H_
#define NAVIGROS2__MSG__DETAIL__FEATURE_LOCATIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'xa'
// Member 'ya'
// Member 'xb'
// Member 'yb'
// Member 'matched'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/FeatureLocations in the package navigros2.
typedef struct navigros2__msg__FeatureLocations
{
  rosidl_runtime_c__int32__Sequence xa;
  rosidl_runtime_c__int32__Sequence ya;
  rosidl_runtime_c__int32__Sequence xb;
  rosidl_runtime_c__int32__Sequence yb;
  rosidl_runtime_c__boolean__Sequence matched;
} navigros2__msg__FeatureLocations;

// Struct for a sequence of navigros2__msg__FeatureLocations.
typedef struct navigros2__msg__FeatureLocations__Sequence
{
  navigros2__msg__FeatureLocations * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigros2__msg__FeatureLocations__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAVIGROS2__MSG__DETAIL__FEATURE_LOCATIONS__STRUCT_H_
