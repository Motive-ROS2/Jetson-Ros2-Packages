// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jetmax_msgs:msg/SetMotion.idl
// generated code does not contain a copyright notice

#ifndef JETMAX_MSGS__MSG__DETAIL__SET_MOTION__STRUCT_HPP_
#define JETMAX_MSGS__MSG__DETAIL__SET_MOTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__jetmax_msgs__msg__SetMotion __attribute__((deprecated))
#else
# define DEPRECATED__jetmax_msgs__msg__SetMotion __declspec(deprecated)
#endif

namespace jetmax_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetMotion_
{
  using Type = SetMotion_<ContainerAllocator>;

  explicit SetMotion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0f;
      this->speed = 0.0f;
    }
  }

  explicit SetMotion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0f;
      this->speed = 0.0f;
    }
  }

  // field types and members
  using _angle_type =
    float;
  _angle_type angle;
  using _speed_type =
    float;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jetmax_msgs::msg::SetMotion_<ContainerAllocator> *;
  using ConstRawPtr =
    const jetmax_msgs::msg::SetMotion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jetmax_msgs::msg::SetMotion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jetmax_msgs::msg::SetMotion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jetmax_msgs::msg::SetMotion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jetmax_msgs::msg::SetMotion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jetmax_msgs::msg::SetMotion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jetmax_msgs::msg::SetMotion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jetmax_msgs::msg::SetMotion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jetmax_msgs::msg::SetMotion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jetmax_msgs__msg__SetMotion
    std::shared_ptr<jetmax_msgs::msg::SetMotion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jetmax_msgs__msg__SetMotion
    std::shared_ptr<jetmax_msgs::msg::SetMotion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMotion_ & other) const
  {
    if (this->angle != other.angle) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMotion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMotion_

// alias to use template instance with default allocator
using SetMotion =
  jetmax_msgs::msg::SetMotion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace jetmax_msgs

#endif  // JETMAX_MSGS__MSG__DETAIL__SET_MOTION__STRUCT_HPP_
