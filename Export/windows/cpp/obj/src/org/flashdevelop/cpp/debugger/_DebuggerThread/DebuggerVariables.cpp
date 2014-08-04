#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_DebuggerVariables
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/DebuggerVariables.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_TypeHelpers
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/TypeHelpers.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{
namespace _DebuggerThread{

Void DebuggerVariables_obj::__construct()
{
HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.DebuggerVariables","new",0x71870379,"org.flashdevelop.cpp.debugger._DebuggerThread.DebuggerVariables.new","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1439,0xe680eae8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1440)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1440)
	this->mMap = _g;
}
;
	return null();
}

//DebuggerVariables_obj::~DebuggerVariables_obj() { }

Dynamic DebuggerVariables_obj::__CreateEmpty() { return  new DebuggerVariables_obj; }
hx::ObjectPtr< DebuggerVariables_obj > DebuggerVariables_obj::__new()
{  hx::ObjectPtr< DebuggerVariables_obj > result = new DebuggerVariables_obj();
	result->__construct();
	return result;}

Dynamic DebuggerVariables_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DebuggerVariables_obj > result = new DebuggerVariables_obj();
	result->__construct();
	return result;}

Void DebuggerVariables_obj::set( ::String key,Dynamic value){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.DebuggerVariables","set",0x718acebb,"org.flashdevelop.cpp.debugger._DebuggerThread.DebuggerVariables.set","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1445,0xe680eae8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(1445)
		if (((value == null()))){
			HX_STACK_LINE(1446)
			this->mMap->remove(key);
		}
		else{
			HX_STACK_LINE(1449)
			this->mMap->set(key,value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerVariables_obj,set,(void))

Dynamic DebuggerVariables_obj::get( ::String key){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.DebuggerVariables","get",0x7181b3af,"org.flashdevelop.cpp.debugger._DebuggerThread.DebuggerVariables.get","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1455,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(1455)
	return this->mMap->get(key);
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerVariables_obj,get,return )

::String DebuggerVariables_obj::toString( ){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.DebuggerVariables","toString",0xc0aec2f3,"org.flashdevelop.cpp.debugger._DebuggerThread.DebuggerVariables.toString","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1459,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1460)
	Array< ::String > keys = Array_obj< ::String >::__new();		HX_STACK_VAR(keys,"keys");
	HX_STACK_LINE(1462)
	Dynamic iter = this->mMap->keys();		HX_STACK_VAR(iter,"iter");
	HX_STACK_LINE(1464)
	::String ret = HX_CSTRING("\n\n");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1466)
	if ((!(iter->__Field(HX_CSTRING("hasNext"),true)()))){
		HX_STACK_LINE(1467)
		return (ret + HX_CSTRING("(no values)"));
	}
	HX_STACK_LINE(1470)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(iter);  __it->hasNext(); ){
		::String k = __it->next();
		keys->push(k);
	}

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int run(::String a,::String b){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1475,0xe680eae8)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		{
			HX_STACK_LINE(1475)
			return ::Reflect_obj::compare(a,b);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(1474)
	keys->sort( Dynamic(new _Function_1_1()));
	HX_STACK_LINE(1478)
	bool needNewline = false;		HX_STACK_VAR(needNewline,"needNewline");
	HX_STACK_LINE(1479)
	{
		HX_STACK_LINE(1479)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1479)
		while((true)){
			HX_STACK_LINE(1479)
			if ((!(((_g < keys->length))))){
				HX_STACK_LINE(1479)
				break;
			}
			HX_STACK_LINE(1479)
			::String k = keys->__get(_g);		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(1479)
			++(_g);
			HX_STACK_LINE(1480)
			if ((needNewline)){
				HX_STACK_LINE(1481)
				hx::AddEq(ret,HX_CSTRING("\n"));
			}
			else{
				HX_STACK_LINE(1484)
				needNewline = true;
			}
			HX_STACK_LINE(1486)
			Dynamic value = this->mMap->get(k);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(1487)
			::String _g1 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueTypeName(value);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1487)
			::String _g11 = (((HX_CSTRING("$.") + k) + HX_CSTRING(" : ")) + _g1);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1487)
			::String _g2 = (_g11 + HX_CSTRING(" = "));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1488)
			::String _g3 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueString(value,null(),null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1487)
			::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1487)
			hx::AddEq(ret,_g4);
		}
	}
	HX_STACK_LINE(1491)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(DebuggerVariables_obj,toString,return )


DebuggerVariables_obj::DebuggerVariables_obj()
{
}

void DebuggerVariables_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DebuggerVariables);
	HX_MARK_MEMBER_NAME(mMap,"mMap");
	HX_MARK_END_CLASS();
}

void DebuggerVariables_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mMap,"mMap");
}

Dynamic DebuggerVariables_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mMap") ) { return mMap; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DebuggerVariables_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mMap") ) { mMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DebuggerVariables_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mMap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DebuggerVariables_obj,mMap),HX_CSTRING("mMap")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("set"),
	HX_CSTRING("get"),
	HX_CSTRING("toString"),
	HX_CSTRING("mMap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DebuggerVariables_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DebuggerVariables_obj::__mClass,"__mClass");
};

#endif

Class DebuggerVariables_obj::__mClass;

void DebuggerVariables_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger._DebuggerThread.DebuggerVariables"), hx::TCanCast< DebuggerVariables_obj> ,sStaticFields,sMemberFields,
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

void DebuggerVariables_obj::__boot()
{
}

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
} // end namespace _DebuggerThread
