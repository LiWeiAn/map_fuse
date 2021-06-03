// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cmr_msgs:srv/MaxonControlword.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "cmr_msgs/srv/detail/maxon_controlword__struct.h"
#include "cmr_msgs/srv/detail/maxon_controlword__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool cmr_msgs__srv__maxon_controlword__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("cmr_msgs.srv._maxon_controlword.MaxonControlword_Request", full_classname_dest, 56) == 0);
  }
  cmr_msgs__srv__MaxonControlword_Request * ros_message = _ros_message;
  {  // node_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->node_id = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // switch_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "switch_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->switch_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enable_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_voltage");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_voltage = (Py_True == field);
    Py_DECREF(field);
  }
  {  // quick_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "quick_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->quick_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enable_operation
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_operation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_operation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fault_reset
    PyObject * field = PyObject_GetAttrString(_pymsg, "fault_reset");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fault_reset = (Py_True == field);
    Py_DECREF(field);
  }
  {  // halt
    PyObject * field = PyObject_GetAttrString(_pymsg, "halt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->halt = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cmr_msgs__srv__maxon_controlword__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MaxonControlword_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cmr_msgs.srv._maxon_controlword");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MaxonControlword_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cmr_msgs__srv__MaxonControlword_Request * ros_message = (cmr_msgs__srv__MaxonControlword_Request *)raw_ros_message;
  {  // node_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->node_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // switch_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->switch_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "switch_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable_voltage
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_voltage ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quick_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->quick_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quick_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable_operation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_operation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_operation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fault_reset
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fault_reset ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fault_reset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // halt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->halt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "halt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "cmr_msgs/srv/detail/maxon_controlword__struct.h"
// already included above
// #include "cmr_msgs/srv/detail/maxon_controlword__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool cmr_msgs__srv__maxon_controlword__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("cmr_msgs.srv._maxon_controlword.MaxonControlword_Response", full_classname_dest, 57) == 0);
  }
  cmr_msgs__srv__MaxonControlword_Response * ros_message = _ros_message;
  {  // response
    PyObject * field = PyObject_GetAttrString(_pymsg, "response");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->response = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cmr_msgs__srv__maxon_controlword__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MaxonControlword_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cmr_msgs.srv._maxon_controlword");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MaxonControlword_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cmr_msgs__srv__MaxonControlword_Response * ros_message = (cmr_msgs__srv__MaxonControlword_Response *)raw_ros_message;
  {  // response
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->response ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "response", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
