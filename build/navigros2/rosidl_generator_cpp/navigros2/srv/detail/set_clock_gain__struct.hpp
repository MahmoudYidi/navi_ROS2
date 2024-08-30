// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from navigros2:srv/SetClockGain.idl
// generated code does not contain a copyright notice

#ifndef NAVIGROS2__SRV__DETAIL__SET_CLOCK_GAIN__STRUCT_HPP_
#define NAVIGROS2__SRV__DETAIL__SET_CLOCK_GAIN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__navigros2__srv__SetClockGain_Request __attribute__((deprecated))
#else
# define DEPRECATED__navigros2__srv__SetClockGain_Request __declspec(deprecated)
#endif

namespace navigros2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetClockGain_Request_
{
  using Type = SetClockGain_Request_<ContainerAllocator>;

  explicit SetClockGain_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gain = 0.0f;
    }
  }

  explicit SetClockGain_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gain = 0.0f;
    }
  }

  // field types and members
  using _gain_type =
    float;
  _gain_type gain;

  // setters for named parameter idiom
  Type & set__gain(
    const float & _arg)
  {
    this->gain = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    navigros2::srv::SetClockGain_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const navigros2::srv::SetClockGain_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navigros2::srv::SetClockGain_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navigros2::srv::SetClockGain_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navigros2::srv::SetClockGain_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navigros2::srv::SetClockGain_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navigros2::srv::SetClockGain_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navigros2::srv::SetClockGain_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navigros2::srv::SetClockGain_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navigros2::srv::SetClockGain_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navigros2__srv__SetClockGain_Request
    std::shared_ptr<navigros2::srv::SetClockGain_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navigros2__srv__SetClockGain_Request
    std::shared_ptr<navigros2::srv::SetClockGain_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetClockGain_Request_ & other) const
  {
    if (this->gain != other.gain) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetClockGain_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetClockGain_Request_

// alias to use template instance with default allocator
using SetClockGain_Request =
  navigros2::srv::SetClockGain_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace navigros2


#ifndef _WIN32
# define DEPRECATED__navigros2__srv__SetClockGain_Response __attribute__((deprecated))
#else
# define DEPRECATED__navigros2__srv__SetClockGain_Response __declspec(deprecated)
#endif

namespace navigros2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetClockGain_Response_
{
  using Type = SetClockGain_Response_<ContainerAllocator>;

  explicit SetClockGain_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SetClockGain_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    navigros2::srv::SetClockGain_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const navigros2::srv::SetClockGain_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navigros2::srv::SetClockGain_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navigros2::srv::SetClockGain_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navigros2::srv::SetClockGain_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navigros2::srv::SetClockGain_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navigros2::srv::SetClockGain_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navigros2::srv::SetClockGain_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navigros2::srv::SetClockGain_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navigros2::srv::SetClockGain_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navigros2__srv__SetClockGain_Response
    std::shared_ptr<navigros2::srv::SetClockGain_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navigros2__srv__SetClockGain_Response
    std::shared_ptr<navigros2::srv::SetClockGain_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetClockGain_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetClockGain_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetClockGain_Response_

// alias to use template instance with default allocator
using SetClockGain_Response =
  navigros2::srv::SetClockGain_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace navigros2

namespace navigros2
{

namespace srv
{

struct SetClockGain
{
  using Request = navigros2::srv::SetClockGain_Request;
  using Response = navigros2::srv::SetClockGain_Response;
};

}  // namespace srv

}  // namespace navigros2

#endif  // NAVIGROS2__SRV__DETAIL__SET_CLOCK_GAIN__STRUCT_HPP_
