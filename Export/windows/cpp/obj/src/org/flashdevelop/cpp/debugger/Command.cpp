#include <hxcpp.h>

#ifndef INCLUDED_org_flashdevelop_cpp_debugger_Command
#include <org/flashdevelop/cpp/debugger/Command.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{

::org::flashdevelop::cpp::debugger::Command  Command_obj::AddClassFunctionBreakpoint(::String className,::String functionName)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("AddClassFunctionBreakpoint"),10,hx::DynamicArray(0,2).Add(className).Add(functionName)); }

::org::flashdevelop::cpp::debugger::Command  Command_obj::AddFileLineBreakpoint(::String fileName,int lineNumber)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("AddFileLineBreakpoint"),9,hx::DynamicArray(0,2).Add(fileName).Add(lineNumber)); }

::org::flashdevelop::cpp::debugger::Command Command_obj::BreakNow;

::org::flashdevelop::cpp::debugger::Command Command_obj::Classes;

::org::flashdevelop::cpp::debugger::Command Command_obj::Collect;

::org::flashdevelop::cpp::debugger::Command  Command_obj::CommandId(int id,::org::flashdevelop::cpp::debugger::Command command)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("CommandId"),32,hx::DynamicArray(0,2).Add(id).Add(command)); }

::org::flashdevelop::cpp::debugger::Command Command_obj::Compact;

::org::flashdevelop::cpp::debugger::Command  Command_obj::Continue(int count)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("Continue"),20,hx::DynamicArray(0,1).Add(count)); }

::org::flashdevelop::cpp::debugger::Command Command_obj::DeleteAllBreakpoints;

::org::flashdevelop::cpp::debugger::Command  Command_obj::DeleteBreakpointRange(int first,int last)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("DeleteBreakpointRange"),18,hx::DynamicArray(0,2).Add(first).Add(last)); }

::org::flashdevelop::cpp::debugger::Command  Command_obj::DescribeBreakpoint(int number)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("DescribeBreakpoint"),12,hx::DynamicArray(0,1).Add(number)); }

::org::flashdevelop::cpp::debugger::Command Command_obj::Detach;

::org::flashdevelop::cpp::debugger::Command Command_obj::DisableAllBreakpoints;

::org::flashdevelop::cpp::debugger::Command  Command_obj::DisableBreakpointRange(int first,int last)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("DisableBreakpointRange"),14,hx::DynamicArray(0,2).Add(first).Add(last)); }

::org::flashdevelop::cpp::debugger::Command  Command_obj::Down(int count)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("Down"),27,hx::DynamicArray(0,1).Add(count)); }

::org::flashdevelop::cpp::debugger::Command Command_obj::EnableAllBreakpoints;

::org::flashdevelop::cpp::debugger::Command  Command_obj::EnableBreakpointRange(int first,int last)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("EnableBreakpointRange"),16,hx::DynamicArray(0,2).Add(first).Add(last)); }

::org::flashdevelop::cpp::debugger::Command Command_obj::Exit;

::org::flashdevelop::cpp::debugger::Command Command_obj::Files;

::org::flashdevelop::cpp::debugger::Command Command_obj::FilesFullPath;

::org::flashdevelop::cpp::debugger::Command  Command_obj::Finish(int count)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("Finish"),23,hx::DynamicArray(0,1).Add(count)); }

::org::flashdevelop::cpp::debugger::Command  Command_obj::GetExpression(bool unsafe,::String expression)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("GetExpression"),33,hx::DynamicArray(0,2).Add(unsafe).Add(expression)); }

::org::flashdevelop::cpp::debugger::Command  Command_obj::ListBreakpoints(bool enabled,bool disabled)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("ListBreakpoints"),11,hx::DynamicArray(0,2).Add(enabled).Add(disabled)); }

::org::flashdevelop::cpp::debugger::Command Command_obj::Mem;

::org::flashdevelop::cpp::debugger::Command  Command_obj::Next(int count)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("Next"),22,hx::DynamicArray(0,1).Add(count)); }

