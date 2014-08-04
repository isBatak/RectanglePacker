#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ElementParser
#define INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ElementParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS5(org,flashdevelop,cpp,debugger,_DebuggerThread,ElementEnum)
HX_DECLARE_CLASS5(org,flashdevelop,cpp,debugger,_DebuggerThread,ElementParser)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{
namespace _DebuggerThread{


class HXCPP_CLASS_ATTRIBUTES  ElementParser_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ElementParser_obj OBJ_;
		ElementParser_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ElementParser_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ElementParser_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ElementParser"); }

		static ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum parse( ::String str,int beginColumn);
		static Dynamic parse_dyn();

		static Array< ::Dynamic > parseList( ::String str,int beginColumn);
		static Dynamic parseList_dyn();

		static int maxIndexOf( ::String str,int index,::String find);
		static Dynamic maxIndexOf_dyn();

		static int findBeginQuote( ::String str,int index);
		static Dynamic findBeginQuote_dyn();

		static int levelPreviousIndexOf( ::String str,int index,::String find,int beginColumn);
		static Dynamic levelPreviousIndexOf_dyn();

		static ::EReg gFieldRegex;
		static ::EReg gPathRegex;
		static ::EReg gFloatRegex;
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
} // end namespace _DebuggerThread

#endif /* INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ElementParser */ 
