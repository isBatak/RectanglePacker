#ifndef INCLUDED_org_flashdevelop_cpp_debugger_Command
#define INCLUDED_org_flashdevelop_cpp_debugger_Command

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,Command)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{


class Command_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Command_obj OBJ_;

	public:
		Command_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("org.flashdevelop.cpp.debugger.Command"); }
		::String __ToString() const { return HX_CSTRING("Command.") + tag; }

		static ::org::flashdevelop::cpp::debugger::Command AddClassFunctionBreakpoint(::String className,::String functionName);
		static Dynamic AddClassFunctionBreakpoint_dyn();
		static ::org::flashdevelop::cpp::debugger::Command AddFileLineBreakpoint(::String fileName,int lineNumber);
		static Dynamic AddFileLineBreakpoint_dyn();
		static ::org::flashdevelop::cpp::debugger::Command BreakNow;
		static inline ::org::flashdevelop::cpp::debugger::Command BreakNow_dyn() { return BreakNow; }
		static ::org::flashdevelop::cpp::debugger::Command Classes;
		static inline ::org::flashdevelop::cpp::debugger::Command Classes_dyn() { return Classes; }
		static ::org::flashdevelop::cpp::debugger::Command Collect;
		static inline ::org::flashdevelop::cpp::debugger::Command Collect_dyn() { return Collect; }
		static ::org::flashdevelop::cpp::debugger::Command CommandId(int id,::org::flashdevelop::cpp::debugger::Command command);
		static Dynamic CommandId_dyn();
		static ::org::flashdevelop::cpp::debugger::Command Compact;
		static inline ::org::flashdevelop::cpp::debugger::Command Compact_dyn() { return Compact; }
		static ::org::flashdevelop::cpp::debugger::Command Continue(int count);
		static Dynamic Continue_dyn();
		static ::org::flashdevelop::cpp::debugger::Command DeleteAllBreakpoints;
		static inline ::org::flashdevelop::cpp::debugger::Command DeleteAllBreakpoints_dyn() { return DeleteAllBreakpoints; }
		static ::org::flashdevelop::cpp::debugger::Command DeleteBreakpointRange(int first,int last);
		static Dynamic DeleteBreakpointRange_dyn();
		static ::org::flashdevelop::cpp::debugger::Command DescribeBreakpoint(int number);
		static Dynamic DescribeBreakpoint_dyn();
		static ::org::flashdevelop::cpp::debugger::Command Detach;
		static inline ::org::flashdevelop::cpp::debugger::Command Detach_dyn() { return Detach; }
		static ::org::flashdevelop::cpp::debugger::Command DisableAllBreakpoints;
		static inline ::org::flashdevelop::cpp::debugger::Command DisableAllBreakpoints_dyn() { return DisableAllBreakpoints; }
		static ::org::flashdevelop::cpp::debugger::Command DisableBreakpointRange(int first,int last);
		static Dynamic DisableBreakpointRange_dyn();
		static ::org::flashdevelop::cpp::debugger::Command Down(int count);
		static Dynamic Down_dyn();
		static ::org::flashdevelop::cpp::debugger::Command EnableAllBreakpoints;
		static inline ::org::flashdevelop::cpp::debugger::Command EnableAllBreakpoints_dyn() { return EnableAllBreakpoints; }
		static ::org::flashdevelop::cpp::debugger::Command EnableBreakpointRange(int first,int last);
		static Dynamic EnableBreakpointRange_dyn();
		static ::org::flashdevelop::cpp::debugger::Command Exit;
		static inline ::org::flashdevelop::cpp::debugger::Command Exit_dyn() { return Exit; }
		static ::org::flashdevelop::cpp::debugger::Command Files;
		static inline ::org::flashdevelop::cpp::debugger::Command Files_dyn() { return Files; }
		static ::org::flashdevelop::cpp::debugger::Command FilesFullPath;
		static inline ::org::flashdevelop::cpp::debugger::Command FilesFullPath_dyn() { return FilesFullPath; }
		static ::org::flashdevelop::cpp::debugger::Command Finish(int count);
		static Dynamic Finish_dyn();
		static ::org::flashdevelop::cpp::debugger::Command GetExpression(bool unsafe,::String expression);
		static Dynamic GetExpression_dyn();
		static ::org::flashdevelop::cpp::debugger::Command ListBreakpoints(bool enabled,bool disabled);
		static Dynamic ListBreakpoints_dyn();
		static ::org::flashdevelop::cpp::debugger::Command Mem;
		static inline ::org::flashdevelop::cpp::debugger::Command Mem_dyn() { return Mem; }
		static ::org::flashdevelop::cpp::debugger::Command Next(int count);
		static Dynamic Next_dyn();
		static ::org::flashdevelop::cpp::debugger::Command PrintExpression(bool unsafe,::String expression);
		static Dynamic PrintExpression_dyn();
		static ::org::flashdevelop::cpp::debugger::Command SetCurrentThread(int number);
		static Dynamic SetCurrentThread_dyn();
		static ::org::flashdevelop::cpp::debugger::Command SetExpression(bool unsafe,::String lhs,::String rhs);
		static Dynamic SetExpression_dyn();
		static ::org::flashdevelop::cpp::debugger::Command SetFrame(int number);
		static Dynamic SetFrame_dyn();
		static ::org::flashdevelop::cpp::debugger::Command Step(int count);
		static Dynamic Step_dyn();
		static ::org::flashdevelop::cpp::debugger::Command Up(int count);
		static Dynamic Up_dyn();
		static ::org::flashdevelop::cpp::debugger::Command Variables(bool unsafe);
		static Dynamic Variables_dyn();
		static ::org::flashdevelop::cpp::debugger::Command WhereAllThreads;
		static inline ::org::flashdevelop::cpp::debugger::Command WhereAllThreads_dyn() { return WhereAllThreads; }
		static ::org::flashdevelop::cpp::debugger::Command WhereCurrentThread(bool unsafe);
		static Dynamic WhereCurrentThread_dyn();
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger

#endif /* INCLUDED_org_flashdevelop_cpp_debugger_Command */ 
