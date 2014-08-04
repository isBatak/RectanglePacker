#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cpp_vm_Debugger
#include <cpp/vm/Debugger.h>
#endif
#ifndef INCLUDED_cpp_vm_Deque
#include <cpp/vm/Deque.h>
#endif
#ifndef INCLUDED_cpp_vm_Gc
#include <cpp/vm/Gc.h>
#endif
#ifndef INCLUDED_cpp_vm_Mutex
#include <cpp/vm/Mutex.h>
#endif
#ifndef INCLUDED_cpp_vm_StackFrame
#include <cpp/vm/StackFrame.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_cpp_vm_ThreadInfo
#include <cpp/vm/ThreadInfo.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_BreakpointList
#include <org/flashdevelop/cpp/debugger/BreakpointList.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_BreakpointLocationList
#include <org/flashdevelop/cpp/debugger/BreakpointLocationList.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_BreakpointStatusList
#include <org/flashdevelop/cpp/debugger/BreakpointStatusList.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_Command
#include <org/flashdevelop/cpp/debugger/Command.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_DebuggerThread
#include <org/flashdevelop/cpp/debugger/DebuggerThread.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_FrameList
#include <org/flashdevelop/cpp/debugger/FrameList.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_IController
#include <org/flashdevelop/cpp/debugger/IController.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_Message
#include <org/flashdevelop/cpp/debugger/Message.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_StringList
#include <org/flashdevelop/cpp/debugger/StringList.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_ThreadStatus
#include <org/flashdevelop/cpp/debugger/ThreadStatus.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_ThreadWhereList
#include <org/flashdevelop/cpp/debugger/ThreadWhereList.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_VariableValue
#include <org/flashdevelop/cpp/debugger/VariableValue.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_BP
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/BP.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_Breakpoint
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/Breakpoint.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_DebuggerVariables
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/DebuggerVariables.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ExpressionHelper
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/ExpressionHelper.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_TypeHelpers
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/TypeHelpers.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{

Void DebuggerThread_obj::__construct(::org::flashdevelop::cpp::debugger::IController controller,bool startStopped)
{
HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","new",0x97807508,"org.flashdevelop.cpp.debugger.DebuggerThread.new","org/flashdevelop/cpp/debugger/DebuggerThread.hx",59,0xe680eae8)
HX_STACK_THIS(this)
HX_STACK_ARG(controller,"controller")
HX_STACK_ARG(startStopped,"startStopped")
{
	HX_STACK_LINE(65)
	if (((::org::flashdevelop::cpp::debugger::DebuggerThread_obj::gStartMutex == null()))){
		HX_STACK_LINE(66)
		HX_STACK_DO_THROW(HX_CSTRING("Debug thread cannot be constructed by a static initializer"));
	}
	HX_STACK_LINE(70)
	::org::flashdevelop::cpp::debugger::DebuggerThread_obj::gStartMutex->acquire();
	HX_STACK_LINE(71)
	if ((::org::flashdevelop::cpp::debugger::DebuggerThread_obj::gStarted)){
		HX_STACK_LINE(72)
		::org::flashdevelop::cpp::debugger::DebuggerThread_obj::gStartMutex->release();
		HX_STACK_LINE(73)
		HX_STACK_DO_THROW(HX_CSTRING("Debug thread constructor failed - there is already a debugger running"));
	}
	HX_STACK_LINE(76)
	::org::flashdevelop::cpp::debugger::DebuggerThread_obj::gStarted = true;
	HX_STACK_LINE(77)
	::org::flashdevelop::cpp::debugger::DebuggerThread_obj::gStartMutex->release();
	HX_STACK_LINE(80)
	::cpp::vm::Mutex _g = ::cpp::vm::Mutex_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(80)
	this->mStateMutex = _g;
	HX_STACK_LINE(81)
	this->mController = controller;
	HX_STACK_LINE(82)
	int _g1 = ::cpp::vm::Debugger_obj::getCurrentThreadNumber();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(82)
	this->mCurrentThreadNumber = _g1;
	HX_STACK_LINE(83)
	this->mCurrentThreadInfo = null();
	HX_STACK_LINE(84)
	::haxe::ds::IntMap _g2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(84)
	this->mBreakpoints = _g2;
	HX_STACK_LINE(85)
	::haxe::ds::StringMap _g3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(85)
	this->mBreakpointsByDescription = _g3;
	HX_STACK_LINE(86)
	this->mNextBreakpointNumber = (int)1;
	HX_STACK_LINE(87)
	::org::flashdevelop::cpp::debugger::_DebuggerThread::DebuggerVariables _g4 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::DebuggerVariables_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(87)
	this->mDebuggerVariables = _g4;
	HX_STACK_LINE(91)
	::org::flashdevelop::cpp::debugger::DebuggerThread_obj::gStartStopped = startStopped;
	HX_STACK_LINE(96)
	::cpp::vm::Debugger_obj::enableCurrentThreadDebugging(false);
	HX_STACK_LINE(98)
	::cpp::vm::Thread_obj::create(this->debuggerThreadMain_dyn());
	HX_STACK_LINE(100)
	if ((startStopped)){
		HX_STACK_LINE(103)
		::org::flashdevelop::cpp::debugger::DebuggerThread_obj::gStartQueue->pop(true);
	}
	HX_STACK_LINE(107)
	::cpp::vm::Debugger_obj::enableCurrentThreadDebugging(true);

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	Void run(::String text){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/flashdevelop/cpp/debugger/DebuggerThread.hx",114,0xe680eae8)
		HX_STACK_ARG(text,"text")
		{
			HX_STACK_LINE(114)
			HX_STACK_DO_THROW(text);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(111)
	::__hxcpp_set_critical_error_handler( Dynamic(new _Function_1_1()));
}
;
	return null();
}

//DebuggerThread_obj::~DebuggerThread_obj() { }

Dynamic DebuggerThread_obj::__CreateEmpty() { return  new DebuggerThread_obj; }
hx::ObjectPtr< DebuggerThread_obj > DebuggerThread_obj::__new(::org::flashdevelop::cpp::debugger::IController controller,bool startStopped)
{  hx::ObjectPtr< DebuggerThread_obj > result = new DebuggerThread_obj();
	result->__construct(controller,startStopped);
	return result;}

Dynamic DebuggerThread_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DebuggerThread_obj > result = new DebuggerThread_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void DebuggerThread_obj::debuggerThreadMain( ){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","debuggerThreadMain",0x0f82dffc,"org.flashdevelop.cpp.debugger.DebuggerThread.debuggerThreadMain","org/flashdevelop/cpp/debugger/DebuggerThread.hx",128,0xe680eae8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		::cpp::vm::Debugger_obj::setEventNotificationHandler(this->handleThreadEvent_dyn());
		HX_STACK_LINE(135)
		if ((::org::flashdevelop::cpp::debugger::DebuggerThread_obj::gStartStopped)){
			HX_STACK_LINE(139)
			::cpp::vm::Debugger_obj::breakNow(false);
			HX_STACK_LINE(143)
			::org::flashdevelop::cpp::debugger::DebuggerThread_obj::gStartQueue->push(true);
			HX_STACK_LINE(146)
			::cpp::vm::Debugger_obj::breakNow(true);
		}
		else{
			HX_STACK_LINE(150)
			::org::flashdevelop::cpp::debugger::DebuggerThread_obj::gStartQueue->push(true);
		}
		HX_STACK_LINE(154)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(155)
			while((true)){
				HX_STACK_LINE(156)
				::org::flashdevelop::cpp::debugger::Command cmd = this->mController->getNextCommand();		HX_STACK_VAR(cmd,"cmd");
				HX_STACK_LINE(157)
				int id = (int)-1;		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(158)
				switch( (int)(cmd->__Index())){
					case (int)32: {
						HX_STACK_LINE(158)
						::org::flashdevelop::cpp::debugger::Command cmd2 = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(1);		HX_STACK_VAR(cmd2,"cmd2");
						HX_STACK_LINE(158)
						int id2 = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(id2,"id2");
						HX_STACK_LINE(159)
						{
							HX_STACK_LINE(160)
							id = id2;
							HX_STACK_LINE(161)
							cmd = cmd2;
						}
					}
					;break;
					default: {
					}
				}
				HX_STACK_LINE(164)
				int _switch_1 = (cmd->__Index());
				if (  ( _switch_1==(int)32)){
					HX_STACK_LINE(164)
					::org::flashdevelop::cpp::debugger::Command cmd2 = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(1);		HX_STACK_VAR(cmd2,"cmd2");
					HX_STACK_LINE(164)
					int id2 = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(id2,"id2");
					HX_STACK_LINE(165)
					{
					}
				}
				else if (  ( _switch_1==(int)0)){
					HX_STACK_LINE(167)
					this->emit(::org::flashdevelop::cpp::debugger::Message_obj::Exited,id);
					HX_STACK_LINE(168)
					::Sys_obj::exit((int)0);
				}
				else if (  ( _switch_1==(int)1)){
					HX_STACK_LINE(171)
					this->emit(::org::flashdevelop::cpp::debugger::Message_obj::Detached,id);
					HX_STACK_LINE(172)
					break;
				}
				else if (  ( _switch_1==(int)2)){
					HX_STACK_LINE(175)
					::org::flashdevelop::cpp::debugger::Message _g = this->files();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(175)
					this->emit(_g,id);
				}
				else if (  ( _switch_1==(int)3)){
					HX_STACK_LINE(178)
					::org::flashdevelop::cpp::debugger::Message _g1 = this->filesFullPath();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(178)
					this->emit(_g1,id);
				}
				else if (  ( _switch_1==(int)4)){
					HX_STACK_LINE(181)
					::org::flashdevelop::cpp::debugger::Message _g2 = this->classes();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(181)
					this->emit(_g2,id);
				}
				else if (  ( _switch_1==(int)5)){
					HX_STACK_LINE(184)
					::org::flashdevelop::cpp::debugger::Message _g3 = this->mem();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(184)
					this->emit(_g3,id);
				}
				else if (  ( _switch_1==(int)6)){
					HX_STACK_LINE(187)
					::org::flashdevelop::cpp::debugger::Message _g4 = this->compact();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(187)
					this->emit(_g4,id);
				}
				else if (  ( _switch_1==(int)7)){
					HX_STACK_LINE(190)
					::org::flashdevelop::cpp::debugger::Message _g5 = this->collect();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(190)
					this->emit(_g5,id);
				}
				else if (  ( _switch_1==(int)8)){
					HX_STACK_LINE(164)
					int number = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(number,"number");
					HX_STACK_LINE(192)
					{
						HX_STACK_LINE(193)
						::org::flashdevelop::cpp::debugger::Message _g6 = this->setCurrentThread(number);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(193)
						this->emit(_g6,id);
					}
				}
				else if (  ( _switch_1==(int)9)){
					HX_STACK_LINE(164)
					int lineNumber = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(1);		HX_STACK_VAR(lineNumber,"lineNumber");
					HX_STACK_LINE(164)
					::String fileName = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(fileName,"fileName");
					HX_STACK_LINE(195)
					{
						HX_STACK_LINE(196)
						::org::flashdevelop::cpp::debugger::Message _g7 = this->addFileLineBreakpoint(fileName,lineNumber);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(196)
						this->emit(_g7,id);
					}
				}
				else if (  ( _switch_1==(int)10)){
					HX_STACK_LINE(164)
					::String functionName = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(1);		HX_STACK_VAR(functionName,"functionName");
					HX_STACK_LINE(164)
					::String className = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(className,"className");
					HX_STACK_LINE(198)
					{
						HX_STACK_LINE(199)
						::org::flashdevelop::cpp::debugger::Message _g8 = this->addClassFunctionBreakpoint(className,functionName);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(199)
						this->emit(_g8,id);
					}
				}
				else if (  ( _switch_1==(int)11)){
					HX_STACK_LINE(164)
					bool disabled = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(1);		HX_STACK_VAR(disabled,"disabled");
					HX_STACK_LINE(164)
					bool enabled = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(enabled,"enabled");
					HX_STACK_LINE(202)
					{
						HX_STACK_LINE(203)
						::org::flashdevelop::cpp::debugger::Message _g9 = this->listBreakpoints(enabled,disabled);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(203)
						this->emit(_g9,id);
					}
				}
				else if (  ( _switch_1==(int)12)){
					HX_STACK_LINE(164)
					int number = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(number,"number");
					HX_STACK_LINE(205)
					{
						HX_STACK_LINE(206)
						::org::flashdevelop::cpp::debugger::Message _g10 = this->describeBreakpoint(number);		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(206)
						this->emit(_g10,id);
					}
				}
				else if (  ( _switch_1==(int)13)){
					HX_STACK_LINE(209)
					::org::flashdevelop::cpp::debugger::Message _g11 = this->disableAllBreakpoints();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(209)
					this->emit(_g11,id);
				}
				else if (  ( _switch_1==(int)14)){
					HX_STACK_LINE(164)
					int last = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(1);		HX_STACK_VAR(last,"last");
					HX_STACK_LINE(164)
					int first = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(first,"first");
					HX_STACK_LINE(211)
					{
						HX_STACK_LINE(212)
						::org::flashdevelop::cpp::debugger::Message _g12 = this->disableBreakpointRange(first,last);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(212)
						this->emit(_g12,id);
					}
				}
				else if (  ( _switch_1==(int)15)){
					HX_STACK_LINE(215)
					::org::flashdevelop::cpp::debugger::Message _g13 = this->enableAllBreakpoints();		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(215)
					this->emit(_g13,id);
				}
				else if (  ( _switch_1==(int)16)){
					HX_STACK_LINE(164)
					int last = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(1);		HX_STACK_VAR(last,"last");
					HX_STACK_LINE(164)
					int first = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(first,"first");
					HX_STACK_LINE(217)
					{
						HX_STACK_LINE(218)
						::org::flashdevelop::cpp::debugger::Message _g14 = this->enableBreakpointRange(first,last);		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(218)
						this->emit(_g14,id);
					}
				}
				else if (  ( _switch_1==(int)17)){
					HX_STACK_LINE(221)
					::org::flashdevelop::cpp::debugger::Message _g15 = this->deleteAllBreakpoints();		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(221)
					this->emit(_g15,id);
				}
				else if (  ( _switch_1==(int)18)){
					HX_STACK_LINE(164)
					int last = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(1);		HX_STACK_VAR(last,"last");
					HX_STACK_LINE(164)
					int first = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(first,"first");
					HX_STACK_LINE(223)
					{
						HX_STACK_LINE(224)
						::org::flashdevelop::cpp::debugger::Message _g16 = this->deleteBreakpointRange(first,last);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(224)
						this->emit(_g16,id);
					}
				}
				else if (  ( _switch_1==(int)19)){
					HX_STACK_LINE(227)
					::org::flashdevelop::cpp::debugger::Message _g17 = this->breakNow();		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(227)
					this->emit(_g17,id);
				}
				else if (  ( _switch_1==(int)20)){
					HX_STACK_LINE(164)
					int count = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(count,"count");
					HX_STACK_LINE(229)
					{
						HX_STACK_LINE(230)
						::org::flashdevelop::cpp::debugger::Message _g18 = this->continueCurrent(count);		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(230)
						this->emit(_g18,id);
					}
				}
				else if (  ( _switch_1==(int)21)){
					HX_STACK_LINE(164)
					int count = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(count,"count");
					HX_STACK_LINE(232)
					{
						HX_STACK_LINE(233)
						::org::flashdevelop::cpp::debugger::Message _g19 = this->step(count);		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(233)
						this->emit(_g19,id);
					}
				}
				else if (  ( _switch_1==(int)22)){
					HX_STACK_LINE(164)
					int count = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(count,"count");
					HX_STACK_LINE(235)
					{
						HX_STACK_LINE(236)
						::org::flashdevelop::cpp::debugger::Message _g20 = this->next(count);		HX_STACK_VAR(_g20,"_g20");
						HX_STACK_LINE(236)
						this->emit(_g20,id);
					}
				}
				else if (  ( _switch_1==(int)23)){
					HX_STACK_LINE(164)
					int count = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(count,"count");
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(239)
						::org::flashdevelop::cpp::debugger::Message _g21 = this->finish(count);		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(239)
						this->emit(_g21,id);
					}
				}
				else if (  ( _switch_1==(int)24)){
					HX_STACK_LINE(164)
					bool unsafe = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(unsafe,"unsafe");
					HX_STACK_LINE(241)
					{
						HX_STACK_LINE(242)
						::org::flashdevelop::cpp::debugger::Message _g22 = this->whereCurrentThread(unsafe);		HX_STACK_VAR(_g22,"_g22");
						HX_STACK_LINE(242)
						this->emit(_g22,id);
					}
				}
				else if (  ( _switch_1==(int)25)){
					HX_STACK_LINE(245)
					::org::flashdevelop::cpp::debugger::Message _g23 = this->whereAllThreads();		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(245)
					this->emit(_g23,id);
				}
				else if (  ( _switch_1==(int)26)){
					HX_STACK_LINE(164)
					int count = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(count,"count");
					HX_STACK_LINE(247)
					{
						HX_STACK_LINE(248)
						::org::flashdevelop::cpp::debugger::Message _g24 = this->up(count);		HX_STACK_VAR(_g24,"_g24");
						HX_STACK_LINE(248)
						this->emit(_g24,id);
					}
				}
				else if (  ( _switch_1==(int)27)){
					HX_STACK_LINE(164)
					int count = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(count,"count");
					HX_STACK_LINE(250)
					{
						HX_STACK_LINE(251)
						::org::flashdevelop::cpp::debugger::Message _g25 = this->down(count);		HX_STACK_VAR(_g25,"_g25");
						HX_STACK_LINE(251)
						this->emit(_g25,id);
					}
				}
				else if (  ( _switch_1==(int)28)){
					HX_STACK_LINE(164)
					int number = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(number,"number");
					HX_STACK_LINE(253)
					{
						HX_STACK_LINE(254)
						::org::flashdevelop::cpp::debugger::Message _g26 = this->setFrame(number);		HX_STACK_VAR(_g26,"_g26");
						HX_STACK_LINE(254)
						this->emit(_g26,id);
					}
				}
				else if (  ( _switch_1==(int)29)){
					HX_STACK_LINE(164)
					bool unsafe = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(unsafe,"unsafe");
					HX_STACK_LINE(256)
					{
						HX_STACK_LINE(257)
						::org::flashdevelop::cpp::debugger::Message _g27 = this->variables(unsafe);		HX_STACK_VAR(_g27,"_g27");
						HX_STACK_LINE(257)
						this->emit(_g27,id);
					}
				}
				else if (  ( _switch_1==(int)30)){
					HX_STACK_LINE(164)
					::String expression = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(1);		HX_STACK_VAR(expression,"expression");
					HX_STACK_LINE(164)
					bool unsafe = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(unsafe,"unsafe");
					HX_STACK_LINE(259)
					{
						HX_STACK_LINE(260)
						::org::flashdevelop::cpp::debugger::Message _g28 = this->printExpression(unsafe,expression);		HX_STACK_VAR(_g28,"_g28");
						HX_STACK_LINE(260)
						this->emit(_g28,id);
					}
				}
				else if (  ( _switch_1==(int)31)){
					HX_STACK_LINE(164)
					::String rhs = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(2);		HX_STACK_VAR(rhs,"rhs");
					HX_STACK_LINE(164)
					::String lhs = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(1);		HX_STACK_VAR(lhs,"lhs");
					HX_STACK_LINE(164)
					bool unsafe = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(unsafe,"unsafe");
					HX_STACK_LINE(262)
					{
						HX_STACK_LINE(263)
						::org::flashdevelop::cpp::debugger::Message _g29 = this->setExpression(unsafe,lhs,rhs);		HX_STACK_VAR(_g29,"_g29");
						HX_STACK_LINE(263)
						this->emit(_g29,id);
					}
				}
				else if (  ( _switch_1==(int)33)){
					HX_STACK_LINE(164)
					::String expression = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(1);		HX_STACK_VAR(expression,"expression");
					HX_STACK_LINE(164)
					bool unsafe = (::org::flashdevelop::cpp::debugger::Command(cmd))->__Param(0);		HX_STACK_VAR(unsafe,"unsafe");
					HX_STACK_LINE(265)
					{
						HX_STACK_LINE(268)
						::cpp::vm::Debugger_obj::setEventNotificationHandler(null());
						HX_STACK_LINE(269)
						::org::flashdevelop::cpp::debugger::Message _g30 = this->getExpression(unsafe,expression);		HX_STACK_VAR(_g30,"_g30");
						HX_STACK_LINE(269)
						this->emit(_g30,id);
						HX_STACK_LINE(270)
						::cpp::vm::Debugger_obj::setEventNotificationHandler(this->handleThreadEvent_dyn());
					}
				}
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(275)
					::String _g31 = ::Std_obj::string(e);		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(275)
					::String _g32 = (HX_CSTRING("Exception in debugger, detaching: ") + _g31);		HX_STACK_VAR(_g32,"_g32");
					HX_STACK_LINE(275)
					::org::flashdevelop::cpp::debugger::Message _g33 = ::org::flashdevelop::cpp::debugger::Message_obj::ErrorInternal(_g32);		HX_STACK_VAR(_g33,"_g33");
					HX_STACK_LINE(275)
					this->emitNoId(_g33);
				}
			}
		}
		HX_STACK_LINE(279)
		::cpp::vm::Debugger_obj::setEventNotificationHandler(null());
		HX_STACK_LINE(282)
		this->deleteAllBreakpoints();
		HX_STACK_LINE(284)
		this->emitNoId(::org::flashdevelop::cpp::debugger::Message_obj::Detached);
		HX_STACK_LINE(287)
		::cpp::vm::Debugger_obj::continueThreads((int)-1,(int)1);
		HX_STACK_LINE(291)
		::org::flashdevelop::cpp::debugger::DebuggerThread_obj::gStarted = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DebuggerThread_obj,debuggerThreadMain,(void))

