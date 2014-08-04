#include <hxcpp.h>

#ifndef INCLUDED_org_flashdevelop_cpp_debugger_StringList
#include <org/flashdevelop/cpp/debugger/StringList.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{

::org::flashdevelop::cpp::debugger::StringList  StringList_obj::Element(::String string,::org::flashdevelop::cpp::debugger::StringList next)
	{ return hx::CreateEnum< StringList_obj >(HX_CSTRING("Element"),1,hx::DynamicArray(0,2).Add(string).Add(next)); }

::org::flashdevelop::cpp::debugger::StringList StringList_obj::Terminator;

HX_DEFINE_CREATE_ENUM(StringList_obj)

int StringList_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Element")) return 1;
	if (inName==HX_CSTRING("Terminator")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringList_obj,Element,return)

int StringList_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Element")) return 2;
	if (inName==HX_CSTRING("Terminator")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic StringList_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Element")) return Element_dyn();
	if (inName==HX_CSTRING("Terminator")) return Terminator;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Terminator"),
	HX_CSTRING("Element"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringList_obj::Terminator,"Terminator");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StringList_obj::Terminator,"Terminator");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class StringList_obj::__mClass;

Dynamic __Create_StringList_obj() { return new StringList_obj; }

void StringList_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger.StringList"), hx::TCanCast< StringList_obj >,sStaticFields,sMemberFields,
	&__Create_StringList_obj, &__Create,
	&super::__SGetClass(), &CreateStringList_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void StringList_obj::__boot()
{
hx::Static(Terminator) = hx::CreateEnum< StringList_obj >(HX_CSTRING("Terminator"),0);
}


} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
