// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jetmax_msgs:srv/GetPosition.idl
// generated code does not contain a copyright notice

#ifndef JETMAX_MSGS__SRV__DETAIL__GET_POSITION__STRUCT_HPP_
#define JETMAX_MSGS__SRV__DETAIL__GET_POSITION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__jetmax_msgs__srv__GetPosition_Request __attribute__((deprecated))
#else
# define DEPRECATED__jetmax_msgs__srv__GetPosition_Request __declspec(deprecated)
#endif

namespace jetmax_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPosition_Request_
{
  using Type = GetPosition_Request_<ContainerAllocator>;

  explicit GetPosition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetPosition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    jetmax_msgs::srv::GetPosition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const jetmax_msgs::srv::GetPosition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jetmax_msgs::srv::GetPosition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jetmax_msgs::srv::GetPosition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jetmax_msgs::srv::GetPosition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jetmax_msgs::srv::GetPosition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jetmax_msgs::srv::GetPosition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jetmax_msgs::srv::GetPosition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jetmax_msgs::srv::GetPosition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jetmax_msgs::srv::GetPosition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jetmax_msgs__srv__GetPosition_Request
    std::shared_ptr<jetmax_msgs::srv::GetPosition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jetmax_msgs__srv__GetPosition_Request
    std::shared_ptr<jetmax_msgs::srv::GetPosition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPosition_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPosition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPosition_Request_

// alias to use template instance with default allocator
using GetPosition_Request =
  jetmax_msgs::srv::GetPosition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace jetmax_msgs


// Include directives for member types
// Member 'object_pos'
// Member 'robot_markers'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__jetmax_msgs__srv__GetPosition_Response __attribute__((deprecated))
#else
# define DEPRECATED__jetmax_msgs__srv__GetPosition_Response __declspec(deprecated)
#endif

namespace jetmax_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPosition_Response_
{
  using Type = GetPosition_Response_<ContainerAllocator>;

  explicit GetPosition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_pos(_init)
  {
    (void)_init;
  }

  explicit GetPosition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_pos(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _object_pos_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _object_pos_type object_pos;
  using _robot_markers_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point_<ContainerAllocator>>::other>;
  _robot_markers_type robot_markers;

  // setters for named parameter idiom
  Type & set__object_pos(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->object_pos = _arg;
    return *this;
  }
  Type & set__robot_markers(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point_<ContainerAllocator>>::other> & _arg)
  {
    this->robot_markers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jetmax_msgs::srv::GetPosition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const jetmax_msgs::srv::GetPosition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jetmax_msgs::srv::GetPosition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jetmax_msgs::srv::GetPosition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jetmax_msgs::srv::GetPosition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jetmax_msgs::srv::GetPosition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jetmax_msgs::srv::GetPosition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jetmax_msgs::srv::GetPosition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jetmax_msgs::srv::GetPosition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jetmax_msgs::srv::GetPosition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jetmax_msgs__srv__GetPosition_Response
    std::shared_ptr<jetmax_msgs::srv::GetPosition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jetmax_msgs__srv__GetPosition_Response
    std::shared_ptr<jetmax_msgs::srv::GetPosition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPosition_Response_ & other) const
  {
    if (this->object_pos != other.object_pos) {
      return false;
    }
    if (this->robot_markers != other.robot_markers) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPosition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPosition_Response_

// alias to use template instance with default allocator
using GetPosition_Response =
  jetmax_msgs::srv::GetPosition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace jetmax_msgs

namespace jetmax_msgs
{

namespace srv
{

struct GetPosition
{
  using Request = jetmax_msgs::srv::GetPosition_Request;
  using Response = jetmax_msgs::srv::GetPosition_Response;
};

}  // namespace srv

}  // namespace jetmax_msgs

#endif  // JETMAX_MSGS__SRV__DETAIL__GET_POSITION__STRUCT_HPP_
