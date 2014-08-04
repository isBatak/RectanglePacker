#include <hxcpp.h>

#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_BP
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/BP.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{
namespace _DebuggerThread{

::org::flashdevelop::cpp::debugger::_DebuggerThread::BP  BP_obj::ClassFunction(int bp,::String className,::String functionName)
	{ return hx::CreateEnum< BP_obj >(HX_CSTRING("ClassFunction"),1,hx::DynamicArray(0,3).Add(bp).Add(className).Add(functionName)); }

::org::flashdevelop::cpp::debugger::_DebuggerThread::BP  BP_obj::FileLine(int bp,::String fileName,int lineNumber)
	{ return hx::CreateEnum< BP_obj >(HX_CSTRING("FileLine"),0,hx::DynamicArray(0,3).Add(bp).Add(fileName).Add(lineNumber)); }

HX_DEFINE_CREATE_ENUM(BP_obj)

int BP_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("ClassFunction")) return 1;
	if (inName==HX_CSTRING("FileLine")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC3(BP_obj,ClassFunction,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(BP_obj,FileLine,return)

int BP_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("ClassFunction")) return 3;
	if (inName==HX_CSTRING("FileLine")) return 3;
	return super::__FindArgCount(inName);
}

Dynamic BP_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("ClassFunction")) return ClassFunction_dyn();
	if (inName==HX_CSTRING("FileLine")) return FileLine_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("FileLine"),
	HX_CSTRING("ClassFunction"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BP_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class BP_obj::__mClass;

Dynamic __Create_BP_obj() { return new BP_obj; }

void BP_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger._DebuggerThread.BP"), hx::TCanCast< BP_obj >,sStaticFields,sMemberFields,
	&__Create_BP_obj, &__Create,
	&super::__SGetClass(), &CreateBP_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void BP_obj::__boot()
{
}


} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
} // end namespace _DebuggerThread
