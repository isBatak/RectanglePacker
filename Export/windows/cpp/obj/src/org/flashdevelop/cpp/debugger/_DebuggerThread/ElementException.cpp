#include <hxcpp.h>

#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ElementException
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/ElementException.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{
namespace _DebuggerThread{

Void ElementException_obj::__construct(::String reason,int begin,int end)
{
HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.ElementException","new",0x85442454,"org.flashdevelop.cpp.debugger._DebuggerThread.ElementException.new","org/flashdevelop/cpp/debugger/DebuggerThread.hx",2128,0xe680eae8)
HX_STACK_THIS(this)
HX_STACK_ARG(reason,"reason")
HX_STACK_ARG(begin,"begin")
HX_STACK_ARG(end,"end")
{
	HX_STACK_LINE(2129)
	this->reason = reason;
	HX_STACK_LINE(2130)
	this->begin = begin;
	HX_STACK_LINE(2131)
	this->end = end;
}
;
	return null();
}

//ElementException_obj::~ElementException_obj() { }

Dynamic ElementException_obj::__CreateEmpty() { return  new ElementException_obj; }
hx::ObjectPtr< ElementException_obj > ElementException_obj::__new(::String reason,int begin,int end)
{  hx::ObjectPtr< ElementException_obj > result = new ElementException_obj();
	result->__construct(reason,begin,end);
	return result;}

Dynamic ElementException_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ElementException_obj > result = new ElementException_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


ElementException_obj::ElementException_obj()
{
}

void ElementException_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ElementException);
	HX_MARK_MEMBER_NAME(reason,"reason");
	HX_MARK_MEMBER_NAME(begin,"begin");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_END_CLASS();
}

void ElementException_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(reason,"reason");
	HX_VISIT_MEMBER_NAME(begin,"begin");
	HX_VISIT_MEMBER_NAME(end,"end");
}

Dynamic ElementException_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reason") ) { return reason; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ElementException_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { begin=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reason") ) { reason=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ElementException_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("reason"));
	outFields->push(HX_CSTRING("begin"));
	outFields->push(HX_CSTRING("end"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ElementException_obj,reason),HX_CSTRING("reason")},
	{hx::fsInt,(int)offsetof(ElementException_obj,begin),HX_CSTRING("begin")},
	{hx::fsInt,(int)offsetof(ElementException_obj,end),HX_CSTRING("end")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("reason"),
	HX_CSTRING("begin"),
	HX_CSTRING("end"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ElementException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ElementException_obj::__mClass,"__mClass");
};

#endif

Class ElementException_obj::__mClass;

void ElementException_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger._DebuggerThread.ElementException"), hx::TCanCast< ElementException_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void ElementException_obj::__boot()
{
}

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
} // end namespace _DebuggerThread
