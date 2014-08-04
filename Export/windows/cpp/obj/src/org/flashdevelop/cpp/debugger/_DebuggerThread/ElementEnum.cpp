#include <hxcpp.h>

#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ElementEnum
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/ElementEnum.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{
namespace _DebuggerThread{

::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum  ElementEnum_obj::Array_Element(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum element,::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum index)
	{ return hx::CreateEnum< ElementEnum_obj >(HX_CSTRING("Array_Element"),5,hx::DynamicArray(0,2).Add(element).Add(index)); }

::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum  ElementEnum_obj::Array_Value(Array< ::Dynamic > array)
	{ return hx::CreateEnum< ElementEnum_obj >(HX_CSTRING("Array_Value"),1,hx::DynamicArray(0,1).Add(array)); }

::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum  ElementEnum_obj::Constructor_Call(::String class_name,Array< ::Dynamic > parameters,int class_name_begin,int class_name_end)
	{ return hx::CreateEnum< ElementEnum_obj >(HX_CSTRING("Constructor_Call"),7,hx::DynamicArray(0,4).Add(class_name).Add(parameters).Add(class_name_begin).Add(class_name_end)); }

::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum  ElementEnum_obj::DebuggerField(::String field,int field_begin,int field_end)
	{ return hx::CreateEnum< ElementEnum_obj >(HX_CSTRING("DebuggerField"),3,hx::DynamicArray(0,3).Add(field).Add(field_begin).Add(field_end)); }

::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum ElementEnum_obj::DebuggerFields;

::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum  ElementEnum_obj::Field(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum element,::String field,int field_begin,int field_end)
	{ return hx::CreateEnum< ElementEnum_obj >(HX_CSTRING("Field"),2,hx::DynamicArray(0,4).Add(element).Add(field).Add(field_begin).Add(field_end)); }

::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum  ElementEnum_obj::Function_Call(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum element,Array< ::Dynamic > parameters)
	{ return hx::CreateEnum< ElementEnum_obj >(HX_CSTRING("Function_Call"),6,hx::DynamicArray(0,2).Add(element).Add(parameters)); }

::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum  ElementEnum_obj::Path(::String path,int path_begin,int path_end)
	{ return hx::CreateEnum< ElementEnum_obj >(HX_CSTRING("Path"),8,hx::DynamicArray(0,3).Add(path).Add(path_begin).Add(path_end)); }

::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum  ElementEnum_obj::Value(::String value,int value_begin,int value_end)
	{ return hx::CreateEnum< ElementEnum_obj >(HX_CSTRING("Value"),0,hx::DynamicArray(0,3).Add(value).Add(value_begin).Add(value_end)); }

HX_DEFINE_CREATE_ENUM(ElementEnum_obj)

int ElementEnum_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Array_Element")) return 5;
	if (inName==HX_CSTRING("Array_Value")) return 1;
	if (inName==HX_CSTRING("Constructor_Call")) return 7;
	if (inName==HX_CSTRING("DebuggerField")) return 3;
	if (inName==HX_CSTRING("DebuggerFields")) return 4;
	if (inName==HX_CSTRING("Field")) return 2;
	if (inName==HX_CSTRING("Function_Call")) return 6;
	if (inName==HX_CSTRING("Path")) return 8;
	if (inName==HX_CSTRING("Value")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementEnum_obj,Array_Element,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ElementEnum_obj,Array_Value,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(ElementEnum_obj,Constructor_Call,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ElementEnum_obj,DebuggerField,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(ElementEnum_obj,Field,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementEnum_obj,Function_Call,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ElementEnum_obj,Path,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ElementEnum_obj,Value,return)

int ElementEnum_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Array_Element")) return 2;
	if (inName==HX_CSTRING("Array_Value")) return 1;
	if (inName==HX_CSTRING("Constructor_Call")) return 4;
	if (inName==HX_CSTRING("DebuggerField")) return 3;
	if (inName==HX_CSTRING("DebuggerFields")) return 0;
	if (inName==HX_CSTRING("Field")) return 4;
	if (inName==HX_CSTRING("Function_Call")) return 2;
	if (inName==HX_CSTRING("Path")) return 3;
	if (inName==HX_CSTRING("Value")) return 3;
	return super::__FindArgCount(inName);
}

Dynamic ElementEnum_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Array_Element")) return Array_Element_dyn();
	if (inName==HX_CSTRING("Array_Value")) return Array_Value_dyn();
	if (inName==HX_CSTRING("Constructor_Call")) return Constructor_Call_dyn();
	if (inName==HX_CSTRING("DebuggerField")) return DebuggerField_dyn();
	if (inName==HX_CSTRING("DebuggerFields")) return DebuggerFields;
	if (inName==HX_CSTRING("Field")) return Field_dyn();
	if (inName==HX_CSTRING("Function_Call")) return Function_Call_dyn();
	if (inName==HX_CSTRING("Path")) return Path_dyn();
	if (inName==HX_CSTRING("Value")) return Value_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Value"),
	HX_CSTRING("Array_Value"),
	HX_CSTRING("Field"),
	HX_CSTRING("DebuggerField"),
	HX_CSTRING("DebuggerFields"),
	HX_CSTRING("Array_Element"),
	HX_CSTRING("Function_Call"),
	HX_CSTRING("Constructor_Call"),
	HX_CSTRING("Path"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ElementEnum_obj::DebuggerFields,"DebuggerFields");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ElementEnum_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ElementEnum_obj::DebuggerFields,"DebuggerFields");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class ElementEnum_obj::__mClass;

Dynamic __Create_ElementEnum_obj() { return new ElementEnum_obj; }

void ElementEnum_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger._DebuggerThread.ElementEnum"), hx::TCanCast< ElementEnum_obj >,sStaticFields,sMemberFields,
	&__Create_ElementEnum_obj, &__Create,
	&super::__SGetClass(), &CreateElementEnum_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ElementEnum_obj::__boot()
{
hx::Static(DebuggerFields) = hx::CreateEnum< ElementEnum_obj >(HX_CSTRING("DebuggerFields"),4);
}


} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
} // end namespace _DebuggerThread
