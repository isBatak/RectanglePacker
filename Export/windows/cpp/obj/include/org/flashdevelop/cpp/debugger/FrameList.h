#ifndef INCLUDED_org_flashdevelop_cpp_debugger_FrameList
#define INCLUDED_org_flashdevelop_cpp_debugger_FrameList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,FrameList)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{


class FrameList_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FrameList_obj OBJ_;

	public:
		FrameList_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("org.flashdevelop.cpp.debugger.FrameList"); }
		::String __ToString() const { return HX_CSTRING("FrameList.") + tag; }

		static ::org::flashdevelop::cpp::debugger::FrameList Frame(bool isCurrent,int number,::String className,::String functionName,::String fileName,int lineNumber,::org::flashdevelop::cpp::debugger::FrameList next);
		static Dynamic Frame_dyn();
		static ::org::flashdevelop::cpp::debugger::FrameList Terminator;
		static inline ::org::flashdevelop::cpp::debugger::FrameList Terminator_dyn() { return Terminator; }
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger

#endif /* INCLUDED_org_flashdevelop_cpp_debugger_FrameList */ 
