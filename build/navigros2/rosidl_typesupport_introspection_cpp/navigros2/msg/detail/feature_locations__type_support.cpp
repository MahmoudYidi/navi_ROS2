// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from navigros2:msg/FeatureLocations.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "navigros2/msg/detail/feature_locations__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace navigros2
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FeatureLocations_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) navigros2::msg::FeatureLocations(_init);
}

void FeatureLocations_fini_function(void * message_memory)
{
  auto typed_message = static_cast<navigros2::msg::FeatureLocations *>(message_memory);
  typed_message->~FeatureLocations();
}

size_t size_function__FeatureLocations__xa(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FeatureLocations__xa(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__FeatureLocations__xa(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__FeatureLocations__xa(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__FeatureLocations__xa(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__FeatureLocations__xa(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__FeatureLocations__xa(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__FeatureLocations__xa(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FeatureLocations__ya(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FeatureLocations__ya(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__FeatureLocations__ya(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__FeatureLocations__ya(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__FeatureLocations__ya(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__FeatureLocations__ya(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__FeatureLocations__ya(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__FeatureLocations__ya(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FeatureLocations__xb(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FeatureLocations__xb(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__FeatureLocations__xb(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__FeatureLocations__xb(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__FeatureLocations__xb(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__FeatureLocations__xb(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__FeatureLocations__xb(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__FeatureLocations__xb(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FeatureLocations__yb(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FeatureLocations__yb(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__FeatureLocations__yb(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__FeatureLocations__yb(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__FeatureLocations__yb(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__FeatureLocations__yb(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__FeatureLocations__yb(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__FeatureLocations__yb(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FeatureLocations__matched(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__FeatureLocations__matched(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__FeatureLocations__matched(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__FeatureLocations__matched(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FeatureLocations_message_member_array[5] = {
  {
    "xa",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigros2::msg::FeatureLocations, xa),  // bytes offset in struct
    nullptr,  // default value
    size_function__FeatureLocations__xa,  // size() function pointer
    get_const_function__FeatureLocations__xa,  // get_const(index) function pointer
    get_function__FeatureLocations__xa,  // get(index) function pointer
    fetch_function__FeatureLocations__xa,  // fetch(index, &value) function pointer
    assign_function__FeatureLocations__xa,  // assign(index, value) function pointer
    resize_function__FeatureLocations__xa  // resize(index) function pointer
  },
  {
    "ya",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigros2::msg::FeatureLocations, ya),  // bytes offset in struct
    nullptr,  // default value
    size_function__FeatureLocations__ya,  // size() function pointer
    get_const_function__FeatureLocations__ya,  // get_const(index) function pointer
    get_function__FeatureLocations__ya,  // get(index) function pointer
    fetch_function__FeatureLocations__ya,  // fetch(index, &value) function pointer
    assign_function__FeatureLocations__ya,  // assign(index, value) function pointer
    resize_function__FeatureLocations__ya  // resize(index) function pointer
  },
  {
    "xb",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigros2::msg::FeatureLocations, xb),  // bytes offset in struct
    nullptr,  // default value
    size_function__FeatureLocations__xb,  // size() function pointer
    get_const_function__FeatureLocations__xb,  // get_const(index) function pointer
    get_function__FeatureLocations__xb,  // get(index) function pointer
    fetch_function__FeatureLocations__xb,  // fetch(index, &value) function pointer
    assign_function__FeatureLocations__xb,  // assign(index, value) function pointer
    resize_function__FeatureLocations__xb  // resize(index) function pointer
  },
  {
    "yb",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigros2::msg::FeatureLocations, yb),  // bytes offset in struct
    nullptr,  // default value
    size_function__FeatureLocations__yb,  // size() function pointer
    get_const_function__FeatureLocations__yb,  // get_const(index) function pointer
    get_function__FeatureLocations__yb,  // get(index) function pointer
    fetch_function__FeatureLocations__yb,  // fetch(index, &value) function pointer
    assign_function__FeatureLocations__yb,  // assign(index, value) function pointer
    resize_function__FeatureLocations__yb  // resize(index) function pointer
  },
  {
    "matched",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigros2::msg::FeatureLocations, matched),  // bytes offset in struct
    nullptr,  // default value
    size_function__FeatureLocations__matched,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__FeatureLocations__matched,  // fetch(index, &value) function pointer
    assign_function__FeatureLocations__matched,  // assign(index, value) function pointer
    resize_function__FeatureLocations__matched  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FeatureLocations_message_members = {
  "navigros2::msg",  // message namespace
  "FeatureLocations",  // message name
  5,  // number of fields
  sizeof(navigros2::msg::FeatureLocations),
  FeatureLocations_message_member_array,  // message members
  FeatureLocations_init_function,  // function to initialize message memory (memory has to be allocated)
  FeatureLocations_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FeatureLocations_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FeatureLocations_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace navigros2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<navigros2::msg::FeatureLocations>()
{
  return &::navigros2::msg::rosidl_typesupport_introspection_cpp::FeatureLocations_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, navigros2, msg, FeatureLocations)() {
  return &::navigros2::msg::rosidl_typesupport_introspection_cpp::FeatureLocations_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
