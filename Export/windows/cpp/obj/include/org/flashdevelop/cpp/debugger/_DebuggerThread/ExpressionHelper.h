#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ExpressionHelper
#define INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ExpressionHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS5(org,flashdevelop,cpp,debugger,_DebuggerThread,ElementEnum)
HX_DECLARE_CLASS5(org,flashdevelop,cpp,debugger,_DebuggerThread,ExpressionEnum)
HX_DECLARE_CLASS5(org,flashdevelop,cpp,debugger,_DebuggerThread,ExpressionHelper)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{
namespace _DebuggerThread{


class HXCPP_CLASS_ATTRIBUTES  ExpressionHelper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ExpressionHelper_obj OBJ_;
		ExpressionHelper_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ExpressionHelper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ExpressionHelper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ExpressionHelper"); }

		static Dynamic getValue( ::String str,Dynamic varSrc);
		static Dynamic getValue_dyn();

		static Dynamic setValue( ::String lhs,::String rhs,Dynamic varSrc);
		static Dynamic setValue_dyn();

		static Dynamic getElementValue( ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum e,Dynamic varSrc);
		static Dynamic getElementValue_dyn();

		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum getExpression( ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum e,Dynamic varSrc);
		static Dynamic getExpression_dyn();

		static Dynamic getStackValue( ::String name,Dynamic varSrc);
		static Dynamic getStackValue_dyn();

		static ::String join( Array< ::String > arr,::String sep,int begin,int end);
		static Dynamic join_dyn();

		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum resolvePath( ::String path,Dynamic varSrc);
		static Dynamic resolvePath_dyn();

		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum resolveField( Dynamic value,Array< ::String > arr,int index);
		static Dynamic resolveField_dyn();

		static Dynamic resolveConstant( ::String value);
		static Dynamic resolveConstant_dyn();

		static Dynamic resolveValue( ::String value,Dynamic varSrc);
		static Dynamic resolveValue_dyn();

		static ::EReg gNumberRegex;
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
} // end namespace _DebuggerThread

#endif /* INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ExpressionHelper */ 
