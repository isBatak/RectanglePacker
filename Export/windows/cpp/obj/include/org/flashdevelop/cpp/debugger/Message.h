#ifndef INCLUDED_org_flashdevelop_cpp_debugger_Message
#define INCLUDED_org_flashdevelop_cpp_debugger_Message

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,BreakpointList)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,BreakpointLocationList)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,BreakpointStatusList)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,Message)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,StringList)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,ThreadWhereList)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,VariableValue)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{


class Message_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Message_obj OBJ_;

	public:
		Message_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("org.flashdevelop.cpp.debugger.Message"); }
		::String __ToString() const { return HX_CSTRING("Message.") + tag; }

		static ::org::flashdevelop::cpp::debugger::Message BreakpointDescription(int number,::org::flashdevelop::cpp::debugger::BreakpointLocationList list);
		static Dynamic BreakpointDescription_dyn();
		static ::org::flashdevelop::cpp::debugger::Message BreakpointStatuses(::org::flashdevelop::cpp::debugger::BreakpointStatusList list);
		static Dynamic BreakpointStatuses_dyn();
		static ::org::flashdevelop::cpp::debugger::Message Breakpoints(::org::flashdevelop::cpp::debugger::BreakpointList list);
		static Dynamic Breakpoints_dyn();
		static ::org::flashdevelop::cpp::debugger::Message ClassFunctionBreakpointNumber(int number,::org::flashdevelop::cpp::debugger::StringList unresolvableClasses);
		static Dynamic ClassFunctionBreakpointNumber_dyn();
		static ::org::flashdevelop::cpp::debugger::Message Classes(Array< ::String > list);
		static Dynamic Classes_dyn();
		static ::org::flashdevelop::cpp::debugger::Message Collected(int bytesBefore,int bytesAfter);
		static Dynamic Collected_dyn();
		static ::org::flashdevelop::cpp::debugger::Message Compacted(int bytesBefore,int bytesAfter);
		static Dynamic Compacted_dyn();
		static ::org::flashdevelop::cpp::debugger::Message Continued(int count);
		static Dynamic Continued_dyn();
		static ::org::flashdevelop::cpp::debugger::Message CurrentFrame(int number);
		static Dynamic CurrentFrame_dyn();
		static ::org::flashdevelop::cpp::debugger::Message CurrentThread(int number);
		static Dynamic CurrentThread_dyn();
		static ::org::flashdevelop::cpp::debugger::Message Detached;
		static inline ::org::flashdevelop::cpp::debugger::Message Detached_dyn() { return Detached; }
		static ::org::flashdevelop::cpp::debugger::Message ErrorBadClassNameRegex(::String details);
		static Dynamic ErrorBadClassNameRegex_dyn();
		static ::org::flashdevelop::cpp::debugger::Message ErrorBadCount(int count);
		static Dynamic ErrorBadCount_dyn();
		static ::org::flashdevelop::cpp::debugger::Message ErrorBadFunctionNameRegex(::String details);
		static Dynamic ErrorBadFunctionNameRegex_dyn();
		static ::org::flashdevelop::cpp::debugger::Message ErrorCurrentThreadNotStopped(int threadNumber);
		static Dynamic ErrorCurrentThreadNotStopped_dyn();
		static ::org::flashdevelop::cpp::debugger::Message ErrorEvaluatingExpression(::String details);
		static Dynamic ErrorEvaluatingExpression_dyn();
		static ::org::flashdevelop::cpp::debugger::Message ErrorInternal(::String details);
		static Dynamic ErrorInternal_dyn();
		static ::org::flashdevelop::cpp::debugger::Message ErrorNoMatchingFunctions(::String className,::String functionName,::org::flashdevelop::cpp::debugger::StringList unresolvableClasses);
		static Dynamic ErrorNoMatchingFunctions_dyn();
		static ::org::flashdevelop::cpp::debugger::Message ErrorNoSuchBreakpoint(int number);
		static Dynamic ErrorNoSuchBreakpoint_dyn();
		static ::org::flashdevelop::cpp::debugger::Message ErrorNoSuchFile(::String fileName);
		static Dynamic ErrorNoSuchFile_dyn();
		static ::org::flashdevelop::cpp::debugger::Message ErrorNoSuchThread(int number);
		static Dynamic ErrorNoSuchThread_dyn();
		static ::org::flashdevelop::cpp::debugger::Message Exited;
		static inline ::org::flashdevelop::cpp::debugger::Message Exited_dyn() { return Exited; }
		static ::org::flashdevelop::cpp::debugger::Message FileLineBreakpointNumber(int number);
		static Dynamic FileLineBreakpointNumber_dyn();
		static ::org::flashdevelop::cpp::debugger::Message Files(Array< ::String > list);
		static Dynamic Files_dyn();
		static ::org::flashdevelop::cpp::debugger::Message FilesFullPath(Array< ::String > list);
		static Dynamic FilesFullPath_dyn();
		static ::org::flashdevelop::cpp::debugger::Message MemBytes(int bytes);
		static Dynamic MemBytes_dyn();
		static ::org::flashdevelop::cpp::debugger::Message MessageId(int id,::org::flashdevelop::cpp::debugger::Message message);
		static Dynamic MessageId_dyn();
		static ::org::flashdevelop::cpp::debugger::Message OK;
		static inline ::org::flashdevelop::cpp::debugger::Message OK_dyn() { return OK; }
		static ::org::flashdevelop::cpp::debugger::Message ThreadCreated(int number);
		static Dynamic ThreadCreated_dyn();
		static ::org::flashdevelop::cpp::debugger::Message ThreadStarted(int number);
		static Dynamic ThreadStarted_dyn();
		static ::org::flashdevelop::cpp::debugger::Message ThreadStopped(int number,::String className,::String functionName,::String fileName,int lineNumber);
		static Dynamic ThreadStopped_dyn();
		static ::org::flashdevelop::cpp::debugger::Message ThreadTerminated(int number);
		static Dynamic ThreadTerminated_dyn();
		static ::org::flashdevelop::cpp::debugger::Message ThreadsWhere(::org::flashdevelop::cpp::debugger::ThreadWhereList list);
		static Dynamic ThreadsWhere_dyn();
		static ::org::flashdevelop::cpp::debugger::Message Value(::String expression,::String type,::String value);
		static Dynamic Value_dyn();
		static ::org::flashdevelop::cpp::debugger::Message Variable(::String name,::org::flashdevelop::cpp::debugger::VariableValue value);
		static Dynamic Variable_dyn();
		static ::org::flashdevelop::cpp::debugger::Message Variables(Array< ::String > list);
		static Dynamic Variables_dyn();
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger

#endif /* INCLUDED_org_flashdevelop_cpp_debugger_Message */ 
