#ifndef INCLUDED_org_flashdevelop_cpp_debugger_StringList
#define INCLUDED_org_flashdevelop_cpp_debugger_StringList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,StringList)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{


class StringList_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef StringList_obj OBJ_;

	public:
		StringList_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("org.flashdevelop.cpp.debugger.StringList"); }
		::String __ToString() const { return HX_CSTRING("StringList.") + tag; }

		static ::org::flashdevelop::cpp::debugger::StringList Element(::String string,::org::flashdevelop::cpp::debugger::StringList next);
		static Dynamic Element_dyn();
		static ::org::flashdevelop::cpp::debugger::StringList Terminator;
		static inline ::org::flashdevelop::cpp::debugger::StringList Terminator_dyn() { return Terminator; }
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger

#endif /* INCLUDED_org_flashdevelop_cpp_debugger_StringList */ 
