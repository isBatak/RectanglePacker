#include <hxcpp.h>

#ifndef INCLUDED_org_flashdevelop_cpp_debugger_FrameList
#include <org/flashdevelop/cpp/debugger/FrameList.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{

::org::flashdevelop::cpp::debugger::FrameList  FrameList_obj::Frame(bool isCurrent,int number,::String className,::String functionName,::String fileName,int lineNumber,::org::flashdevelop::cpp::debugger::FrameList next)
	{ return hx::CreateEnum< FrameList_obj >(HX_CSTRING("Frame"),1,hx::DynamicArray(0,7).Add(isCurrent).Add(number).Add(className).Add(functionName).Add(fileName).Add(lineNumber).Add(next)); }

::org::flashdevelop::cpp::debugger::FrameList FrameList_obj::Terminator;

HX_DEFINE_CREATE_ENUM(FrameList_obj)

int FrameList_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Frame")) return 1;
	if (inName==HX_CSTRING("Terminator")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC7(FrameList_obj,Frame,return)

int FrameList_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Frame")) return 7;
	if (inName==HX_CSTRING("Terminator")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FrameList_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Frame")) return Frame_dyn();
	if (inName==HX_CSTRING("Terminator")) return Terminator;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Terminator"),
	HX_CSTRING("Frame"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FrameList_obj::Terminator,"Terminator");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FrameList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FrameList_obj::Terminator,"Terminator");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class FrameList_obj::__mClass;

Dynamic __Create_FrameList_obj() { return new FrameList_obj; }

void FrameList_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger.FrameList"), hx::TCanCast< FrameList_obj >,sStaticFields,sMemberFields,
	&__Create_FrameList_obj, &__Create,
	&super::__SGetClass(), &CreateFrameList_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FrameList_obj::__boot()
{
hx::Static(Terminator) = hx::CreateEnum< FrameList_obj >(HX_CSTRING("Terminator"),0);
}


} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
