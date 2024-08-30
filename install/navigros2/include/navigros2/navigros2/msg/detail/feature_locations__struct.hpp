// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from navigros2:msg/FeatureLocations.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__MSG__DETAIL__FEATURE_LOCATIONS__STRUCT_HPP_
#define NAVIGROS2__MSG__DETAIL__FEATURE_LOCATIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__navigros2__msg__FeatureLocations __attribute__((deprecated))
#else
# define DEPRECATED__navigros2__msg__FeatureLocations __declspec(deprecated)
#endif

namespace navigros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FeatureLocations_
{
  using Type = FeatureLocations_<ContainerAllocator>;

  explicit FeatureLocations_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit FeatureLocations_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _xa_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _xa_type xa;
  using _ya_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _ya_type ya;
  using _xb_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _xb_type xb;
  using _yb_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _yb_type yb;
  using _matched_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _matched_type matched;

  // setters for named parameter idiom
  Type & set__xa(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->xa = _arg;
    return *this;
  }
  Type & set__ya(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->ya = _arg;
    return *this;
  }
  Type & set__xb(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->xb = _arg;
    return *this;
  }
  Type & set__yb(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->yb = _arg;
    return *this;
  }
  Type & set__matched(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->matched = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    navigros2::msg::FeatureLocations_<ContainerAllocator> *;
  using ConstRawPtr =
    const navigros2::msg::FeatureLocations_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navigros2::msg::FeatureLocations_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navigros2::msg::FeatureLocations_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navigros2::msg::FeatureLocations_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navigros2::msg::FeatureLocations_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navigros2::msg::FeatureLocations_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navigros2::msg::FeatureLocations_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navigros2::msg::FeatureLocations_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navigros2::msg::FeatureLocations_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navigros2__msg__FeatureLocations
    std::shared_ptr<navigros2::msg::FeatureLocations_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navigros2__msg__FeatureLocations
    std::shared_ptr<navigros2::msg::FeatureLocations_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FeatureLocations_ & other) const
  {
    if (this->xa != other.xa) {
      return false;
    }
    if (this->ya != other.ya) {
      return false;
    }
    if (this->xb != other.xb) {
      return false;
    }
    if (this->yb != other.yb) {
      return false;
    }
    if (this->matched != other.matched) {
      return false;
    }
    return true;
  }
  bool operator!=(const FeatureLocations_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FeatureLocations_

// alias to use template instance with default allocator
using FeatureLocations =
  navigros2::msg::FeatureLocations_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace navigros2

#endif  // NAVIGROS2__MSG__DETAIL__FEATURE_LOCATIONS__STRUCT_HPP_
