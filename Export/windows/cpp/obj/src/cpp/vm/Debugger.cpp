#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Debugger
#include <cpp/vm/Debugger.h>
#endif
#ifndef INCLUDED_cpp_vm_Parameter
#include <cpp/vm/Parameter.h>
#endif
#ifndef INCLUDED_cpp_vm_StackFrame
#include <cpp/vm/StackFrame.h>
#endif
#ifndef INCLUDED_cpp_vm_ThreadInfo
#include <cpp/vm/ThreadInfo.h>
#endif
namespace cpp{
namespace vm{

Void Debugger_obj::__construct()
{
	return null();
}

//Debugger_obj::~Debugger_obj() { }

Dynamic Debugger_obj::__CreateEmpty() { return  new Debugger_obj; }
hx::ObjectPtr< Debugger_obj > Debugger_obj::__new()
{  hx::ObjectPtr< Debugger_obj > result = new Debugger_obj();
	result->__construct();
	return result;}

Dynamic Debugger_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Debugger_obj > result = new Debugger_obj();
	result->__construct();
	return result;}

void Debugger_obj::__init__() {
HX_STACK_FRAME("cpp.vm.Debugger","__init__",0xac462d51,"cpp.vm.Debugger.__init__","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",373,0x9c8417ca)
{

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	Dynamic run(::String name,Dynamic value){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",377,0x9c8417ca)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(value,"value")
		{
			HX_STACK_LINE(377)
			return ::cpp::vm::Parameter_obj::__new(name,value);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(374)
	::__hxcpp_dbg_setNewParameterFunction( Dynamic(new _Function_1_1()));

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	::cpp::vm::StackFrame run(::String fileName,int lineNumber,::String className,::String functionName){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",386,0x9c8417ca)
		HX_STACK_ARG(fileName,"fileName")
		HX_STACK_ARG(lineNumber,"lineNumber")
		HX_STACK_ARG(className,"className")
		HX_STACK_ARG(functionName,"functionName")
		{
			HX_STACK_LINE(386)
			return ::cpp::vm::StackFrame_obj::__new(fileName,lineNumber,className,functionName);
		}
		return null();
	}
	HX_END_LOCAL_FUNC4(return)

	HX_STACK_LINE(381)
	::__hxcpp_dbg_setNewStackFrameFunction( Dynamic(new _Function_1_2()));

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_3)
	Dynamic run(int number,int status,int breakpoint,::String criticalErrorDescription){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",395,0x9c8417ca)
		HX_STACK_ARG(number,"number")
		HX_STACK_ARG(status,"status")
		HX_STACK_ARG(breakpoint,"breakpoint")
		HX_STACK_ARG(criticalErrorDescription,"criticalErrorDescription")
		{
			HX_STACK_LINE(395)
			return ::cpp::vm::ThreadInfo_obj::__new(number,status,breakpoint,criticalErrorDescription);
		}
		return null();
	}
	HX_END_LOCAL_FUNC4(return)

	HX_STACK_LINE(391)
	::__hxcpp_dbg_setNewThreadInfoFunction( Dynamic(new _Function_1_3()));

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_4)
	Void run(Dynamic inStackFrame,Dynamic inParameter){
		HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",402,0x9c8417ca)
		HX_STACK_ARG(inStackFrame,"inStackFrame")
		HX_STACK_ARG(inParameter,"inParameter")
		{
			HX_STACK_LINE(403)
			::cpp::vm::StackFrame stackFrame = inStackFrame;		HX_STACK_VAR(stackFrame,"stackFrame");
			HX_STACK_LINE(404)
			::cpp::vm::Parameter parameter = inParameter;		HX_STACK_VAR(parameter,"parameter");
			HX_STACK_LINE(405)
			stackFrame->__Field(HX_CSTRING("parameters"),true)->__Field(HX_CSTRING("push"),true)(parameter);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(400)
	::__hxcpp_dbg_setAddParameterToStackFrameFunction( Dynamic(new _Function_1_4()));

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_5)
	Void run(Dynamic inThreadInfo,Dynamic inStackFrame){
		HX_STACK_FRAME("*","_Function_1_5",0x5200ed3b,"*._Function_1_5","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",411,0x9c8417ca)
		HX_STACK_ARG(inThreadInfo,"inThreadInfo")
		HX_STACK_ARG(inStackFrame,"inStackFrame")
		{
			HX_STACK_LINE(412)
			::cpp::vm::ThreadInfo threadInfo = inThreadInfo;		HX_STACK_VAR(threadInfo,"threadInfo");
			HX_STACK_LINE(413)
			::cpp::vm::StackFrame stackFrame = inStackFrame;		HX_STACK_VAR(stackFrame,"stackFrame");
			HX_STACK_LINE(414)
			threadInfo->__Field(HX_CSTRING("stack"),true)->__Field(HX_CSTRING("push"),true)(stackFrame);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(409)
	::__hxcpp_dbg_setAddStackFrameToThreadInfoFunction( Dynamic(new _Function_1_5()));
}
}

::String Debugger_obj::NONEXISTENT_VALUE;

::String Debugger_obj::THREAD_NOT_STOPPED;

Void Debugger_obj::setEventNotificationHandler( Dynamic handler){
{
		HX_STACK_FRAME("cpp.vm.Debugger","setEventNotificationHandler",0x31980e86,"cpp.vm.Debugger.setEventNotificationHandler","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",157,0x9c8417ca)
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(157)
		::__hxcpp_dbg_setEventNotificationHandler(handler);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debugger_obj,setEventNotificationHandler,(void))

Void Debugger_obj::enableCurrentThreadDebugging( bool enabled){
{
		HX_STACK_FRAME("cpp.vm.Debugger","enableCurrentThreadDebugging",0x0170a1af,"cpp.vm.Debugger.enableCurrentThreadDebugging","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",168,0x9c8417ca)
		HX_STACK_ARG(enabled,"enabled")
		HX_STACK_LINE(168)
		::__hxcpp_dbg_enableCurrentThreadDebugging(enabled);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debugger_obj,enableCurrentThreadDebugging,(void))

int Debugger_obj::getCurrentThreadNumber( ){
	HX_STACK_FRAME("cpp.vm.Debugger","getCurrentThreadNumber",0x7a24dfd7,"cpp.vm.Debugger.getCurrentThreadNumber","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",178,0x9c8417ca)
	HX_STACK_LINE(178)
	return ::__hxcpp_dbg_getCurrentThreadNumber();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debugger_obj,getCurrentThreadNumber,return )

Array< ::String > Debugger_obj::getFiles( ){
	HX_STACK_FRAME("cpp.vm.Debugger","getFiles",0xcd3a3e02,"cpp.vm.Debugger.getFiles","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",190,0x9c8417ca)
	HX_STACK_LINE(190)
	return ::__hxcpp_dbg_getFiles();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debugger_obj,getFiles,return )

Array< ::String > Debugger_obj::getFilesFullPath( ){
	HX_STACK_FRAME("cpp.vm.Debugger","getFilesFullPath",0xeca23af6,"cpp.vm.Debugger.getFilesFullPath","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",205,0x9c8417ca)
	HX_STACK_LINE(205)
	return ::__hxcpp_dbg_getFilesFullPath();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debugger_obj,getFilesFullPath,return )

Array< ::String > Debugger_obj::getClasses( ){
	HX_STACK_FRAME("cpp.vm.Debugger","getClasses",0xa8f1e6f1,"cpp.vm.Debugger.getClasses","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",218,0x9c8417ca)
	HX_STACK_LINE(218)
	return ::__hxcpp_dbg_getClasses();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debugger_obj,getClasses,return )

Array< ::Dynamic > Debugger_obj::getThreadInfos( ){
	HX_STACK_FRAME("cpp.vm.Debugger","getThreadInfos",0x98a0dae6,"cpp.vm.Debugger.getThreadInfos","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",227,0x9c8417ca)
	HX_STACK_LINE(227)
	return ::__hxcpp_dbg_getThreadInfos();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debugger_obj,getThreadInfos,return )

::cpp::vm::ThreadInfo Debugger_obj::getThreadInfo( int threadNumber,bool unsafe){
	HX_STACK_FRAME("cpp.vm.Debugger","getThreadInfo",0x882574ed,"cpp.vm.Debugger.getThreadInfo","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",238,0x9c8417ca)
	HX_STACK_ARG(threadNumber,"threadNumber")
	HX_STACK_ARG(unsafe,"unsafe")
	HX_STACK_LINE(238)
	return ::__hxcpp_dbg_getThreadInfo(threadNumber,unsafe);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debugger_obj,getThreadInfo,return )

int Debugger_obj::addFileLineBreakpoint( ::String file,int line){
	HX_STACK_FRAME("cpp.vm.Debugger","addFileLineBreakpoint",0x046089c1,"cpp.vm.Debugger.addFileLineBreakpoint","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",249,0x9c8417ca)
	HX_STACK_ARG(file,"file")
	HX_STACK_ARG(line,"line")
	HX_STACK_LINE(249)
	return ::__hxcpp_dbg_addFileLineBreakpoint(file,line);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debugger_obj,addFileLineBreakpoint,return )

int Debugger_obj::addClassFunctionBreakpoint( ::String className,::String functionName){
	HX_STACK_FRAME("cpp.vm.Debugger","addClassFunctionBreakpoint",0xcc6100e1,"cpp.vm.Debugger.addClassFunctionBreakpoint","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",260,0x9c8417ca)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(functionName,"functionName")
	HX_STACK_LINE(260)
	return ::__hxcpp_dbg_addClassFunctionBreakpoint(className,functionName);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debugger_obj,addClassFunctionBreakpoint,return )

Void Debugger_obj::deleteBreakpoint( Dynamic number){
{
		HX_STACK_FRAME("cpp.vm.Debugger","deleteBreakpoint",0xcd2c7c3d,"cpp.vm.Debugger.deleteBreakpoint","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",269,0x9c8417ca)
		HX_STACK_ARG(number,"number")
		HX_STACK_LINE(269)
		if (((number == null()))){
			HX_STACK_LINE(270)
			::__hxcpp_dbg_deleteAllBreakpoints();
		}
		else{
			HX_STACK_LINE(274)
			int _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(274)
			_g = hx::TCast< Int >::cast(number);
			HX_STACK_LINE(273)
			::__hxcpp_dbg_deleteBreakpoint(_g);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debugger_obj,deleteBreakpoint,(void))

Void Debugger_obj::breakNow( hx::Null< bool >  __o_wait){
bool wait = __o_wait.Default(true);
	HX_STACK_FRAME("cpp.vm.Debugger","breakNow",0x5987fd98,"cpp.vm.Debugger.breakNow","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",288,0x9c8417ca)
	HX_STACK_ARG(wait,"wait")
{
		HX_STACK_LINE(288)
		::__hxcpp_dbg_breakNow(wait);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debugger_obj,breakNow,(void))

Void Debugger_obj::continueThreads( int specialThreadNumber,int continueCount){
{
		HX_STACK_FRAME("cpp.vm.Debugger","continueThreads",0x7c944ae1,"cpp.vm.Debugger.continueThreads","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",300,0x9c8417ca)
		HX_STACK_ARG(specialThreadNumber,"specialThreadNumber")
		HX_STACK_ARG(continueCount,"continueCount")
		HX_STACK_LINE(300)
		::__hxcpp_dbg_continueThreads(specialThreadNumber,continueCount);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debugger_obj,continueThreads,(void))

Void Debugger_obj::stepThread( int threadNumber,int stepType,hx::Null< int >  __o_stepCount){
int stepCount = __o_stepCount.Default(1);
	HX_STACK_FRAME("cpp.vm.Debugger","stepThread",0x6c6f6977,"cpp.vm.Debugger.stepThread","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",311,0x9c8417ca)
	HX_STACK_ARG(threadNumber,"threadNumber")
	HX_STACK_ARG(stepType,"stepType")
	HX_STACK_ARG(stepCount,"stepCount")
{
		HX_STACK_LINE(311)
		::__hxcpp_dbg_stepThread(threadNumber,stepType,stepCount);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Debugger_obj,stepThread,(void))

Array< ::String > Debugger_obj::getStackVariables( int threadNumber,int stackFrameNumber,bool unsafe){
	HX_STACK_FRAME("cpp.vm.Debugger","getStackVariables",0x74210964,"cpp.vm.Debugger.getStackVariables","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",332,0x9c8417ca)
	HX_STACK_ARG(threadNumber,"threadNumber")
	HX_STACK_ARG(stackFrameNumber,"stackFrameNumber")
	HX_STACK_ARG(unsafe,"unsafe")
	HX_STACK_LINE(332)
	return ::__hxcpp_dbg_getStackVariables(threadNumber,stackFrameNumber,unsafe,::cpp::vm::Debugger_obj::THREAD_NOT_STOPPED);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Debugger_obj,getStackVariables,return )

Dynamic Debugger_obj::getStackVariableValue( int threadNumber,int stackFrameNumber,::String name,bool unsafe){
	HX_STACK_FRAME("cpp.vm.Debugger","getStackVariableValue",0x55bcc4c2,"cpp.vm.Debugger.getStackVariableValue","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",346,0x9c8417ca)
	HX_STACK_ARG(threadNumber,"threadNumber")
	HX_STACK_ARG(stackFrameNumber,"stackFrameNumber")
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(unsafe,"unsafe")
	HX_STACK_LINE(346)
	return ::__hxcpp_dbg_getStackVariableValue(threadNumber,stackFrameNumber,name,unsafe,::cpp::vm::Debugger_obj::NONEXISTENT_VALUE,::cpp::vm::Debugger_obj::THREAD_NOT_STOPPED);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Debugger_obj,getStackVariableValue,return )

Dynamic Debugger_obj::setStackVariableValue( int threadNumber,int stackFrameNumber,::String name,Dynamic value,bool unsafe){
	HX_STACK_FRAME("cpp.vm.Debugger","setStackVariableValue",0xa9c592ce,"cpp.vm.Debugger.setStackVariableValue","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Debugger.hx",363,0x9c8417ca)
	HX_STACK_ARG(threadNumber,"threadNumber")
	HX_STACK_ARG(stackFrameNumber,"stackFrameNumber")
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(unsafe,"unsafe")
	HX_STACK_LINE(363)
	return ::__hxcpp_dbg_setStackVariableValue(threadNumber,stackFrameNumber,name,value,unsafe,::cpp::vm::Debugger_obj::NONEXISTENT_VALUE,::cpp::vm::Debugger_obj::THREAD_NOT_STOPPED);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Debugger_obj,setStackVariableValue,return )


Debugger_obj::Debugger_obj()
{
}

Dynamic Debugger_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getFiles") ) { return getFiles_dyn(); }
		if (HX_FIELD_EQ(inName,"breakNow") ) { return breakNow_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getClasses") ) { return getClasses_dyn(); }
		if (HX_FIELD_EQ(inName,"stepThread") ) { return stepThread_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getThreadInfo") ) { return getThreadInfo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getThreadInfos") ) { return getThreadInfos_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"continueThreads") ) { return continueThreads_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getFilesFullPath") ) { return getFilesFullPath_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteBreakpoint") ) { return deleteBreakpoint_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"NONEXISTENT_VALUE") ) { return NONEXISTENT_VALUE; }
		if (HX_FIELD_EQ(inName,"getStackVariables") ) { return getStackVariables_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"THREAD_NOT_STOPPED") ) { return THREAD_NOT_STOPPED; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"addFileLineBreakpoint") ) { return addFileLineBreakpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getStackVariableValue") ) { return getStackVariableValue_dyn(); }
		if (HX_FIELD_EQ(inName,"setStackVariableValue") ) { return setStackVariableValue_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getCurrentThreadNumber") ) { return getCurrentThreadNumber_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"addClassFunctionBreakpoint") ) { return addClassFunctionBreakpoint_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"setEventNotificationHandler") ) { return setEventNotificationHandler_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"enableCurrentThreadDebugging") ) { return enableCurrentThreadDebugging_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Debugger_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"NONEXISTENT_VALUE") ) { NONEXISTENT_VALUE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"THREAD_NOT_STOPPED") ) { THREAD_NOT_STOPPED=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Debugger_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NONEXISTENT_VALUE"),
	HX_CSTRING("THREAD_NOT_STOPPED"),
	HX_CSTRING("setEventNotificationHandler"),
	HX_CSTRING("enableCurrentThreadDebugging"),
	HX_CSTRING("getCurrentThreadNumber"),
	HX_CSTRING("getFiles"),
	HX_CSTRING("getFilesFullPath"),
	HX_CSTRING("getClasses"),
	HX_CSTRING("getThreadInfos"),
	HX_CSTRING("getThreadInfo"),
	HX_CSTRING("addFileLineBreakpoint"),
	HX_CSTRING("addClassFunctionBreakpoint"),
	HX_CSTRING("deleteBreakpoint"),
	HX_CSTRING("breakNow"),
	HX_CSTRING("continueThreads"),
	HX_CSTRING("stepThread"),
	HX_CSTRING("getStackVariables"),
	HX_CSTRING("getStackVariableValue"),
	HX_CSTRING("setStackVariableValue"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Debugger_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Debugger_obj::NONEXISTENT_VALUE,"NONEXISTENT_VALUE");
	HX_MARK_MEMBER_NAME(Debugger_obj::THREAD_NOT_STOPPED,"THREAD_NOT_STOPPED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Debugger_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Debugger_obj::NONEXISTENT_VALUE,"NONEXISTENT_VALUE");
	HX_VISIT_MEMBER_NAME(Debugger_obj::THREAD_NOT_STOPPED,"THREAD_NOT_STOPPED");
};

#endif

Class Debugger_obj::__mClass;

void Debugger_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("cpp.vm.Debugger"), hx::TCanCast< Debugger_obj> ,sStaticFields,sMemberFields,
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

void Debugger_obj::__boot()
{
	NONEXISTENT_VALUE= ::String(HX_CSTRING("NONEXISTENT_VALUE"));
	THREAD_NOT_STOPPED= ::String(HX_CSTRING("THREAD_NOT_STOPPED"));
}

} // end namespace cpp
} // end namespace vm