Void DebuggerThread_obj::handleThreadEvent( int threadNumber,int event,int stackFrame,::String className,::String functionName,::String fileName,int lineNumber){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","handleThreadEvent",0x0b67c0d0,"org.flashdevelop.cpp.debugger.DebuggerThread.handleThreadEvent","org/flashdevelop/cpp/debugger/DebuggerThread.hx",299,0xe680eae8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(threadNumber,"threadNumber")
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(stackFrame,"stackFrame")
		HX_STACK_ARG(className,"className")
		HX_STACK_ARG(functionName,"functionName")
		HX_STACK_ARG(fileName,"fileName")
		HX_STACK_ARG(lineNumber,"lineNumber")
		HX_STACK_LINE(299)
		switch( (int)(event)){
			case (int)1: {
				HX_STACK_LINE(301)
				::org::flashdevelop::cpp::debugger::Message _g = ::org::flashdevelop::cpp::debugger::Message_obj::ThreadCreated(threadNumber);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(301)
				this->emitNoId(_g);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(303)
				this->mStateMutex->acquire();
				HX_STACK_LINE(304)
				if (((threadNumber == this->mCurrentThreadNumber))){
					HX_STACK_LINE(305)
					this->mCurrentThreadInfo = null();
				}
				HX_STACK_LINE(307)
				this->mStateMutex->release();
				HX_STACK_LINE(308)
				::org::flashdevelop::cpp::debugger::Message _g1 = ::org::flashdevelop::cpp::debugger::Message_obj::ThreadTerminated(threadNumber);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(308)
				this->emitNoId(_g1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(310)
				this->mStateMutex->acquire();
				HX_STACK_LINE(311)
				if (((threadNumber == this->mCurrentThreadNumber))){
					HX_STACK_LINE(312)
					this->mCurrentThreadInfo = null();
				}
				HX_STACK_LINE(314)
				this->mStateMutex->release();
				HX_STACK_LINE(315)
				::org::flashdevelop::cpp::debugger::Message _g2 = ::org::flashdevelop::cpp::debugger::Message_obj::ThreadStarted(threadNumber);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(315)
				this->emitNoId(_g2);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(317)
				this->mStateMutex->acquire();
				HX_STACK_LINE(318)
				if (((threadNumber == this->mCurrentThreadNumber))){
					HX_STACK_LINE(319)
					this->mCurrentThreadInfo = null();
				}
				HX_STACK_LINE(321)
				this->mStateMutex->release();
				HX_STACK_LINE(322)
				::org::flashdevelop::cpp::debugger::Message _g3 = ::org::flashdevelop::cpp::debugger::Message_obj::ThreadStopped(threadNumber,className,functionName,fileName,lineNumber);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(322)
				this->emitNoId(_g3);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(DebuggerThread_obj,handleThreadEvent,(void))

Void DebuggerThread_obj::emit( ::org::flashdevelop::cpp::debugger::Message message,int id){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","emit",0xf2f90cab,"org.flashdevelop.cpp.debugger.DebuggerThread.emit","org/flashdevelop/cpp/debugger/DebuggerThread.hx",328,0xe680eae8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(329)
		if (((id != (int)-1))){
			HX_STACK_LINE(330)
			::org::flashdevelop::cpp::debugger::Message _g = ::org::flashdevelop::cpp::debugger::Message_obj::MessageId(id,message);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(330)
			message = _g;
		}
		HX_STACK_LINE(332)
		this->mController->acceptMessage(message);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerThread_obj,emit,(void))

Void DebuggerThread_obj::emitNoId( ::org::flashdevelop::cpp::debugger::Message message){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","emitNoId",0xdbd75cc7,"org.flashdevelop.cpp.debugger.DebuggerThread.emitNoId","org/flashdevelop/cpp/debugger/DebuggerThread.hx",337,0xe680eae8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(337)
		this->mController->acceptMessage(message);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerThread_obj,emitNoId,(void))

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::files( ){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","files",0x37b5fd1f,"org.flashdevelop.cpp.debugger.DebuggerThread.files","org/flashdevelop/cpp/debugger/DebuggerThread.hx",341,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(343)
	Array< ::String > files = ::cpp::vm::Debugger_obj::getFiles();		HX_STACK_VAR(files,"files");
	HX_STACK_LINE(345)
	Array< ::String > _g = ::cpp::vm::Debugger_obj::getFiles();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(345)
	return ::org::flashdevelop::cpp::debugger::Message_obj::Files(_g);
}


HX_DEFINE_DYNAMIC_FUNC0(DebuggerThread_obj,files,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::filesFullPath( ){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","filesFullPath",0xcccddf13,"org.flashdevelop.cpp.debugger.DebuggerThread.filesFullPath","org/flashdevelop/cpp/debugger/DebuggerThread.hx",349,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(350)
	Array< ::String > _g = ::cpp::vm::Debugger_obj::getFilesFullPath();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(350)
	return ::org::flashdevelop::cpp::debugger::Message_obj::FilesFullPath(_g);
}


HX_DEFINE_DYNAMIC_FUNC0(DebuggerThread_obj,filesFullPath,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::classes( ){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","classes",0x7931674e,"org.flashdevelop.cpp.debugger.DebuggerThread.classes","org/flashdevelop/cpp/debugger/DebuggerThread.hx",354,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(355)
	Array< ::String > classes = ::cpp::vm::Debugger_obj::getClasses();		HX_STACK_VAR(classes,"classes");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int run(::String a,::String b){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/flashdevelop/cpp/debugger/DebuggerThread.hx",358,0xe680eae8)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		{
			HX_STACK_LINE(358)
			return ::Reflect_obj::compare(a,b);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(357)
	classes->sort( Dynamic(new _Function_1_1()));
	HX_STACK_LINE(361)
	return ::org::flashdevelop::cpp::debugger::Message_obj::Classes(classes);
}


HX_DEFINE_DYNAMIC_FUNC0(DebuggerThread_obj,classes,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::mem( ){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","mem",0x977fb2bd,"org.flashdevelop.cpp.debugger.DebuggerThread.mem","org/flashdevelop/cpp/debugger/DebuggerThread.hx",365,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(367)
	int _g = ::cpp::vm::Gc_obj::memUsage();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(367)
	return ::org::flashdevelop::cpp::debugger::Message_obj::MemBytes(_g);
}


HX_DEFINE_DYNAMIC_FUNC0(DebuggerThread_obj,mem,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::compact( ){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","compact",0x9309244b,"org.flashdevelop.cpp.debugger.DebuggerThread.compact","org/flashdevelop/cpp/debugger/DebuggerThread.hx",374,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(376)
	int pre = ::cpp::vm::Gc_obj::memUsage();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(377)
	::cpp::vm::Gc_obj::compact();
	HX_STACK_LINE(378)
	int post = ::cpp::vm::Gc_obj::memUsage();		HX_STACK_VAR(post,"post");
	HX_STACK_LINE(384)
	return ::org::flashdevelop::cpp::debugger::Message_obj::Compacted(pre,post);
}


HX_DEFINE_DYNAMIC_FUNC0(DebuggerThread_obj,compact,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::collect( ){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","collect",0xfd00be52,"org.flashdevelop.cpp.debugger.DebuggerThread.collect","org/flashdevelop/cpp/debugger/DebuggerThread.hx",388,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(390)
	int pre = ::cpp::vm::Gc_obj::memUsage();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(391)
	::cpp::vm::Gc_obj::run(true);
	HX_STACK_LINE(392)
	int post = ::cpp::vm::Gc_obj::memUsage();		HX_STACK_VAR(post,"post");
	HX_STACK_LINE(398)
	return ::org::flashdevelop::cpp::debugger::Message_obj::Collected(pre,post);
}


HX_DEFINE_DYNAMIC_FUNC0(DebuggerThread_obj,collect,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::setCurrentThread( int number){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","setCurrentThread",0x5af42539,"org.flashdevelop.cpp.debugger.DebuggerThread.setCurrentThread","org/flashdevelop/cpp/debugger/DebuggerThread.hx",402,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(number,"number")
	HX_STACK_LINE(403)
	Array< ::Dynamic > threadInfos = ::cpp::vm::Debugger_obj::getThreadInfos();		HX_STACK_VAR(threadInfos,"threadInfos");
	HX_STACK_LINE(405)
	this->mStateMutex->acquire();
	HX_STACK_LINE(407)
	if (((number == this->mCurrentThreadNumber))){
		HX_STACK_LINE(408)
		this->mStateMutex->release();
		HX_STACK_LINE(409)
		return ::org::flashdevelop::cpp::debugger::Message_obj::CurrentThread(number);
	}
	HX_STACK_LINE(412)
	{
		HX_STACK_LINE(412)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(412)
		while((true)){
			HX_STACK_LINE(412)
			if ((!(((_g < threadInfos->length))))){
				HX_STACK_LINE(412)
				break;
			}
			HX_STACK_LINE(412)
			::cpp::vm::ThreadInfo ti = threadInfos->__get(_g).StaticCast< ::cpp::vm::ThreadInfo >();		HX_STACK_VAR(ti,"ti");
			HX_STACK_LINE(412)
			++(_g);
			HX_STACK_LINE(413)
			if (((ti->number == number))){
				HX_STACK_LINE(414)
				this->mCurrentThreadNumber = number;
				HX_STACK_LINE(415)
				if (((ti->status == (int)1))){
					HX_STACK_LINE(416)
					this->mCurrentThreadInfo = null();
				}
				else{
					HX_STACK_LINE(419)
					this->mCurrentThreadInfo = ti;
					HX_STACK_LINE(420)
					this->mCurrentStackFrame = (ti->stack->length - (int)1);
				}
				HX_STACK_LINE(422)
				this->mStateMutex->release();
				HX_STACK_LINE(423)
				return ::org::flashdevelop::cpp::debugger::Message_obj::CurrentThread(number);
			}
		}
	}
	HX_STACK_LINE(427)
	this->mStateMutex->release();
	HX_STACK_LINE(429)
	return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorNoSuchThread(number);
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerThread_obj,setCurrentThread,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::addFileLineBreakpoint( ::String fileName,int lineNumber){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","addFileLineBreakpoint",0xbe6a750a,"org.flashdevelop.cpp.debugger.DebuggerThread.addFileLineBreakpoint","org/flashdevelop/cpp/debugger/DebuggerThread.hx",434,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fileName,"fileName")
	HX_STACK_ARG(lineNumber,"lineNumber")
	HX_STACK_LINE(435)
	::String desc = ((fileName + HX_CSTRING(":")) + lineNumber);		HX_STACK_VAR(desc,"desc");
	HX_STACK_LINE(437)
	if ((!(this->mBreakpointsByDescription->exists(desc)))){
		HX_STACK_LINE(438)
		Array< ::String > files = ::cpp::vm::Debugger_obj::getFiles();		HX_STACK_VAR(files,"files");
		HX_STACK_LINE(439)
		{
			HX_STACK_LINE(439)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(439)
			while((true)){
				HX_STACK_LINE(439)
				if ((!(((_g < files->length))))){
					HX_STACK_LINE(439)
					break;
				}
				HX_STACK_LINE(439)
				::String f = files->__get(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(439)
				++(_g);
				HX_STACK_LINE(440)
				if (((f == fileName))){
					HX_STACK_LINE(442)
					int _g1 = (this->mNextBreakpointNumber)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(442)
					::org::flashdevelop::cpp::debugger::_DebuggerThread::Breakpoint breakpoint = ::org::flashdevelop::cpp::debugger::_DebuggerThread::Breakpoint_obj::__new(_g1,desc);		HX_STACK_VAR(breakpoint,"breakpoint");
					HX_STACK_LINE(443)
					this->mBreakpoints->set(breakpoint->number,breakpoint);
					HX_STACK_LINE(444)
					this->mBreakpointsByDescription->set(desc,breakpoint);
					HX_STACK_LINE(445)
					breakpoint->addFileLine(fileName,lineNumber);
					HX_STACK_LINE(446)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(451)
	if ((this->mBreakpointsByDescription->exists(desc))){
		HX_STACK_LINE(452)
		::org::flashdevelop::cpp::debugger::_DebuggerThread::Breakpoint breakpoint = this->mBreakpointsByDescription->get(desc);		HX_STACK_VAR(breakpoint,"breakpoint");
		HX_STACK_LINE(453)
		breakpoint->enable();
		HX_STACK_LINE(454)
		return ::org::flashdevelop::cpp::debugger::Message_obj::FileLineBreakpointNumber(breakpoint->number);
	}
	else{
		HX_STACK_LINE(457)
		return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorNoSuchFile(fileName);
	}
	HX_STACK_LINE(451)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerThread_obj,addFileLineBreakpoint,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::addClassFunctionBreakpoint( ::String className,::String functionName){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","addClassFunctionBreakpoint",0x1f908cf8,"org.flashdevelop.cpp.debugger.DebuggerThread.addClassFunctionBreakpoint","org/flashdevelop/cpp/debugger/DebuggerThread.hx",463,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(functionName,"functionName")
	HX_STACK_LINE(464)
	::EReg classNameRegex = null();		HX_STACK_VAR(classNameRegex,"classNameRegex");
	HX_STACK_LINE(465)
	::EReg functionNameRegex = null();		HX_STACK_VAR(functionNameRegex,"functionNameRegex");
	HX_STACK_LINE(467)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(468)
		::String _g = className.charAt((int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(468)
		if (((_g == HX_CSTRING("/")))){
			HX_STACK_LINE(470)
			::String _g1 = className.substr((int)1,(className.length - (int)2));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(470)
			::EReg _g2 = ::EReg_obj::__new(_g1,HX_CSTRING(""));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(469)
			classNameRegex = _g2;
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(474)
				return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorBadClassNameRegex(e);
			}
		}
	}
	HX_STACK_LINE(477)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(478)
		::String _g3 = functionName.charAt((int)0);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(478)
		if (((_g3 == HX_CSTRING("/")))){
			HX_STACK_LINE(480)
			::String _g4 = functionName.substr((int)1,(functionName.length - (int)2));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(480)
			::EReg _g5 = ::EReg_obj::__new(_g4,HX_CSTRING(""));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(479)
			functionNameRegex = _g5;
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(485)
				return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorBadFunctionNameRegex(e);
			}
		}
	}
	HX_STACK_LINE(488)
	::String desc = ((className + HX_CSTRING(".")) + functionName);		HX_STACK_VAR(desc,"desc");
	HX_STACK_LINE(490)
	if ((this->mBreakpointsByDescription->exists(desc))){
		HX_STACK_LINE(491)
		::org::flashdevelop::cpp::debugger::_DebuggerThread::Breakpoint breakpoint = this->mBreakpointsByDescription->get(desc);		HX_STACK_VAR(breakpoint,"breakpoint");
		HX_STACK_LINE(492)
		breakpoint->enable();
		HX_STACK_LINE(493)
		return ::org::flashdevelop::cpp::debugger::Message_obj::ClassFunctionBreakpointNumber(breakpoint->number,::org::flashdevelop::cpp::debugger::StringList_obj::Terminator);
	}
	HX_STACK_LINE(497)
	::org::flashdevelop::cpp::debugger::StringList badClasses = ::org::flashdevelop::cpp::debugger::StringList_obj::Terminator;		HX_STACK_VAR(badClasses,"badClasses");
	HX_STACK_LINE(499)
	Array< ::String > classNames = ::cpp::vm::Debugger_obj::getClasses();		HX_STACK_VAR(classNames,"classNames");
	HX_STACK_LINE(500)
	{
		HX_STACK_LINE(500)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(500)
		while((true)){
			HX_STACK_LINE(500)
			if ((!(((_g < classNames->length))))){
				HX_STACK_LINE(500)
				break;
			}
			HX_STACK_LINE(500)
			::String cn = classNames->__get(_g);		HX_STACK_VAR(cn,"cn");
			HX_STACK_LINE(500)
			++(_g);
			HX_STACK_LINE(501)
			bool matchesClass = false;		HX_STACK_VAR(matchesClass,"matchesClass");
			HX_STACK_LINE(502)
			if (((classNameRegex == null()))){
				HX_STACK_LINE(503)
				if (((cn == className))){
					HX_STACK_LINE(504)
					matchesClass = true;
				}
				else{
					HX_STACK_LINE(507)
					int last = cn.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(last,"last");
					HX_STACK_LINE(508)
					if (((last != (int)-1))){
						HX_STACK_LINE(509)
						::String _g6 = cn.substr((last + (int)1),null());		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(509)
						if (((_g6 == className))){
							HX_STACK_LINE(510)
							matchesClass = true;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(515)
				if ((classNameRegex->match(cn))){
					HX_STACK_LINE(516)
					matchesClass = true;
				}
			}
			HX_STACK_LINE(518)
			if ((!(matchesClass))){
				HX_STACK_LINE(519)
				continue;
			}
			HX_STACK_LINE(521)
			::Class klass = ::Type_obj::resolveClass(cn);		HX_STACK_VAR(klass,"klass");
			HX_STACK_LINE(522)
			if (((klass == null()))){
				HX_STACK_LINE(523)
				::org::flashdevelop::cpp::debugger::StringList _g7 = ::org::flashdevelop::cpp::debugger::StringList_obj::Element(cn,badClasses);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(523)
				badClasses = _g7;
			}
			else{
				HX_STACK_LINE(526)
				this->breakFunction(desc,cn,klass,functionName,functionNameRegex);
			}
		}
	}
	HX_STACK_LINE(531)
	if ((this->mBreakpointsByDescription->exists(desc))){
		HX_STACK_LINE(532)
		::org::flashdevelop::cpp::debugger::_DebuggerThread::Breakpoint breakpoint = this->mBreakpointsByDescription->get(desc);		HX_STACK_VAR(breakpoint,"breakpoint");
		HX_STACK_LINE(533)
		breakpoint->enable();
		HX_STACK_LINE(534)
		return ::org::flashdevelop::cpp::debugger::Message_obj::ClassFunctionBreakpointNumber(breakpoint->number,badClasses);
	}
	else{
		HX_STACK_LINE(538)
		return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorNoMatchingFunctions(className,functionName,badClasses);
	}
	HX_STACK_LINE(531)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerThread_obj,addClassFunctionBreakpoint,return )

Void DebuggerThread_obj::breakFunction( ::String desc,::String className,::Class klass,::String functionName,::EReg functionNameRegex){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","breakFunction",0x9ca9e99f,"org.flashdevelop.cpp.debugger.DebuggerThread.breakFunction","org/flashdevelop/cpp/debugger/DebuggerThread.hx",547,0xe680eae8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(desc,"desc")
		HX_STACK_ARG(className,"className")
		HX_STACK_ARG(klass,"klass")
		HX_STACK_ARG(functionName,"functionName")
		HX_STACK_ARG(functionNameRegex,"functionNameRegex")
		HX_STACK_LINE(549)
		if (((functionName == HX_CSTRING("new")))){
			HX_STACK_LINE(550)
			this->addFunctionBreakpoint(desc,className,functionName);
		}
		HX_STACK_LINE(554)
		{
			HX_STACK_LINE(554)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(555)
			Array< ::String > _g1 = ::Type_obj::getInstanceFields(klass);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(554)
			Array< ::String > _g11 = ::Type_obj::getClassFields(klass)->concat(_g1);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(554)
			while((true)){
				HX_STACK_LINE(554)
				if ((!(((_g < _g11->length))))){
					HX_STACK_LINE(554)
					break;
				}
				HX_STACK_LINE(554)
				::String f = _g11->__get(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(554)
				++(_g);
				HX_STACK_LINE(556)
				Dynamic _g12 = ::Reflect_obj::field(klass,f);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(556)
				if ((!(::Reflect_obj::isFunction(_g12)))){
					HX_STACK_LINE(557)
					continue;
				}
				HX_STACK_LINE(559)
				bool matchesFunction = false;		HX_STACK_VAR(matchesFunction,"matchesFunction");
				HX_STACK_LINE(560)
				if (((functionNameRegex == null()))){
					HX_STACK_LINE(561)
					if (((f == functionName))){
						HX_STACK_LINE(562)
						matchesFunction = true;
					}
				}
				else{
					HX_STACK_LINE(565)
					if ((functionNameRegex->match(f))){
						HX_STACK_LINE(566)
						matchesFunction = true;
					}
				}
				HX_STACK_LINE(568)
				if ((matchesFunction)){
					HX_STACK_LINE(569)
					this->addFunctionBreakpoint(desc,className,f);
					HX_STACK_LINE(570)
					if (((functionNameRegex == null()))){
						HX_STACK_LINE(571)
						return null();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(DebuggerThread_obj,breakFunction,(void))

Void DebuggerThread_obj::addFunctionBreakpoint( ::String desc,::String className,::String functionName){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","addFunctionBreakpoint",0x7ae79992,"org.flashdevelop.cpp.debugger.DebuggerThread.addFunctionBreakpoint","org/flashdevelop/cpp/debugger/DebuggerThread.hx",579,0xe680eae8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(desc,"desc")
		HX_STACK_ARG(className,"className")
		HX_STACK_ARG(functionName,"functionName")
		HX_STACK_LINE(580)
		::org::flashdevelop::cpp::debugger::_DebuggerThread::Breakpoint breakpoint = this->mBreakpointsByDescription->get(desc);		HX_STACK_VAR(breakpoint,"breakpoint");
		HX_STACK_LINE(581)
		if (((breakpoint == null()))){
			HX_STACK_LINE(582)
			int _g = (this->mNextBreakpointNumber)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(582)
			::org::flashdevelop::cpp::debugger::_DebuggerThread::Breakpoint _g1 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::Breakpoint_obj::__new(_g,desc);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(582)
			breakpoint = _g1;
			HX_STACK_LINE(583)
			this->mBreakpoints->set(breakpoint->number,breakpoint);
			HX_STACK_LINE(584)
			this->mBreakpointsByDescription->set(desc,breakpoint);
		}
		HX_STACK_LINE(587)
		breakpoint->addClassFunction(className,functionName);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DebuggerThread_obj,addFunctionBreakpoint,(void))

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::listBreakpoints( bool enabled,bool disabled){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","listBreakpoints",0xabdd0d0c,"org.flashdevelop.cpp.debugger.DebuggerThread.listBreakpoints","org/flashdevelop/cpp/debugger/DebuggerThread.hx",591,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(enabled,"enabled")
	HX_STACK_ARG(disabled,"disabled")
	HX_STACK_LINE(592)
	::org::flashdevelop::cpp::debugger::BreakpointList list = ::org::flashdevelop::cpp::debugger::BreakpointList_obj::Terminator;		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(594)
	Array< ::Dynamic > breakpoints = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(breakpoints,"breakpoints");
	HX_STACK_LINE(596)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->mBreakpoints->keys());  __it->hasNext(); ){
		int k = __it->next();
		{
			HX_STACK_LINE(597)
			::org::flashdevelop::cpp::debugger::_DebuggerThread::Breakpoint breakpoint = this->mBreakpoints->get(k);		HX_STACK_VAR(breakpoint,"breakpoint");
			HX_STACK_LINE(598)
			if (((bool((bool(enabled) && bool(breakpoint->enabled))) || bool((bool(disabled) && bool(!(breakpoint->enabled))))))){
				HX_STACK_LINE(600)
				breakpoints->push(breakpoint);
			}
		}
;
	}

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int run(::org::flashdevelop::cpp::debugger::_DebuggerThread::Breakpoint a,::org::flashdevelop::cpp::debugger::_DebuggerThread::Breakpoint b){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/flashdevelop/cpp/debugger/DebuggerThread.hx",605,0xe680eae8)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		{
			HX_STACK_LINE(605)
			return (b->number - a->number);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(604)
	breakpoints->sort( Dynamic(new _Function_1_1()));
	HX_STACK_LINE(607)
	{
		HX_STACK_LINE(607)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(607)
		while((true)){
			HX_STACK_LINE(607)
			if ((!(((_g < breakpoints->length))))){
				HX_STACK_LINE(607)
				break;
			}
			HX_STACK_LINE(607)
			::org::flashdevelop::cpp::debugger::_DebuggerThread::Breakpoint b = breakpoints->__get(_g).StaticCast< ::org::flashdevelop::cpp::debugger::_DebuggerThread::Breakpoint >();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(607)
			++(_g);
			HX_STACK_LINE(609)
			int _g1 = b->bpCount();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(609)
			bool _g11 = (_g1 > (int)1);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(608)
			::org::flashdevelop::cpp::debugger::BreakpointList _g2 = ::org::flashdevelop::cpp::debugger::BreakpointList_obj::Breakpoint(b->number,b->description,b->enabled,_g11,list);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(608)
			list = _g2;
		}
	}
	HX_STACK_LINE(612)
	return ::org::flashdevelop::cpp::debugger::Message_obj::Breakpoints(list);
}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerThread_obj,listBreakpoints,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::describeBreakpoint( int number){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","describeBreakpoint",0x919a2374,"org.flashdevelop.cpp.debugger.DebuggerThread.describeBreakpoint","org/flashdevelop/cpp/debugger/DebuggerThread.hx",616,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(number,"number")
	HX_STACK_LINE(617)
	::org::flashdevelop::cpp::debugger::_DebuggerThread::Breakpoint breakpoint = this->mBreakpoints->get(number);		HX_STACK_VAR(breakpoint,"breakpoint");
	HX_STACK_LINE(619)
	if (((breakpoint == null()))){
		HX_STACK_LINE(620)
		return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorNoSuchBreakpoint(number);
	}
	HX_STACK_LINE(623)
	::org::flashdevelop::cpp::debugger::BreakpointLocationList list = ::org::flashdevelop::cpp::debugger::BreakpointLocationList_obj::Terminator;		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(625)
	for(::cpp::FastIterator_obj< ::org::flashdevelop::cpp::debugger::_DebuggerThread::BP > *__it = ::cpp::CreateFastIterator< ::org::flashdevelop::cpp::debugger::_DebuggerThread::BP >(breakpoint->bps());  __it->hasNext(); ){
		::org::flashdevelop::cpp::debugger::_DebuggerThread::BP b = __it->next();
		switch( (int)(b->__Index())){
			case (int)0: {
				HX_STACK_LINE(626)
				int lineNumber = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(2);		HX_STACK_VAR(lineNumber,"lineNumber");
				HX_STACK_LINE(626)
				::String fileName = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(1);		HX_STACK_VAR(fileName,"fileName");
				HX_STACK_LINE(626)
				int bp = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(0);		HX_STACK_VAR(bp,"bp");
				HX_STACK_LINE(627)
				{
					HX_STACK_LINE(628)
					::org::flashdevelop::cpp::debugger::BreakpointLocationList _g = ::org::flashdevelop::cpp::debugger::BreakpointLocationList_obj::FileLine(fileName,lineNumber,list);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(628)
					list = _g;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(626)
				::String functionName = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(2);		HX_STACK_VAR(functionName,"functionName");
				HX_STACK_LINE(626)
				::String className = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(1);		HX_STACK_VAR(className,"className");
				HX_STACK_LINE(626)
				int bp = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(b))->__Param(0);		HX_STACK_VAR(bp,"bp");
				HX_STACK_LINE(629)
				{
					HX_STACK_LINE(630)
					::org::flashdevelop::cpp::debugger::BreakpointLocationList _g1 = ::org::flashdevelop::cpp::debugger::BreakpointLocationList_obj::ClassFunction(className,functionName,list);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(630)
					list = _g1;
				}
			}
			;break;
		}
;
	}
	HX_STACK_LINE(634)
	return ::org::flashdevelop::cpp::debugger::Message_obj::BreakpointDescription(number,list);
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerThread_obj,describeBreakpoint,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::disableAllBreakpoints( ){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","disableAllBreakpoints",0xc81ea331,"org.flashdevelop.cpp.debugger.DebuggerThread.disableAllBreakpoints","org/flashdevelop/cpp/debugger/DebuggerThread.hx",639,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(639)
	return this->disableBreakpointRange((int)-1,(int)-1);
}


HX_DEFINE_DYNAMIC_FUNC0(DebuggerThread_obj,disableAllBreakpoints,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::disableBreakpointRange( int first,int last){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","disableBreakpointRange",0xbf5dd01c,"org.flashdevelop.cpp.debugger.DebuggerThread.disableBreakpointRange","org/flashdevelop/cpp/debugger/DebuggerThread.hx",643,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(first,"first")
	HX_STACK_ARG(last,"last")
	HX_STACK_LINE(644)
	::org::flashdevelop::cpp::debugger::BreakpointStatusList list = ::org::flashdevelop::cpp::debugger::BreakpointStatusList_obj::Terminator;		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(646)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->getBreakpointIds(first,last));  __it->hasNext(); ){
		int i = __it->next();
		{
			HX_STACK_LINE(647)
			::org::flashdevelop::cpp::debugger::_DebuggerThread::Breakpoint breakpoint = this->mBreakpoints->get(i);		HX_STACK_VAR(breakpoint,"breakpoint");
			HX_STACK_LINE(648)
			if (((breakpoint == null()))){
				HX_STACK_LINE(649)
				::org::flashdevelop::cpp::debugger::BreakpointStatusList _g = ::org::flashdevelop::cpp::debugger::BreakpointStatusList_obj::Nonexistent(i,list);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(649)
				list = _g;
				HX_STACK_LINE(650)
				continue;
			}
			HX_STACK_LINE(652)
			if ((breakpoint->enabled)){
				HX_STACK_LINE(653)
				breakpoint->disable();
				HX_STACK_LINE(654)
				::org::flashdevelop::cpp::debugger::BreakpointStatusList _g1 = ::org::flashdevelop::cpp::debugger::BreakpointStatusList_obj::Disabled(i,list);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(654)
				list = _g1;
			}
			else{
				HX_STACK_LINE(657)
				::org::flashdevelop::cpp::debugger::BreakpointStatusList _g2 = ::org::flashdevelop::cpp::debugger::BreakpointStatusList_obj::AlreadyDisabled(i,list);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(657)
				list = _g2;
			}
		}
;
	}
	HX_STACK_LINE(661)
	return ::org::flashdevelop::cpp::debugger::Message_obj::BreakpointStatuses(list);
}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerThread_obj,disableBreakpointRange,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::enableAllBreakpoints( ){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","enableAllBreakpoints",0xd88b50bc,"org.flashdevelop.cpp.debugger.DebuggerThread.enableAllBreakpoints","org/flashdevelop/cpp/debugger/DebuggerThread.hx",666,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(666)
	return this->enableBreakpointRange((int)-1,(int)-1);
}


HX_DEFINE_DYNAMIC_FUNC0(DebuggerThread_obj,enableAllBreakpoints,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::enableBreakpointRange( int first,int last){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","enableBreakpointRange",0x0e08fc31,"org.flashdevelop.cpp.debugger.DebuggerThread.enableBreakpointRange","org/flashdevelop/cpp/debugger/DebuggerThread.hx",670,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(first,"first")
	HX_STACK_ARG(last,"last")
	HX_STACK_LINE(671)
	::org::flashdevelop::cpp::debugger::BreakpointStatusList list = ::org::flashdevelop::cpp::debugger::BreakpointStatusList_obj::Terminator;		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(673)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->getBreakpointIds(first,last));  __it->hasNext(); ){
		int i = __it->next();
		{
			HX_STACK_LINE(674)
			::org::flashdevelop::cpp::debugger::_DebuggerThread::Breakpoint breakpoint = this->mBreakpoints->get(i);		HX_STACK_VAR(breakpoint,"breakpoint");
			HX_STACK_LINE(675)
			if (((breakpoint == null()))){
				HX_STACK_LINE(676)
				::org::flashdevelop::cpp::debugger::BreakpointStatusList _g = ::org::flashdevelop::cpp::debugger::BreakpointStatusList_obj::Nonexistent(i,list);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(676)
				list = _g;
				HX_STACK_LINE(677)
				continue;
			}
			HX_STACK_LINE(679)
			if ((breakpoint->enabled)){
				HX_STACK_LINE(680)
				::org::flashdevelop::cpp::debugger::BreakpointStatusList _g1 = ::org::flashdevelop::cpp::debugger::BreakpointStatusList_obj::AlreadyEnabled(i,list);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(680)
				list = _g1;
			}
			else{
				HX_STACK_LINE(683)
				breakpoint->enable();
				HX_STACK_LINE(684)
				::org::flashdevelop::cpp::debugger::BreakpointStatusList _g2 = ::org::flashdevelop::cpp::debugger::BreakpointStatusList_obj::Enabled(i,list);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(684)
				list = _g2;
			}
		}
;
	}
	HX_STACK_LINE(688)
	return ::org::flashdevelop::cpp::debugger::Message_obj::BreakpointStatuses(list);
}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerThread_obj,enableBreakpointRange,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::deleteAllBreakpoints( ){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","deleteAllBreakpoints",0xd158f864,"org.flashdevelop.cpp.debugger.DebuggerThread.deleteAllBreakpoints","org/flashdevelop/cpp/debugger/DebuggerThread.hx",693,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(693)
	return this->deleteBreakpointRange((int)-1,(int)-1);
}


HX_DEFINE_DYNAMIC_FUNC0(DebuggerThread_obj,deleteAllBreakpoints,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::deleteBreakpointRange( int first,int last){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","deleteBreakpointRange",0xc92e0789,"org.flashdevelop.cpp.debugger.DebuggerThread.deleteBreakpointRange","org/flashdevelop/cpp/debugger/DebuggerThread.hx",697,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(first,"first")
	HX_STACK_ARG(last,"last")
	HX_STACK_LINE(698)
	::org::flashdevelop::cpp::debugger::BreakpointStatusList list = ::org::flashdevelop::cpp::debugger::BreakpointStatusList_obj::Terminator;		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(700)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->getBreakpointIds(first,last));  __it->hasNext(); ){
		int i = __it->next();
		{
			HX_STACK_LINE(701)
			::org::flashdevelop::cpp::debugger::_DebuggerThread::Breakpoint breakpoint = this->mBreakpoints->get(i);		HX_STACK_VAR(breakpoint,"breakpoint");
			HX_STACK_LINE(702)
			if (((breakpoint == null()))){
				HX_STACK_LINE(703)
				::org::flashdevelop::cpp::debugger::BreakpointStatusList _g = ::org::flashdevelop::cpp::debugger::BreakpointStatusList_obj::Nonexistent(i,list);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(703)
				list = _g;
				HX_STACK_LINE(704)
				continue;
			}
			HX_STACK_LINE(706)
			this->mBreakpoints->remove(i);
			HX_STACK_LINE(707)
			this->mBreakpointsByDescription->remove(breakpoint->description);
			HX_STACK_LINE(708)
			breakpoint->_delete();
			HX_STACK_LINE(709)
			::org::flashdevelop::cpp::debugger::BreakpointStatusList _g1 = ::org::flashdevelop::cpp::debugger::BreakpointStatusList_obj::Deleted(i,list);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(709)
			list = _g1;
		}
;
	}
	HX_STACK_LINE(712)
	return ::org::flashdevelop::cpp::debugger::Message_obj::BreakpointStatuses(list);
}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerThread_obj,deleteBreakpointRange,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::breakNow( ){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","breakNow",0x893327ef,"org.flashdevelop.cpp.debugger.DebuggerThread.breakNow","org/flashdevelop/cpp/debugger/DebuggerThread.hx",716,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(717)
	::cpp::vm::Debugger_obj::breakNow(null());
	HX_STACK_LINE(718)
	return ::org::flashdevelop::cpp::debugger::Message_obj::OK;
}


HX_DEFINE_DYNAMIC_FUNC0(DebuggerThread_obj,breakNow,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::continueCurrent( int count){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","continueCurrent",0x9778cf3a,"org.flashdevelop.cpp.debugger.DebuggerThread.continueCurrent","org/flashdevelop/cpp/debugger/DebuggerThread.hx",722,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(count,"count")
	HX_STACK_LINE(723)
	if (((count < (int)1))){
		HX_STACK_LINE(724)
		return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorBadCount(count);
	}
	HX_STACK_LINE(727)
	::cpp::vm::Debugger_obj::continueThreads(this->mCurrentThreadNumber,count);
	HX_STACK_LINE(729)
	return ::org::flashdevelop::cpp::debugger::Message_obj::Continued(count);
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerThread_obj,continueCurrent,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::step( int count){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","step",0xfc3f55a4,"org.flashdevelop.cpp.debugger.DebuggerThread.step","org/flashdevelop/cpp/debugger/DebuggerThread.hx",734,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(count,"count")
	HX_STACK_LINE(734)
	return this->stepExecution(count,(int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerThread_obj,step,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::next( int count){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","next",0xf8e5f34b,"org.flashdevelop.cpp.debugger.DebuggerThread.next","org/flashdevelop/cpp/debugger/DebuggerThread.hx",739,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(count,"count")
	HX_STACK_LINE(739)
	return this->stepExecution(count,(int)2);
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerThread_obj,next,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::finish( int count){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","finish",0x88dcf4ab,"org.flashdevelop.cpp.debugger.DebuggerThread.finish","org/flashdevelop/cpp/debugger/DebuggerThread.hx",744,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(count,"count")
	HX_STACK_LINE(744)
	return this->stepExecution(count,(int)3);
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerThread_obj,finish,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::whereCurrentThread( bool unsafe){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","whereCurrentThread",0x223dbfd4,"org.flashdevelop.cpp.debugger.DebuggerThread.whereCurrentThread","org/flashdevelop/cpp/debugger/DebuggerThread.hx",748,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(unsafe,"unsafe")
	HX_STACK_LINE(752)
	this->mStateMutex->acquire();
	HX_STACK_LINE(754)
	::cpp::vm::ThreadInfo threadInfo = this->getCurrentThreadInfoLocked(unsafe);		HX_STACK_VAR(threadInfo,"threadInfo");
	HX_STACK_LINE(756)
	if (((threadInfo == null()))){
		HX_STACK_LINE(757)
		this->mStateMutex->release();
		HX_STACK_LINE(758)
		return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorCurrentThreadNotStopped(this->mCurrentThreadNumber);
	}
	HX_STACK_LINE(761)
	if (((this->mCurrentStackFrame == (int)-1))){
		HX_STACK_LINE(762)
		this->mCurrentStackFrame = (threadInfo->stack->length - (int)1);
	}
	HX_STACK_LINE(765)
	this->mStateMutex->release();
	HX_STACK_LINE(768)
	::org::flashdevelop::cpp::debugger::ThreadWhereList _g = this->threadInfoToThreadWhereLocked(threadInfo,::org::flashdevelop::cpp::debugger::ThreadWhereList_obj::Terminator);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(767)
	return ::org::flashdevelop::cpp::debugger::Message_obj::ThreadsWhere(_g);
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerThread_obj,whereCurrentThread,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::whereAllThreads( ){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","whereAllThreads",0xce22c6b7,"org.flashdevelop.cpp.debugger.DebuggerThread.whereAllThreads","org/flashdevelop/cpp/debugger/DebuggerThread.hx",772,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(773)
	Array< ::Dynamic > threadInfos = ::cpp::vm::Debugger_obj::getThreadInfos();		HX_STACK_VAR(threadInfos,"threadInfos");
	HX_STACK_LINE(774)
	if (((threadInfos->length == (int)0))){
		HX_STACK_LINE(775)
		return ::org::flashdevelop::cpp::debugger::Message_obj::ThreadsWhere(::org::flashdevelop::cpp::debugger::ThreadWhereList_obj::Terminator);
	}
	HX_STACK_LINE(778)
	::org::flashdevelop::cpp::debugger::ThreadWhereList list = ::org::flashdevelop::cpp::debugger::ThreadWhereList_obj::Terminator;		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(780)
	{
		HX_STACK_LINE(780)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(780)
		while((true)){
			HX_STACK_LINE(780)
			if ((!(((_g < threadInfos->length))))){
				HX_STACK_LINE(780)
				break;
			}
			HX_STACK_LINE(780)
			::cpp::vm::ThreadInfo ti = threadInfos->__get(_g).StaticCast< ::cpp::vm::ThreadInfo >();		HX_STACK_VAR(ti,"ti");
			HX_STACK_LINE(780)
			++(_g);
			HX_STACK_LINE(781)
			::org::flashdevelop::cpp::debugger::ThreadWhereList _g1 = this->threadInfoToThreadWhereLocked(ti,list);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(781)
			list = _g1;
		}
	}
	HX_STACK_LINE(784)
	return ::org::flashdevelop::cpp::debugger::Message_obj::ThreadsWhere(list);
}


HX_DEFINE_DYNAMIC_FUNC0(DebuggerThread_obj,whereAllThreads,return )

::org::flashdevelop::cpp::debugger::ThreadWhereList DebuggerThread_obj::threadInfoToThreadWhereLocked( ::cpp::vm::ThreadInfo threadInfo,::org::flashdevelop::cpp::debugger::ThreadWhereList next){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","threadInfoToThreadWhereLocked",0x3147d6dc,"org.flashdevelop.cpp.debugger.DebuggerThread.threadInfoToThreadWhereLocked","org/flashdevelop/cpp/debugger/DebuggerThread.hx",789,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(threadInfo,"threadInfo")
	HX_STACK_ARG(next,"next")
	HX_STACK_LINE(790)
	::org::flashdevelop::cpp::debugger::FrameList list = ::org::flashdevelop::cpp::debugger::FrameList_obj::Terminator;		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(792)
	if (((threadInfo->stack->length > (int)0))){
		HX_STACK_LINE(793)
		int frameNumber = (int)0;		HX_STACK_VAR(frameNumber,"frameNumber");
		HX_STACK_LINE(795)
		{
			HX_STACK_LINE(795)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(795)
			Array< ::Dynamic > _g1 = threadInfo->stack;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(795)
			while((true)){
				HX_STACK_LINE(795)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(795)
					break;
				}
				HX_STACK_LINE(795)
				::cpp::vm::StackFrame sf = _g1->__get(_g).StaticCast< ::cpp::vm::StackFrame >();		HX_STACK_VAR(sf,"sf");
				HX_STACK_LINE(795)
				++(_g);
				HX_STACK_LINE(796)
				::org::flashdevelop::cpp::debugger::FrameList _g2 = ::org::flashdevelop::cpp::debugger::FrameList_obj::Frame((bool((threadInfo->number == this->mCurrentThreadNumber)) && bool((frameNumber == this->mCurrentStackFrame))),frameNumber,sf->className,sf->functionName,sf->fileName,sf->lineNumber,list);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(796)
				list = _g2;
				HX_STACK_LINE(800)
				hx::AddEq(frameNumber,(int)1);
			}
		}
	}
	HX_STACK_LINE(804)
	::org::flashdevelop::cpp::debugger::ThreadStatus threadStatus;		HX_STACK_VAR(threadStatus,"threadStatus");
	HX_STACK_LINE(806)
	{
		HX_STACK_LINE(806)
		int _g = threadInfo->status;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(806)
		switch( (int)(_g)){
			case (int)1: {
				HX_STACK_LINE(808)
				threadStatus = ::org::flashdevelop::cpp::debugger::ThreadStatus_obj::Running;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(810)
				threadStatus = ::org::flashdevelop::cpp::debugger::ThreadStatus_obj::StoppedImmediate;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(813)
				int _g1 = this->findBreakpoint(threadInfo->breakpoint);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(812)
				::org::flashdevelop::cpp::debugger::ThreadStatus _g2 = ::org::flashdevelop::cpp::debugger::ThreadStatus_obj::StoppedBreakpoint(_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(812)
				threadStatus = _g2;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(815)
				threadStatus = ::org::flashdevelop::cpp::debugger::ThreadStatus_obj::StoppedUncaughtException;
			}
			;break;
			default: {
				HX_STACK_LINE(817)
				::org::flashdevelop::cpp::debugger::ThreadStatus _g3 = ::org::flashdevelop::cpp::debugger::ThreadStatus_obj::StoppedCriticalError(threadInfo->criticalErrorDescription);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(817)
				threadStatus = _g3;
			}
		}
	}
	HX_STACK_LINE(821)
	return ::org::flashdevelop::cpp::debugger::ThreadWhereList_obj::Where(threadInfo->number,threadStatus,list,next);
}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerThread_obj,threadInfoToThreadWhereLocked,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::up( int count){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","up",0xbaa70eb3,"org.flashdevelop.cpp.debugger.DebuggerThread.up","org/flashdevelop/cpp/debugger/DebuggerThread.hx",825,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(count,"count")
	HX_STACK_LINE(826)
	if (((count < (int)1))){
		HX_STACK_LINE(827)
		return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorBadCount(count);
	}
	HX_STACK_LINE(830)
	this->mStateMutex->acquire();
	HX_STACK_LINE(832)
	::cpp::vm::ThreadInfo threadInfo = this->getCurrentThreadInfoLocked(null());		HX_STACK_VAR(threadInfo,"threadInfo");
	HX_STACK_LINE(834)
	if (((threadInfo == null()))){
		HX_STACK_LINE(835)
		this->mStateMutex->release();
		HX_STACK_LINE(836)
		return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorCurrentThreadNotStopped(this->mCurrentThreadNumber);
	}
	HX_STACK_LINE(839)
	hx::SubEq(this->mCurrentStackFrame,count);
	HX_STACK_LINE(840)
	if (((this->mCurrentStackFrame < (int)0))){
		HX_STACK_LINE(841)
		this->mCurrentStackFrame = (int)0;
	}
	HX_STACK_LINE(844)
	count = this->mCurrentStackFrame;
	HX_STACK_LINE(846)
	this->mStateMutex->release();
	HX_STACK_LINE(848)
	return ::org::flashdevelop::cpp::debugger::Message_obj::CurrentFrame(count);
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerThread_obj,up,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::down( int count){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","down",0xf25166ba,"org.flashdevelop.cpp.debugger.DebuggerThread.down","org/flashdevelop/cpp/debugger/DebuggerThread.hx",852,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(count,"count")
	HX_STACK_LINE(853)
	if (((count < (int)1))){
		HX_STACK_LINE(854)
		return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorBadCount(count);
	}
	HX_STACK_LINE(857)
	this->mStateMutex->acquire();
	HX_STACK_LINE(859)
	::cpp::vm::ThreadInfo threadInfo = this->getCurrentThreadInfoLocked(null());		HX_STACK_VAR(threadInfo,"threadInfo");
	HX_STACK_LINE(861)
	if (((threadInfo == null()))){
		HX_STACK_LINE(862)
		this->mStateMutex->release();
		HX_STACK_LINE(863)
		return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorCurrentThreadNotStopped(this->mCurrentThreadNumber);
	}
	HX_STACK_LINE(866)
	int max_stack = (threadInfo->stack->length - (int)1);		HX_STACK_VAR(max_stack,"max_stack");
	HX_STACK_LINE(868)
	hx::AddEq(this->mCurrentStackFrame,count);
	HX_STACK_LINE(869)
	if (((this->mCurrentStackFrame > max_stack))){
		HX_STACK_LINE(870)
		this->mCurrentStackFrame = max_stack;
	}
	HX_STACK_LINE(873)
	count = this->mCurrentStackFrame;
	HX_STACK_LINE(875)
	this->mStateMutex->release();
	HX_STACK_LINE(877)
	return ::org::flashdevelop::cpp::debugger::Message_obj::CurrentFrame(count);
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerThread_obj,down,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::setFrame( int number){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","setFrame",0xb12d5b83,"org.flashdevelop.cpp.debugger.DebuggerThread.setFrame","org/flashdevelop/cpp/debugger/DebuggerThread.hx",881,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(number,"number")
	HX_STACK_LINE(882)
	this->mStateMutex->acquire();
	HX_STACK_LINE(884)
	::cpp::vm::ThreadInfo threadInfo = this->getCurrentThreadInfoLocked(null());		HX_STACK_VAR(threadInfo,"threadInfo");
	HX_STACK_LINE(886)
	if (((threadInfo == null()))){
		HX_STACK_LINE(887)
		this->mStateMutex->release();
		HX_STACK_LINE(888)
		return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorCurrentThreadNotStopped(this->mCurrentThreadNumber);
	}
	HX_STACK_LINE(891)
	this->mCurrentStackFrame = number;
	HX_STACK_LINE(893)
	if (((this->mCurrentStackFrame < (int)0))){
		HX_STACK_LINE(894)
		this->mCurrentStackFrame = (int)0;
	}
	else{
		HX_STACK_LINE(897)
		int max_stack = (threadInfo->stack->length - (int)1);		HX_STACK_VAR(max_stack,"max_stack");
		HX_STACK_LINE(898)
		if (((this->mCurrentStackFrame > max_stack))){
			HX_STACK_LINE(899)
			this->mCurrentStackFrame = max_stack;
		}
	}
	HX_STACK_LINE(903)
	number = this->mCurrentStackFrame;
	HX_STACK_LINE(905)
	this->mStateMutex->release();
	HX_STACK_LINE(907)
	return ::org::flashdevelop::cpp::debugger::Message_obj::CurrentFrame(number);
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerThread_obj,setFrame,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::variables( bool unsafe){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","variables",0xccb8755f,"org.flashdevelop.cpp.debugger.DebuggerThread.variables","org/flashdevelop/cpp/debugger/DebuggerThread.hx",911,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(unsafe,"unsafe")
	HX_STACK_LINE(912)
	this->mStateMutex->acquire();
	HX_STACK_LINE(915)
	this->getCurrentThreadInfoLocked(null());
	HX_STACK_LINE(917)
	Array< ::String > variables = ::cpp::vm::Debugger_obj::getStackVariables(this->mCurrentThreadNumber,this->mCurrentStackFrame,unsafe);		HX_STACK_VAR(variables,"variables");
	HX_STACK_LINE(920)
	if (((bool((variables->length == (int)1)) && bool((variables->__get((int)0) == ::cpp::vm::Debugger_obj::THREAD_NOT_STOPPED))))){
		HX_STACK_LINE(922)
		this->mStateMutex->release();
		HX_STACK_LINE(923)
		return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorCurrentThreadNotStopped(this->mCurrentThreadNumber);
	}
	HX_STACK_LINE(926)
	this->mStateMutex->release();

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int run(::String a,::String b){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/flashdevelop/cpp/debugger/DebuggerThread.hx",929,0xe680eae8)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		{
			HX_STACK_LINE(929)
			return ::Reflect_obj::compare(a,b);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(928)
	variables->sort( Dynamic(new _Function_1_1()));
	HX_STACK_LINE(932)
	return ::org::flashdevelop::cpp::debugger::Message_obj::Variables(variables);
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerThread_obj,variables,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::printExpression( bool unsafe,::String expression){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","printExpression",0x057748cd,"org.flashdevelop.cpp.debugger.DebuggerThread.printExpression","org/flashdevelop/cpp/debugger/DebuggerThread.hx",937,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(unsafe,"unsafe")
	HX_STACK_ARG(expression,"expression")
	HX_STACK_LINE(938)
	this->mStateMutex->acquire();
	HX_STACK_LINE(941)
	this->getCurrentThreadInfoLocked(null());
	HX_STACK_LINE(943)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		struct _Function_2_1{
			inline static Dynamic Block( hx::ObjectPtr< ::org::flashdevelop::cpp::debugger::DebuggerThread_obj > __this,bool &unsafe){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/flashdevelop/cpp/debugger/DebuggerThread.hx",945,0xe680eae8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("threadNumber") , __this->mCurrentThreadNumber,false);
					__result->Add(HX_CSTRING("stackFrame") , __this->mCurrentStackFrame,false);
					__result->Add(HX_CSTRING("dbgVars") , __this->mDebuggerVariables,false);
					__result->Add(HX_CSTRING("unsafe") , unsafe,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(944)
		Dynamic value = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::getValue(expression,_Function_2_1::Block(this,unsafe));		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(950)
		this->mStateMutex->release();
		HX_STACK_LINE(952)
		::String _g = ::StringTools_obj::trim(expression);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(953)
		::String _g1 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueTypeName(value);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(954)
		::String _g2 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueString(value,null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(952)
		return ::org::flashdevelop::cpp::debugger::Message_obj::Value(_g,_g1,_g2);
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(957)
				this->mStateMutex->release();
				HX_STACK_LINE(958)
				if (((e == ::cpp::vm::Debugger_obj::NONEXISTENT_VALUE))){
					HX_STACK_LINE(959)
					return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorEvaluatingExpression(HX_CSTRING("No such value"));
				}
				else{
					HX_STACK_LINE(961)
					if (((e == ::cpp::vm::Debugger_obj::THREAD_NOT_STOPPED))){
						HX_STACK_LINE(962)
						return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorCurrentThreadNotStopped(this->mCurrentThreadNumber);
					}
					else{
						HX_STACK_LINE(965)
						return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorEvaluatingExpression(e);
					}
				}
			}
		}
	}
	HX_STACK_LINE(943)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerThread_obj,printExpression,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::getExpression( bool unsafe,::String expression){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","getExpression",0x5fe97476,"org.flashdevelop.cpp.debugger.DebuggerThread.getExpression","org/flashdevelop/cpp/debugger/DebuggerThread.hx",971,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(unsafe,"unsafe")
	HX_STACK_ARG(expression,"expression")
	HX_STACK_LINE(972)
	this->mStateMutex->acquire();
	HX_STACK_LINE(975)
	this->getCurrentThreadInfoLocked(null());
	HX_STACK_LINE(977)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		struct _Function_2_1{
			inline static Dynamic Block( hx::ObjectPtr< ::org::flashdevelop::cpp::debugger::DebuggerThread_obj > __this,bool &unsafe){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/flashdevelop/cpp/debugger/DebuggerThread.hx",979,0xe680eae8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("threadNumber") , __this->mCurrentThreadNumber,false);
					__result->Add(HX_CSTRING("stackFrame") , __this->mCurrentStackFrame,false);
					__result->Add(HX_CSTRING("dbgVars") , __this->mDebuggerVariables,false);
					__result->Add(HX_CSTRING("unsafe") , unsafe,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(978)
		Dynamic value = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::getValue(expression,_Function_2_1::Block(this,unsafe));		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(984)
		this->mStateMutex->release();
		HX_STACK_LINE(987)
		::String _g = ::StringTools_obj::trim(expression);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(988)
		::String _g1 = ::StringTools_obj::trim(expression);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(988)
		::org::flashdevelop::cpp::debugger::VariableValue _g2 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getVariableValue(_g1,value);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(986)
		return ::org::flashdevelop::cpp::debugger::Message_obj::Variable(_g,_g2);
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(992)
				this->mStateMutex->release();
				HX_STACK_LINE(993)
				if (((e == ::cpp::vm::Debugger_obj::NONEXISTENT_VALUE))){
					HX_STACK_LINE(994)
					return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorEvaluatingExpression(HX_CSTRING("No such value"));
				}
				else{
					HX_STACK_LINE(996)
					if (((e == ::cpp::vm::Debugger_obj::THREAD_NOT_STOPPED))){
						HX_STACK_LINE(997)
						return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorCurrentThreadNotStopped(this->mCurrentThreadNumber);
					}
					else{
						HX_STACK_LINE(1000)
						return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorEvaluatingExpression(e);
					}
				}
			}
		}
	}
	HX_STACK_LINE(977)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerThread_obj,getExpression,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::setExpression( bool unsafe,::String lhs,::String rhs){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","setExpression",0xa4ef5682,"org.flashdevelop.cpp.debugger.DebuggerThread.setExpression","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1007,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(unsafe,"unsafe")
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(1008)
	this->mStateMutex->acquire();
	HX_STACK_LINE(1011)
	this->getCurrentThreadInfoLocked(null());
	HX_STACK_LINE(1013)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		struct _Function_2_1{
			inline static Dynamic Block( hx::ObjectPtr< ::org::flashdevelop::cpp::debugger::DebuggerThread_obj > __this,bool &unsafe){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1015,0xe680eae8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("threadNumber") , __this->mCurrentThreadNumber,false);
					__result->Add(HX_CSTRING("stackFrame") , __this->mCurrentStackFrame,false);
					__result->Add(HX_CSTRING("dbgVars") , __this->mDebuggerVariables,false);
					__result->Add(HX_CSTRING("unsafe") , unsafe,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1014)
		Dynamic value = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::setValue(lhs,rhs,_Function_2_1::Block(this,unsafe));		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(1020)
		this->mStateMutex->release();
		HX_STACK_LINE(1022)
		::String _g = ::StringTools_obj::trim(lhs);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1023)
		::String _g1 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueTypeName(value);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1024)
		::String _g2 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueString(value,null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1022)
		return ::org::flashdevelop::cpp::debugger::Message_obj::Value(_g,_g1,_g2);
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(1027)
				this->mStateMutex->release();
				HX_STACK_LINE(1028)
				if (((e == ::cpp::vm::Debugger_obj::NONEXISTENT_VALUE))){
					HX_STACK_LINE(1029)
					return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorEvaluatingExpression(HX_CSTRING("No such value"));
				}
				else{
					HX_STACK_LINE(1031)
					if (((e == ::cpp::vm::Debugger_obj::THREAD_NOT_STOPPED))){
						HX_STACK_LINE(1032)
						return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorCurrentThreadNotStopped(this->mCurrentThreadNumber);
					}
					else{
						HX_STACK_LINE(1035)
						return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorEvaluatingExpression(e);
					}
				}
			}
		}
	}
	HX_STACK_LINE(1013)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DebuggerThread_obj,setExpression,return )

Dynamic DebuggerThread_obj::getBreakpointIds( int first,int last){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","getBreakpointIds",0x18bb5169,"org.flashdevelop.cpp.debugger.DebuggerThread.getBreakpointIds","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1042,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(first,"first")
	HX_STACK_ARG(last,"last")
	HX_STACK_LINE(1043)
	Array< int > sorted = Array_obj< int >::__new();		HX_STACK_VAR(sorted,"sorted");
	HX_STACK_LINE(1045)
	if (((first == (int)-1))){
		HX_STACK_LINE(1046)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->mBreakpoints->keys());  __it->hasNext(); ){
			int k = __it->next();
			sorted->push(k);
		}

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
		int run(int a,int b){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1049,0xe680eae8)
			HX_STACK_ARG(a,"a")
			HX_STACK_ARG(b,"b")
			{
				HX_STACK_LINE(1049)
				return (b - a);
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(1049)
		sorted->sort( Dynamic(new _Function_2_1()));
	}
	else{
		HX_STACK_LINE(1052)
		int _g1 = first;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1052)
		int _g = (last + (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1052)
		while((true)){
			HX_STACK_LINE(1052)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(1052)
				break;
			}
			HX_STACK_LINE(1052)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1053)
			sorted->unshift(i);
		}
	}
	HX_STACK_LINE(1057)
	return sorted->iterator();
}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerThread_obj,getBreakpointIds,return )

::org::flashdevelop::cpp::debugger::Message DebuggerThread_obj::stepExecution( int count,int type){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","stepExecution",0x4044e154,"org.flashdevelop.cpp.debugger.DebuggerThread.stepExecution","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1061,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(count,"count")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(1062)
	if (((count < (int)1))){
		HX_STACK_LINE(1063)
		return ::org::flashdevelop::cpp::debugger::Message_obj::ErrorBadCount(count);
	}
	HX_STACK_LINE(1066)
	::cpp::vm::Debugger_obj::stepThread(this->mCurrentThreadNumber,type,count);
	HX_STACK_LINE(1068)
	return ::org::flashdevelop::cpp::debugger::Message_obj::Continued(count);
}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerThread_obj,stepExecution,return )

int DebuggerThread_obj::findBreakpoint( int bpNumber){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","findBreakpoint",0x904f7d22,"org.flashdevelop.cpp.debugger.DebuggerThread.findBreakpoint","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1074,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bpNumber,"bpNumber")
	HX_STACK_LINE(1075)
	for(::cpp::FastIterator_obj< ::org::flashdevelop::cpp::debugger::_DebuggerThread::Breakpoint > *__it = ::cpp::CreateFastIterator< ::org::flashdevelop::cpp::debugger::_DebuggerThread::Breakpoint >(this->mBreakpoints->iterator());  __it->hasNext(); ){
		::org::flashdevelop::cpp::debugger::_DebuggerThread::Breakpoint breakpoint = __it->next();
		{
			HX_STACK_LINE(1076)
			for(::cpp::FastIterator_obj< ::org::flashdevelop::cpp::debugger::_DebuggerThread::BP > *__it = ::cpp::CreateFastIterator< ::org::flashdevelop::cpp::debugger::_DebuggerThread::BP >(breakpoint->bps());  __it->hasNext(); ){
				::org::flashdevelop::cpp::debugger::_DebuggerThread::BP bp = __it->next();
				switch( (int)(bp->__Index())){
					case (int)0: {
						HX_STACK_LINE(1077)
						int lineNumber = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(bp))->__Param(2);		HX_STACK_VAR(lineNumber,"lineNumber");
						HX_STACK_LINE(1077)
						::String fileName = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(bp))->__Param(1);		HX_STACK_VAR(fileName,"fileName");
						HX_STACK_LINE(1077)
						int bp1 = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(bp))->__Param(0);		HX_STACK_VAR(bp1,"bp1");
						HX_STACK_LINE(1079)
						if (((bp1 == bpNumber))){
							HX_STACK_LINE(1080)
							return breakpoint->number;
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(1077)
						::String functionName = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(bp))->__Param(2);		HX_STACK_VAR(functionName,"functionName");
						HX_STACK_LINE(1077)
						::String className = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(bp))->__Param(1);		HX_STACK_VAR(className,"className");
						HX_STACK_LINE(1077)
						int bp1 = (::org::flashdevelop::cpp::debugger::_DebuggerThread::BP(bp))->__Param(0);		HX_STACK_VAR(bp1,"bp1");
						HX_STACK_LINE(1083)
						if (((bp1 == bpNumber))){
							HX_STACK_LINE(1084)
							return breakpoint->number;
						}
					}
					;break;
				}
;
			}
		}
;
	}
	HX_STACK_LINE(1091)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerThread_obj,findBreakpoint,return )

::cpp::vm::ThreadInfo DebuggerThread_obj::getCurrentThreadInfoLocked( hx::Null< bool >  __o_unsafe){
bool unsafe = __o_unsafe.Default(false);
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.DebuggerThread","getCurrentThreadInfoLocked",0x64a03c3d,"org.flashdevelop.cpp.debugger.DebuggerThread.getCurrentThreadInfoLocked","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1096,0xe680eae8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(unsafe,"unsafe")
{
		HX_STACK_LINE(1097)
		if ((unsafe)){
			HX_STACK_LINE(1098)
			this->mCurrentThreadInfo = null();
			HX_STACK_LINE(1099)
			return ::cpp::vm::Debugger_obj::getThreadInfo(this->mCurrentThreadNumber,unsafe);
		}
		HX_STACK_LINE(1102)
		if (((this->mCurrentThreadInfo != null()))){
			HX_STACK_LINE(1103)
			return this->mCurrentThreadInfo;
		}
		HX_STACK_LINE(1106)
		::cpp::vm::ThreadInfo _g = ::cpp::vm::Debugger_obj::getThreadInfo(this->mCurrentThreadNumber,unsafe);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1106)
		this->mCurrentThreadInfo = _g;
		HX_STACK_LINE(1109)
		if (((this->mCurrentThreadInfo == null()))){
			HX_STACK_LINE(1110)
			return null();
		}
		HX_STACK_LINE(1113)
		this->mCurrentStackFrame = (this->mCurrentThreadInfo->stack->length - (int)1);
		HX_STACK_LINE(1115)
		return this->mCurrentThreadInfo;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerThread_obj,getCurrentThreadInfoLocked,return )

::cpp::vm::Mutex DebuggerThread_obj::gStartMutex;

bool DebuggerThread_obj::gStarted;

bool DebuggerThread_obj::gStartStopped;

::cpp::vm::Deque DebuggerThread_obj::gStartQueue;


DebuggerThread_obj::DebuggerThread_obj()
{
}

void DebuggerThread_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DebuggerThread);
	HX_MARK_MEMBER_NAME(mStateMutex,"mStateMutex");
	HX_MARK_MEMBER_NAME(mController,"mController");
	HX_MARK_MEMBER_NAME(mCurrentThreadNumber,"mCurrentThreadNumber");
	HX_MARK_MEMBER_NAME(mCurrentStackFrame,"mCurrentStackFrame");
	HX_MARK_MEMBER_NAME(mCurrentThreadInfo,"mCurrentThreadInfo");
	HX_MARK_MEMBER_NAME(mBreakpoints,"mBreakpoints");
	HX_MARK_MEMBER_NAME(mBreakpointsByDescription,"mBreakpointsByDescription");
	HX_MARK_MEMBER_NAME(mNextBreakpointNumber,"mNextBreakpointNumber");
	HX_MARK_MEMBER_NAME(mDebuggerVariables,"mDebuggerVariables");
	HX_MARK_END_CLASS();
}

void DebuggerThread_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mStateMutex,"mStateMutex");
	HX_VISIT_MEMBER_NAME(mController,"mController");
	HX_VISIT_MEMBER_NAME(mCurrentThreadNumber,"mCurrentThreadNumber");
	HX_VISIT_MEMBER_NAME(mCurrentStackFrame,"mCurrentStackFrame");
	HX_VISIT_MEMBER_NAME(mCurrentThreadInfo,"mCurrentThreadInfo");
	HX_VISIT_MEMBER_NAME(mBreakpoints,"mBreakpoints");
	HX_VISIT_MEMBER_NAME(mBreakpointsByDescription,"mBreakpointsByDescription");
	HX_VISIT_MEMBER_NAME(mNextBreakpointNumber,"mNextBreakpointNumber");
	HX_VISIT_MEMBER_NAME(mDebuggerVariables,"mDebuggerVariables");
}

Dynamic DebuggerThread_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { return up_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mem") ) { return mem_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"emit") ) { return emit_dyn(); }
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		if (HX_FIELD_EQ(inName,"down") ) { return down_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"files") ) { return files_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"classes") ) { return classes_dyn(); }
		if (HX_FIELD_EQ(inName,"compact") ) { return compact_dyn(); }
		if (HX_FIELD_EQ(inName,"collect") ) { return collect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gStarted") ) { return gStarted; }
		if (HX_FIELD_EQ(inName,"emitNoId") ) { return emitNoId_dyn(); }
		if (HX_FIELD_EQ(inName,"breakNow") ) { return breakNow_dyn(); }
		if (HX_FIELD_EQ(inName,"setFrame") ) { return setFrame_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { return variables_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gStartMutex") ) { return gStartMutex; }
		if (HX_FIELD_EQ(inName,"gStartQueue") ) { return gStartQueue; }
		if (HX_FIELD_EQ(inName,"mStateMutex") ) { return mStateMutex; }
		if (HX_FIELD_EQ(inName,"mController") ) { return mController; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mBreakpoints") ) { return mBreakpoints; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gStartStopped") ) { return gStartStopped; }
		if (HX_FIELD_EQ(inName,"filesFullPath") ) { return filesFullPath_dyn(); }
		if (HX_FIELD_EQ(inName,"breakFunction") ) { return breakFunction_dyn(); }
		if (HX_FIELD_EQ(inName,"getExpression") ) { return getExpression_dyn(); }
		if (HX_FIELD_EQ(inName,"setExpression") ) { return setExpression_dyn(); }
		if (HX_FIELD_EQ(inName,"stepExecution") ) { return stepExecution_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"findBreakpoint") ) { return findBreakpoint_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"listBreakpoints") ) { return listBreakpoints_dyn(); }
		if (HX_FIELD_EQ(inName,"continueCurrent") ) { return continueCurrent_dyn(); }
		if (HX_FIELD_EQ(inName,"whereAllThreads") ) { return whereAllThreads_dyn(); }
		if (HX_FIELD_EQ(inName,"printExpression") ) { return printExpression_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setCurrentThread") ) { return setCurrentThread_dyn(); }
		if (HX_FIELD_EQ(inName,"getBreakpointIds") ) { return getBreakpointIds_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"handleThreadEvent") ) { return handleThreadEvent_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"debuggerThreadMain") ) { return debuggerThreadMain_dyn(); }
		if (HX_FIELD_EQ(inName,"describeBreakpoint") ) { return describeBreakpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"whereCurrentThread") ) { return whereCurrentThread_dyn(); }
		if (HX_FIELD_EQ(inName,"mCurrentStackFrame") ) { return mCurrentStackFrame; }
		if (HX_FIELD_EQ(inName,"mCurrentThreadInfo") ) { return mCurrentThreadInfo; }
		if (HX_FIELD_EQ(inName,"mDebuggerVariables") ) { return mDebuggerVariables; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"enableAllBreakpoints") ) { return enableAllBreakpoints_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteAllBreakpoints") ) { return deleteAllBreakpoints_dyn(); }
		if (HX_FIELD_EQ(inName,"mCurrentThreadNumber") ) { return mCurrentThreadNumber; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"addFileLineBreakpoint") ) { return addFileLineBreakpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"addFunctionBreakpoint") ) { return addFunctionBreakpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"disableAllBreakpoints") ) { return disableAllBreakpoints_dyn(); }
		if (HX_FIELD_EQ(inName,"enableBreakpointRange") ) { return enableBreakpointRange_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteBreakpointRange") ) { return deleteBreakpointRange_dyn(); }
		if (HX_FIELD_EQ(inName,"mNextBreakpointNumber") ) { return mNextBreakpointNumber; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"disableBreakpointRange") ) { return disableBreakpointRange_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"mBreakpointsByDescription") ) { return mBreakpointsByDescription; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"addClassFunctionBreakpoint") ) { return addClassFunctionBreakpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentThreadInfoLocked") ) { return getCurrentThreadInfoLocked_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"threadInfoToThreadWhereLocked") ) { return threadInfoToThreadWhereLocked_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DebuggerThread_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"gStarted") ) { gStarted=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gStartMutex") ) { gStartMutex=inValue.Cast< ::cpp::vm::Mutex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gStartQueue") ) { gStartQueue=inValue.Cast< ::cpp::vm::Deque >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mStateMutex") ) { mStateMutex=inValue.Cast< ::cpp::vm::Mutex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mController") ) { mController=inValue.Cast< ::org::flashdevelop::cpp::debugger::IController >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mBreakpoints") ) { mBreakpoints=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gStartStopped") ) { gStartStopped=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"mCurrentStackFrame") ) { mCurrentStackFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mCurrentThreadInfo") ) { mCurrentThreadInfo=inValue.Cast< ::cpp::vm::ThreadInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mDebuggerVariables") ) { mDebuggerVariables=inValue.Cast< ::org::flashdevelop::cpp::debugger::_DebuggerThread::DebuggerVariables >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"mCurrentThreadNumber") ) { mCurrentThreadNumber=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"mNextBreakpointNumber") ) { mNextBreakpointNumber=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"mBreakpointsByDescription") ) { mBreakpointsByDescription=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DebuggerThread_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mStateMutex"));
	outFields->push(HX_CSTRING("mController"));
	outFields->push(HX_CSTRING("mCurrentThreadNumber"));
	outFields->push(HX_CSTRING("mCurrentStackFrame"));
	outFields->push(HX_CSTRING("mCurrentThreadInfo"));
	outFields->push(HX_CSTRING("mBreakpoints"));
	outFields->push(HX_CSTRING("mBreakpointsByDescription"));
	outFields->push(HX_CSTRING("mNextBreakpointNumber"));
	outFields->push(HX_CSTRING("mDebuggerVariables"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("gStartMutex"),
	HX_CSTRING("gStarted"),
	HX_CSTRING("gStartStopped"),
	HX_CSTRING("gStartQueue"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::vm::Mutex*/ ,(int)offsetof(DebuggerThread_obj,mStateMutex),HX_CSTRING("mStateMutex")},
	{hx::fsObject /*::org::flashdevelop::cpp::debugger::IController*/ ,(int)offsetof(DebuggerThread_obj,mController),HX_CSTRING("mController")},
	{hx::fsInt,(int)offsetof(DebuggerThread_obj,mCurrentThreadNumber),HX_CSTRING("mCurrentThreadNumber")},
	{hx::fsInt,(int)offsetof(DebuggerThread_obj,mCurrentStackFrame),HX_CSTRING("mCurrentStackFrame")},
	{hx::fsObject /*::cpp::vm::ThreadInfo*/ ,(int)offsetof(DebuggerThread_obj,mCurrentThreadInfo),HX_CSTRING("mCurrentThreadInfo")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(DebuggerThread_obj,mBreakpoints),HX_CSTRING("mBreakpoints")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DebuggerThread_obj,mBreakpointsByDescription),HX_CSTRING("mBreakpointsByDescription")},
	{hx::fsInt,(int)offsetof(DebuggerThread_obj,mNextBreakpointNumber),HX_CSTRING("mNextBreakpointNumber")},
	{hx::fsObject /*::org::flashdevelop::cpp::debugger::_DebuggerThread::DebuggerVariables*/ ,(int)offsetof(DebuggerThread_obj,mDebuggerVariables),HX_CSTRING("mDebuggerVariables")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("debuggerThreadMain"),
	HX_CSTRING("handleThreadEvent"),
	HX_CSTRING("emit"),
	HX_CSTRING("emitNoId"),
	HX_CSTRING("files"),
	HX_CSTRING("filesFullPath"),
	HX_CSTRING("classes"),
	HX_CSTRING("mem"),
	HX_CSTRING("compact"),
	HX_CSTRING("collect"),
	HX_CSTRING("setCurrentThread"),
	HX_CSTRING("addFileLineBreakpoint"),
	HX_CSTRING("addClassFunctionBreakpoint"),
	HX_CSTRING("breakFunction"),
	HX_CSTRING("addFunctionBreakpoint"),
	HX_CSTRING("listBreakpoints"),
	HX_CSTRING("describeBreakpoint"),
	HX_CSTRING("disableAllBreakpoints"),
	HX_CSTRING("disableBreakpointRange"),
	HX_CSTRING("enableAllBreakpoints"),
	HX_CSTRING("enableBreakpointRange"),
	HX_CSTRING("deleteAllBreakpoints"),
	HX_CSTRING("deleteBreakpointRange"),
	HX_CSTRING("breakNow"),
	HX_CSTRING("continueCurrent"),
	HX_CSTRING("step"),
	HX_CSTRING("next"),
	HX_CSTRING("finish"),
	HX_CSTRING("whereCurrentThread"),
	HX_CSTRING("whereAllThreads"),
	HX_CSTRING("threadInfoToThreadWhereLocked"),
	HX_CSTRING("up"),
	HX_CSTRING("down"),
	HX_CSTRING("setFrame"),
	HX_CSTRING("variables"),
	HX_CSTRING("printExpression"),
	HX_CSTRING("getExpression"),
	HX_CSTRING("setExpression"),
	HX_CSTRING("getBreakpointIds"),
	HX_CSTRING("stepExecution"),
	HX_CSTRING("findBreakpoint"),
	HX_CSTRING("getCurrentThreadInfoLocked"),
	HX_CSTRING("mStateMutex"),
	HX_CSTRING("mController"),
	HX_CSTRING("mCurrentThreadNumber"),
	HX_CSTRING("mCurrentStackFrame"),
	HX_CSTRING("mCurrentThreadInfo"),
	HX_CSTRING("mBreakpoints"),
	HX_CSTRING("mBreakpointsByDescription"),
	HX_CSTRING("mNextBreakpointNumber"),
	HX_CSTRING("mDebuggerVariables"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DebuggerThread_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DebuggerThread_obj::gStartMutex,"gStartMutex");
	HX_MARK_MEMBER_NAME(DebuggerThread_obj::gStarted,"gStarted");
	HX_MARK_MEMBER_NAME(DebuggerThread_obj::gStartStopped,"gStartStopped");
	HX_MARK_MEMBER_NAME(DebuggerThread_obj::gStartQueue,"gStartQueue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DebuggerThread_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DebuggerThread_obj::gStartMutex,"gStartMutex");
	HX_VISIT_MEMBER_NAME(DebuggerThread_obj::gStarted,"gStarted");
	HX_VISIT_MEMBER_NAME(DebuggerThread_obj::gStartStopped,"gStartStopped");
	HX_VISIT_MEMBER_NAME(DebuggerThread_obj::gStartQueue,"gStartQueue");
};

#endif

Class DebuggerThread_obj::__mClass;

void DebuggerThread_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger.DebuggerThread"), hx::TCanCast< DebuggerThread_obj> ,sStaticFields,sMemberFields,
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

void DebuggerThread_obj::__boot()
{
	gStartMutex= ::cpp::vm::Mutex_obj::__new();
	gStarted= false;
	gStartQueue= ::cpp::vm::Deque_obj::__new();
}

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
