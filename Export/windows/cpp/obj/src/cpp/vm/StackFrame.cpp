#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Parameter
#include <cpp/vm/Parameter.h>
#endif
#ifndef INCLUDED_cpp_vm_StackFrame
#include <cpp/vm/StackFrame.h>
#endif
namespace cpp{
namespace vm{

Void StackFrame_obj::__construct(::String fileName,int lineNumber,::String className,::String functionName)
{
HX_STACK_FRAME("cpp.vm.StackFrame","new",0x11668ca3,"cpp.vm.StackFrame.new","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",55,0x9c8417ca)
HX_STACK_THIS(this)
HX_STACK_ARG(fileName,"fileName")
HX_STACK_ARG(lineNumber,"lineNumber")
HX_STACK_ARG(className,"className")
HX_STACK_ARG(functionName,"functionName")
{
	HX_STACK_LINE(56)
	this->fileName = fileName;
	HX_STACK_LINE(57)
	this->lineNumber = lineNumber;
	HX_STACK_LINE(58)
	this->className = className;
	HX_STACK_LINE(59)
	this->functionName = functionName;
	HX_STACK_LINE(60)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(60)
	this->parameters = _g;
}
;
	return null();
}

//StackFrame_obj::~StackFrame_obj() { }

Dynamic StackFrame_obj::__CreateEmpty() { return  new StackFrame_obj; }
hx::ObjectPtr< StackFrame_obj > StackFrame_obj::__new(::String fileName,int lineNumber,::String className,::String functionName)
{  hx::ObjectPtr< StackFrame_obj > result = new StackFrame_obj();
	result->__construct(fileName,lineNumber,className,functionName);
	return result;}

Dynamic StackFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StackFrame_obj > result = new StackFrame_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


StackFrame_obj::StackFrame_obj()
{
}

void StackFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StackFrame);
	HX_MARK_MEMBER_NAME(fileName,"fileName");
	HX_MARK_MEMBER_NAME(lineNumber,"lineNumber");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(functionName,"functionName");
	HX_MARK_MEMBER_NAME(parameters,"parameters");
	HX_MARK_END_CLASS();
}

void StackFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fileName,"fileName");
	HX_VISIT_MEMBER_NAME(lineNumber,"lineNumber");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(functionName,"functionName");
	HX_VISIT_MEMBER_NAME(parameters,"parameters");
}

Dynamic StackFrame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fileName") ) { return fileName; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lineNumber") ) { return lineNumber; }
		if (HX_FIELD_EQ(inName,"parameters") ) { return parameters; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"functionName") ) { return functionName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StackFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fileName") ) { fileName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lineNumber") ) { lineNumber=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parameters") ) { parameters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"functionName") ) { functionName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StackFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fileName"));
	outFields->push(HX_CSTRING("lineNumber"));
	outFields->push(HX_CSTRING("className"));
	outFields->push(HX_CSTRING("functionName"));
	outFields->push(HX_CSTRING("parameters"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(StackFrame_obj,fileName),HX_CSTRING("fileName")},
	{hx::fsInt,(int)offsetof(StackFrame_obj,lineNumber),HX_CSTRING("lineNumber")},
	{hx::fsString,(int)offsetof(StackFrame_obj,className),HX_CSTRING("className")},
	{hx::fsString,(int)offsetof(StackFrame_obj,functionName),HX_CSTRING("functionName")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(StackFrame_obj,parameters),HX_CSTRING("parameters")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("fileName"),
	HX_CSTRING("lineNumber"),
	HX_CSTRING("className"),
	HX_CSTRING("functionName"),
	HX_CSTRING("parameters"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StackFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StackFrame_obj::__mClass,"__mClass");
};

#endif

Class StackFrame_obj::__mClass;

void StackFrame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("cpp.vm.StackFrame"), hx::TCanCast< StackFrame_obj> ,sStaticFields,sMemberFields,
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

void StackFrame_obj::__boot()
{
}

} // end namespace cpp
} // end namespace vm
