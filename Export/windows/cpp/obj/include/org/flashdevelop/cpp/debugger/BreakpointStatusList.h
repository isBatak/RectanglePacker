#ifndef INCLUDED_org_flashdevelop_cpp_debugger_BreakpointStatusList
#define INCLUDED_org_flashdevelop_cpp_debugger_BreakpointStatusList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,BreakpointStatusList)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{


class BreakpointStatusList_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef BreakpointStatusList_obj OBJ_;

	public:
		BreakpointStatusList_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("org.flashdevelop.cpp.debugger.BreakpointStatusList"); }
		::String __ToString() const { return HX_CSTRING("BreakpointStatusList.") + tag; }

		static ::org::flashdevelop::cpp::debugger::BreakpointStatusList AlreadyDisabled(int number,::org::flashdevelop::cpp::debugger::BreakpointStatusList next);
		static Dynamic AlreadyDisabled_dyn();
		static ::org::flashdevelop::cpp::debugger::BreakpointStatusList AlreadyEnabled(int number,::org::flashdevelop::cpp::debugger::BreakpointStatusList next);
		static Dynamic AlreadyEnabled_dyn();
		static ::org::flashdevelop::cpp::debugger::BreakpointStatusList Deleted(int number,::org::flashdevelop::cpp::debugger::BreakpointStatusList next);
		static Dynamic Deleted_dyn();
		static ::org::flashdevelop::cpp::debugger::BreakpointStatusList Disabled(int number,::org::flashdevelop::cpp::debugger::BreakpointStatusList next);
		static Dynamic Disabled_dyn();
		static ::org::flashdevelop::cpp::debugger::BreakpointStatusList Enabled(int number,::org::flashdevelop::cpp::debugger::BreakpointStatusList next);
		static Dynamic Enabled_dyn();
		static ::org::flashdevelop::cpp::debugger::BreakpointStatusList Nonexistent(int number,::org::flashdevelop::cpp::debugger::BreakpointStatusList next);
		static Dynamic Nonexistent_dyn();
		static ::org::flashdevelop::cpp::debugger::BreakpointStatusList Terminator;
		static inline ::org::flashdevelop::cpp::debugger::BreakpointStatusList Terminator_dyn() { return Terminator; }
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger

#endif /* INCLUDED_org_flashdevelop_cpp_debugger_BreakpointStatusList */ 
