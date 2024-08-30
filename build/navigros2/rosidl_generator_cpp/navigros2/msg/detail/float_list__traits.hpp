// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from navigros2:msg/FloatList.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__MSG__DETAIL__FLOAT_LIST__TRAITS_HPP_
#define NAVIGROS2__MSG__DETAIL__FLOAT_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "navigros2/msg/detail/float_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace navigros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const FloatList & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FloatList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FloatList & msg, bool use_flow_style = false)
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
  const navigros2::msg::FloatList & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const navigros2::msg::FloatList & msg)
{
  return navigros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<navigros2::msg::FloatList>()
{
  return "navigros2::msg::FloatList";
}

template<>
inline const char * name<navigros2::msg::FloatList>()
{
  return "navigros2/msg/FloatList";
}

template<>
struct has_fixed_size<navigros2::msg::FloatList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<navigros2::msg::FloatList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<navigros2::msg::FloatList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAVIGROS2__MSG__DETAIL__FLOAT_LIST__TRAITS_HPP_
