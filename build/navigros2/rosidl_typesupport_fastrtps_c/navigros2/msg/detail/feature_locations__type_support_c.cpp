// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from navigros2:msg/FeatureLocations.idl
// generated code does not contain a copyright notice
#include "navigros2/msg/detail/feature_locations__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "navigros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "navigros2/msg/detail/feature_locations__struct.h"
#include "navigros2/msg/detail/feature_locations__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // matched, xa, xb, ya, yb
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // matched, xa, xb, ya, yb

// forward declare type support functions


using _FeatureLocations__ros_msg_type = navigros2__msg__FeatureLocations;

static bool _FeatureLocations__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FeatureLocations__ros_msg_type * ros_message = static_cast<const _FeatureLocations__ros_msg_type *>(untyped_ros_message);
  // Field name: xa
  {
    size_t size = ros_message->xa.size;
    auto array_ptr = ros_message->xa.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ya
  {
    size_t size = ros_message->ya.size;
    auto array_ptr = ros_message->ya.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: xb
  {
    size_t size = ros_message->xb.size;
    auto array_ptr = ros_message->xb.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: yb
  {
    size_t size = ros_message->yb.size;
    auto array_ptr = ros_message->yb.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: matched
  {
    size_t size = ros_message->matched.size;
    auto array_ptr = ros_message->matched.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _FeatureLocations__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FeatureLocations__ros_msg_type * ros_message = static_cast<_FeatureLocations__ros_msg_type *>(untyped_ros_message);
  // Field name: xa
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->xa.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->xa);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->xa, size)) {
      fprintf(stderr, "failed to create array for field 'xa'");
      return false;
    }
    auto array_ptr = ros_message->xa.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ya
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ya.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->ya);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->ya, size)) {
      fprintf(stderr, "failed to create array for field 'ya'");
      return false;
    }
    auto array_ptr = ros_message->ya.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: xb
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->xb.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->xb);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->xb, size)) {
      fprintf(stderr, "failed to create array for field 'xb'");
      return false;
    }
    auto array_ptr = ros_message->xb.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: yb
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->yb.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->yb);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->yb, size)) {
      fprintf(stderr, "failed to create array for field 'yb'");
      return false;
    }
    auto array_ptr = ros_message->yb.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: matched
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->matched.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->matched);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->matched, size)) {
      fprintf(stderr, "failed to create array for field 'matched'");
      return false;
    }
    auto array_ptr = ros_message->matched.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navigros2
size_t get_serialized_size_navigros2__msg__FeatureLocations(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FeatureLocations__ros_msg_type * ros_message = static_cast<const _FeatureLocations__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name xa
  {
    size_t array_size = ros_message->xa.size;
    auto array_ptr = ros_message->xa.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ya
  {
    size_t array_size = ros_message->ya.size;
    auto array_ptr = ros_message->ya.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name xb
  {
    size_t array_size = ros_message->xb.size;
    auto array_ptr = ros_message->xb.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yb
  {
    size_t array_size = ros_message->yb.size;
    auto array_ptr = ros_message->yb.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matched
  {
    size_t array_size = ros_message->matched.size;
    auto array_ptr = ros_message->matched.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FeatureLocations__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_navigros2__msg__FeatureLocations(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navigros2
size_t max_serialized_size_navigros2__msg__FeatureLocations(
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

  // member: xa
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ya
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: xb
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yb
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: matched
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = navigros2__msg__FeatureLocations;
    is_plain =
      (
      offsetof(DataType, matched) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FeatureLocations__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_navigros2__msg__FeatureLocations(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FeatureLocations = {
  "navigros2::msg",
  "FeatureLocations",
  _FeatureLocations__cdr_serialize,
  _FeatureLocations__cdr_deserialize,
  _FeatureLocations__get_serialized_size,
  _FeatureLocations__max_serialized_size
};

static rosidl_message_type_support_t _FeatureLocations__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FeatureLocations,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigros2, msg, FeatureLocations)() {
  return &_FeatureLocations__type_support;
}

#if defined(__cplusplus)
}
#endif
