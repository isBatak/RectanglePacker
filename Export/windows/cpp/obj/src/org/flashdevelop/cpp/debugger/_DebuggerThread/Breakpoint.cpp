#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Debugger
#include <cpp/vm/Debugger.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_BP
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/BP.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_Breakpoint
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/Breakpoint.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{
namespace _DebuggerThread{

Void Breakpoint_obj::__construct(int num,::String desc)
{
HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.Breakpoint","new",0x78005f52,"org.flashdevelop.cpp.debugger._DebuggerThread.Breakpoint.new","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1513,0xe680eae8)
HX_STACK_THIS(this)
HX_STACK_ARG(num,"num")
HX_STACK_ARG(desc,"desc")
{
	HX_STACK_LINE(1514)
	this->number = num;
	HX_STACK_LINE(1515)
	this->description = desc;
	HX_STACK_LINE(1516)
	this->enabled = true;
	HX_STACK_LINE(1517)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1517)
	this->mBps = _g;
}
;
	return null();
}

//Breakpoint_obj::~Breakpoint_obj() { }

Dynamic Breakpoint_obj::__CreateEmpty() { return  new Breakpoint_obj; }
hx::ObjectPtr< Breakpoint_obj > Breakpoint_obj::__new(int num,::String desc)
{  hx::ObjectPtr< Breakpoint_obj > result = new Breakpoint_obj();
	result->__construct(num,desc);
	return result;}

Dynamic Breakpoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Breakpoint_obj > result = new Breakpoint_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Breakpoint_obj::_delete( ){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.Breakpoint","delete",0x82ee9479,"org.flashdevelop.cpp.debugger._DebuggerThread.Breakpoint.delete","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1522,0xe680eae8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1522)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1522)
		Array< ::Dynamic > _g1 = this->mBps;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1522)
		while((true)){
			HX_STACK_LINE(1522)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(1522)
				break;
			}
			HX_STACK_LINE(1522)
			::org::flashdevelop::cpp::debugger::_DebuggerThread::BP b = _g1->__get(_g).StaticCast< ::org::flashdevelop::cpp::debugger::_DebuggerThread::BP >();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(1522)
			++(_g);
			HX_STACK_LINE(1523)
			switch( (int)(b->__Index())){
				case (int)0: {
					HX_STACK_LINE(1523)
					int lineNumber = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(2);		HX_STACK_VAR(lineNumber,"lineNumber");
					HX_STACK_LINE(1523)
					::String fileName = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(1);		HX_STACK_VAR(fileName,"fileName");
					HX_STACK_LINE(1523)
					int bp = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(0);		HX_STACK_VAR(bp,"bp");
					HX_STACK_LINE(1525)
					::cpp::vm::Debugger_obj::deleteBreakpoint(bp);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(1523)
					::String functionName = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(2);		HX_STACK_VAR(functionName,"functionName");
					HX_STACK_LINE(1523)
					::String className = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(1);		HX_STACK_VAR(className,"className");
					HX_STACK_LINE(1523)
					int bp = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(0);		HX_STACK_VAR(bp,"bp");
					HX_STACK_LINE(1527)
					::cpp::vm::Debugger_obj::deleteBreakpoint(bp);
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Breakpoint_obj,_delete,(void))

Void Breakpoint_obj::addFileLine( ::String fileName,int lineNumber){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.Breakpoint","addFileLine",0xe67308c3,"org.flashdevelop.cpp.debugger._DebuggerThread.Breakpoint.addFileLine","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1533,0xe680eae8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fileName,"fileName")
		HX_STACK_ARG(lineNumber,"lineNumber")
		HX_STACK_LINE(1534)
		int _g = ::cpp::vm::Debugger_obj::addFileLineBreakpoint(fileName,lineNumber);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1534)
		::org::flashdevelop::cpp::debugger::_DebuggerThread::BP _g1 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::BP_obj::FileLine(_g,fileName,lineNumber);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1534)
		this->mBps->push(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Breakpoint_obj,addFileLine,(void))

