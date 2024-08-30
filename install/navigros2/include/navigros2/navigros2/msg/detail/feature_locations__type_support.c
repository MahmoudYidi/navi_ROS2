// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from navigros2:msg/FeatureLocations.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "navigros2/msg/detail/feature_locations__rosidl_typesupport_introspection_c.h"
#include "navigros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "navigros2/msg/detail/feature_locations__functions.h"
#include "navigros2/msg/detail/feature_locations__struct.h"


// Include directives for member types
// Member `xa`
// Member `ya`
// Member `xb`
// Member `yb`
// Member `matched`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__FeatureLocations_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  navigros2__msg__FeatureLocations__init(message_memory);
}

void navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__FeatureLocations_fini_function(void * message_memory)
{
  navigros2__msg__FeatureLocations__fini(message_memory);
}

size_t navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__size_function__FeatureLocations__xa(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_const_function__FeatureLocations__xa(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_function__FeatureLocations__xa(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__fetch_function__FeatureLocations__xa(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_const_function__FeatureLocations__xa(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__assign_function__FeatureLocations__xa(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_function__FeatureLocations__xa(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__resize_function__FeatureLocations__xa(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__size_function__FeatureLocations__ya(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_const_function__FeatureLocations__ya(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_function__FeatureLocations__ya(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__fetch_function__FeatureLocations__ya(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_const_function__FeatureLocations__ya(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__assign_function__FeatureLocations__ya(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_function__FeatureLocations__ya(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__resize_function__FeatureLocations__ya(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__size_function__FeatureLocations__xb(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_const_function__FeatureLocations__xb(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_function__FeatureLocations__xb(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__fetch_function__FeatureLocations__xb(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_const_function__FeatureLocations__xb(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__assign_function__FeatureLocations__xb(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_function__FeatureLocations__xb(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__resize_function__FeatureLocations__xb(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__size_function__FeatureLocations__yb(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_const_function__FeatureLocations__yb(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_function__FeatureLocations__yb(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__fetch_function__FeatureLocations__yb(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_const_function__FeatureLocations__yb(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__assign_function__FeatureLocations__yb(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_function__FeatureLocations__yb(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__resize_function__FeatureLocations__yb(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__size_function__FeatureLocations__matched(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_const_function__FeatureLocations__matched(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_function__FeatureLocations__matched(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__fetch_function__FeatureLocations__matched(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_const_function__FeatureLocations__matched(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__assign_function__FeatureLocations__matched(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_function__FeatureLocations__matched(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__resize_function__FeatureLocations__matched(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__FeatureLocations_message_member_array[5] = {
  {
    "xa",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigros2__msg__FeatureLocations, xa),  // bytes offset in struct
    NULL,  // default value
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__size_function__FeatureLocations__xa,  // size() function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_const_function__FeatureLocations__xa,  // get_const(index) function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_function__FeatureLocations__xa,  // get(index) function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__fetch_function__FeatureLocations__xa,  // fetch(index, &value) function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__assign_function__FeatureLocations__xa,  // assign(index, value) function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__resize_function__FeatureLocations__xa  // resize(index) function pointer
  },
  {
    "ya",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigros2__msg__FeatureLocations, ya),  // bytes offset in struct
    NULL,  // default value
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__size_function__FeatureLocations__ya,  // size() function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_const_function__FeatureLocations__ya,  // get_const(index) function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_function__FeatureLocations__ya,  // get(index) function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__fetch_function__FeatureLocations__ya,  // fetch(index, &value) function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__assign_function__FeatureLocations__ya,  // assign(index, value) function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__resize_function__FeatureLocations__ya  // resize(index) function pointer
  },
  {
    "xb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigros2__msg__FeatureLocations, xb),  // bytes offset in struct
    NULL,  // default value
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__size_function__FeatureLocations__xb,  // size() function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_const_function__FeatureLocations__xb,  // get_const(index) function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_function__FeatureLocations__xb,  // get(index) function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__fetch_function__FeatureLocations__xb,  // fetch(index, &value) function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__assign_function__FeatureLocations__xb,  // assign(index, value) function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__resize_function__FeatureLocations__xb  // resize(index) function pointer
  },
  {
    "yb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigros2__msg__FeatureLocations, yb),  // bytes offset in struct
    NULL,  // default value
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__size_function__FeatureLocations__yb,  // size() function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_const_function__FeatureLocations__yb,  // get_const(index) function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_function__FeatureLocations__yb,  // get(index) function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__fetch_function__FeatureLocations__yb,  // fetch(index, &value) function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__assign_function__FeatureLocations__yb,  // assign(index, value) function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__resize_function__FeatureLocations__yb  // resize(index) function pointer
  },
  {
    "matched",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigros2__msg__FeatureLocations, matched),  // bytes offset in struct
    NULL,  // default value
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__size_function__FeatureLocations__matched,  // size() function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_const_function__FeatureLocations__matched,  // get_const(index) function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__get_function__FeatureLocations__matched,  // get(index) function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__fetch_function__FeatureLocations__matched,  // fetch(index, &value) function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__assign_function__FeatureLocations__matched,  // assign(index, value) function pointer
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__resize_function__FeatureLocations__matched  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__FeatureLocations_message_members = {
  "navigros2__msg",  // message namespace
  "FeatureLocations",  // message name
  5,  // number of fields
  sizeof(navigros2__msg__FeatureLocations),
  navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__FeatureLocations_message_member_array,  // message members
  navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__FeatureLocations_init_function,  // function to initialize message memory (memory has to be allocated)
  navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__FeatureLocations_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__FeatureLocations_message_type_support_handle = {
  0,
  &navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__FeatureLocations_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_navigros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigros2, msg, FeatureLocations)() {
  if (!navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__FeatureLocations_message_type_support_handle.typesupport_identifier) {
    navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__FeatureLocations_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &navigros2__msg__FeatureLocations__rosidl_typesupport_introspection_c__FeatureLocations_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
