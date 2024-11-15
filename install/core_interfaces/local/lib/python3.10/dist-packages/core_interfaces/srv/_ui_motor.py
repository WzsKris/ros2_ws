# generated from rosidl_generator_py/resource/_idl.py.em
# with input from core_interfaces:srv/UiMotor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UiMotor_Request(type):
    """Metaclass of message 'UiMotor_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('core_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'core_interfaces.srv.UiMotor_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ui_motor__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ui_motor__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ui_motor__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ui_motor__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ui_motor__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UiMotor_Request(metaclass=Metaclass_UiMotor_Request):
    """Message class 'UiMotor_Request'."""

    __slots__ = [
        '_leg1',
        '_leg2',
        '_leg3',
    ]

    _fields_and_field_types = {
        'leg1': 'uint8',
        'leg2': 'uint8',
        'leg3': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.leg1 = kwargs.get('leg1', int())
        self.leg2 = kwargs.get('leg2', int())
        self.leg3 = kwargs.get('leg3', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.leg1 != other.leg1:
            return False
        if self.leg2 != other.leg2:
            return False
        if self.leg3 != other.leg3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def leg1(self):
        """Message field 'leg1'."""
        return self._leg1

    @leg1.setter
    def leg1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'leg1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'leg1' field must be an unsigned integer in [0, 255]"
        self._leg1 = value

    @builtins.property
    def leg2(self):
        """Message field 'leg2'."""
        return self._leg2

    @leg2.setter
    def leg2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'leg2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'leg2' field must be an unsigned integer in [0, 255]"
        self._leg2 = value

    @builtins.property
    def leg3(self):
        """Message field 'leg3'."""
        return self._leg3

    @leg3.setter
    def leg3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'leg3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'leg3' field must be an unsigned integer in [0, 255]"
        self._leg3 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_UiMotor_Response(type):
    """Metaclass of message 'UiMotor_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('core_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'core_interfaces.srv.UiMotor_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ui_motor__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ui_motor__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ui_motor__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ui_motor__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ui_motor__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UiMotor_Response(metaclass=Metaclass_UiMotor_Response):
    """Message class 'UiMotor_Response'."""

    __slots__ = [
        '_beat',
    ]

    _fields_and_field_types = {
        'beat': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.beat = kwargs.get('beat', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.beat != other.beat:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def beat(self):
        """Message field 'beat'."""
        return self._beat

    @beat.setter
    def beat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'beat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'beat' field must be an unsigned integer in [0, 255]"
        self._beat = value


class Metaclass_UiMotor(type):
    """Metaclass of service 'UiMotor'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('core_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'core_interfaces.srv.UiMotor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ui_motor

            from core_interfaces.srv import _ui_motor
            if _ui_motor.Metaclass_UiMotor_Request._TYPE_SUPPORT is None:
                _ui_motor.Metaclass_UiMotor_Request.__import_type_support__()
            if _ui_motor.Metaclass_UiMotor_Response._TYPE_SUPPORT is None:
                _ui_motor.Metaclass_UiMotor_Response.__import_type_support__()


class UiMotor(metaclass=Metaclass_UiMotor):
    from core_interfaces.srv._ui_motor import UiMotor_Request as Request
    from core_interfaces.srv._ui_motor import UiMotor_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