Void Breakpoint_obj::addClassFunction( ::String className,::String functionName){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.Breakpoint","addClassFunction",0xf47e365d,"org.flashdevelop.cpp.debugger._DebuggerThread.Breakpoint.addClassFunction","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1539,0xe680eae8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(className,"className")
		HX_STACK_ARG(functionName,"functionName")
		HX_STACK_LINE(1540)
		int _g = ::cpp::vm::Debugger_obj::addClassFunctionBreakpoint(className,functionName);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1540)
		::org::flashdevelop::cpp::debugger::_DebuggerThread::BP _g1 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::BP_obj::ClassFunction(_g,className,functionName);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1540)
		this->mBps->push(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Breakpoint_obj,addClassFunction,(void))

int Breakpoint_obj::bpCount( ){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.Breakpoint","bpCount",0x8bc48413,"org.flashdevelop.cpp.debugger._DebuggerThread.Breakpoint.bpCount","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1547,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1547)
	return this->mBps->length;
}


HX_DEFINE_DYNAMIC_FUNC0(Breakpoint_obj,bpCount,return )

Dynamic Breakpoint_obj::bps( ){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.Breakpoint","bps",0x77f74dd7,"org.flashdevelop.cpp.debugger._DebuggerThread.Breakpoint.bps","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1552,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1552)
	return this->mBps->iteratorFast< ::org::flashdevelop::cpp::debugger::_DebuggerThread::BP >();
}


HX_DEFINE_DYNAMIC_FUNC0(Breakpoint_obj,bps,return )

Void Breakpoint_obj::enable( ){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.Breakpoint","enable",0x109d82d1,"org.flashdevelop.cpp.debugger._DebuggerThread.Breakpoint.enable","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1556,0xe680eae8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1557)
		if ((this->enabled)){
			HX_STACK_LINE(1558)
			return null();
		}
		HX_STACK_LINE(1561)
		Array< ::Dynamic > oldBps = this->mBps;		HX_STACK_VAR(oldBps,"oldBps");
		HX_STACK_LINE(1562)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1562)
		this->mBps = _g;
		HX_STACK_LINE(1564)
		{
			HX_STACK_LINE(1564)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1564)
			while((true)){
				HX_STACK_LINE(1564)
				if ((!(((_g1 < oldBps->length))))){
					HX_STACK_LINE(1564)
					break;
				}
				HX_STACK_LINE(1564)
				::org::flashdevelop::cpp::debugger::_DebuggerThread::BP b = oldBps->__get(_g1).StaticCast< ::org::flashdevelop::cpp::debugger::_DebuggerThread::BP >();		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(1564)
				++(_g1);
				HX_STACK_LINE(1565)
				switch( (int)(b->__Index())){
					case (int)0: {
						HX_STACK_LINE(1565)
						int lineNumber = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(2);		HX_STACK_VAR(lineNumber,"lineNumber");
						HX_STACK_LINE(1565)
						::String fileName = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(1);		HX_STACK_VAR(fileName,"fileName");
						HX_STACK_LINE(1565)
						int bp = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(0);		HX_STACK_VAR(bp,"bp");
						HX_STACK_LINE(1567)
						this->addFileLine(fileName,lineNumber);
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(1565)
						::String functionName = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(2);		HX_STACK_VAR(functionName,"functionName");
						HX_STACK_LINE(1565)
						::String className = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(1);		HX_STACK_VAR(className,"className");
						HX_STACK_LINE(1565)
						int bp = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(0);		HX_STACK_VAR(bp,"bp");
						HX_STACK_LINE(1569)
						this->addClassFunction(className,functionName);
					}
					;break;
				}
			}
		}
		HX_STACK_LINE(1573)
		this->enabled = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Breakpoint_obj,enable,(void))

