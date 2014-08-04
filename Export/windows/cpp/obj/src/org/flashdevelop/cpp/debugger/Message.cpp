#include <hxcpp.h>

#ifndef INCLUDED_org_flashdevelop_cpp_debugger_BreakpointList
#include <org/flashdevelop/cpp/debugger/BreakpointList.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_BreakpointLocationList
#include <org/flashdevelop/cpp/debugger/BreakpointLocationList.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_BreakpointStatusList
#include <org/flashdevelop/cpp/debugger/BreakpointStatusList.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_Message
#include <org/flashdevelop/cpp/debugger/Message.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_StringList
#include <org/flashdevelop/cpp/debugger/StringList.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_ThreadWhereList
#include <org/flashdevelop/cpp/debugger/ThreadWhereList.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_VariableValue
#include <org/flashdevelop/cpp/debugger/VariableValue.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{

::org::flashdevelop::cpp::debugger::Message  Message_obj::BreakpointDescription(int number,::org::flashdevelop::cpp::debugger::BreakpointLocationList list)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("BreakpointDescription"),23,hx::DynamicArray(0,2).Add(number).Add(list)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::BreakpointStatuses(::org::flashdevelop::cpp::debugger::BreakpointStatusList list)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("BreakpointStatuses"),24,hx::DynamicArray(0,1).Add(list)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::Breakpoints(::org::flashdevelop::cpp::debugger::BreakpointList list)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("Breakpoints"),22,hx::DynamicArray(0,1).Add(list)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::ClassFunctionBreakpointNumber(int number,::org::flashdevelop::cpp::debugger::StringList unresolvableClasses)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("ClassFunctionBreakpointNumber"),21,hx::DynamicArray(0,2).Add(number).Add(unresolvableClasses)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::Classes(Array< ::String > list)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("Classes"),15,hx::DynamicArray(0,1).Add(list)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::Collected(int bytesBefore,int bytesAfter)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("Collected"),18,hx::DynamicArray(0,2).Add(bytesBefore).Add(bytesAfter)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::Compacted(int bytesBefore,int bytesAfter)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("Compacted"),17,hx::DynamicArray(0,2).Add(bytesBefore).Add(bytesAfter)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::Continued(int count)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("Continued"),25,hx::DynamicArray(0,1).Add(count)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::CurrentFrame(int number)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("CurrentFrame"),27,hx::DynamicArray(0,1).Add(number)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::CurrentThread(int number)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("CurrentThread"),19,hx::DynamicArray(0,1).Add(number)); }

::org::flashdevelop::cpp::debugger::Message Message_obj::Detached;

::org::flashdevelop::cpp::debugger::Message  Message_obj::ErrorBadClassNameRegex(::String details)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("ErrorBadClassNameRegex"),4,hx::DynamicArray(0,1).Add(details)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::ErrorBadCount(int count)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("ErrorBadCount"),7,hx::DynamicArray(0,1).Add(count)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::ErrorBadFunctionNameRegex(::String details)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("ErrorBadFunctionNameRegex"),5,hx::DynamicArray(0,1).Add(details)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::ErrorCurrentThreadNotStopped(int threadNumber)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("ErrorCurrentThreadNotStopped"),8,hx::DynamicArray(0,1).Add(threadNumber)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::ErrorEvaluatingExpression(::String details)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("ErrorEvaluatingExpression"),9,hx::DynamicArray(0,1).Add(details)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::ErrorInternal(::String details)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("ErrorInternal"),0,hx::DynamicArray(0,1).Add(details)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::ErrorNoMatchingFunctions(::String className,::String functionName,::org::flashdevelop::cpp::debugger::StringList unresolvableClasses)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("ErrorNoMatchingFunctions"),6,hx::DynamicArray(0,3).Add(className).Add(functionName).Add(unresolvableClasses)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::ErrorNoSuchBreakpoint(int number)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("ErrorNoSuchBreakpoint"),3,hx::DynamicArray(0,1).Add(number)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::ErrorNoSuchFile(::String fileName)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("ErrorNoSuchFile"),2,hx::DynamicArray(0,1).Add(fileName)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::ErrorNoSuchThread(int number)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("ErrorNoSuchThread"),1,hx::DynamicArray(0,1).Add(number)); }

::org::flashdevelop::cpp::debugger::Message Message_obj::Exited;

::org::flashdevelop::cpp::debugger::Message  Message_obj::FileLineBreakpointNumber(int number)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("FileLineBreakpointNumber"),20,hx::DynamicArray(0,1).Add(number)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::Files(Array< ::String > list)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("Files"),13,hx::DynamicArray(0,1).Add(list)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::FilesFullPath(Array< ::String > list)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("FilesFullPath"),14,hx::DynamicArray(0,1).Add(list)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::MemBytes(int bytes)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("MemBytes"),16,hx::DynamicArray(0,1).Add(bytes)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::MessageId(int id,::org::flashdevelop::cpp::debugger::Message message)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("MessageId"),34,hx::DynamicArray(0,2).Add(id).Add(message)); }

