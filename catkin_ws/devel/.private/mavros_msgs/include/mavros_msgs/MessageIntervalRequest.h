// Generated by gencpp from file mavros_msgs/MessageIntervalRequest.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_MESSAGEINTERVALREQUEST_H
#define MAVROS_MSGS_MESSAGE_MESSAGEINTERVALREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros_msgs
{
template <class ContainerAllocator>
struct MessageIntervalRequest_
{
  typedef MessageIntervalRequest_<ContainerAllocator> Type;

  MessageIntervalRequest_()
    : message_id(0)
    , message_rate(0.0)  {
    }
  MessageIntervalRequest_(const ContainerAllocator& _alloc)
    : message_id(0)
    , message_rate(0.0)  {
  (void)_alloc;
    }



   typedef uint32_t _message_id_type;
  _message_id_type message_id;

   typedef float _message_rate_type;
  _message_rate_type message_rate;





  typedef boost::shared_ptr< ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MessageIntervalRequest_

typedef ::mavros_msgs::MessageIntervalRequest_<std::allocator<void> > MessageIntervalRequest;

typedef boost::shared_ptr< ::mavros_msgs::MessageIntervalRequest > MessageIntervalRequestPtr;
typedef boost::shared_ptr< ::mavros_msgs::MessageIntervalRequest const> MessageIntervalRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator1> & lhs, const ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator2> & rhs)
{
  return lhs.message_id == rhs.message_id &&
    lhs.message_rate == rhs.message_rate;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator1> & lhs, const ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e0211a7928924521de24f3981706be52";
  }

  static const char* value(const ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe0211a7928924521ULL;
  static const uint64_t static_value2 = 0xde24f3981706be52ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/MessageIntervalRequest";
  }

  static const char* value(const ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# sets message interval\n"
"# See MAV_CMD_SET_MESSAGE_INTERVAL\n"
"\n"
"uint32 message_id\n"
"float32 message_rate\n"
;
  }

  static const char* value(const ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.message_id);
      stream.next(m.message_rate);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MessageIntervalRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::MessageIntervalRequest_<ContainerAllocator>& v)
  {
    s << indent << "message_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.message_id);
    s << indent << "message_rate: ";
    Printer<float>::stream(s, indent + "  ", v.message_rate);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_MESSAGEINTERVALREQUEST_H
