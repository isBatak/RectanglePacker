#include <hxcpp.h>

#ifndef INCLUDED_org_flashdevelop_cpp_debugger_ThreadStatus
#include <org/flashdevelop/cpp/debugger/ThreadStatus.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{

::org::flashdevelop::cpp::debugger::ThreadStatus ThreadStatus_obj::Running;

::org::flashdevelop::cpp::debugger::ThreadStatus  ThreadStatus_obj::StoppedBreakpoint(int number)
	{ return hx::CreateEnum< ThreadStatus_obj >(HX_CSTRING("StoppedBreakpoint"),2,hx::DynamicArray(0,1).Add(number)); }

::org::flashdevelop::cpp::debugger::ThreadStatus  ThreadStatus_obj::StoppedCriticalError(::String description)
	{ return hx::CreateEnum< ThreadStatus_obj >(HX_CSTRING("StoppedCriticalError"),4,hx::DynamicArray(0,1).Add(description)); }

::org::flashdevelop::cpp::debugger::ThreadStatus ThreadStatus_obj::StoppedImmediate;

::org::flashdevelop::cpp::debugger::ThreadStatus ThreadStatus_obj::StoppedUncaughtException;

HX_DEFINE_CREATE_ENUM(ThreadStatus_obj)

int ThreadStatus_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Running")) return 0;
	if (inName==HX_CSTRING("StoppedBreakpoint")) return 2;
	if (inName==HX_CSTRING("StoppedCriticalError")) return 4;
	if (inName==HX_CSTRING("StoppedImmediate")) return 1;
	if (inName==HX_CSTRING("StoppedUncaughtException")) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ThreadStatus_obj,StoppedBreakpoint,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ThreadStatus_obj,StoppedCriticalError,return)

int ThreadStatus_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Running")) return 0;
	if (inName==HX_CSTRING("StoppedBreakpoint")) return 1;
	if (inName==HX_CSTRING("StoppedCriticalError")) return 1;
	if (inName==HX_CSTRING("StoppedImmediate")) return 0;
	if (inName==HX_CSTRING("StoppedUncaughtException")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ThreadStatus_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Running")) return Running;
	if (inName==HX_CSTRING("StoppedBreakpoint")) return StoppedBreakpoint_dyn();
	if (inName==HX_CSTRING("StoppedCriticalError")) return StoppedCriticalError_dyn();
	if (inName==HX_CSTRING("StoppedImmediate")) return StoppedImmediate;
	if (inName==HX_CSTRING("StoppedUncaughtException")) return StoppedUncaughtException;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Running"),
	HX_CSTRING("StoppedImmediate"),
	HX_CSTRING("StoppedBreakpoint"),
	HX_CSTRING("StoppedUncaughtException"),
	HX_CSTRING("StoppedCriticalError"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThreadStatus_obj::Running,"Running");
	HX_MARK_MEMBER_NAME(ThreadStatus_obj::StoppedImmediate,"StoppedImmediate");
	HX_MARK_MEMBER_NAME(ThreadStatus_obj::StoppedUncaughtException,"StoppedUncaughtException");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThreadStatus_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ThreadStatus_obj::Running,"Running");
	HX_VISIT_MEMBER_NAME(ThreadStatus_obj::StoppedImmediate,"StoppedImmediate");
	HX_VISIT_MEMBER_NAME(ThreadStatus_obj::StoppedUncaughtException,"StoppedUncaughtException");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class ThreadStatus_obj::__mClass;

Dynamic __Create_ThreadStatus_obj() { return new ThreadStatus_obj; }

void ThreadStatus_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger.ThreadStatus"), hx::TCanCast< ThreadStatus_obj >,sStaticFields,sMemberFields,
	&__Create_ThreadStatus_obj, &__Create,
	&super::__SGetClass(), &CreateThreadStatus_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ThreadStatus_obj::__boot()
{
hx::Static(Running) = hx::CreateEnum< ThreadStatus_obj >(HX_CSTRING("Running"),0);
hx::Static(StoppedImmediate) = hx::CreateEnum< ThreadStatus_obj >(HX_CSTRING("StoppedImmediate"),1);
hx::Static(StoppedUncaughtException) = hx::CreateEnum< ThreadStatus_obj >(HX_CSTRING("StoppedUncaughtException"),3);
}


} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