Void Breakpoint_obj::disable( ){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.Breakpoint","disable",0xac5c59da,"org.flashdevelop.cpp.debugger._DebuggerThread.Breakpoint.disable","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1577,0xe680eae8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1578)
		if ((!(this->enabled))){
			HX_STACK_LINE(1579)
			return null();
		}
		HX_STACK_LINE(1582)
		{
			HX_STACK_LINE(1582)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1582)
			Array< ::Dynamic > _g1 = this->mBps;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1582)
			while((true)){
				HX_STACK_LINE(1582)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(1582)
					break;
				}
				HX_STACK_LINE(1582)
				::org::flashdevelop::cpp::debugger::_DebuggerThread::BP b = _g1->__get(_g).StaticCast< ::org::flashdevelop::cpp::debugger::_DebuggerThread::BP >();		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(1582)
				++(_g);
				HX_STACK_LINE(1583)
				switch( (int)(b->__Index())){
					case (int)0: {
						HX_STACK_LINE(1583)
						int lineNumber = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(2);		HX_STACK_VAR(lineNumber,"lineNumber");
						HX_STACK_LINE(1583)
						::String fileName = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(1);		HX_STACK_VAR(fileName,"fileName");
						HX_STACK_LINE(1583)
						int bp = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(0);		HX_STACK_VAR(bp,"bp");
						HX_STACK_LINE(1585)
						::cpp::vm::Debugger_obj::deleteBreakpoint(bp);
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(1583)
						::String functionName = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(2);		HX_STACK_VAR(functionName,"functionName");
						HX_STACK_LINE(1583)
						::String className = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(1);		HX_STACK_VAR(className,"className");
						HX_STACK_LINE(1583)
						int bp = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(0);		HX_STACK_VAR(bp,"bp");
						HX_STACK_LINE(1587)
						::cpp::vm::Debugger_obj::deleteBreakpoint(bp);
					}
					;break;
				}
			}
		}
		HX_STACK_LINE(1591)
		this->enabled = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Breakpoint_obj,disable,(void))


Breakpoint_obj::Breakpoint_obj()
{
}

void Breakpoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Breakpoint);
	HX_MARK_MEMBER_NAME(number,"number");
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(continueCount,"continueCount");
	HX_MARK_MEMBER_NAME(mBps,"mBps");
	HX_MARK_END_CLASS();
}

void Breakpoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(number,"number");
	HX_VISIT_MEMBER_NAME(description,"description");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(continueCount,"continueCount");
	HX_VISIT_MEMBER_NAME(mBps,"mBps");
}

Dynamic Breakpoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bps") ) { return bps_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mBps") ) { return mBps; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"number") ) { return number; }
		if (HX_FIELD_EQ(inName,"delete") ) { return _delete_dyn(); }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"bpCount") ) { return bpCount_dyn(); }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { return description; }
		if (HX_FIELD_EQ(inName,"addFileLine") ) { return addFileLine_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"continueCount") ) { return continueCount; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addClassFunction") ) { return addClassFunction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Breakpoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mBps") ) { mBps=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"number") ) { number=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"continueCount") ) { continueCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Breakpoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("number"));
	outFields->push(HX_CSTRING("description"));
	outFields->push(HX_CSTRING("enabled"));
	outFields->push(HX_CSTRING("continueCount"));
	outFields->push(HX_CSTRING("mBps"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Breakpoint_obj,number),HX_CSTRING("number")},
	{hx::fsString,(int)offsetof(Breakpoint_obj,description),HX_CSTRING("description")},
	{hx::fsBool,(int)offsetof(Breakpoint_obj,enabled),HX_CSTRING("enabled")},
	{hx::fsInt,(int)offsetof(Breakpoint_obj,continueCount),HX_CSTRING("continueCount")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Breakpoint_obj,mBps),HX_CSTRING("mBps")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("number"),
	HX_CSTRING("description"),
	HX_CSTRING("enabled"),
	HX_CSTRING("continueCount"),
	HX_CSTRING("delete"),
	HX_CSTRING("addFileLine"),
	HX_CSTRING("addClassFunction"),
	HX_CSTRING("bpCount"),
	HX_CSTRING("bps"),
	HX_CSTRING("enable"),
	HX_CSTRING("disable"),
	HX_CSTRING("mBps"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Breakpoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Breakpoint_obj::__mClass,"__mClass");
};

#endif

Class Breakpoint_obj::__mClass;

void Breakpoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger._DebuggerThread.Breakpoint"), hx::TCanCast< Breakpoint_obj> ,sStaticFields,sMemberFields,
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

void Breakpoint_obj::__boot()
{
}

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
} // end namespace _DebuggerThread
