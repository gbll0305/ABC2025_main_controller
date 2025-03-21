// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_msgs:msg/YoloDetection.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__MSG__DETAIL__YOLO_DETECTION__STRUCT_HPP_
#define MY_MSGS__MSG__DETAIL__YOLO_DETECTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__my_msgs__msg__YoloDetection __attribute__((deprecated))
#else
# define DEPRECATED__my_msgs__msg__YoloDetection __declspec(deprecated)
#endif

namespace my_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct YoloDetection_
{
  using Type = YoloDetection_<ContainerAllocator>;

  explicit YoloDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->screen_width = 0.0f;
      this->screen_height = 0.0f;
      this->xmax = 0.0f;
      this->ymax = 0.0f;
      this->xmin = 0.0f;
      this->ymin = 0.0f;
    }
  }

  explicit YoloDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->screen_width = 0.0f;
      this->screen_height = 0.0f;
      this->xmax = 0.0f;
      this->ymax = 0.0f;
      this->xmin = 0.0f;
      this->ymin = 0.0f;
    }
  }

  // field types and members
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _label_type label;
  using _screen_width_type =
    float;
  _screen_width_type screen_width;
  using _screen_height_type =
    float;
  _screen_height_type screen_height;
  using _xmax_type =
    float;
  _xmax_type xmax;
  using _ymax_type =
    float;
  _ymax_type ymax;
  using _xmin_type =
    float;
  _xmin_type xmin;
  using _ymin_type =
    float;
  _ymin_type ymin;

  // setters for named parameter idiom
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__screen_width(
    const float & _arg)
  {
    this->screen_width = _arg;
    return *this;
  }
  Type & set__screen_height(
    const float & _arg)
  {
    this->screen_height = _arg;
    return *this;
  }
  Type & set__xmax(
    const float & _arg)
  {
    this->xmax = _arg;
    return *this;
  }
  Type & set__ymax(
    const float & _arg)
  {
    this->ymax = _arg;
    return *this;
  }
  Type & set__xmin(
    const float & _arg)
  {
    this->xmin = _arg;
    return *this;
  }
  Type & set__ymin(
    const float & _arg)
  {
    this->ymin = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_msgs::msg::YoloDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_msgs::msg::YoloDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_msgs::msg::YoloDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_msgs::msg::YoloDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_msgs::msg::YoloDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_msgs::msg::YoloDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_msgs::msg::YoloDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_msgs::msg::YoloDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_msgs::msg::YoloDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_msgs::msg::YoloDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_msgs__msg__YoloDetection
    std::shared_ptr<my_msgs::msg::YoloDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_msgs__msg__YoloDetection
    std::shared_ptr<my_msgs::msg::YoloDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YoloDetection_ & other) const
  {
    if (this->label != other.label) {
      return false;
    }
    if (this->screen_width != other.screen_width) {
      return false;
    }
    if (this->screen_height != other.screen_height) {
      return false;
    }
    if (this->xmax != other.xmax) {
      return false;
    }
    if (this->ymax != other.ymax) {
      return false;
    }
    if (this->xmin != other.xmin) {
      return false;
    }
    if (this->ymin != other.ymin) {
      return false;
    }
    return true;
  }
  bool operator!=(const YoloDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YoloDetection_

// alias to use template instance with default allocator
using YoloDetection =
  my_msgs::msg::YoloDetection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_msgs

#endif  // MY_MSGS__MSG__DETAIL__YOLO_DETECTION__STRUCT_HPP_
