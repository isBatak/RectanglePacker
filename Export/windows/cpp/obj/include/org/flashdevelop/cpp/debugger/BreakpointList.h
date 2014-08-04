#ifndef INCLUDED_org_flashdevelop_cpp_debugger_BreakpointList
#define INCLUDED_org_flashdevelop_cpp_debugger_BreakpointList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,BreakpointList)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{


class BreakpointList_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef BreakpointList_obj OBJ_;

	public:
		BreakpointList_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("org.flashdevelop.cpp.debugger.BreakpointList"); }
		::String __ToString() const { return HX_CSTRING("BreakpointList.") + tag; }

		static ::org::flashdevelop::cpp::debugger::BreakpointList Breakpoint(int number,::String description,bool enabled,bool multi,::org::flashdevelop::cpp::debugger::BreakpointList next);
		static Dynamic Breakpoint_dyn();
		static ::org::flashdevelop::cpp::debugger::BreakpointList Terminator;
		static inline ::org::flashdevelop::cpp::debugger::BreakpointList Terminator_dyn() { return Terminator; }
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger

#endif /* INCLUDED_org_flashdevelop_cpp_debugger_BreakpointList */ 
