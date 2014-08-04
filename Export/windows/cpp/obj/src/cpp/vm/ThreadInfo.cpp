#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_StackFrame
#include <cpp/vm/StackFrame.h>
#endif
#ifndef INCLUDED_cpp_vm_ThreadInfo
#include <cpp/vm/ThreadInfo.h>
#endif
namespace cpp{
namespace vm{

Void ThreadInfo_obj::__construct(int number,int status,hx::Null< int >  __o_breakpoint,::String criticalErrorDescription)
{
HX_STACK_FRAME("cpp.vm.ThreadInfo","new",0x0ce7c2b6,"cpp.vm.ThreadInfo.new","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",87,0x9c8417ca)
HX_STACK_THIS(this)
HX_STACK_ARG(number,"number")
HX_STACK_ARG(status,"status")
HX_STACK_ARG(__o_breakpoint,"breakpoint")
HX_STACK_ARG(criticalErrorDescription,"criticalErrorDescription")
int breakpoint = __o_breakpoint.Default(-1);
{
	HX_STACK_LINE(88)
	this->number = number;
	HX_STACK_LINE(89)
	this->status = status;
	HX_STACK_LINE(90)
	this->breakpoint = breakpoint;
	HX_STACK_LINE(91)
	this->criticalErrorDescription = criticalErrorDescription;
	HX_STACK_LINE(92)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(92)
	this->stack = _g;
}
;
	return null();
}

//ThreadInfo_obj::~ThreadInfo_obj() { }

Dynamic ThreadInfo_obj::__CreateEmpty() { return  new ThreadInfo_obj; }
hx::ObjectPtr< ThreadInfo_obj > ThreadInfo_obj::__new(int number,int status,hx::Null< int >  __o_breakpoint,::String criticalErrorDescription)
{  hx::ObjectPtr< ThreadInfo_obj > result = new ThreadInfo_obj();
	result->__construct(number,status,__o_breakpoint,criticalErrorDescription);
	return result;}

Dynamic ThreadInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ThreadInfo_obj > result = new ThreadInfo_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


ThreadInfo_obj::ThreadInfo_obj()
{
}

void ThreadInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ThreadInfo);
	HX_MARK_MEMBER_NAME(number,"number");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(breakpoint,"breakpoint");
	HX_MARK_MEMBER_NAME(criticalErrorDescription,"criticalErrorDescription");
	HX_MARK_MEMBER_NAME(stack,"stack");
	HX_MARK_END_CLASS();
}

void ThreadInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(number,"number");
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(breakpoint,"breakpoint");
	HX_VISIT_MEMBER_NAME(criticalErrorDescription,"criticalErrorDescription");
	HX_VISIT_MEMBER_NAME(stack,"stack");
}

Dynamic ThreadInfo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stack") ) { return stack; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"number") ) { return number; }
		if (HX_FIELD_EQ(inName,"status") ) { return status; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"breakpoint") ) { return breakpoint; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"criticalErrorDescription") ) { return criticalErrorDescription; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ThreadInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stack") ) { stack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"number") ) { number=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"breakpoint") ) { breakpoint=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"criticalErrorDescription") ) { criticalErrorDescription=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ThreadInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("number"));
	outFields->push(HX_CSTRING("status"));
	outFields->push(HX_CSTRING("breakpoint"));
	outFields->push(HX_CSTRING("criticalErrorDescription"));
	outFields->push(HX_CSTRING("stack"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ThreadInfo_obj,number),HX_CSTRING("number")},
	{hx::fsInt,(int)offsetof(ThreadInfo_obj,status),HX_CSTRING("status")},
	{hx::fsInt,(int)offsetof(ThreadInfo_obj,breakpoint),HX_CSTRING("breakpoint")},
	{hx::fsString,(int)offsetof(ThreadInfo_obj,criticalErrorDescription),HX_CSTRING("criticalErrorDescription")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ThreadInfo_obj,stack),HX_CSTRING("stack")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("number"),
	HX_CSTRING("status"),
	HX_CSTRING("breakpoint"),
	HX_CSTRING("criticalErrorDescription"),
	HX_CSTRING("stack"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThreadInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThreadInfo_obj::__mClass,"__mClass");
};

#endif

Class ThreadInfo_obj::__mClass;

void ThreadInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("cpp.vm.ThreadInfo"), hx::TCanCast< ThreadInfo_obj> ,sStaticFields,sMemberFields,
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

void ThreadInfo_obj::__boot()
{
}

} // end namespace cpp
} // end namespace vm
