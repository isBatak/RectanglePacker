#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Gc
#include <cpp/vm/Gc.h>
#endif
namespace cpp{
namespace vm{

Void Gc_obj::__construct()
{
	return null();
}

//Gc_obj::~Gc_obj() { }

Dynamic Gc_obj::__CreateEmpty() { return  new Gc_obj; }
hx::ObjectPtr< Gc_obj > Gc_obj::__new()
{  hx::ObjectPtr< Gc_obj > result = new Gc_obj();
	result->__construct();
	return result;}

Dynamic Gc_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gc_obj > result = new Gc_obj();
	result->__construct();
	return result;}

Void Gc_obj::run( bool major){
{
		HX_STACK_FRAME("cpp.vm.Gc","run",0x3d3e0d65,"cpp.vm.Gc.run","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Gc.hx",38,0xeed1f8ef)
		HX_STACK_ARG(major,"major")
		HX_STACK_LINE(38)
		::__hxcpp_collect(major);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gc_obj,run,(void))

Void Gc_obj::compact( ){
{
		HX_STACK_FRAME("cpp.vm.Gc","compact",0xf24646bd,"cpp.vm.Gc.compact","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Gc.hx",43,0xeed1f8ef)
		HX_STACK_LINE(43)
		::__hxcpp_gc_compact();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gc_obj,compact,(void))

int Gc_obj::memUsage( ){
	HX_STACK_FRAME("cpp.vm.Gc","memUsage",0x276c0e72,"cpp.vm.Gc.memUsage","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Gc.hx",60,0xeed1f8ef)
	HX_STACK_LINE(60)
	return ::__hxcpp_gc_mem_info((int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gc_obj,memUsage,return )


Gc_obj::Gc_obj()
{
}

Dynamic Gc_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compact") ) { return compact_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"memUsage") ) { return memUsage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Gc_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Gc_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("run"),
	HX_CSTRING("compact"),
	HX_CSTRING("memUsage"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gc_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gc_obj::__mClass,"__mClass");
};

#endif

Class Gc_obj::__mClass;

void Gc_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("cpp.vm.Gc"), hx::TCanCast< Gc_obj> ,sStaticFields,sMemberFields,
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

void Gc_obj::__boot()
{
}

} // end namespace cpp
} // end namespace vm
