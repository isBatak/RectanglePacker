#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_BP
#define INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_BP

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(org,flashdevelop,cpp,debugger,_DebuggerThread,BP)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{
namespace _DebuggerThread{


class BP_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef BP_obj OBJ_;

	public:
		BP_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("org.flashdevelop.cpp.debugger._DebuggerThread.BP"); }
		::String __ToString() const { return HX_CSTRING("BP.") + tag; }

		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::BP ClassFunction(int bp,::String className,::String functionName);
		static Dynamic ClassFunction_dyn();
		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::BP FileLine(int bp,::String fileName,int lineNumber);
		static Dynamic FileLine_dyn();
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
} // end namespace _DebuggerThread

#endif /* INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_BP */ 
