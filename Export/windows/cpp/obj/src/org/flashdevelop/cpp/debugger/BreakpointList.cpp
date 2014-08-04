#include <hxcpp.h>

#ifndef INCLUDED_org_flashdevelop_cpp_debugger_BreakpointList
#include <org/flashdevelop/cpp/debugger/BreakpointList.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{

::org::flashdevelop::cpp::debugger::BreakpointList  BreakpointList_obj::Breakpoint(int number,::String description,bool enabled,bool multi,::org::flashdevelop::cpp::debugger::BreakpointList next)
	{ return hx::CreateEnum< BreakpointList_obj >(HX_CSTRING("Breakpoint"),1,hx::DynamicArray(0,5).Add(number).Add(description).Add(enabled).Add(multi).Add(next)); }

::org::flashdevelop::cpp::debugger::BreakpointList BreakpointList_obj::Terminator;

HX_DEFINE_CREATE_ENUM(BreakpointList_obj)

int BreakpointList_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Breakpoint")) return 1;
	if (inName==HX_CSTRING("Terminator")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC5(BreakpointList_obj,Breakpoint,return)

int BreakpointList_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Breakpoint")) return 5;
	if (inName==HX_CSTRING("Terminator")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic BreakpointList_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Breakpoint")) return Breakpoint_dyn();
	if (inName==HX_CSTRING("Terminator")) return Terminator;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Terminator"),
	HX_CSTRING("Breakpoint"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BreakpointList_obj::Terminator,"Terminator");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BreakpointList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BreakpointList_obj::Terminator,"Terminator");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class BreakpointList_obj::__mClass;

Dynamic __Create_BreakpointList_obj() { return new BreakpointList_obj; }

void BreakpointList_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger.BreakpointList"), hx::TCanCast< BreakpointList_obj >,sStaticFields,sMemberFields,
	&__Create_BreakpointList_obj, &__Create,
	&super::__SGetClass(), &CreateBreakpointList_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void BreakpointList_obj::__boot()
{
hx::Static(Terminator) = hx::CreateEnum< BreakpointList_obj >(HX_CSTRING("Terminator"),0);
}


} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