::org::flashdevelop::cpp::debugger::Command  Command_obj::PrintExpression(bool unsafe,::String expression)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("PrintExpression"),30,hx::DynamicArray(0,2).Add(unsafe).Add(expression)); }

::org::flashdevelop::cpp::debugger::Command  Command_obj::SetCurrentThread(int number)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("SetCurrentThread"),8,hx::DynamicArray(0,1).Add(number)); }

::org::flashdevelop::cpp::debugger::Command  Command_obj::SetExpression(bool unsafe,::String lhs,::String rhs)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("SetExpression"),31,hx::DynamicArray(0,3).Add(unsafe).Add(lhs).Add(rhs)); }

::org::flashdevelop::cpp::debugger::Command  Command_obj::SetFrame(int number)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("SetFrame"),28,hx::DynamicArray(0,1).Add(number)); }

::org::flashdevelop::cpp::debugger::Command  Command_obj::Step(int count)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("Step"),21,hx::DynamicArray(0,1).Add(count)); }

::org::flashdevelop::cpp::debugger::Command  Command_obj::Up(int count)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("Up"),26,hx::DynamicArray(0,1).Add(count)); }

::org::flashdevelop::cpp::debugger::Command  Command_obj::Variables(bool unsafe)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("Variables"),29,hx::DynamicArray(0,1).Add(unsafe)); }

::org::flashdevelop::cpp::debugger::Command Command_obj::WhereAllThreads;

::org::flashdevelop::cpp::debugger::Command  Command_obj::WhereCurrentThread(bool unsafe)
	{ return hx::CreateEnum< Command_obj >(HX_CSTRING("WhereCurrentThread"),24,hx::DynamicArray(0,1).Add(unsafe)); }

HX_DEFINE_CREATE_ENUM(Command_obj)

int Command_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("AddClassFunctionBreakpoint")) return 10;
	if (inName==HX_CSTRING("AddFileLineBreakpoint")) return 9;
	if (inName==HX_CSTRING("BreakNow")) return 19;
	if (inName==HX_CSTRING("Classes")) return 4;
	if (inName==HX_CSTRING("Collect")) return 7;
	if (inName==HX_CSTRING("CommandId")) return 32;
	if (inName==HX_CSTRING("Compact")) return 6;
	if (inName==HX_CSTRING("Continue")) return 20;
	if (inName==HX_CSTRING("DeleteAllBreakpoints")) return 17;
	if (inName==HX_CSTRING("DeleteBreakpointRange")) return 18;
	if (inName==HX_CSTRING("DescribeBreakpoint")) return 12;
	if (inName==HX_CSTRING("Detach")) return 1;
	if (inName==HX_CSTRING("DisableAllBreakpoints")) return 13;
	if (inName==HX_CSTRING("DisableBreakpointRange")) return 14;
	if (inName==HX_CSTRING("Down")) return 27;
	if (inName==HX_CSTRING("EnableAllBreakpoints")) return 15;
	if (inName==HX_CSTRING("EnableBreakpointRange")) return 16;
	if (inName==HX_CSTRING("Exit")) return 0;
	if (inName==HX_CSTRING("Files")) return 2;
	if (inName==HX_CSTRING("FilesFullPath")) return 3;
	if (inName==HX_CSTRING("Finish")) return 23;
	if (inName==HX_CSTRING("GetExpression")) return 33;
	if (inName==HX_CSTRING("ListBreakpoints")) return 11;
	if (inName==HX_CSTRING("Mem")) return 5;
	if (inName==HX_CSTRING("Next")) return 22;
	if (inName==HX_CSTRING("PrintExpression")) return 30;
	if (inName==HX_CSTRING("SetCurrentThread")) return 8;
	if (inName==HX_CSTRING("SetExpression")) return 31;
	if (inName==HX_CSTRING("SetFrame")) return 28;
	if (inName==HX_CSTRING("Step")) return 21;
	if (inName==HX_CSTRING("Up")) return 26;
	if (inName==HX_CSTRING("Variables")) return 29;
	if (inName==HX_CSTRING("WhereAllThreads")) return 25;
	if (inName==HX_CSTRING("WhereCurrentThread")) return 24;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Command_obj,AddClassFunctionBreakpoint,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Command_obj,AddFileLineBreakpoint,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Command_obj,CommandId,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Command_obj,Continue,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Command_obj,DeleteBreakpointRange,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Command_obj,DescribeBreakpoint,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Command_obj,DisableBreakpointRange,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Command_obj,Down,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Command_obj,EnableBreakpointRange,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Command_obj,Finish,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Command_obj,GetExpression,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Command_obj,ListBreakpoints,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Command_obj,Next,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Command_obj,PrintExpression,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Command_obj,SetCurrentThread,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Command_obj,SetExpression,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Command_obj,SetFrame,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Command_obj,Step,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Command_obj,Up,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Command_obj,Variables,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Command_obj,WhereCurrentThread,return)

