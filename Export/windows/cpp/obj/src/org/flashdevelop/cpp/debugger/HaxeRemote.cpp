#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_vm_Mutex
#include <cpp/vm/Mutex.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_Command
#include <org/flashdevelop/cpp/debugger/Command.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_DebuggerThread
#include <org/flashdevelop/cpp/debugger/DebuggerThread.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_HaxeProtocol
#include <org/flashdevelop/cpp/debugger/HaxeProtocol.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_HaxeRemote
#include <org/flashdevelop/cpp/debugger/HaxeRemote.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_IController
#include <org/flashdevelop/cpp/debugger/IController.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_Message
#include <org/flashdevelop/cpp/debugger/Message.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{

Void HaxeRemote_obj::__construct(bool startStopped,::String host,hx::Null< int >  __o_port)
{
HX_STACK_FRAME("org.flashdevelop.cpp.debugger.HaxeRemote","new",0x8db84989,"org.flashdevelop.cpp.debugger.HaxeRemote.new","org/flashdevelop/cpp/debugger/HaxeRemote.hx",58,0x6c572187)
HX_STACK_THIS(this)
HX_STACK_ARG(startStopped,"startStopped")
HX_STACK_ARG(host,"host")
HX_STACK_ARG(__o_port,"port")
int port = __o_port.Default(6972);
{
	HX_STACK_LINE(59)
	this->mHost = host;
	HX_STACK_LINE(60)
	this->mPort = port;
	HX_STACK_LINE(61)
	this->mSocket = null();
	HX_STACK_LINE(62)
	::cpp::vm::Mutex _g = ::cpp::vm::Mutex_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(62)
	this->mSocketMutex = _g;
	HX_STACK_LINE(63)
	::cpp::vm::Mutex _g1 = ::cpp::vm::Mutex_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(63)
	this->mAcceptMutex = _g1;
	HX_STACK_LINE(64)
	::org::flashdevelop::cpp::debugger::DebuggerThread _g2 = ::org::flashdevelop::cpp::debugger::DebuggerThread_obj::__new(hx::ObjectPtr<OBJ_>(this),startStopped);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(64)
	this->mThread = _g2;
}
;
	return null();
}

//HaxeRemote_obj::~HaxeRemote_obj() { }

Dynamic HaxeRemote_obj::__CreateEmpty() { return  new HaxeRemote_obj; }
hx::ObjectPtr< HaxeRemote_obj > HaxeRemote_obj::__new(bool startStopped,::String host,hx::Null< int >  __o_port)
{  hx::ObjectPtr< HaxeRemote_obj > result = new HaxeRemote_obj();
	result->__construct(startStopped,host,__o_port);
	return result;}

Dynamic HaxeRemote_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HaxeRemote_obj > result = new HaxeRemote_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *HaxeRemote_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::org::flashdevelop::cpp::debugger::IController_obj)) return operator ::org::flashdevelop::cpp::debugger::IController_obj *();
	return super::__ToInterface(inType);
}

::org::flashdevelop::cpp::debugger::Command HaxeRemote_obj::getNextCommand( ){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.HaxeRemote","getNextCommand",0x46e9f119,"org.flashdevelop.cpp.debugger.HaxeRemote.getNextCommand","org/flashdevelop/cpp/debugger/HaxeRemote.hx",69,0x6c572187)
	HX_STACK_THIS(this)
	HX_STACK_LINE(69)
	while((true)){
		HX_STACK_LINE(70)
		::sys::net::Socket socket;		HX_STACK_VAR(socket,"socket");
		HX_STACK_LINE(71)
		this->mSocketMutex->acquire();
		HX_STACK_LINE(72)
		if (((this->mSocket == null()))){
			HX_STACK_LINE(73)
			this->connectLocked();
		}
		HX_STACK_LINE(75)
		socket = this->mSocket;
		HX_STACK_LINE(76)
		this->mSocketMutex->release();
		HX_STACK_LINE(77)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(78)
			return ::org::flashdevelop::cpp::debugger::HaxeProtocol_obj::readCommand(socket->input);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(82)
					::String _g = ::Std_obj::string(e);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(81)
					::String _g1 = (((((HX_CSTRING("Failed to read command from server at ") + this->mHost) + HX_CSTRING(":")) + this->mPort) + HX_CSTRING(": ")) + _g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(81)
					::Sys_obj::println(_g1);
					HX_STACK_LINE(83)
					::Sys_obj::println(HX_CSTRING("Closing connection and trying again."));
					HX_STACK_LINE(84)
					socket->close();
					HX_STACK_LINE(85)
					this->mSocketMutex->acquire();
					HX_STACK_LINE(86)
					if (((this->mSocket == socket))){
						HX_STACK_LINE(87)
						this->mSocket = null();
					}
					HX_STACK_LINE(89)
					this->mSocketMutex->release();
				}
			}
		}
	}
	HX_STACK_LINE(69)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HaxeRemote_obj,getNextCommand,return )

