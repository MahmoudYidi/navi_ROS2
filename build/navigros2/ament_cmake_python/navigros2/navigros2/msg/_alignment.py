# generated from rosidl_generator_py/resource/_idl.py.em
# with input from navigros2:msg/Alignment.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Alignment(type):
    """Metaclass of message 'Alignment'."""

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
            module = import_type_support('navigros2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'navigros2.msg.Alignment')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__alignment
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__alignment
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__alignment
            cls._TYPE_SUPPORT = module.type_support_msg__msg__alignment
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__alignment

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Alignment(metaclass=Metaclass_Alignment):
    """Message class 'Alignment'."""

    __slots__ = [
        '_alignment',
        '_uncertainty',
    ]

    _fields_and_field_types = {
        'alignment': 'float',
        'uncertainty': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.alignment = kwargs.get('alignment', float())
        self.uncertainty = kwargs.get('uncertainty', float())

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
        if self.alignment != other.alignment:
            return False
        if self.uncertainty != other.uncertainty:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def alignment(self):
        """Message field 'alignment'."""
        return self._alignment

    @alignment.setter
    def alignment(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alignment' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alignment' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alignment = value

    @builtins.property
    def uncertainty(self):
        """Message field 'uncertainty'."""
        return self._uncertainty

    @uncertainty.setter
    def uncertainty(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'uncertainty' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'uncertainty' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._uncertainty = value
