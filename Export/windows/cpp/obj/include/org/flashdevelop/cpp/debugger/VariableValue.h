#ifndef INCLUDED_org_flashdevelop_cpp_debugger_VariableValue
#define INCLUDED_org_flashdevelop_cpp_debugger_VariableValue

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,VariableName)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,VariableValue)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{


class VariableValue_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef VariableValue_obj OBJ_;

	public:
		VariableValue_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("org.flashdevelop.cpp.debugger.VariableValue"); }
		::String __ToString() const { return HX_CSTRING("VariableValue.") + tag; }

		static ::org::flashdevelop::cpp::debugger::VariableValue Item(::String type,::String value,Array< ::Dynamic > children);
		static Dynamic Item_dyn();
		static ::org::flashdevelop::cpp::debugger::VariableValue NoItem;
		static inline ::org::flashdevelop::cpp::debugger::VariableValue NoItem_dyn() { return NoItem; }
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger

#endif /* INCLUDED_org_flashdevelop_cpp_debugger_VariableValue */ 
