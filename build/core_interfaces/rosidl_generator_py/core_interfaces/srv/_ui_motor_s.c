// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from core_interfaces:srv/UiMotor.idl
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
#include "core_interfaces/srv/detail/ui_motor__struct.h"
#include "core_interfaces/srv/detail/ui_motor__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool core_interfaces__srv__ui_motor__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("core_interfaces.srv._ui_motor.UiMotor_Request", full_classname_dest, 45) == 0);
  }
  core_interfaces__srv__UiMotor_Request * ros_message = _ros_message;
  {  // leg1
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->leg1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // leg2
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->leg2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // leg3
    PyObject * field = PyObject_GetAttrString(_pymsg, "leg3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->leg3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * core_interfaces__srv__ui_motor__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UiMotor_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("core_interfaces.srv._ui_motor");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UiMotor_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  core_interfaces__srv__UiMotor_Request * ros_message = (core_interfaces__srv__UiMotor_Request *)raw_ros_message;
  {  // leg1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->leg1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->leg2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leg3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->leg3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leg3", field);
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
// #include "core_interfaces/srv/detail/ui_motor__struct.h"
// already included above
// #include "core_interfaces/srv/detail/ui_motor__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool core_interfaces__srv__ui_motor__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("core_interfaces.srv._ui_motor.UiMotor_Response", full_classname_dest, 46) == 0);
  }
  core_interfaces__srv__UiMotor_Response * ros_message = _ros_message;
  {  // beat
    PyObject * field = PyObject_GetAttrString(_pymsg, "beat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->beat = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * core_interfaces__srv__ui_motor__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UiMotor_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("core_interfaces.srv._ui_motor");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UiMotor_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  core_interfaces__srv__UiMotor_Response * ros_message = (core_interfaces__srv__UiMotor_Response *)raw_ros_message;
  {  // beat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->beat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
