#include <hxcpp.h>

#ifndef INCLUDED_org_flashdevelop_cpp_debugger_BreakpointStatusList
#include <org/flashdevelop/cpp/debugger/BreakpointStatusList.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{

::org::flashdevelop::cpp::debugger::BreakpointStatusList  BreakpointStatusList_obj::AlreadyDisabled(int number,::org::flashdevelop::cpp::debugger::BreakpointStatusList next)
	{ return hx::CreateEnum< BreakpointStatusList_obj >(HX_CSTRING("AlreadyDisabled"),3,hx::DynamicArray(0,2).Add(number).Add(next)); }

::org::flashdevelop::cpp::debugger::BreakpointStatusList  BreakpointStatusList_obj::AlreadyEnabled(int number,::org::flashdevelop::cpp::debugger::BreakpointStatusList next)
	{ return hx::CreateEnum< BreakpointStatusList_obj >(HX_CSTRING("AlreadyEnabled"),5,hx::DynamicArray(0,2).Add(number).Add(next)); }

::org::flashdevelop::cpp::debugger::BreakpointStatusList  BreakpointStatusList_obj::Deleted(int number,::org::flashdevelop::cpp::debugger::BreakpointStatusList next)
	{ return hx::CreateEnum< BreakpointStatusList_obj >(HX_CSTRING("Deleted"),6,hx::DynamicArray(0,2).Add(number).Add(next)); }

::org::flashdevelop::cpp::debugger::BreakpointStatusList  BreakpointStatusList_obj::Disabled(int number,::org::flashdevelop::cpp::debugger::BreakpointStatusList next)
	{ return hx::CreateEnum< BreakpointStatusList_obj >(HX_CSTRING("Disabled"),2,hx::DynamicArray(0,2).Add(number).Add(next)); }

::org::flashdevelop::cpp::debugger::BreakpointStatusList  BreakpointStatusList_obj::Enabled(int number,::org::flashdevelop::cpp::debugger::BreakpointStatusList next)
	{ return hx::CreateEnum< BreakpointStatusList_obj >(HX_CSTRING("Enabled"),4,hx::DynamicArray(0,2).Add(number).Add(next)); }

::org::flashdevelop::cpp::debugger::BreakpointStatusList  BreakpointStatusList_obj::Nonexistent(int number,::org::flashdevelop::cpp::debugger::BreakpointStatusList next)
	{ return hx::CreateEnum< BreakpointStatusList_obj >(HX_CSTRING("Nonexistent"),1,hx::DynamicArray(0,2).Add(number).Add(next)); }

::org::flashdevelop::cpp::debugger::BreakpointStatusList BreakpointStatusList_obj::Terminator;

HX_DEFINE_CREATE_ENUM(BreakpointStatusList_obj)

int BreakpointStatusList_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("AlreadyDisabled")) return 3;
	if (inName==HX_CSTRING("AlreadyEnabled")) return 5;
	if (inName==HX_CSTRING("Deleted")) return 6;
	if (inName==HX_CSTRING("Disabled")) return 2;
	if (inName==HX_CSTRING("Enabled")) return 4;
	if (inName==HX_CSTRING("Nonexistent")) return 1;
	if (inName==HX_CSTRING("Terminator")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(BreakpointStatusList_obj,AlreadyDisabled,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(BreakpointStatusList_obj,AlreadyEnabled,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(BreakpointStatusList_obj,Deleted,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(BreakpointStatusList_obj,Disabled,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(BreakpointStatusList_obj,Enabled,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(BreakpointStatusList_obj,Nonexistent,return)

int BreakpointStatusList_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("AlreadyDisabled")) return 2;
	if (inName==HX_CSTRING("AlreadyEnabled")) return 2;
	if (inName==HX_CSTRING("Deleted")) return 2;
	if (inName==HX_CSTRING("Disabled")) return 2;
	if (inName==HX_CSTRING("Enabled")) return 2;
	if (inName==HX_CSTRING("Nonexistent")) return 2;
	if (inName==HX_CSTRING("Terminator")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic BreakpointStatusList_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("AlreadyDisabled")) return AlreadyDisabled_dyn();
	if (inName==HX_CSTRING("AlreadyEnabled")) return AlreadyEnabled_dyn();
	if (inName==HX_CSTRING("Deleted")) return Deleted_dyn();
	if (inName==HX_CSTRING("Disabled")) return Disabled_dyn();
	if (inName==HX_CSTRING("Enabled")) return Enabled_dyn();
	if (inName==HX_CSTRING("Nonexistent")) return Nonexistent_dyn();
	if (inName==HX_CSTRING("Terminator")) return Terminator;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Terminator"),
	HX_CSTRING("Nonexistent"),
	HX_CSTRING("Disabled"),
	HX_CSTRING("AlreadyDisabled"),
	HX_CSTRING("Enabled"),
	HX_CSTRING("AlreadyEnabled"),
	HX_CSTRING("Deleted"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BreakpointStatusList_obj::Terminator,"Terminator");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BreakpointStatusList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BreakpointStatusList_obj::Terminator,"Terminator");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class BreakpointStatusList_obj::__mClass;

Dynamic __Create_BreakpointStatusList_obj() { return new BreakpointStatusList_obj; }

void BreakpointStatusList_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger.BreakpointStatusList"), hx::TCanCast< BreakpointStatusList_obj >,sStaticFields,sMemberFields,
	&__Create_BreakpointStatusList_obj, &__Create,
	&super::__SGetClass(), &CreateBreakpointStatusList_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void BreakpointStatusList_obj::__boot()
{
hx::Static(Terminator) = hx::CreateEnum< BreakpointStatusList_obj >(HX_CSTRING("Terminator"),0);
}


} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
