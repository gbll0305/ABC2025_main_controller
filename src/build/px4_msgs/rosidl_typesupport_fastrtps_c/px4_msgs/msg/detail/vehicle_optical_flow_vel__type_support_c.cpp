// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/VehicleOpticalFlowVel.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_optical_flow_vel__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/vehicle_optical_flow_vel__struct.h"
#include "px4_msgs/msg/detail/vehicle_optical_flow_vel__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _VehicleOpticalFlowVel__ros_msg_type = px4_msgs__msg__VehicleOpticalFlowVel;

static bool _VehicleOpticalFlowVel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleOpticalFlowVel__ros_msg_type * ros_message = static_cast<const _VehicleOpticalFlowVel__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: vel_body
  {
    size_t size = 2;
    auto array_ptr = ros_message->vel_body;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vel_ne
  {
    size_t size = 2;
    auto array_ptr = ros_message->vel_ne;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: flow_rate_uncompensated
  {
    size_t size = 2;
    auto array_ptr = ros_message->flow_rate_uncompensated;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: flow_rate_compensated
  {
    size_t size = 2;
    auto array_ptr = ros_message->flow_rate_compensated;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyro_rate
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyro_rate;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyro_bias
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyro_bias;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ref_gyro
  {
    size_t size = 3;
    auto array_ptr = ros_message->ref_gyro;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _VehicleOpticalFlowVel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleOpticalFlowVel__ros_msg_type * ros_message = static_cast<_VehicleOpticalFlowVel__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr >> ros_message->timestamp_sample;
  }

  // Field name: vel_body
  {
    size_t size = 2;
    auto array_ptr = ros_message->vel_body;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vel_ne
  {
    size_t size = 2;
    auto array_ptr = ros_message->vel_ne;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: flow_rate_uncompensated
  {
    size_t size = 2;
    auto array_ptr = ros_message->flow_rate_uncompensated;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: flow_rate_compensated
  {
    size_t size = 2;
    auto array_ptr = ros_message->flow_rate_compensated;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyro_rate
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyro_rate;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyro_bias
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyro_bias;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ref_gyro
  {
    size_t size = 3;
    auto array_ptr = ros_message->ref_gyro;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__VehicleOpticalFlowVel(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleOpticalFlowVel__ros_msg_type * ros_message = static_cast<const _VehicleOpticalFlowVel__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp_sample
  {
    size_t item_size = sizeof(ros_message->timestamp_sample);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_body
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->vel_body;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_ne
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->vel_ne;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flow_rate_uncompensated
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->flow_rate_uncompensated;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flow_rate_compensated
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->flow_rate_compensated;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_rate
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->gyro_rate;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_bias
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->gyro_bias;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_gyro
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->ref_gyro;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleOpticalFlowVel__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__VehicleOpticalFlowVel(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__VehicleOpticalFlowVel(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: timestamp_sample
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_body
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_ne
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: flow_rate_uncompensated
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: flow_rate_compensated
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_rate
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_bias
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ref_gyro
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleOpticalFlowVel__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__VehicleOpticalFlowVel(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleOpticalFlowVel = {
  "px4_msgs::msg",
  "VehicleOpticalFlowVel",
  _VehicleOpticalFlowVel__cdr_serialize,
  _VehicleOpticalFlowVel__cdr_deserialize,
  _VehicleOpticalFlowVel__get_serialized_size,
  _VehicleOpticalFlowVel__max_serialized_size
};

static rosidl_message_type_support_t _VehicleOpticalFlowVel__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleOpticalFlowVel,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, VehicleOpticalFlowVel)() {
  return &_VehicleOpticalFlowVel__type_support;
}

#if defined(__cplusplus)
}
#endif
