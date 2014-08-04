#include <hxcpp.h>

#ifndef INCLUDED_org_flashdevelop_cpp_debugger_BreakpointLocationList
#include <org/flashdevelop/cpp/debugger/BreakpointLocationList.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{

::org::flashdevelop::cpp::debugger::BreakpointLocationList  BreakpointLocationList_obj::ClassFunction(::String className,::String functionName,::org::flashdevelop::cpp::debugger::BreakpointLocationList next)
	{ return hx::CreateEnum< BreakpointLocationList_obj >(HX_CSTRING("ClassFunction"),2,hx::DynamicArray(0,3).Add(className).Add(functionName).Add(next)); }

::org::flashdevelop::cpp::debugger::BreakpointLocationList  BreakpointLocationList_obj::FileLine(::String fileName,int lineNumber,::org::flashdevelop::cpp::debugger::BreakpointLocationList next)
	{ return hx::CreateEnum< BreakpointLocationList_obj >(HX_CSTRING("FileLine"),1,hx::DynamicArray(0,3).Add(fileName).Add(lineNumber).Add(next)); }

::org::flashdevelop::cpp::debugger::BreakpointLocationList BreakpointLocationList_obj::Terminator;

HX_DEFINE_CREATE_ENUM(BreakpointLocationList_obj)

int BreakpointLocationList_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("ClassFunction")) return 2;
	if (inName==HX_CSTRING("FileLine")) return 1;
	if (inName==HX_CSTRING("Terminator")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC3(BreakpointLocationList_obj,ClassFunction,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(BreakpointLocationList_obj,FileLine,return)

int BreakpointLocationList_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("ClassFunction")) return 3;
	if (inName==HX_CSTRING("FileLine")) return 3;
	if (inName==HX_CSTRING("Terminator")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic BreakpointLocationList_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("ClassFunction")) return ClassFunction_dyn();
	if (inName==HX_CSTRING("FileLine")) return FileLine_dyn();
	if (inName==HX_CSTRING("Terminator")) return Terminator;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Terminator"),
	HX_CSTRING("FileLine"),
	HX_CSTRING("ClassFunction"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BreakpointLocationList_obj::Terminator,"Terminator");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BreakpointLocationList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BreakpointLocationList_obj::Terminator,"Terminator");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class BreakpointLocationList_obj::__mClass;

Dynamic __Create_BreakpointLocationList_obj() { return new BreakpointLocationList_obj; }

void BreakpointLocationList_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger.BreakpointLocationList"), hx::TCanCast< BreakpointLocationList_obj >,sStaticFields,sMemberFields,
	&__Create_BreakpointLocationList_obj, &__Create,
	&super::__SGetClass(), &CreateBreakpointLocationList_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void BreakpointLocationList_obj::__boot()
{
hx::Static(Terminator) = hx::CreateEnum< BreakpointLocationList_obj >(HX_CSTRING("Terminator"),0);
}


} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
