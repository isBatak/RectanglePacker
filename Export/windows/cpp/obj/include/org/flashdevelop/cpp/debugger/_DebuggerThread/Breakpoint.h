#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_Breakpoint
#define INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_Breakpoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(org,flashdevelop,cpp,debugger,_DebuggerThread,BP)
HX_DECLARE_CLASS5(org,flashdevelop,cpp,debugger,_DebuggerThread,Breakpoint)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{
namespace _DebuggerThread{


class HXCPP_CLASS_ATTRIBUTES  Breakpoint_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Breakpoint_obj OBJ_;
		Breakpoint_obj();
		Void __construct(int num,::String desc);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Breakpoint_obj > __new(int num,::String desc);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Breakpoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Breakpoint"); }

		int number;
		::String description;
		bool enabled;
		int continueCount;
		virtual Void _delete( );
		Dynamic _delete_dyn();

		virtual Void addFileLine( ::String fileName,int lineNumber);
		Dynamic addFileLine_dyn();

		virtual Void addClassFunction( ::String className,::String functionName);
		Dynamic addClassFunction_dyn();

		virtual int bpCount( );
		Dynamic bpCount_dyn();

		virtual Dynamic bps( );
		Dynamic bps_dyn();

		virtual Void enable( );
		Dynamic enable_dyn();

		virtual Void disable( );
		Dynamic disable_dyn();

		Array< ::Dynamic > mBps;
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
} // end namespace _DebuggerThread

#endif /* INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_Breakpoint */ 
