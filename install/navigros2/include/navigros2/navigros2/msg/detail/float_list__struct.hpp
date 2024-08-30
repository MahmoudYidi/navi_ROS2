// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from navigros2:msg/FloatList.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__MSG__DETAIL__FLOAT_LIST__STRUCT_HPP_
#define NAVIGROS2__MSG__DETAIL__FLOAT_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__navigros2__msg__FloatList __attribute__((deprecated))
#else
# define DEPRECATED__navigros2__msg__FloatList __declspec(deprecated)
#endif

namespace navigros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FloatList_
{
  using Type = FloatList_<ContainerAllocator>;

  explicit FloatList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit FloatList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    navigros2::msg::FloatList_<ContainerAllocator> *;
  using ConstRawPtr =
    const navigros2::msg::FloatList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navigros2::msg::FloatList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navigros2::msg::FloatList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navigros2::msg::FloatList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navigros2::msg::FloatList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navigros2::msg::FloatList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navigros2::msg::FloatList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navigros2::msg::FloatList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navigros2::msg::FloatList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navigros2__msg__FloatList
    std::shared_ptr<navigros2::msg::FloatList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navigros2__msg__FloatList
    std::shared_ptr<navigros2::msg::FloatList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FloatList_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const FloatList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FloatList_

// alias to use template instance with default allocator
using FloatList =
  navigros2::msg::FloatList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace navigros2

#endif  // NAVIGROS2__MSG__DETAIL__FLOAT_LIST__STRUCT_HPP_
