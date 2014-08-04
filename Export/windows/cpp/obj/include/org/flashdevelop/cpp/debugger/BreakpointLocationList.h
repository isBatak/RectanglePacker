#ifndef INCLUDED_org_flashdevelop_cpp_debugger_BreakpointLocationList
#define INCLUDED_org_flashdevelop_cpp_debugger_BreakpointLocationList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,BreakpointLocationList)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{


class BreakpointLocationList_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef BreakpointLocationList_obj OBJ_;

	public:
		BreakpointLocationList_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("org.flashdevelop.cpp.debugger.BreakpointLocationList"); }
		::String __ToString() const { return HX_CSTRING("BreakpointLocationList.") + tag; }

		static ::org::flashdevelop::cpp::debugger::BreakpointLocationList ClassFunction(::String className,::String functionName,::org::flashdevelop::cpp::debugger::BreakpointLocationList next);
		static Dynamic ClassFunction_dyn();
		static ::org::flashdevelop::cpp::debugger::BreakpointLocationList FileLine(::String fileName,int lineNumber,::org::flashdevelop::cpp::debugger::BreakpointLocationList next);
		static Dynamic FileLine_dyn();
		static ::org::flashdevelop::cpp::debugger::BreakpointLocationList Terminator;
		static inline ::org::flashdevelop::cpp::debugger::BreakpointLocationList Terminator_dyn() { return Terminator; }
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger

#endif /* INCLUDED_org_flashdevelop_cpp_debugger_BreakpointLocationList */ 