::org::flashdevelop::cpp::debugger::Message Message_obj::OK;

::org::flashdevelop::cpp::debugger::Message  Message_obj::ThreadCreated(int number)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("ThreadCreated"),30,hx::DynamicArray(0,1).Add(number)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::ThreadStarted(int number)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("ThreadStarted"),32,hx::DynamicArray(0,1).Add(number)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::ThreadStopped(int number,::String className,::String functionName,::String fileName,int lineNumber)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("ThreadStopped"),33,hx::DynamicArray(0,5).Add(number).Add(className).Add(functionName).Add(fileName).Add(lineNumber)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::ThreadTerminated(int number)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("ThreadTerminated"),31,hx::DynamicArray(0,1).Add(number)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::ThreadsWhere(::org::flashdevelop::cpp::debugger::ThreadWhereList list)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("ThreadsWhere"),26,hx::DynamicArray(0,1).Add(list)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::Value(::String expression,::String type,::String value)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("Value"),29,hx::DynamicArray(0,3).Add(expression).Add(type).Add(value)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::Variable(::String name,::org::flashdevelop::cpp::debugger::VariableValue value)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("Variable"),35,hx::DynamicArray(0,2).Add(name).Add(value)); }

::org::flashdevelop::cpp::debugger::Message  Message_obj::Variables(Array< ::String > list)
	{ return hx::CreateEnum< Message_obj >(HX_CSTRING("Variables"),28,hx::DynamicArray(0,1).Add(list)); }

HX_DEFINE_CREATE_ENUM(Message_obj)

int Message_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("BreakpointDescription")) return 23;
	if (inName==HX_CSTRING("BreakpointStatuses")) return 24;
	if (inName==HX_CSTRING("Breakpoints")) return 22;
	if (inName==HX_CSTRING("ClassFunctionBreakpointNumber")) return 21;
	if (inName==HX_CSTRING("Classes")) return 15;
	if (inName==HX_CSTRING("Collected")) return 18;
	if (inName==HX_CSTRING("Compacted")) return 17;
	if (inName==HX_CSTRING("Continued")) return 25;
	if (inName==HX_CSTRING("CurrentFrame")) return 27;
	if (inName==HX_CSTRING("CurrentThread")) return 19;
	if (inName==HX_CSTRING("Detached")) return 12;
	if (inName==HX_CSTRING("ErrorBadClassNameRegex")) return 4;
	if (inName==HX_CSTRING("ErrorBadCount")) return 7;
	if (inName==HX_CSTRING("ErrorBadFunctionNameRegex")) return 5;
	if (inName==HX_CSTRING("ErrorCurrentThreadNotStopped")) return 8;
	if (inName==HX_CSTRING("ErrorEvaluatingExpression")) return 9;
	if (inName==HX_CSTRING("ErrorInternal")) return 0;
	if (inName==HX_CSTRING("ErrorNoMatchingFunctions")) return 6;
	if (inName==HX_CSTRING("ErrorNoSuchBreakpoint")) return 3;
	if (inName==HX_CSTRING("ErrorNoSuchFile")) return 2;
	if (inName==HX_CSTRING("ErrorNoSuchThread")) return 1;
	if (inName==HX_CSTRING("Exited")) return 11;
	if (inName==HX_CSTRING("FileLineBreakpointNumber")) return 20;
	if (inName==HX_CSTRING("Files")) return 13;
	if (inName==HX_CSTRING("FilesFullPath")) return 14;
	if (inName==HX_CSTRING("MemBytes")) return 16;
	if (inName==HX_CSTRING("MessageId")) return 34;
	if (inName==HX_CSTRING("OK")) return 10;
	if (inName==HX_CSTRING("ThreadCreated")) return 30;
	if (inName==HX_CSTRING("ThreadStarted")) return 32;
	if (inName==HX_CSTRING("ThreadStopped")) return 33;
	if (inName==HX_CSTRING("ThreadTerminated")) return 31;
	if (inName==HX_CSTRING("ThreadsWhere")) return 26;
	if (inName==HX_CSTRING("Value")) return 29;
	if (inName==HX_CSTRING("Variable")) return 35;
	if (inName==HX_CSTRING("Variables")) return 28;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Message_obj,BreakpointDescription,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,BreakpointStatuses,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,Breakpoints,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Message_obj,ClassFunctionBreakpointNumber,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,Classes,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Message_obj,Collected,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Message_obj,Compacted,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,Continued,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,CurrentFrame,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,CurrentThread,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,ErrorBadClassNameRegex,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,ErrorBadCount,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,ErrorBadFunctionNameRegex,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,ErrorCurrentThreadNotStopped,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,ErrorEvaluatingExpression,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,ErrorInternal,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Message_obj,ErrorNoMatchingFunctions,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,ErrorNoSuchBreakpoint,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,ErrorNoSuchFile,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,ErrorNoSuchThread,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,FileLineBreakpointNumber,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,Files,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,FilesFullPath,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,MemBytes,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Message_obj,MessageId,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,ThreadCreated,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,ThreadStarted,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC5(Message_obj,ThreadStopped,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,ThreadTerminated,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,ThreadsWhere,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Message_obj,Value,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Message_obj,Variable,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Message_obj,Variables,return)

