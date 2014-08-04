#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_DebuggerVariables
#define INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_DebuggerVariables

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS5(org,flashdevelop,cpp,debugger,_DebuggerThread,DebuggerVariables)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{
namespace _DebuggerThread{


class HXCPP_CLASS_ATTRIBUTES  DebuggerVariables_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DebuggerVariables_obj OBJ_;
		DebuggerVariables_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DebuggerVariables_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DebuggerVariables_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DebuggerVariables"); }

		virtual Void set( ::String key,Dynamic value);
		Dynamic set_dyn();

		virtual Dynamic get( ::String key);
		Dynamic get_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		::haxe::ds::StringMap mMap;
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
} // end namespace _DebuggerThread

#endif /* INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_DebuggerVariables */ 
