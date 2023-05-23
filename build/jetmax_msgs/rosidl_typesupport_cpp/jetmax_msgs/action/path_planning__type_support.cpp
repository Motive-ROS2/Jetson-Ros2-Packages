// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from jetmax_msgs:action/PathPlanning.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "jetmax_msgs/action/detail/path_planning__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathPlanning_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathPlanning_Goal_type_support_ids_t;

static const _PathPlanning_Goal_type_support_ids_t _PathPlanning_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathPlanning_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathPlanning_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathPlanning_Goal_type_support_symbol_names_t _PathPlanning_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, action, PathPlanning_Goal)),
  }
};

typedef struct _PathPlanning_Goal_type_support_data_t
{
  void * data[2];
} _PathPlanning_Goal_type_support_data_t;

static _PathPlanning_Goal_type_support_data_t _PathPlanning_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathPlanning_Goal_message_typesupport_map = {
  2,
  "jetmax_msgs",
  &_PathPlanning_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_PathPlanning_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_PathPlanning_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PathPlanning_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathPlanning_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_Goal>()
{
  return &::jetmax_msgs::action::rosidl_typesupport_cpp::PathPlanning_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, jetmax_msgs, action, PathPlanning_Goal)() {
  return get_message_type_support_handle<jetmax_msgs::action::PathPlanning_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathPlanning_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathPlanning_Result_type_support_ids_t;

static const _PathPlanning_Result_type_support_ids_t _PathPlanning_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathPlanning_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathPlanning_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathPlanning_Result_type_support_symbol_names_t _PathPlanning_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, action, PathPlanning_Result)),
  }
};

typedef struct _PathPlanning_Result_type_support_data_t
{
  void * data[2];
} _PathPlanning_Result_type_support_data_t;

static _PathPlanning_Result_type_support_data_t _PathPlanning_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathPlanning_Result_message_typesupport_map = {
  2,
  "jetmax_msgs",
  &_PathPlanning_Result_message_typesupport_ids.typesupport_identifier[0],
  &_PathPlanning_Result_message_typesupport_symbol_names.symbol_name[0],
  &_PathPlanning_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PathPlanning_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathPlanning_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_Result>()
{
  return &::jetmax_msgs::action::rosidl_typesupport_cpp::PathPlanning_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, jetmax_msgs, action, PathPlanning_Result)() {
  return get_message_type_support_handle<jetmax_msgs::action::PathPlanning_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathPlanning_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathPlanning_Feedback_type_support_ids_t;

static const _PathPlanning_Feedback_type_support_ids_t _PathPlanning_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathPlanning_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathPlanning_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathPlanning_Feedback_type_support_symbol_names_t _PathPlanning_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, action, PathPlanning_Feedback)),
  }
};

typedef struct _PathPlanning_Feedback_type_support_data_t
{
  void * data[2];
} _PathPlanning_Feedback_type_support_data_t;

static _PathPlanning_Feedback_type_support_data_t _PathPlanning_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathPlanning_Feedback_message_typesupport_map = {
  2,
  "jetmax_msgs",
  &_PathPlanning_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_PathPlanning_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_PathPlanning_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PathPlanning_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathPlanning_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_Feedback>()
{
  return &::jetmax_msgs::action::rosidl_typesupport_cpp::PathPlanning_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, jetmax_msgs, action, PathPlanning_Feedback)() {
  return get_message_type_support_handle<jetmax_msgs::action::PathPlanning_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathPlanning_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathPlanning_SendGoal_Request_type_support_ids_t;

static const _PathPlanning_SendGoal_Request_type_support_ids_t _PathPlanning_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathPlanning_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathPlanning_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathPlanning_SendGoal_Request_type_support_symbol_names_t _PathPlanning_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, action, PathPlanning_SendGoal_Request)),
  }
};

typedef struct _PathPlanning_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _PathPlanning_SendGoal_Request_type_support_data_t;

static _PathPlanning_SendGoal_Request_type_support_data_t _PathPlanning_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathPlanning_SendGoal_Request_message_typesupport_map = {
  2,
  "jetmax_msgs",
  &_PathPlanning_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PathPlanning_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PathPlanning_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PathPlanning_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathPlanning_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_SendGoal_Request>()
{
  return &::jetmax_msgs::action::rosidl_typesupport_cpp::PathPlanning_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, jetmax_msgs, action, PathPlanning_SendGoal_Request)() {
  return get_message_type_support_handle<jetmax_msgs::action::PathPlanning_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathPlanning_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathPlanning_SendGoal_Response_type_support_ids_t;

static const _PathPlanning_SendGoal_Response_type_support_ids_t _PathPlanning_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathPlanning_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathPlanning_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathPlanning_SendGoal_Response_type_support_symbol_names_t _PathPlanning_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, action, PathPlanning_SendGoal_Response)),
  }
};

typedef struct _PathPlanning_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _PathPlanning_SendGoal_Response_type_support_data_t;

static _PathPlanning_SendGoal_Response_type_support_data_t _PathPlanning_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathPlanning_SendGoal_Response_message_typesupport_map = {
  2,
  "jetmax_msgs",
  &_PathPlanning_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PathPlanning_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PathPlanning_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PathPlanning_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathPlanning_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_SendGoal_Response>()
{
  return &::jetmax_msgs::action::rosidl_typesupport_cpp::PathPlanning_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, jetmax_msgs, action, PathPlanning_SendGoal_Response)() {
  return get_message_type_support_handle<jetmax_msgs::action::PathPlanning_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathPlanning_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathPlanning_SendGoal_type_support_ids_t;

static const _PathPlanning_SendGoal_type_support_ids_t _PathPlanning_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathPlanning_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathPlanning_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathPlanning_SendGoal_type_support_symbol_names_t _PathPlanning_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, action, PathPlanning_SendGoal)),
  }
};

