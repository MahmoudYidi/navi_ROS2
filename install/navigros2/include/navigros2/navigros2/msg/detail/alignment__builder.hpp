// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from navigros2:msg/Alignment.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__MSG__DETAIL__ALIGNMENT__BUILDER_HPP_
#define NAVIGROS2__MSG__DETAIL__ALIGNMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "navigros2/msg/detail/alignment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace navigros2
{

namespace msg
{

namespace builder
{

class Init_Alignment_uncertainty
{
public:
  explicit Init_Alignment_uncertainty(::navigros2::msg::Alignment & msg)
  : msg_(msg)
  {}
  ::navigros2::msg::Alignment uncertainty(::navigros2::msg::Alignment::_uncertainty_type arg)
  {
    msg_.uncertainty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigros2::msg::Alignment msg_;
};

class Init_Alignment_alignment
{
public:
  Init_Alignment_alignment()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Alignment_uncertainty alignment(::navigros2::msg::Alignment::_alignment_type arg)
  {
    msg_.alignment = std::move(arg);
    return Init_Alignment_uncertainty(msg_);
  }

private:
  ::navigros2::msg::Alignment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigros2::msg::Alignment>()
{
  return navigros2::msg::builder::Init_Alignment_alignment();
}

}  // namespace navigros2

#endif  // NAVIGROS2__MSG__DETAIL__ALIGNMENT__BUILDER_HPP_
