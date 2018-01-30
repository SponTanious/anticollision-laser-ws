// Generated by gencpp from file axis_camera/Axis.msg
// DO NOT EDIT!


#ifndef AXIS_CAMERA_MESSAGE_AXIS_H
#define AXIS_CAMERA_MESSAGE_AXIS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace axis_camera
{
template <class ContainerAllocator>
struct Axis_
{
  typedef Axis_<ContainerAllocator> Type;

  Axis_()
    : pan(0.0)
    , tilt(0.0)
    , zoom(0.0)
    , focus(0.0)
    , brightness(0.0)
    , iris(0.0)
    , autofocus(false)  {
    }
  Axis_(const ContainerAllocator& _alloc)
    : pan(0.0)
    , tilt(0.0)
    , zoom(0.0)
    , focus(0.0)
    , brightness(0.0)
    , iris(0.0)
    , autofocus(false)  {
  (void)_alloc;
    }



   typedef float _pan_type;
  _pan_type pan;

   typedef float _tilt_type;
  _tilt_type tilt;

   typedef float _zoom_type;
  _zoom_type zoom;

   typedef float _focus_type;
  _focus_type focus;

   typedef float _brightness_type;
  _brightness_type brightness;

   typedef float _iris_type;
  _iris_type iris;

   typedef uint8_t _autofocus_type;
  _autofocus_type autofocus;




  typedef boost::shared_ptr< ::axis_camera::Axis_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::axis_camera::Axis_<ContainerAllocator> const> ConstPtr;

}; // struct Axis_

typedef ::axis_camera::Axis_<std::allocator<void> > Axis;

typedef boost::shared_ptr< ::axis_camera::Axis > AxisPtr;
typedef boost::shared_ptr< ::axis_camera::Axis const> AxisConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::axis_camera::Axis_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::axis_camera::Axis_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace axis_camera

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'axis_camera': ['/home/automation/laser_ws/src/axis_camera/msg'], 'std_msgs': ['/opt/ros/lunar/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/lunar/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::axis_camera::Axis_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::axis_camera::Axis_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::axis_camera::Axis_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::axis_camera::Axis_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::axis_camera::Axis_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::axis_camera::Axis_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::axis_camera::Axis_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7559be9cb80074f71cea3a03f4b3abe0";
  }

  static const char* value(const ::axis_camera::Axis_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7559be9cb80074f7ULL;
  static const uint64_t static_value2 = 0x1cea3a03f4b3abe0ULL;
};

template<class ContainerAllocator>
struct DataType< ::axis_camera::Axis_<ContainerAllocator> >
{
  static const char* value()
  {
    return "axis_camera/Axis";
  }

  static const char* value(const ::axis_camera::Axis_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::axis_camera::Axis_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 pan\n\
float32 tilt\n\
float32 zoom\n\
float32 focus\n\
float32 brightness\n\
float32 iris\n\
bool autofocus\n\
";
  }

  static const char* value(const ::axis_camera::Axis_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::axis_camera::Axis_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pan);
      stream.next(m.tilt);
      stream.next(m.zoom);
      stream.next(m.focus);
      stream.next(m.brightness);
      stream.next(m.iris);
      stream.next(m.autofocus);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Axis_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::axis_camera::Axis_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::axis_camera::Axis_<ContainerAllocator>& v)
  {
    s << indent << "pan: ";
    Printer<float>::stream(s, indent + "  ", v.pan);
    s << indent << "tilt: ";
    Printer<float>::stream(s, indent + "  ", v.tilt);
    s << indent << "zoom: ";
    Printer<float>::stream(s, indent + "  ", v.zoom);
    s << indent << "focus: ";
    Printer<float>::stream(s, indent + "  ", v.focus);
    s << indent << "brightness: ";
    Printer<float>::stream(s, indent + "  ", v.brightness);
    s << indent << "iris: ";
    Printer<float>::stream(s, indent + "  ", v.iris);
    s << indent << "autofocus: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.autofocus);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AXIS_CAMERA_MESSAGE_AXIS_H