Void HaxeRemote_obj::acceptMessage( ::org::flashdevelop::cpp::debugger::Message message){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger.HaxeRemote","acceptMessage",0xa0eca208,"org.flashdevelop.cpp.debugger.HaxeRemote.acceptMessage","org/flashdevelop/cpp/debugger/HaxeRemote.hx",103,0x6c572187)
		HX_STACK_THIS(this)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(103)
		while((true)){
			HX_STACK_LINE(104)
			::sys::net::Socket socket;		HX_STACK_VAR(socket,"socket");
			HX_STACK_LINE(105)
			this->mSocketMutex->acquire();
			HX_STACK_LINE(106)
			if (((this->mSocket == null()))){
				HX_STACK_LINE(107)
				this->connectLocked();
			}
			HX_STACK_LINE(109)
			socket = this->mSocket;
			HX_STACK_LINE(110)
			this->mSocketMutex->release();
			HX_STACK_LINE(111)
			this->mAcceptMutex->acquire();
			HX_STACK_LINE(112)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(113)
				::org::flashdevelop::cpp::debugger::HaxeProtocol_obj::writeMessage(socket->output,message);
				HX_STACK_LINE(114)
				this->mAcceptMutex->release();
				HX_STACK_LINE(115)
				return null();
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(118)
						this->mAcceptMutex->release();
						HX_STACK_LINE(120)
						::String _g = ::Std_obj::string(e);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(119)
						::String _g1 = (((((HX_CSTRING("Failed to deliver message to server at ") + this->mHost) + HX_CSTRING(":")) + this->mPort) + HX_CSTRING(": ")) + _g);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(119)
						::Sys_obj::println(_g1);
						HX_STACK_LINE(121)
						::Sys_obj::println(HX_CSTRING("Closing connection and trying again."));
						HX_STACK_LINE(122)
						socket->close();
						HX_STACK_LINE(123)
						this->mSocketMutex->acquire();
						HX_STACK_LINE(124)
						if (((this->mSocket == socket))){
							HX_STACK_LINE(125)
							this->mSocket = null();
						}
						HX_STACK_LINE(127)
						this->mSocketMutex->release();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HaxeRemote_obj,acceptMessage,(void))

Void HaxeRemote_obj::connectLocked( ){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger.HaxeRemote","connectLocked",0xaf8d66fd,"org.flashdevelop.cpp.debugger.HaxeRemote.connectLocked","org/flashdevelop/cpp/debugger/HaxeRemote.hx",133,0x6c572187)
		HX_STACK_THIS(this)
		HX_STACK_LINE(134)
		::sys::net::Socket _g = ::sys::net::Socket_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(134)
		this->mSocket = _g;
		HX_STACK_LINE(135)
		while((true)){
			HX_STACK_LINE(136)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(137)
				::sys::net::Host host = ::sys::net::Host_obj::__new(this->mHost);		HX_STACK_VAR(host,"host");
				HX_STACK_LINE(138)
				if (((host->ip == (int)0))){
					HX_STACK_LINE(139)
					HX_STACK_DO_THROW(HX_CSTRING("Name lookup error."));
				}
				HX_STACK_LINE(141)
				this->mSocket->connect(host,this->mPort);
				HX_STACK_LINE(142)
				::org::flashdevelop::cpp::debugger::HaxeProtocol_obj::writeClientIdentification(this->mSocket->output);
				HX_STACK_LINE(143)
				::org::flashdevelop::cpp::debugger::HaxeProtocol_obj::readServerIdentification(this->mSocket->input);
				HX_STACK_LINE(144)
				::Sys_obj::println(((((HX_CSTRING("Connected to debugging server at ") + this->mHost) + HX_CSTRING(":")) + this->mPort) + HX_CSTRING(".")));
				HX_STACK_LINE(146)
				return null();
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(150)
						::String _g1 = ::Std_obj::string(e);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(149)
						::String _g2 = (((((HX_CSTRING("Failed to connect to debugging server at ") + this->mHost) + HX_CSTRING(":")) + this->mPort) + HX_CSTRING(" : ")) + _g1);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(149)
						::Sys_obj::println(_g2);
					}
				}
			}
			HX_STACK_LINE(152)
			::Sys_obj::println(HX_CSTRING("Trying again in 3 seconds."));
			HX_STACK_LINE(153)
			::Sys_obj::sleep((int)3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HaxeRemote_obj,connectLocked,(void))


