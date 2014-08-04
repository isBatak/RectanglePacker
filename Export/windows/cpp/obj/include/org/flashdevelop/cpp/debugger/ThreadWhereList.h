#ifndef INCLUDED_org_flashdevelop_cpp_debugger_ThreadWhereList
#define INCLUDED_org_flashdevelop_cpp_debugger_ThreadWhereList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,FrameList)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,ThreadStatus)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,ThreadWhereList)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{


class ThreadWhereList_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ThreadWhereList_obj OBJ_;

	public:
		ThreadWhereList_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("org.flashdevelop.cpp.debugger.ThreadWhereList"); }
		::String __ToString() const { return HX_CSTRING("ThreadWhereList.") + tag; }

		static ::org::flashdevelop::cpp::debugger::ThreadWhereList Terminator;
		static inline ::org::flashdevelop::cpp::debugger::ThreadWhereList Terminator_dyn() { return Terminator; }
		static ::org::flashdevelop::cpp::debugger::ThreadWhereList Where(int number,::org::flashdevelop::cpp::debugger::ThreadStatus status,::org::flashdevelop::cpp::debugger::FrameList frameList,::org::flashdevelop::cpp::debugger::ThreadWhereList next);
		static Dynamic Where_dyn();
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger

#endif /* INCLUDED_org_flashdevelop_cpp_debugger_ThreadWhereList */ 
