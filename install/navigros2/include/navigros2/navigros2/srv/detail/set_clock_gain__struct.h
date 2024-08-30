// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from navigros2:srv/SetClockGain.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__SRV__DETAIL__SET_CLOCK_GAIN__STRUCT_H_
#define NAVIGROS2__SRV__DETAIL__SET_CLOCK_GAIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetClockGain in the package navigros2.
typedef struct navigros2__srv__SetClockGain_Request
{
  float gain;
} navigros2__srv__SetClockGain_Request;

// Struct for a sequence of navigros2__srv__SetClockGain_Request.
typedef struct navigros2__srv__SetClockGain_Request__Sequence
{
  navigros2__srv__SetClockGain_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigros2__srv__SetClockGain_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetClockGain in the package navigros2.
typedef struct navigros2__srv__SetClockGain_Response
{
  uint8_t structure_needs_at_least_one_member;
} navigros2__srv__SetClockGain_Response;

// Struct for a sequence of navigros2__srv__SetClockGain_Response.
typedef struct navigros2__srv__SetClockGain_Response__Sequence
{
  navigros2__srv__SetClockGain_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigros2__srv__SetClockGain_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAVIGROS2__SRV__DETAIL__SET_CLOCK_GAIN__STRUCT_H_