typedef struct _PathPlanning_SendGoal_type_support_data_t
{
  void * data[2];
} _PathPlanning_SendGoal_type_support_data_t;

static _PathPlanning_SendGoal_type_support_data_t _PathPlanning_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathPlanning_SendGoal_service_typesupport_map = {
  2,
  "jetmax_msgs",
  &_PathPlanning_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_PathPlanning_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_PathPlanning_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PathPlanning_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathPlanning_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<jetmax_msgs::action::PathPlanning_SendGoal>()
{
  return &::jetmax_msgs::action::rosidl_typesupport_cpp::PathPlanning_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathPlanning_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathPlanning_GetResult_Request_type_support_ids_t;

static const _PathPlanning_GetResult_Request_type_support_ids_t _PathPlanning_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathPlanning_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathPlanning_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathPlanning_GetResult_Request_type_support_symbol_names_t _PathPlanning_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, action, PathPlanning_GetResult_Request)),
  }
};

typedef struct _PathPlanning_GetResult_Request_type_support_data_t
{
  void * data[2];
} _PathPlanning_GetResult_Request_type_support_data_t;

static _PathPlanning_GetResult_Request_type_support_data_t _PathPlanning_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathPlanning_GetResult_Request_message_typesupport_map = {
  2,
  "jetmax_msgs",
  &_PathPlanning_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PathPlanning_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PathPlanning_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PathPlanning_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathPlanning_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_GetResult_Request>()
{
  return &::jetmax_msgs::action::rosidl_typesupport_cpp::PathPlanning_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, jetmax_msgs, action, PathPlanning_GetResult_Request)() {
  return get_message_type_support_handle<jetmax_msgs::action::PathPlanning_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathPlanning_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathPlanning_GetResult_Response_type_support_ids_t;

static const _PathPlanning_GetResult_Response_type_support_ids_t _PathPlanning_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathPlanning_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathPlanning_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathPlanning_GetResult_Response_type_support_symbol_names_t _PathPlanning_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, action, PathPlanning_GetResult_Response)),
  }
};

typedef struct _PathPlanning_GetResult_Response_type_support_data_t
{
  void * data[2];
} _PathPlanning_GetResult_Response_type_support_data_t;

static _PathPlanning_GetResult_Response_type_support_data_t _PathPlanning_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathPlanning_GetResult_Response_message_typesupport_map = {
  2,
  "jetmax_msgs",
  &_PathPlanning_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PathPlanning_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PathPlanning_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PathPlanning_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathPlanning_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_GetResult_Response>()
{
  return &::jetmax_msgs::action::rosidl_typesupport_cpp::PathPlanning_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, jetmax_msgs, action, PathPlanning_GetResult_Response)() {
  return get_message_type_support_handle<jetmax_msgs::action::PathPlanning_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathPlanning_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathPlanning_GetResult_type_support_ids_t;

static const _PathPlanning_GetResult_type_support_ids_t _PathPlanning_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathPlanning_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathPlanning_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathPlanning_GetResult_type_support_symbol_names_t _PathPlanning_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, action, PathPlanning_GetResult)),
  }
};

typedef struct _PathPlanning_GetResult_type_support_data_t
{
  void * data[2];
} _PathPlanning_GetResult_type_support_data_t;

static _PathPlanning_GetResult_type_support_data_t _PathPlanning_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathPlanning_GetResult_service_typesupport_map = {
  2,
  "jetmax_msgs",
  &_PathPlanning_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_PathPlanning_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_PathPlanning_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PathPlanning_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathPlanning_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<jetmax_msgs::action::PathPlanning_GetResult>()
{
  return &::jetmax_msgs::action::rosidl_typesupport_cpp::PathPlanning_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PathPlanning_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PathPlanning_FeedbackMessage_type_support_ids_t;

static const _PathPlanning_FeedbackMessage_type_support_ids_t _PathPlanning_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PathPlanning_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PathPlanning_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PathPlanning_FeedbackMessage_type_support_symbol_names_t _PathPlanning_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetmax_msgs, action, PathPlanning_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jetmax_msgs, action, PathPlanning_FeedbackMessage)),
  }
};

typedef struct _PathPlanning_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _PathPlanning_FeedbackMessage_type_support_data_t;

static _PathPlanning_FeedbackMessage_type_support_data_t _PathPlanning_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PathPlanning_FeedbackMessage_message_typesupport_map = {
  2,
  "jetmax_msgs",
  &_PathPlanning_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_PathPlanning_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_PathPlanning_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PathPlanning_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PathPlanning_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jetmax_msgs::action::PathPlanning_FeedbackMessage>()
{
  return &::jetmax_msgs::action::rosidl_typesupport_cpp::PathPlanning_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, jetmax_msgs, action, PathPlanning_FeedbackMessage)() {
  return get_message_type_support_handle<jetmax_msgs::action::PathPlanning_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "jetmax_msgs/action/detail/path_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace jetmax_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t PathPlanning_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace jetmax_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<jetmax_msgs::action::PathPlanning>()
{
  using ::jetmax_msgs::action::rosidl_typesupport_cpp::PathPlanning_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  PathPlanning_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::jetmax_msgs::action::PathPlanning::Impl::SendGoalService>();
  PathPlanning_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::jetmax_msgs::action::PathPlanning::Impl::GetResultService>();
  PathPlanning_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::jetmax_msgs::action::PathPlanning::Impl::CancelGoalService>();
  PathPlanning_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::jetmax_msgs::action::PathPlanning::Impl::FeedbackMessage>();
  PathPlanning_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::jetmax_msgs::action::PathPlanning::Impl::GoalStatusMessage>();
  return &PathPlanning_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