HaxeRemote_obj::HaxeRemote_obj()
{
}

void HaxeRemote_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HaxeRemote);
	HX_MARK_MEMBER_NAME(mHost,"mHost");
	HX_MARK_MEMBER_NAME(mPort,"mPort");
	HX_MARK_MEMBER_NAME(mSocket,"mSocket");
	HX_MARK_MEMBER_NAME(mSocketMutex,"mSocketMutex");
	HX_MARK_MEMBER_NAME(mAcceptMutex,"mAcceptMutex");
	HX_MARK_MEMBER_NAME(mThread,"mThread");
	HX_MARK_END_CLASS();
}

void HaxeRemote_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mHost,"mHost");
	HX_VISIT_MEMBER_NAME(mPort,"mPort");
	HX_VISIT_MEMBER_NAME(mSocket,"mSocket");
	HX_VISIT_MEMBER_NAME(mSocketMutex,"mSocketMutex");
	HX_VISIT_MEMBER_NAME(mAcceptMutex,"mAcceptMutex");
	HX_VISIT_MEMBER_NAME(mThread,"mThread");
}

Dynamic HaxeRemote_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mHost") ) { return mHost; }
		if (HX_FIELD_EQ(inName,"mPort") ) { return mPort; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mSocket") ) { return mSocket; }
		if (HX_FIELD_EQ(inName,"mThread") ) { return mThread; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mSocketMutex") ) { return mSocketMutex; }
		if (HX_FIELD_EQ(inName,"mAcceptMutex") ) { return mAcceptMutex; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"acceptMessage") ) { return acceptMessage_dyn(); }
		if (HX_FIELD_EQ(inName,"connectLocked") ) { return connectLocked_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getNextCommand") ) { return getNextCommand_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HaxeRemote_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mHost") ) { mHost=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mPort") ) { mPort=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mSocket") ) { mSocket=inValue.Cast< ::sys::net::Socket >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mThread") ) { mThread=inValue.Cast< ::org::flashdevelop::cpp::debugger::DebuggerThread >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mSocketMutex") ) { mSocketMutex=inValue.Cast< ::cpp::vm::Mutex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mAcceptMutex") ) { mAcceptMutex=inValue.Cast< ::cpp::vm::Mutex >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HaxeRemote_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mHost"));
	outFields->push(HX_CSTRING("mPort"));
	outFields->push(HX_CSTRING("mSocket"));
	outFields->push(HX_CSTRING("mSocketMutex"));
	outFields->push(HX_CSTRING("mAcceptMutex"));
	outFields->push(HX_CSTRING("mThread"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(HaxeRemote_obj,mHost),HX_CSTRING("mHost")},
	{hx::fsInt,(int)offsetof(HaxeRemote_obj,mPort),HX_CSTRING("mPort")},
	{hx::fsObject /*::sys::net::Socket*/ ,(int)offsetof(HaxeRemote_obj,mSocket),HX_CSTRING("mSocket")},
	{hx::fsObject /*::cpp::vm::Mutex*/ ,(int)offsetof(HaxeRemote_obj,mSocketMutex),HX_CSTRING("mSocketMutex")},
	{hx::fsObject /*::cpp::vm::Mutex*/ ,(int)offsetof(HaxeRemote_obj,mAcceptMutex),HX_CSTRING("mAcceptMutex")},
	{hx::fsObject /*::org::flashdevelop::cpp::debugger::DebuggerThread*/ ,(int)offsetof(HaxeRemote_obj,mThread),HX_CSTRING("mThread")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getNextCommand"),
	HX_CSTRING("acceptMessage"),
	HX_CSTRING("connectLocked"),
	HX_CSTRING("mHost"),
	HX_CSTRING("mPort"),
	HX_CSTRING("mSocket"),
	HX_CSTRING("mSocketMutex"),
	HX_CSTRING("mAcceptMutex"),
	HX_CSTRING("mThread"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HaxeRemote_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HaxeRemote_obj::__mClass,"__mClass");
};

#endif

Class HaxeRemote_obj::__mClass;

void HaxeRemote_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger.HaxeRemote"), hx::TCanCast< HaxeRemote_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void HaxeRemote_obj::__boot()
{
}

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
