#include <hxcpp.h>

#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ExpressionEnum
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/ExpressionEnum.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{
namespace _DebuggerThread{

::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum  ExpressionEnum_obj::AnonymousFieldRef(Dynamic Value,::String field)
	{ return hx::CreateEnum< ExpressionEnum_obj >(HX_CSTRING("AnonymousFieldRef"),2,hx::DynamicArray(0,2).Add(Value).Add(field)); }

::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum  ExpressionEnum_obj::ArrayRef(Dynamic value,int index)
	{ return hx::CreateEnum< ExpressionEnum_obj >(HX_CSTRING("ArrayRef"),5,hx::DynamicArray(0,2).Add(value).Add(index)); }

::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum  ExpressionEnum_obj::DebuggerFieldRef(::String field)
	{ return hx::CreateEnum< ExpressionEnum_obj >(HX_CSTRING("DebuggerFieldRef"),3,hx::DynamicArray(0,1).Add(field)); }

::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum ExpressionEnum_obj::DebuggerFields;

::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum  ExpressionEnum_obj::FieldRef(Dynamic value,::String field)
	{ return hx::CreateEnum< ExpressionEnum_obj >(HX_CSTRING("FieldRef"),1,hx::DynamicArray(0,2).Add(value).Add(field)); }

::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum  ExpressionEnum_obj::StackRef(::String name)
	{ return hx::CreateEnum< ExpressionEnum_obj >(HX_CSTRING("StackRef"),6,hx::DynamicArray(0,1).Add(name)); }

::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum  ExpressionEnum_obj::Value(Dynamic value)
	{ return hx::CreateEnum< ExpressionEnum_obj >(HX_CSTRING("Value"),0,hx::DynamicArray(0,1).Add(value)); }

HX_DEFINE_CREATE_ENUM(ExpressionEnum_obj)

int ExpressionEnum_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("AnonymousFieldRef")) return 2;
	if (inName==HX_CSTRING("ArrayRef")) return 5;
	if (inName==HX_CSTRING("DebuggerFieldRef")) return 3;
	if (inName==HX_CSTRING("DebuggerFields")) return 4;
	if (inName==HX_CSTRING("FieldRef")) return 1;
	if (inName==HX_CSTRING("StackRef")) return 6;
	if (inName==HX_CSTRING("Value")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExpressionEnum_obj,AnonymousFieldRef,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExpressionEnum_obj,ArrayRef,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExpressionEnum_obj,DebuggerFieldRef,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExpressionEnum_obj,FieldRef,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExpressionEnum_obj,StackRef,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExpressionEnum_obj,Value,return)

int ExpressionEnum_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("AnonymousFieldRef")) return 2;
	if (inName==HX_CSTRING("ArrayRef")) return 2;
	if (inName==HX_CSTRING("DebuggerFieldRef")) return 1;
	if (inName==HX_CSTRING("DebuggerFields")) return 0;
	if (inName==HX_CSTRING("FieldRef")) return 2;
	if (inName==HX_CSTRING("StackRef")) return 1;
	if (inName==HX_CSTRING("Value")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic ExpressionEnum_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("AnonymousFieldRef")) return AnonymousFieldRef_dyn();
	if (inName==HX_CSTRING("ArrayRef")) return ArrayRef_dyn();
	if (inName==HX_CSTRING("DebuggerFieldRef")) return DebuggerFieldRef_dyn();
	if (inName==HX_CSTRING("DebuggerFields")) return DebuggerFields;
	if (inName==HX_CSTRING("FieldRef")) return FieldRef_dyn();
	if (inName==HX_CSTRING("StackRef")) return StackRef_dyn();
	if (inName==HX_CSTRING("Value")) return Value_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Value"),
	HX_CSTRING("FieldRef"),
	HX_CSTRING("AnonymousFieldRef"),
	HX_CSTRING("DebuggerFieldRef"),
	HX_CSTRING("DebuggerFields"),
	HX_CSTRING("ArrayRef"),
	HX_CSTRING("StackRef"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExpressionEnum_obj::DebuggerFields,"DebuggerFields");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExpressionEnum_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ExpressionEnum_obj::DebuggerFields,"DebuggerFields");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class ExpressionEnum_obj::__mClass;

Dynamic __Create_ExpressionEnum_obj() { return new ExpressionEnum_obj; }

void ExpressionEnum_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionEnum"), hx::TCanCast< ExpressionEnum_obj >,sStaticFields,sMemberFields,
	&__Create_ExpressionEnum_obj, &__Create,
	&super::__SGetClass(), &CreateExpressionEnum_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ExpressionEnum_obj::__boot()
{
hx::Static(DebuggerFields) = hx::CreateEnum< ExpressionEnum_obj >(HX_CSTRING("DebuggerFields"),4);
}


} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
} // end namespace _DebuggerThread
