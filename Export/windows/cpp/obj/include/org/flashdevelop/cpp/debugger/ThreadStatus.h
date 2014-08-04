#ifndef INCLUDED_org_flashdevelop_cpp_debugger_ThreadStatus
#define INCLUDED_org_flashdevelop_cpp_debugger_ThreadStatus

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,ThreadStatus)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{


class ThreadStatus_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ThreadStatus_obj OBJ_;

	public:
		ThreadStatus_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("org.flashdevelop.cpp.debugger.ThreadStatus"); }
		::String __ToString() const { return HX_CSTRING("ThreadStatus.") + tag; }

		static ::org::flashdevelop::cpp::debugger::ThreadStatus Running;
		static inline ::org::flashdevelop::cpp::debugger::ThreadStatus Running_dyn() { return Running; }
		static ::org::flashdevelop::cpp::debugger::ThreadStatus StoppedBreakpoint(int number);
		static Dynamic StoppedBreakpoint_dyn();
		static ::org::flashdevelop::cpp::debugger::ThreadStatus StoppedCriticalError(::String description);
		static Dynamic StoppedCriticalError_dyn();
		static ::org::flashdevelop::cpp::debugger::ThreadStatus StoppedImmediate;
		static inline ::org::flashdevelop::cpp::debugger::ThreadStatus StoppedImmediate_dyn() { return StoppedImmediate; }
		static ::org::flashdevelop::cpp::debugger::ThreadStatus StoppedUncaughtException;
		static inline ::org::flashdevelop::cpp::debugger::ThreadStatus StoppedUncaughtException_dyn() { return StoppedUncaughtException; }
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger

#endif /* INCLUDED_org_flashdevelop_cpp_debugger_ThreadStatus */ 
