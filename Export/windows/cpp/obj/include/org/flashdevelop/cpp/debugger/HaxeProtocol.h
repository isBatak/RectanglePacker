#ifndef INCLUDED_org_flashdevelop_cpp_debugger_HaxeProtocol
#define INCLUDED_org_flashdevelop_cpp_debugger_HaxeProtocol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,Command)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,HaxeProtocol)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,Message)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{


class HXCPP_CLASS_ATTRIBUTES  HaxeProtocol_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HaxeProtocol_obj OBJ_;
		HaxeProtocol_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< HaxeProtocol_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HaxeProtocol_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("HaxeProtocol"); }

		static Void writeClientIdentification( ::haxe::io::Output output);
		static Dynamic writeClientIdentification_dyn();

		static Void writeServerIdentification( ::haxe::io::Output output);
		static Dynamic writeServerIdentification_dyn();

		static Void readClientIdentification( ::haxe::io::Input input);
		static Dynamic readClientIdentification_dyn();

		static Void readServerIdentification( ::haxe::io::Input input);
		static Dynamic readServerIdentification_dyn();

		static Void writeCommand( ::haxe::io::Output output,::org::flashdevelop::cpp::debugger::Command command);
		static Dynamic writeCommand_dyn();

		static Void writeMessage( ::haxe::io::Output output,::org::flashdevelop::cpp::debugger::Message message);
		static Dynamic writeMessage_dyn();

		static ::org::flashdevelop::cpp::debugger::Command readCommand( ::haxe::io::Input input);
		static Dynamic readCommand_dyn();

		static ::org::flashdevelop::cpp::debugger::Message readMessage( ::haxe::io::Input input);
		static Dynamic readMessage_dyn();

		static Void writeDynamic( ::haxe::io::Output output,Dynamic value);
		static Dynamic writeDynamic_dyn();

		static Dynamic readDynamic( ::haxe::io::Input input);
		static Dynamic readDynamic_dyn();

		static ::String gClientIdentification;
		static ::String gServerIdentification;
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger

#endif /* INCLUDED_org_flashdevelop_cpp_debugger_HaxeProtocol */ 
