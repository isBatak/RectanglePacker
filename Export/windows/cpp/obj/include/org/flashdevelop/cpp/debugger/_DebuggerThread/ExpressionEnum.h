#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ExpressionEnum
#define INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ExpressionEnum

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(org,flashdevelop,cpp,debugger,_DebuggerThread,ExpressionEnum)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{
namespace _DebuggerThread{


class ExpressionEnum_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ExpressionEnum_obj OBJ_;

	public:
		ExpressionEnum_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionEnum"); }
		::String __ToString() const { return HX_CSTRING("ExpressionEnum.") + tag; }

		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum AnonymousFieldRef(Dynamic Value,::String field);
		static Dynamic AnonymousFieldRef_dyn();
		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum ArrayRef(Dynamic value,int index);
		static Dynamic ArrayRef_dyn();
		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum DebuggerFieldRef(::String field);
		static Dynamic DebuggerFieldRef_dyn();
		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum DebuggerFields;
		static inline ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum DebuggerFields_dyn() { return DebuggerFields; }
		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum FieldRef(Dynamic value,::String field);
		static Dynamic FieldRef_dyn();
		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum StackRef(::String name);
		static Dynamic StackRef_dyn();
		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum Value(Dynamic value);
		static Dynamic Value_dyn();
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
} // end namespace _DebuggerThread

#endif /* INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ExpressionEnum */ 
