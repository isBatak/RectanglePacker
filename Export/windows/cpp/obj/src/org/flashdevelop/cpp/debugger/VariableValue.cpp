#include <hxcpp.h>

#ifndef INCLUDED_org_flashdevelop_cpp_debugger_VariableName
#include <org/flashdevelop/cpp/debugger/VariableName.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_VariableValue
#include <org/flashdevelop/cpp/debugger/VariableValue.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{

::org::flashdevelop::cpp::debugger::VariableValue  VariableValue_obj::Item(::String type,::String value,Array< ::Dynamic > children)
	{ return hx::CreateEnum< VariableValue_obj >(HX_CSTRING("Item"),0,hx::DynamicArray(0,3).Add(type).Add(value).Add(children)); }

::org::flashdevelop::cpp::debugger::VariableValue VariableValue_obj::NoItem;

HX_DEFINE_CREATE_ENUM(VariableValue_obj)

int VariableValue_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Item")) return 0;
	if (inName==HX_CSTRING("NoItem")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC3(VariableValue_obj,Item,return)

int VariableValue_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Item")) return 3;
	if (inName==HX_CSTRING("NoItem")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic VariableValue_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Item")) return Item_dyn();
	if (inName==HX_CSTRING("NoItem")) return NoItem;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Item"),
	HX_CSTRING("NoItem"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VariableValue_obj::NoItem,"NoItem");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VariableValue_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VariableValue_obj::NoItem,"NoItem");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class VariableValue_obj::__mClass;

Dynamic __Create_VariableValue_obj() { return new VariableValue_obj; }

void VariableValue_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger.VariableValue"), hx::TCanCast< VariableValue_obj >,sStaticFields,sMemberFields,
	&__Create_VariableValue_obj, &__Create,
	&super::__SGetClass(), &CreateVariableValue_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void VariableValue_obj::__boot()
{
hx::Static(NoItem) = hx::CreateEnum< VariableValue_obj >(HX_CSTRING("NoItem"),1);
}


} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
