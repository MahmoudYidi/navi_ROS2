// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from navigros2:msg/Alignment.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__MSG__DETAIL__ALIGNMENT__STRUCT_HPP_
#define NAVIGROS2__MSG__DETAIL__ALIGNMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__navigros2__msg__Alignment __attribute__((deprecated))
#else
# define DEPRECATED__navigros2__msg__Alignment __declspec(deprecated)
#endif

namespace navigros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Alignment_
{
  using Type = Alignment_<ContainerAllocator>;

  explicit Alignment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alignment = 0.0f;
      this->uncertainty = 0.0f;
    }
  }

  explicit Alignment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alignment = 0.0f;
      this->uncertainty = 0.0f;
    }
  }

  // field types and members
  using _alignment_type =
    float;
  _alignment_type alignment;
  using _uncertainty_type =
    float;
  _uncertainty_type uncertainty;

  // setters for named parameter idiom
  Type & set__alignment(
    const float & _arg)
  {
    this->alignment = _arg;
    return *this;
  }
  Type & set__uncertainty(
    const float & _arg)
  {
    this->uncertainty = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    navigros2::msg::Alignment_<ContainerAllocator> *;
  using ConstRawPtr =
    const navigros2::msg::Alignment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navigros2::msg::Alignment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navigros2::msg::Alignment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navigros2::msg::Alignment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navigros2::msg::Alignment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navigros2::msg::Alignment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navigros2::msg::Alignment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navigros2::msg::Alignment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navigros2::msg::Alignment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navigros2__msg__Alignment
    std::shared_ptr<navigros2::msg::Alignment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navigros2__msg__Alignment
    std::shared_ptr<navigros2::msg::Alignment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Alignment_ & other) const
  {
    if (this->alignment != other.alignment) {
      return false;
    }
    if (this->uncertainty != other.uncertainty) {
      return false;
    }
    return true;
  }
  bool operator!=(const Alignment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Alignment_

// alias to use template instance with default allocator
using Alignment =
  navigros2::msg::Alignment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace navigros2

#endif  // NAVIGROS2__MSG__DETAIL__ALIGNMENT__STRUCT_HPP_