int Command_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("AddClassFunctionBreakpoint")) return 2;
	if (inName==HX_CSTRING("AddFileLineBreakpoint")) return 2;
	if (inName==HX_CSTRING("BreakNow")) return 0;
	if (inName==HX_CSTRING("Classes")) return 0;
	if (inName==HX_CSTRING("Collect")) return 0;
	if (inName==HX_CSTRING("CommandId")) return 2;
	if (inName==HX_CSTRING("Compact")) return 0;
	if (inName==HX_CSTRING("Continue")) return 1;
	if (inName==HX_CSTRING("DeleteAllBreakpoints")) return 0;
	if (inName==HX_CSTRING("DeleteBreakpointRange")) return 2;
	if (inName==HX_CSTRING("DescribeBreakpoint")) return 1;
	if (inName==HX_CSTRING("Detach")) return 0;
	if (inName==HX_CSTRING("DisableAllBreakpoints")) return 0;
	if (inName==HX_CSTRING("DisableBreakpointRange")) return 2;
	if (inName==HX_CSTRING("Down")) return 1;
	if (inName==HX_CSTRING("EnableAllBreakpoints")) return 0;
	if (inName==HX_CSTRING("EnableBreakpointRange")) return 2;
	if (inName==HX_CSTRING("Exit")) return 0;
	if (inName==HX_CSTRING("Files")) return 0;
	if (inName==HX_CSTRING("FilesFullPath")) return 0;
	if (inName==HX_CSTRING("Finish")) return 1;
	if (inName==HX_CSTRING("GetExpression")) return 2;
	if (inName==HX_CSTRING("ListBreakpoints")) return 2;
	if (inName==HX_CSTRING("Mem")) return 0;
	if (inName==HX_CSTRING("Next")) return 1;
	if (inName==HX_CSTRING("PrintExpression")) return 2;
	if (inName==HX_CSTRING("SetCurrentThread")) return 1;
	if (inName==HX_CSTRING("SetExpression")) return 3;
	if (inName==HX_CSTRING("SetFrame")) return 1;
	if (inName==HX_CSTRING("Step")) return 1;
	if (inName==HX_CSTRING("Up")) return 1;
	if (inName==HX_CSTRING("Variables")) return 1;
	if (inName==HX_CSTRING("WhereAllThreads")) return 0;
	if (inName==HX_CSTRING("WhereCurrentThread")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Command_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("AddClassFunctionBreakpoint")) return AddClassFunctionBreakpoint_dyn();
	if (inName==HX_CSTRING("AddFileLineBreakpoint")) return AddFileLineBreakpoint_dyn();
	if (inName==HX_CSTRING("BreakNow")) return BreakNow;
	if (inName==HX_CSTRING("Classes")) return Classes;
	if (inName==HX_CSTRING("Collect")) return Collect;
	if (inName==HX_CSTRING("CommandId")) return CommandId_dyn();
	if (inName==HX_CSTRING("Compact")) return Compact;
	if (inName==HX_CSTRING("Continue")) return Continue_dyn();
	if (inName==HX_CSTRING("DeleteAllBreakpoints")) return DeleteAllBreakpoints;
	if (inName==HX_CSTRING("DeleteBreakpointRange")) return DeleteBreakpointRange_dyn();
	if (inName==HX_CSTRING("DescribeBreakpoint")) return DescribeBreakpoint_dyn();
	if (inName==HX_CSTRING("Detach")) return Detach;
	if (inName==HX_CSTRING("DisableAllBreakpoints")) return DisableAllBreakpoints;
	if (inName==HX_CSTRING("DisableBreakpointRange")) return DisableBreakpointRange_dyn();
	if (inName==HX_CSTRING("Down")) return Down_dyn();
	if (inName==HX_CSTRING("EnableAllBreakpoints")) return EnableAllBreakpoints;
	if (inName==HX_CSTRING("EnableBreakpointRange")) return EnableBreakpointRange_dyn();
	if (inName==HX_CSTRING("Exit")) return Exit;
	if (inName==HX_CSTRING("Files")) return Files;
	if (inName==HX_CSTRING("FilesFullPath")) return FilesFullPath;
	if (inName==HX_CSTRING("Finish")) return Finish_dyn();
	if (inName==HX_CSTRING("GetExpression")) return GetExpression_dyn();
	if (inName==HX_CSTRING("ListBreakpoints")) return ListBreakpoints_dyn();
	if (inName==HX_CSTRING("Mem")) return Mem;
	if (inName==HX_CSTRING("Next")) return Next_dyn();
	if (inName==HX_CSTRING("PrintExpression")) return PrintExpression_dyn();
	if (inName==HX_CSTRING("SetCurrentThread")) return SetCurrentThread_dyn();
	if (inName==HX_CSTRING("SetExpression")) return SetExpression_dyn();
	if (inName==HX_CSTRING("SetFrame")) return SetFrame_dyn();
	if (inName==HX_CSTRING("Step")) return Step_dyn();
	if (inName==HX_CSTRING("Up")) return Up_dyn();
	if (inName==HX_CSTRING("Variables")) return Variables_dyn();
	if (inName==HX_CSTRING("WhereAllThreads")) return WhereAllThreads;
	if (inName==HX_CSTRING("WhereCurrentThread")) return WhereCurrentThread_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Exit"),
	HX_CSTRING("Detach"),
	HX_CSTRING("Files"),
	HX_CSTRING("FilesFullPath"),
	HX_CSTRING("Classes"),
	HX_CSTRING("Mem"),
	HX_CSTRING("Compact"),
	HX_CSTRING("Collect"),
	HX_CSTRING("SetCurrentThread"),
	HX_CSTRING("AddFileLineBreakpoint"),
	HX_CSTRING("AddClassFunctionBreakpoint"),
	HX_CSTRING("ListBreakpoints"),
	HX_CSTRING("DescribeBreakpoint"),
	HX_CSTRING("DisableAllBreakpoints"),
	HX_CSTRING("DisableBreakpointRange"),
	HX_CSTRING("EnableAllBreakpoints"),
	HX_CSTRING("EnableBreakpointRange"),
	HX_CSTRING("DeleteAllBreakpoints"),
	HX_CSTRING("DeleteBreakpointRange"),
	HX_CSTRING("BreakNow"),
	HX_CSTRING("Continue"),
	HX_CSTRING("Step"),
	HX_CSTRING("Next"),
	HX_CSTRING("Finish"),
	HX_CSTRING("WhereCurrentThread"),
	HX_CSTRING("WhereAllThreads"),
	HX_CSTRING("Up"),
	HX_CSTRING("Down"),
	HX_CSTRING("SetFrame"),
	HX_CSTRING("Variables"),
	HX_CSTRING("PrintExpression"),
	HX_CSTRING("SetExpression"),
	HX_CSTRING("CommandId"),
	HX_CSTRING("GetExpression"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Command_obj::BreakNow,"BreakNow");
	HX_MARK_MEMBER_NAME(Command_obj::Classes,"Classes");
	HX_MARK_MEMBER_NAME(Command_obj::Collect,"Collect");
	HX_MARK_MEMBER_NAME(Command_obj::Compact,"Compact");
	HX_MARK_MEMBER_NAME(Command_obj::DeleteAllBreakpoints,"DeleteAllBreakpoints");
	HX_MARK_MEMBER_NAME(Command_obj::Detach,"Detach");
	HX_MARK_MEMBER_NAME(Command_obj::DisableAllBreakpoints,"DisableAllBreakpoints");
	HX_MARK_MEMBER_NAME(Command_obj::EnableAllBreakpoints,"EnableAllBreakpoints");
	HX_MARK_MEMBER_NAME(Command_obj::Exit,"Exit");
	HX_MARK_MEMBER_NAME(Command_obj::Files,"Files");
	HX_MARK_MEMBER_NAME(Command_obj::FilesFullPath,"FilesFullPath");
	HX_MARK_MEMBER_NAME(Command_obj::Mem,"Mem");
	HX_MARK_MEMBER_NAME(Command_obj::WhereAllThreads,"WhereAllThreads");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Command_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Command_obj::BreakNow,"BreakNow");
	HX_VISIT_MEMBER_NAME(Command_obj::Classes,"Classes");
	HX_VISIT_MEMBER_NAME(Command_obj::Collect,"Collect");
	HX_VISIT_MEMBER_NAME(Command_obj::Compact,"Compact");
	HX_VISIT_MEMBER_NAME(Command_obj::DeleteAllBreakpoints,"DeleteAllBreakpoints");
	HX_VISIT_MEMBER_NAME(Command_obj::Detach,"Detach");
	HX_VISIT_MEMBER_NAME(Command_obj::DisableAllBreakpoints,"DisableAllBreakpoints");
	HX_VISIT_MEMBER_NAME(Command_obj::EnableAllBreakpoints,"EnableAllBreakpoints");
	HX_VISIT_MEMBER_NAME(Command_obj::Exit,"Exit");
	HX_VISIT_MEMBER_NAME(Command_obj::Files,"Files");
	HX_VISIT_MEMBER_NAME(Command_obj::FilesFullPath,"FilesFullPath");
	HX_VISIT_MEMBER_NAME(Command_obj::Mem,"Mem");
	HX_VISIT_MEMBER_NAME(Command_obj::WhereAllThreads,"WhereAllThreads");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Command_obj::__mClass;

