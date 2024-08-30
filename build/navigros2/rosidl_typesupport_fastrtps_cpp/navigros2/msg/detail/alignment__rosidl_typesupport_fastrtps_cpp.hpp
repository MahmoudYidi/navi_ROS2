// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from navigros2:msg/Alignment.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__MSG__DETAIL__ALIGNMENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define NAVIGROS2__MSG__DETAIL__ALIGNMENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "navigros2/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "navigros2/msg/detail/alignment__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace navigros2
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_navigros2
cdr_serialize(
  const navigros2::msg::Alignment & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_navigros2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  navigros2::msg::Alignment & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_navigros2
get_serialized_size(
  const navigros2::msg::Alignment & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_navigros2
max_serialized_size_Alignment(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace navigros2

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_navigros2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, navigros2, msg, Alignment)();

#ifdef __cplusplus
}
#endif

#endif  // NAVIGROS2__MSG__DETAIL__ALIGNMENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
