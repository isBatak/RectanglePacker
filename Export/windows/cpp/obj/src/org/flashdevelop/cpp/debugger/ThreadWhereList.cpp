#include <hxcpp.h>

#ifndef INCLUDED_org_flashdevelop_cpp_debugger_FrameList
#include <org/flashdevelop/cpp/debugger/FrameList.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_ThreadStatus
#include <org/flashdevelop/cpp/debugger/ThreadStatus.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_ThreadWhereList
#include <org/flashdevelop/cpp/debugger/ThreadWhereList.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{

::org::flashdevelop::cpp::debugger::ThreadWhereList ThreadWhereList_obj::Terminator;

::org::flashdevelop::cpp::debugger::ThreadWhereList  ThreadWhereList_obj::Where(int number,::org::flashdevelop::cpp::debugger::ThreadStatus status,::org::flashdevelop::cpp::debugger::FrameList frameList,::org::flashdevelop::cpp::debugger::ThreadWhereList next)
	{ return hx::CreateEnum< ThreadWhereList_obj >(HX_CSTRING("Where"),1,hx::DynamicArray(0,4).Add(number).Add(status).Add(frameList).Add(next)); }

HX_DEFINE_CREATE_ENUM(ThreadWhereList_obj)

int ThreadWhereList_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Terminator")) return 0;
	if (inName==HX_CSTRING("Where")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC4(ThreadWhereList_obj,Where,return)

int ThreadWhereList_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Terminator")) return 0;
	if (inName==HX_CSTRING("Where")) return 4;
	return super::__FindArgCount(inName);
}

Dynamic ThreadWhereList_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Terminator")) return Terminator;
	if (inName==HX_CSTRING("Where")) return Where_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Terminator"),
	HX_CSTRING("Where"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThreadWhereList_obj::Terminator,"Terminator");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThreadWhereList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ThreadWhereList_obj::Terminator,"Terminator");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class ThreadWhereList_obj::__mClass;

Dynamic __Create_ThreadWhereList_obj() { return new ThreadWhereList_obj; }

void ThreadWhereList_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger.ThreadWhereList"), hx::TCanCast< ThreadWhereList_obj >,sStaticFields,sMemberFields,
	&__Create_ThreadWhereList_obj, &__Create,
	&super::__SGetClass(), &CreateThreadWhereList_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ThreadWhereList_obj::__boot()
{
hx::Static(Terminator) = hx::CreateEnum< ThreadWhereList_obj >(HX_CSTRING("Terminator"),0);
}


} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