Dynamic __Create_Command_obj() { return new Command_obj; }

void Command_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger.Command"), hx::TCanCast< Command_obj >,sStaticFields,sMemberFields,
	&__Create_Command_obj, &__Create,
	&super::__SGetClass(), &CreateCommand_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Command_obj::__boot()
{
hx::Static(BreakNow) = hx::CreateEnum< Command_obj >(HX_CSTRING("BreakNow"),19);
hx::Static(Classes) = hx::CreateEnum< Command_obj >(HX_CSTRING("Classes"),4);
hx::Static(Collect) = hx::CreateEnum< Command_obj >(HX_CSTRING("Collect"),7);
hx::Static(Compact) = hx::CreateEnum< Command_obj >(HX_CSTRING("Compact"),6);
hx::Static(DeleteAllBreakpoints) = hx::CreateEnum< Command_obj >(HX_CSTRING("DeleteAllBreakpoints"),17);
hx::Static(Detach) = hx::CreateEnum< Command_obj >(HX_CSTRING("Detach"),1);
hx::Static(DisableAllBreakpoints) = hx::CreateEnum< Command_obj >(HX_CSTRING("DisableAllBreakpoints"),13);
hx::Static(EnableAllBreakpoints) = hx::CreateEnum< Command_obj >(HX_CSTRING("EnableAllBreakpoints"),15);
hx::Static(Exit) = hx::CreateEnum< Command_obj >(HX_CSTRING("Exit"),0);
hx::Static(Files) = hx::CreateEnum< Command_obj >(HX_CSTRING("Files"),2);
hx::Static(FilesFullPath) = hx::CreateEnum< Command_obj >(HX_CSTRING("FilesFullPath"),3);
hx::Static(Mem) = hx::CreateEnum< Command_obj >(HX_CSTRING("Mem"),5);
hx::Static(WhereAllThreads) = hx::CreateEnum< Command_obj >(HX_CSTRING("WhereAllThreads"),25);
}


} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
