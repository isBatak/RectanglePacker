#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ElementEnum
#define INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ElementEnum

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(org,flashdevelop,cpp,debugger,_DebuggerThread,ElementEnum)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{
namespace _DebuggerThread{


class ElementEnum_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ElementEnum_obj OBJ_;

	public:
		ElementEnum_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("org.flashdevelop.cpp.debugger._DebuggerThread.ElementEnum"); }
		::String __ToString() const { return HX_CSTRING("ElementEnum.") + tag; }

		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum Array_Element(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum element,::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum index);
		static Dynamic Array_Element_dyn();
		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum Array_Value(Array< ::Dynamic > array);
		static Dynamic Array_Value_dyn();
		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum Constructor_Call(::String class_name,Array< ::Dynamic > parameters,int class_name_begin,int class_name_end);
		static Dynamic Constructor_Call_dyn();
		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum DebuggerField(::String field,int field_begin,int field_end);
		static Dynamic DebuggerField_dyn();
		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum DebuggerFields;
		static inline ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum DebuggerFields_dyn() { return DebuggerFields; }
		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum Field(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum element,::String field,int field_begin,int field_end);
		static Dynamic Field_dyn();
		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum Function_Call(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum element,Array< ::Dynamic > parameters);
		static Dynamic Function_Call_dyn();
		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum Path(::String path,int path_begin,int path_end);
		static Dynamic Path_dyn();
		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum Value(::String value,int value_begin,int value_end);
		static Dynamic Value_dyn();
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
} // end namespace _DebuggerThread

#endif /* INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ElementEnum */ 
