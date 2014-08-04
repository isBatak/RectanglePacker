#ifndef INCLUDED_org_flashdevelop_cpp_debugger_HaxeRemote
#define INCLUDED_org_flashdevelop_cpp_debugger_HaxeRemote

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flashdevelop/cpp/debugger/IController.h>
HX_DECLARE_CLASS2(cpp,vm,Mutex)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,Command)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,DebuggerThread)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,HaxeRemote)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,IController)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,Message)
HX_DECLARE_CLASS2(sys,net,Socket)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{


class HXCPP_CLASS_ATTRIBUTES  HaxeRemote_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HaxeRemote_obj OBJ_;
		HaxeRemote_obj();
		Void __construct(bool startStopped,::String host,hx::Null< int >  __o_port);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< HaxeRemote_obj > __new(bool startStopped,::String host,hx::Null< int >  __o_port);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HaxeRemote_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::flashdevelop::cpp::debugger::IController_obj *()
			{ return new ::org::flashdevelop::cpp::debugger::IController_delegate_< HaxeRemote_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("HaxeRemote"); }

		virtual ::org::flashdevelop::cpp::debugger::Command getNextCommand( );
		Dynamic getNextCommand_dyn();

		virtual Void acceptMessage( ::org::flashdevelop::cpp::debugger::Message message);
		Dynamic acceptMessage_dyn();

		virtual Void connectLocked( );
		Dynamic connectLocked_dyn();

		::String mHost;
		int mPort;
		::sys::net::Socket mSocket;
		::cpp::vm::Mutex mSocketMutex;
		::cpp::vm::Mutex mAcceptMutex;
		::org::flashdevelop::cpp::debugger::DebuggerThread mThread;
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger

#endif /* INCLUDED_org_flashdevelop_cpp_debugger_HaxeRemote */ 