int Message_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("BreakpointDescription")) return 2;
	if (inName==HX_CSTRING("BreakpointStatuses")) return 1;
	if (inName==HX_CSTRING("Breakpoints")) return 1;
	if (inName==HX_CSTRING("ClassFunctionBreakpointNumber")) return 2;
	if (inName==HX_CSTRING("Classes")) return 1;
	if (inName==HX_CSTRING("Collected")) return 2;
	if (inName==HX_CSTRING("Compacted")) return 2;
	if (inName==HX_CSTRING("Continued")) return 1;
	if (inName==HX_CSTRING("CurrentFrame")) return 1;
	if (inName==HX_CSTRING("CurrentThread")) return 1;
	if (inName==HX_CSTRING("Detached")) return 0;
	if (inName==HX_CSTRING("ErrorBadClassNameRegex")) return 1;
	if (inName==HX_CSTRING("ErrorBadCount")) return 1;
	if (inName==HX_CSTRING("ErrorBadFunctionNameRegex")) return 1;
	if (inName==HX_CSTRING("ErrorCurrentThreadNotStopped")) return 1;
	if (inName==HX_CSTRING("ErrorEvaluatingExpression")) return 1;
	if (inName==HX_CSTRING("ErrorInternal")) return 1;
	if (inName==HX_CSTRING("ErrorNoMatchingFunctions")) return 3;
	if (inName==HX_CSTRING("ErrorNoSuchBreakpoint")) return 1;
	if (inName==HX_CSTRING("ErrorNoSuchFile")) return 1;
	if (inName==HX_CSTRING("ErrorNoSuchThread")) return 1;
	if (inName==HX_CSTRING("Exited")) return 0;
	if (inName==HX_CSTRING("FileLineBreakpointNumber")) return 1;
	if (inName==HX_CSTRING("Files")) return 1;
	if (inName==HX_CSTRING("FilesFullPath")) return 1;
	if (inName==HX_CSTRING("MemBytes")) return 1;
	if (inName==HX_CSTRING("MessageId")) return 2;
	if (inName==HX_CSTRING("OK")) return 0;
	if (inName==HX_CSTRING("ThreadCreated")) return 1;
	if (inName==HX_CSTRING("ThreadStarted")) return 1;
	if (inName==HX_CSTRING("ThreadStopped")) return 5;
	if (inName==HX_CSTRING("ThreadTerminated")) return 1;
	if (inName==HX_CSTRING("ThreadsWhere")) return 1;
	if (inName==HX_CSTRING("Value")) return 3;
	if (inName==HX_CSTRING("Variable")) return 2;
	if (inName==HX_CSTRING("Variables")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Message_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("BreakpointDescription")) return BreakpointDescription_dyn();
	if (inName==HX_CSTRING("BreakpointStatuses")) return BreakpointStatuses_dyn();
	if (inName==HX_CSTRING("Breakpoints")) return Breakpoints_dyn();
	if (inName==HX_CSTRING("ClassFunctionBreakpointNumber")) return ClassFunctionBreakpointNumber_dyn();
	if (inName==HX_CSTRING("Classes")) return Classes_dyn();
	if (inName==HX_CSTRING("Collected")) return Collected_dyn();
	if (inName==HX_CSTRING("Compacted")) return Compacted_dyn();
	if (inName==HX_CSTRING("Continued")) return Continued_dyn();
	if (inName==HX_CSTRING("CurrentFrame")) return CurrentFrame_dyn();
	if (inName==HX_CSTRING("CurrentThread")) return CurrentThread_dyn();
	if (inName==HX_CSTRING("Detached")) return Detached;
	if (inName==HX_CSTRING("ErrorBadClassNameRegex")) return ErrorBadClassNameRegex_dyn();
	if (inName==HX_CSTRING("ErrorBadCount")) return ErrorBadCount_dyn();
	if (inName==HX_CSTRING("ErrorBadFunctionNameRegex")) return ErrorBadFunctionNameRegex_dyn();
	if (inName==HX_CSTRING("ErrorCurrentThreadNotStopped")) return ErrorCurrentThreadNotStopped_dyn();
	if (inName==HX_CSTRING("ErrorEvaluatingExpression")) return ErrorEvaluatingExpression_dyn();
	if (inName==HX_CSTRING("ErrorInternal")) return ErrorInternal_dyn();
	if (inName==HX_CSTRING("ErrorNoMatchingFunctions")) return ErrorNoMatchingFunctions_dyn();
	if (inName==HX_CSTRING("ErrorNoSuchBreakpoint")) return ErrorNoSuchBreakpoint_dyn();
	if (inName==HX_CSTRING("ErrorNoSuchFile")) return ErrorNoSuchFile_dyn();
	if (inName==HX_CSTRING("ErrorNoSuchThread")) return ErrorNoSuchThread_dyn();
	if (inName==HX_CSTRING("Exited")) return Exited;
	if (inName==HX_CSTRING("FileLineBreakpointNumber")) return FileLineBreakpointNumber_dyn();
	if (inName==HX_CSTRING("Files")) return Files_dyn();
	if (inName==HX_CSTRING("FilesFullPath")) return FilesFullPath_dyn();
	if (inName==HX_CSTRING("MemBytes")) return MemBytes_dyn();
	if (inName==HX_CSTRING("MessageId")) return MessageId_dyn();
	if (inName==HX_CSTRING("OK")) return OK;
	if (inName==HX_CSTRING("ThreadCreated")) return ThreadCreated_dyn();
	if (inName==HX_CSTRING("ThreadStarted")) return ThreadStarted_dyn();
	if (inName==HX_CSTRING("ThreadStopped")) return ThreadStopped_dyn();
	if (inName==HX_CSTRING("ThreadTerminated")) return ThreadTerminated_dyn();
	if (inName==HX_CSTRING("ThreadsWhere")) return ThreadsWhere_dyn();
	if (inName==HX_CSTRING("Value")) return Value_dyn();
	if (inName==HX_CSTRING("Variable")) return Variable_dyn();
	if (inName==HX_CSTRING("Variables")) return Variables_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("ErrorInternal"),
	HX_CSTRING("ErrorNoSuchThread"),
	HX_CSTRING("ErrorNoSuchFile"),
	HX_CSTRING("ErrorNoSuchBreakpoint"),
	HX_CSTRING("ErrorBadClassNameRegex"),
	HX_CSTRING("ErrorBadFunctionNameRegex"),
	HX_CSTRING("ErrorNoMatchingFunctions"),
	HX_CSTRING("ErrorBadCount"),
	HX_CSTRING("ErrorCurrentThreadNotStopped"),
	HX_CSTRING("ErrorEvaluatingExpression"),
	HX_CSTRING("OK"),
	HX_CSTRING("Exited"),
	HX_CSTRING("Detached"),
	HX_CSTRING("Files"),
	HX_CSTRING("FilesFullPath"),
	HX_CSTRING("Classes"),
	HX_CSTRING("MemBytes"),
	HX_CSTRING("Compacted"),
	HX_CSTRING("Collected"),
	HX_CSTRING("CurrentThread"),
	HX_CSTRING("FileLineBreakpointNumber"),
	HX_CSTRING("ClassFunctionBreakpointNumber"),
	HX_CSTRING("Breakpoints"),
	HX_CSTRING("BreakpointDescription"),
	HX_CSTRING("BreakpointStatuses"),
	HX_CSTRING("Continued"),
	HX_CSTRING("ThreadsWhere"),
	HX_CSTRING("CurrentFrame"),
	HX_CSTRING("Variables"),
	HX_CSTRING("Value"),
	HX_CSTRING("ThreadCreated"),
	HX_CSTRING("ThreadTerminated"),
	HX_CSTRING("ThreadStarted"),
	HX_CSTRING("ThreadStopped"),
	HX_CSTRING("MessageId"),
	HX_CSTRING("Variable"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Message_obj::Detached,"Detached");
	HX_MARK_MEMBER_NAME(Message_obj::Exited,"Exited");
	HX_MARK_MEMBER_NAME(Message_obj::OK,"OK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Message_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Message_obj::Detached,"Detached");
	HX_VISIT_MEMBER_NAME(Message_obj::Exited,"Exited");
	HX_VISIT_MEMBER_NAME(Message_obj::OK,"OK");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Message_obj::__mClass;

Dynamic __Create_Message_obj() { return new Message_obj; }

void Message_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger.Message"), hx::TCanCast< Message_obj >,sStaticFields,sMemberFields,
	&__Create_Message_obj, &__Create,
	&super::__SGetClass(), &CreateMessage_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Message_obj::__boot()
{
hx::Static(Detached) = hx::CreateEnum< Message_obj >(HX_CSTRING("Detached"),12);
hx::Static(Exited) = hx::CreateEnum< Message_obj >(HX_CSTRING("Exited"),11);
hx::Static(OK) = hx::CreateEnum< Message_obj >(HX_CSTRING("OK"),10);
}


} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
