// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from navigros2:msg/FloatList.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__MSG__DETAIL__FLOAT_LIST__BUILDER_HPP_
#define NAVIGROS2__MSG__DETAIL__FLOAT_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "navigros2/msg/detail/float_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace navigros2
{

namespace msg
{

namespace builder
{

class Init_FloatList_data
{
public:
  Init_FloatList_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::navigros2::msg::FloatList data(::navigros2::msg::FloatList::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigros2::msg::FloatList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigros2::msg::FloatList>()
{
  return navigros2::msg::builder::Init_FloatList_data();
}

}  // namespace navigros2

#endif  // NAVIGROS2__MSG__DETAIL__FLOAT_LIST__BUILDER_HPP_
