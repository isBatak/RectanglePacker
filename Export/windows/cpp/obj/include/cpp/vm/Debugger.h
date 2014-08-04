#ifndef INCLUDED_cpp_vm_Debugger
#define INCLUDED_cpp_vm_Debugger

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Debugger)
HX_DECLARE_CLASS2(cpp,vm,Parameter)
HX_DECLARE_CLASS2(cpp,vm,StackFrame)
HX_DECLARE_CLASS2(cpp,vm,ThreadInfo)
namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES  Debugger_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Debugger_obj OBJ_;
		Debugger_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Debugger_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Debugger_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		static void __init__();

		::String __ToString() const { return HX_CSTRING("Debugger"); }

		static ::String NONEXISTENT_VALUE;
		static ::String THREAD_NOT_STOPPED;
		static Void setEventNotificationHandler( Dynamic handler);
		static Dynamic setEventNotificationHandler_dyn();

		static Void enableCurrentThreadDebugging( bool enabled);
		static Dynamic enableCurrentThreadDebugging_dyn();

		static int getCurrentThreadNumber( );
		static Dynamic getCurrentThreadNumber_dyn();

		static Array< ::String > getFiles( );
		static Dynamic getFiles_dyn();

		static Array< ::String > getFilesFullPath( );
		static Dynamic getFilesFullPath_dyn();

		static Array< ::String > getClasses( );
		static Dynamic getClasses_dyn();

		static Array< ::Dynamic > getThreadInfos( );
		static Dynamic getThreadInfos_dyn();

		static ::cpp::vm::ThreadInfo getThreadInfo( int threadNumber,bool unsafe);
		static Dynamic getThreadInfo_dyn();

		static int addFileLineBreakpoint( ::String file,int line);
		static Dynamic addFileLineBreakpoint_dyn();

		static int addClassFunctionBreakpoint( ::String className,::String functionName);
		static Dynamic addClassFunctionBreakpoint_dyn();

		static Void deleteBreakpoint( Dynamic number);
		static Dynamic deleteBreakpoint_dyn();

		static Void breakNow( hx::Null< bool >  wait);
		static Dynamic breakNow_dyn();

		static Void continueThreads( int specialThreadNumber,int continueCount);
		static Dynamic continueThreads_dyn();

		static Void stepThread( int threadNumber,int stepType,hx::Null< int >  stepCount);
		static Dynamic stepThread_dyn();

		static Array< ::String > getStackVariables( int threadNumber,int stackFrameNumber,bool unsafe);
		static Dynamic getStackVariables_dyn();

		static Dynamic getStackVariableValue( int threadNumber,int stackFrameNumber,::String name,bool unsafe);
		static Dynamic getStackVariableValue_dyn();

		static Dynamic setStackVariableValue( int threadNumber,int stackFrameNumber,::String name,Dynamic value,bool unsafe);
		static Dynamic setStackVariableValue_dyn();

};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_Debugger */ 
