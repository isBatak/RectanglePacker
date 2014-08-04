#ifndef INCLUDED_org_flashdevelop_cpp_debugger_VariableName
#define INCLUDED_org_flashdevelop_cpp_debugger_VariableName

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,VariableName)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,VariableValue)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{


class VariableName_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef VariableName_obj OBJ_;

	public:
		VariableName_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("org.flashdevelop.cpp.debugger.VariableName"); }
		::String __ToString() const { return HX_CSTRING("VariableName.") + tag; }

		static ::org::flashdevelop::cpp::debugger::VariableName Variable(::String name,::String fullName,bool isStatic,::org::flashdevelop::cpp::debugger::VariableValue value);
		static Dynamic Variable_dyn();
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger

#endif /* INCLUDED_org_flashdevelop_cpp_debugger_VariableName */ 
