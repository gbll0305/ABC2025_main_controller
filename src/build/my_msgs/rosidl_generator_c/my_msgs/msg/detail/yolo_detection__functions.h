// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_msgs:msg/YoloDetection.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__MSG__DETAIL__YOLO_DETECTION__FUNCTIONS_H_
#define MY_MSGS__MSG__DETAIL__YOLO_DETECTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "my_msgs/msg/detail/yolo_detection__struct.h"

/// Initialize msg/YoloDetection message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_msgs__msg__YoloDetection
 * )) before or use
 * my_msgs__msg__YoloDetection__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msgs
bool
my_msgs__msg__YoloDetection__init(my_msgs__msg__YoloDetection * msg);

/// Finalize msg/YoloDetection message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msgs
void
my_msgs__msg__YoloDetection__fini(my_msgs__msg__YoloDetection * msg);

/// Create msg/YoloDetection message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_msgs__msg__YoloDetection__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msgs
my_msgs__msg__YoloDetection *
my_msgs__msg__YoloDetection__create();

/// Destroy msg/YoloDetection message.
/**
 * It calls
 * my_msgs__msg__YoloDetection__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msgs
void
my_msgs__msg__YoloDetection__destroy(my_msgs__msg__YoloDetection * msg);

/// Check for msg/YoloDetection message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msgs
bool
my_msgs__msg__YoloDetection__are_equal(const my_msgs__msg__YoloDetection * lhs, const my_msgs__msg__YoloDetection * rhs);

/// Copy a msg/YoloDetection message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msgs
bool
my_msgs__msg__YoloDetection__copy(
  const my_msgs__msg__YoloDetection * input,
  my_msgs__msg__YoloDetection * output);

/// Initialize array of msg/YoloDetection messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_msgs__msg__YoloDetection__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msgs
bool
my_msgs__msg__YoloDetection__Sequence__init(my_msgs__msg__YoloDetection__Sequence * array, size_t size);

/// Finalize array of msg/YoloDetection messages.
/**
 * It calls
 * my_msgs__msg__YoloDetection__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msgs
void
my_msgs__msg__YoloDetection__Sequence__fini(my_msgs__msg__YoloDetection__Sequence * array);

/// Create array of msg/YoloDetection messages.
/**
 * It allocates the memory for the array and calls
 * my_msgs__msg__YoloDetection__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msgs
my_msgs__msg__YoloDetection__Sequence *
my_msgs__msg__YoloDetection__Sequence__create(size_t size);

/// Destroy array of msg/YoloDetection messages.
/**
 * It calls
 * my_msgs__msg__YoloDetection__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msgs
void
my_msgs__msg__YoloDetection__Sequence__destroy(my_msgs__msg__YoloDetection__Sequence * array);

/// Check for msg/YoloDetection message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msgs
bool
my_msgs__msg__YoloDetection__Sequence__are_equal(const my_msgs__msg__YoloDetection__Sequence * lhs, const my_msgs__msg__YoloDetection__Sequence * rhs);

/// Copy an array of msg/YoloDetection messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_msgs
bool
my_msgs__msg__YoloDetection__Sequence__copy(
  const my_msgs__msg__YoloDetection__Sequence * input,
  my_msgs__msg__YoloDetection__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MY_MSGS__MSG__DETAIL__YOLO_DETECTION__FUNCTIONS_H_
