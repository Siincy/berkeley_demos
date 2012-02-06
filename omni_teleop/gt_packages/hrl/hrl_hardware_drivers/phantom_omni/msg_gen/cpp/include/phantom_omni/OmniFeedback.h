/* Auto-generated by genmsg_cpp for file /home/aellaboudy/aellaboudy_sandbox/gt_packages_new/gt_packages/hrl/hrl_hardware_drivers/phantom_omni/msg/OmniFeedback.msg */
#ifndef PHANTOM_OMNI_MESSAGE_OMNIFEEDBACK_H
#define PHANTOM_OMNI_MESSAGE_OMNIFEEDBACK_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "geometry_msgs/Vector3.h"
#include "geometry_msgs/Vector3.h"

namespace phantom_omni
{
template <class ContainerAllocator>
struct OmniFeedback_ : public ros::Message
{
  typedef OmniFeedback_<ContainerAllocator> Type;

  OmniFeedback_()
  : force()
  , position()
  {
  }

  OmniFeedback_(const ContainerAllocator& _alloc)
  : force(_alloc)
  , position(_alloc)
  {
  }

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _force_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  force;

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _position_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  position;


private:
  static const char* __s_getDataType_() { return "phantom_omni/OmniFeedback"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "e9083ac4fd95494e94fbb0c0f90b6c00"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# This is the force as estimated from the applied torques as well as the current\n\
# end effector position of the robot arm                           \n\
geometry_msgs/Vector3  force                                                                  \n\
geometry_msgs/Vector3  position  \n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, force);
    ros::serialization::serialize(stream, position);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, force);
    ros::serialization::deserialize(stream, position);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(force);
    size += ros::serialization::serializationLength(position);
    return size;
  }

  typedef boost::shared_ptr< ::phantom_omni::OmniFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::phantom_omni::OmniFeedback_<ContainerAllocator>  const> ConstPtr;
}; // struct OmniFeedback
typedef  ::phantom_omni::OmniFeedback_<std::allocator<void> > OmniFeedback;

typedef boost::shared_ptr< ::phantom_omni::OmniFeedback> OmniFeedbackPtr;
typedef boost::shared_ptr< ::phantom_omni::OmniFeedback const> OmniFeedbackConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::phantom_omni::OmniFeedback_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::phantom_omni::OmniFeedback_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace phantom_omni

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::phantom_omni::OmniFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e9083ac4fd95494e94fbb0c0f90b6c00";
  }

  static const char* value(const  ::phantom_omni::OmniFeedback_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe9083ac4fd95494eULL;
  static const uint64_t static_value2 = 0x94fbb0c0f90b6c00ULL;
};

template<class ContainerAllocator>
struct DataType< ::phantom_omni::OmniFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "phantom_omni/OmniFeedback";
  }

  static const char* value(const  ::phantom_omni::OmniFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::phantom_omni::OmniFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# This is the force as estimated from the applied torques as well as the current\n\
# end effector position of the robot arm                           \n\
geometry_msgs/Vector3  force                                                                  \n\
geometry_msgs/Vector3  position  \n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const  ::phantom_omni::OmniFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::phantom_omni::OmniFeedback_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::phantom_omni::OmniFeedback_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.force);
    stream.next(m.position);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct OmniFeedback_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::phantom_omni::OmniFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::phantom_omni::OmniFeedback_<ContainerAllocator> & v) 
  {
    s << indent << "force: ";
s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.force);
    s << indent << "position: ";
s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
  }
};


} // namespace message_operations
} // namespace ros

#endif // PHANTOM_OMNI_MESSAGE_OMNIFEEDBACK_H
