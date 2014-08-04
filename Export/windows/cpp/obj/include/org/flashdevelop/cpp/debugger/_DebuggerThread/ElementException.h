#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ElementException
#define INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ElementException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(org,flashdevelop,cpp,debugger,_DebuggerThread,ElementException)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{
namespace _DebuggerThread{


class HXCPP_CLASS_ATTRIBUTES  ElementException_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ElementException_obj OBJ_;
		ElementException_obj();
		Void __construct(::String reason,int begin,int end);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ElementException_obj > __new(::String reason,int begin,int end);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ElementException_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ElementException"); }

		::String reason;
		int begin;
		int end;
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
} // end namespace _DebuggerThread

#endif /* INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ElementException */ 
