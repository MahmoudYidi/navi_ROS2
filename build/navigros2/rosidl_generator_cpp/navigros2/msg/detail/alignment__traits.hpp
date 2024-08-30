// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from navigros2:msg/Alignment.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__MSG__DETAIL__ALIGNMENT__TRAITS_HPP_
#define NAVIGROS2__MSG__DETAIL__ALIGNMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "navigros2/msg/detail/alignment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace navigros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const Alignment & msg,
  std::ostream & out)
{
  out << "{";
  // member: alignment
  {
    out << "alignment: ";
    rosidl_generator_traits::value_to_yaml(msg.alignment, out);
    out << ", ";
  }

  // member: uncertainty
  {
    out << "uncertainty: ";
    rosidl_generator_traits::value_to_yaml(msg.uncertainty, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Alignment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: alignment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alignment: ";
    rosidl_generator_traits::value_to_yaml(msg.alignment, out);
    out << "\n";
  }

  // member: uncertainty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uncertainty: ";
    rosidl_generator_traits::value_to_yaml(msg.uncertainty, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Alignment & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace navigros2

namespace rosidl_generator_traits
{

[[deprecated("use navigros2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigros2::msg::Alignment & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const navigros2::msg::Alignment & msg)
{
  return navigros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<navigros2::msg::Alignment>()
{
  return "navigros2::msg::Alignment";
}

template<>
inline const char * name<navigros2::msg::Alignment>()
{
  return "navigros2/msg/Alignment";
}

template<>
struct has_fixed_size<navigros2::msg::Alignment>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<navigros2::msg::Alignment>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<navigros2::msg::Alignment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAVIGROS2__MSG__DETAIL__ALIGNMENT__TRAITS_HPP_
