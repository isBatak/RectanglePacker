#ifndef INCLUDED_org_flashdevelop_cpp_debugger_DebuggerThread
#define INCLUDED_org_flashdevelop_cpp_debugger_DebuggerThread

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(cpp,vm,Deque)
HX_DECLARE_CLASS2(cpp,vm,Mutex)
HX_DECLARE_CLASS2(cpp,vm,ThreadInfo)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,DebuggerThread)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,IController)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,Message)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,ThreadWhereList)
HX_DECLARE_CLASS5(org,flashdevelop,cpp,debugger,_DebuggerThread,DebuggerVariables)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{


class HXCPP_CLASS_ATTRIBUTES  DebuggerThread_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DebuggerThread_obj OBJ_;
		DebuggerThread_obj();
		Void __construct(::org::flashdevelop::cpp::debugger::IController controller,bool startStopped);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DebuggerThread_obj > __new(::org::flashdevelop::cpp::debugger::IController controller,bool startStopped);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DebuggerThread_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DebuggerThread"); }

		virtual Void debuggerThreadMain( );
		Dynamic debuggerThreadMain_dyn();

		virtual Void handleThreadEvent( int threadNumber,int event,int stackFrame,::String className,::String functionName,::String fileName,int lineNumber);
		Dynamic handleThreadEvent_dyn();

		virtual Void emit( ::org::flashdevelop::cpp::debugger::Message message,int id);
		Dynamic emit_dyn();

		virtual Void emitNoId( ::org::flashdevelop::cpp::debugger::Message message);
		Dynamic emitNoId_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message files( );
		Dynamic files_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message filesFullPath( );
		Dynamic filesFullPath_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message classes( );
		Dynamic classes_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message mem( );
		Dynamic mem_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message compact( );
		Dynamic compact_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message collect( );
		Dynamic collect_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message setCurrentThread( int number);
		Dynamic setCurrentThread_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message addFileLineBreakpoint( ::String fileName,int lineNumber);
		Dynamic addFileLineBreakpoint_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message addClassFunctionBreakpoint( ::String className,::String functionName);
		Dynamic addClassFunctionBreakpoint_dyn();

		virtual Void breakFunction( ::String desc,::String className,::Class klass,::String functionName,::EReg functionNameRegex);
		Dynamic breakFunction_dyn();

		virtual Void addFunctionBreakpoint( ::String desc,::String className,::String functionName);
		Dynamic addFunctionBreakpoint_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message listBreakpoints( bool enabled,bool disabled);
		Dynamic listBreakpoints_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message describeBreakpoint( int number);
		Dynamic describeBreakpoint_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message disableAllBreakpoints( );
		Dynamic disableAllBreakpoints_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message disableBreakpointRange( int first,int last);
		Dynamic disableBreakpointRange_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message enableAllBreakpoints( );
		Dynamic enableAllBreakpoints_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message enableBreakpointRange( int first,int last);
		Dynamic enableBreakpointRange_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message deleteAllBreakpoints( );
		Dynamic deleteAllBreakpoints_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message deleteBreakpointRange( int first,int last);
		Dynamic deleteBreakpointRange_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message breakNow( );
		Dynamic breakNow_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message continueCurrent( int count);
		Dynamic continueCurrent_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message step( int count);
		Dynamic step_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message next( int count);
		Dynamic next_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message finish( int count);
		Dynamic finish_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message whereCurrentThread( bool unsafe);
		Dynamic whereCurrentThread_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message whereAllThreads( );
		Dynamic whereAllThreads_dyn();

		virtual ::org::flashdevelop::cpp::debugger::ThreadWhereList threadInfoToThreadWhereLocked( ::cpp::vm::ThreadInfo threadInfo,::org::flashdevelop::cpp::debugger::ThreadWhereList next);
		Dynamic threadInfoToThreadWhereLocked_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message up( int count);
		Dynamic up_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message down( int count);
		Dynamic down_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message setFrame( int number);
		Dynamic setFrame_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message variables( bool unsafe);
		Dynamic variables_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message printExpression( bool unsafe,::String expression);
		Dynamic printExpression_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message getExpression( bool unsafe,::String expression);
		Dynamic getExpression_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message setExpression( bool unsafe,::String lhs,::String rhs);
		Dynamic setExpression_dyn();

		virtual Dynamic getBreakpointIds( int first,int last);
		Dynamic getBreakpointIds_dyn();

		virtual ::org::flashdevelop::cpp::debugger::Message stepExecution( int count,int type);
		Dynamic stepExecution_dyn();

		virtual int findBreakpoint( int bpNumber);
		Dynamic findBreakpoint_dyn();

		virtual ::cpp::vm::ThreadInfo getCurrentThreadInfoLocked( hx::Null< bool >  unsafe);
		Dynamic getCurrentThreadInfoLocked_dyn();

		::cpp::vm::Mutex mStateMutex;
		::org::flashdevelop::cpp::debugger::IController mController;
		int mCurrentThreadNumber;
		int mCurrentStackFrame;
		::cpp::vm::ThreadInfo mCurrentThreadInfo;
		::haxe::ds::IntMap mBreakpoints;
		::haxe::ds::StringMap mBreakpointsByDescription;
		int mNextBreakpointNumber;
		::org::flashdevelop::cpp::debugger::_DebuggerThread::DebuggerVariables mDebuggerVariables;
		static ::cpp::vm::Mutex gStartMutex;
		static bool gStarted;
		static bool gStartStopped;
		static ::cpp::vm::Deque gStartQueue;
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger

#endif /* INCLUDED_org_flashdevelop_cpp_debugger_DebuggerThread */ 
