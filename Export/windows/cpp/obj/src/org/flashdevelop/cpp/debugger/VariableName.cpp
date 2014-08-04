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

::org::flashdevelop::cpp::debugger::VariableName  VariableName_obj::Variable(::String name,::String fullName,bool isStatic,::org::flashdevelop::cpp::debugger::VariableValue value)
	{ return hx::CreateEnum< VariableName_obj >(HX_CSTRING("Variable"),0,hx::DynamicArray(0,4).Add(name).Add(fullName).Add(isStatic).Add(value)); }

HX_DEFINE_CREATE_ENUM(VariableName_obj)

int VariableName_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Variable")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC4(VariableName_obj,Variable,return)

int VariableName_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Variable")) return 4;
	return super::__FindArgCount(inName);
}

Dynamic VariableName_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Variable")) return Variable_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Variable"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VariableName_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class VariableName_obj::__mClass;

Dynamic __Create_VariableName_obj() { return new VariableName_obj; }

void VariableName_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger.VariableName"), hx::TCanCast< VariableName_obj >,sStaticFields,sMemberFields,
	&__Create_VariableName_obj, &__Create,
	&super::__SGetClass(), &CreateVariableName_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void VariableName_obj::__boot()
{
}


} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
