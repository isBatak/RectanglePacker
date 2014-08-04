#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Parameter
#include <cpp/vm/Parameter.h>
#endif
namespace cpp{
namespace vm{

Void Parameter_obj::__construct(::String name,Dynamic value)
{
HX_STACK_FRAME("cpp.vm.Parameter","new",0xef7a672f,"cpp.vm.Parameter.new","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",36,0x9c8417ca)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(value,"value")
{
	HX_STACK_LINE(37)
	this->name = name;
	HX_STACK_LINE(38)
	this->value = value;
}
;
	return null();
}

//Parameter_obj::~Parameter_obj() { }

Dynamic Parameter_obj::__CreateEmpty() { return  new Parameter_obj; }
hx::ObjectPtr< Parameter_obj > Parameter_obj::__new(::String name,Dynamic value)
{  hx::ObjectPtr< Parameter_obj > result = new Parameter_obj();
	result->__construct(name,value);
	return result;}

Dynamic Parameter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Parameter_obj > result = new Parameter_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Parameter_obj::Parameter_obj()
{
}

void Parameter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Parameter);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void Parameter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(value,"value");
}

Dynamic Parameter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Parameter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Parameter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("value"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Parameter_obj,name),HX_CSTRING("name")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Parameter_obj,value),HX_CSTRING("value")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("value"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Parameter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Parameter_obj::__mClass,"__mClass");
};

#endif

Class Parameter_obj::__mClass;

void Parameter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("cpp.vm.Parameter"), hx::TCanCast< Parameter_obj> ,sStaticFields,sMemberFields,
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

void Parameter_obj::__boot()
{
}

} // end namespace cpp
} // end namespace vm
