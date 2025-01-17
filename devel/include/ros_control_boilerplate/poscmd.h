// Generated by gencpp from file ros_control_boilerplate/poscmd.msg
// DO NOT EDIT!


#ifndef ROS_CONTROL_BOILERPLATE_MESSAGE_POSCMD_H
#define ROS_CONTROL_BOILERPLATE_MESSAGE_POSCMD_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_control_boilerplate
{
template <class ContainerAllocator>
struct poscmd_
{
  typedef poscmd_<ContainerAllocator> Type;

  poscmd_()
    : cmd(0)
    , cntlwd()
    , tarpos()
    , tolerant()  {
      cntlwd.assign(0);

      tarpos.assign(0);

      tolerant.assign(0);
  }
  poscmd_(const ContainerAllocator& _alloc)
    : cmd(0)
    , cntlwd()
    , tarpos()
    , tolerant()  {
  (void)_alloc;
      cntlwd.assign(0);

      tarpos.assign(0);

      tolerant.assign(0);
  }



   typedef uint16_t _cmd_type;
  _cmd_type cmd;

   typedef boost::array<uint16_t, 6>  _cntlwd_type;
  _cntlwd_type cntlwd;

   typedef boost::array<int32_t, 6>  _tarpos_type;
  _tarpos_type tarpos;

   typedef boost::array<uint16_t, 6>  _tolerant_type;
  _tolerant_type tolerant;





  typedef boost::shared_ptr< ::ros_control_boilerplate::poscmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_control_boilerplate::poscmd_<ContainerAllocator> const> ConstPtr;

}; // struct poscmd_

typedef ::ros_control_boilerplate::poscmd_<std::allocator<void> > poscmd;

typedef boost::shared_ptr< ::ros_control_boilerplate::poscmd > poscmdPtr;
typedef boost::shared_ptr< ::ros_control_boilerplate::poscmd const> poscmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_control_boilerplate::poscmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_control_boilerplate::poscmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_control_boilerplate::poscmd_<ContainerAllocator1> & lhs, const ::ros_control_boilerplate::poscmd_<ContainerAllocator2> & rhs)
{
  return lhs.cmd == rhs.cmd &&
    lhs.cntlwd == rhs.cntlwd &&
    lhs.tarpos == rhs.tarpos &&
    lhs.tolerant == rhs.tolerant;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_control_boilerplate::poscmd_<ContainerAllocator1> & lhs, const ::ros_control_boilerplate::poscmd_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_control_boilerplate

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ros_control_boilerplate::poscmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_control_boilerplate::poscmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_control_boilerplate::poscmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_control_boilerplate::poscmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_control_boilerplate::poscmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_control_boilerplate::poscmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_control_boilerplate::poscmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d52264d0965d62e7c180d35534e09146";
  }

  static const char* value(const ::ros_control_boilerplate::poscmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd52264d0965d62e7ULL;
  static const uint64_t static_value2 = 0xc180d35534e09146ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_control_boilerplate::poscmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_control_boilerplate/poscmd";
  }

  static const char* value(const ::ros_control_boilerplate::poscmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_control_boilerplate::poscmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint16 cmd\n"
"uint16[6] cntlwd\n"
"int32[6] tarpos\n"
"uint16[6] tolerant\n"
;
  }

  static const char* value(const ::ros_control_boilerplate::poscmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_control_boilerplate::poscmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cmd);
      stream.next(m.cntlwd);
      stream.next(m.tarpos);
      stream.next(m.tolerant);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct poscmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_control_boilerplate::poscmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_control_boilerplate::poscmd_<ContainerAllocator>& v)
  {
    s << indent << "cmd: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.cmd);
    s << indent << "cntlwd[]" << std::endl;
    for (size_t i = 0; i < v.cntlwd.size(); ++i)
    {
      s << indent << "  cntlwd[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.cntlwd[i]);
    }
    s << indent << "tarpos[]" << std::endl;
    for (size_t i = 0; i < v.tarpos.size(); ++i)
    {
      s << indent << "  tarpos[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.tarpos[i]);
    }
    s << indent << "tolerant[]" << std::endl;
    for (size_t i = 0; i < v.tolerant.size(); ++i)
    {
      s << indent << "  tolerant[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.tolerant[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_CONTROL_BOILERPLATE_MESSAGE_POSCMD_H
