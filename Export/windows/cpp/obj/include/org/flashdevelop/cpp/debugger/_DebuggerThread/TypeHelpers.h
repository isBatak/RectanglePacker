#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_TypeHelpers
#define INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_TypeHelpers

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,VariableValue)
HX_DECLARE_CLASS5(org,flashdevelop,cpp,debugger,_DebuggerThread,TypeHelpers)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{
namespace _DebuggerThread{


class HXCPP_CLASS_ATTRIBUTES  TypeHelpers_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TypeHelpers_obj OBJ_;
		TypeHelpers_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TypeHelpers_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TypeHelpers_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TypeHelpers"); }

		static ::String getValueTypeName( Dynamic value);
		static Dynamic getValueTypeName_dyn();

		static ::String getValueString( Dynamic value,::String indent,hx::Null< bool >  ellipseForObjects);
		static Dynamic getValueString_dyn();

		static ::String getAnonValueString( Dynamic value,::String indent);
		static Dynamic getAnonValueString_dyn();

		static ::String getClassValueString( ::Class klass,::String indent);
		static Dynamic getClassValueString_dyn();

		static ::String getInstanceValueString( ::Class klass,Dynamic value,::String indent);
		static Dynamic getInstanceValueString_dyn();

		static ::org::flashdevelop::cpp::debugger::VariableValue getVariableValue( ::String parentName,Dynamic value);
		static Dynamic getVariableValue_dyn();

};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
} // end namespace _DebuggerThread

#endif /* INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_TypeHelpers */ 
