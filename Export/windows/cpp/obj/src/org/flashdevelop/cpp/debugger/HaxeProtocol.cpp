#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_HaxeProtocol
#include <org/flashdevelop/cpp/debugger/HaxeProtocol.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_Message
#include <org/flashdevelop/cpp/debugger/Message.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{

Void HaxeProtocol_obj::__construct()
{
	return null();
}

//HaxeProtocol_obj::~HaxeProtocol_obj() { }

Dynamic HaxeProtocol_obj::__CreateEmpty() { return  new HaxeProtocol_obj; }
hx::ObjectPtr< HaxeProtocol_obj > HaxeProtocol_obj::__new()
{  hx::ObjectPtr< HaxeProtocol_obj > result = new HaxeProtocol_obj();
	result->__construct();
	return result;}

Dynamic HaxeProtocol_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HaxeProtocol_obj > result = new HaxeProtocol_obj();
	result->__construct();
	return result;}

Void HaxeProtocol_obj::writeClientIdentification( ::haxe::io::Output output){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger.HaxeProtocol","writeClientIdentification",0x6e112813,"org.flashdevelop.cpp.debugger.HaxeProtocol.writeClientIdentification","org/flashdevelop/cpp/debugger/HaxeProtocol.hx",32,0xe248d6b5)
		HX_STACK_ARG(output,"output")
		HX_STACK_LINE(32)
		output->writeString(::org::flashdevelop::cpp::debugger::HaxeProtocol_obj::gClientIdentification);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HaxeProtocol_obj,writeClientIdentification,(void))

Void HaxeProtocol_obj::writeServerIdentification( ::haxe::io::Output output){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger.HaxeProtocol","writeServerIdentification",0xde0b8a8b,"org.flashdevelop.cpp.debugger.HaxeProtocol.writeServerIdentification","org/flashdevelop/cpp/debugger/HaxeProtocol.hx",37,0xe248d6b5)
		HX_STACK_ARG(output,"output")
		HX_STACK_LINE(37)
		output->writeString(::org::flashdevelop::cpp::debugger::HaxeProtocol_obj::gServerIdentification);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HaxeProtocol_obj,writeServerIdentification,(void))

Void HaxeProtocol_obj::readClientIdentification( ::haxe::io::Input input){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger.HaxeProtocol","readClientIdentification",0xeb80b374,"org.flashdevelop.cpp.debugger.HaxeProtocol.readClientIdentification","org/flashdevelop/cpp/debugger/HaxeProtocol.hx",41,0xe248d6b5)
		HX_STACK_ARG(input,"input")
		HX_STACK_LINE(42)
		::haxe::io::Bytes id = input->read(::org::flashdevelop::cpp::debugger::HaxeProtocol_obj::gClientIdentification.length);		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(43)
		::String _g = id->toString();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		if (((_g != ::org::flashdevelop::cpp::debugger::HaxeProtocol_obj::gClientIdentification))){
			HX_STACK_LINE(44)
			::String _g1 = ::Std_obj::string(id);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(44)
			HX_STACK_DO_THROW((HX_CSTRING("Unexpected client identification string: ") + _g1));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HaxeProtocol_obj,readClientIdentification,(void))

Void HaxeProtocol_obj::readServerIdentification( ::haxe::io::Input input){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger.HaxeProtocol","readServerIdentification",0x5b7b15ec,"org.flashdevelop.cpp.debugger.HaxeProtocol.readServerIdentification","org/flashdevelop/cpp/debugger/HaxeProtocol.hx",49,0xe248d6b5)
		HX_STACK_ARG(input,"input")
		HX_STACK_LINE(50)
		::haxe::io::Bytes id = input->read(::org::flashdevelop::cpp::debugger::HaxeProtocol_obj::gServerIdentification.length);		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(51)
		::String _g = id->toString();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(51)
		if (((_g != ::org::flashdevelop::cpp::debugger::HaxeProtocol_obj::gServerIdentification))){
			HX_STACK_LINE(52)
			::String _g1 = ::Std_obj::string(id);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(52)
			HX_STACK_DO_THROW((HX_CSTRING("Unexpected server identification string: ") + _g1));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HaxeProtocol_obj,readServerIdentification,(void))

Void HaxeProtocol_obj::writeCommand( ::haxe::io::Output output,::org::flashdevelop::cpp::debugger::Command command){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger.HaxeProtocol","writeCommand",0x447a0a91,"org.flashdevelop.cpp.debugger.HaxeProtocol.writeCommand","org/flashdevelop/cpp/debugger/HaxeProtocol.hx",59,0xe248d6b5)
		HX_STACK_ARG(output,"output")
		HX_STACK_ARG(command,"command")
		HX_STACK_LINE(59)
		::org::flashdevelop::cpp::debugger::HaxeProtocol_obj::writeDynamic(output,command);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HaxeProtocol_obj,writeCommand,(void))

Void HaxeProtocol_obj::writeMessage( ::haxe::io::Output output,::org::flashdevelop::cpp::debugger::Message message){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger.HaxeProtocol","writeMessage",0x5d1dcf0d,"org.flashdevelop.cpp.debugger.HaxeProtocol.writeMessage","org/flashdevelop/cpp/debugger/HaxeProtocol.hx",65,0xe248d6b5)
		HX_STACK_ARG(output,"output")
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(65)
		::org::flashdevelop::cpp::debugger::HaxeProtocol_obj::writeDynamic(output,message);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HaxeProtocol_obj,writeMessage,(void))

::org::flashdevelop::cpp::debugger::Command HaxeProtocol_obj::readCommand( ::haxe::io::Input input){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.HaxeProtocol","readCommand",0x112e63d0,"org.flashdevelop.cpp.debugger.HaxeProtocol.readCommand","org/flashdevelop/cpp/debugger/HaxeProtocol.hx",69,0xe248d6b5)
	HX_STACK_ARG(input,"input")
	HX_STACK_LINE(70)
	Dynamic raw = ::org::flashdevelop::cpp::debugger::HaxeProtocol_obj::readDynamic(input);		HX_STACK_VAR(raw,"raw");
	HX_STACK_LINE(73)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(74)
		return hx::TCast< org::flashdevelop::cpp::debugger::Command >::cast(raw);
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(77)
				::String _g = ::Std_obj::string(raw);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(77)
				::String _g1 = (HX_CSTRING("Expected Command, but got ") + _g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(77)
				::String _g2 = (_g1 + HX_CSTRING(": "));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(77)
				::String _g3 = ::Std_obj::string(e);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(77)
				HX_STACK_DO_THROW((_g2 + _g3));
			}
		}
	}
	HX_STACK_LINE(73)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HaxeProtocol_obj,readCommand,return )

::org::flashdevelop::cpp::debugger::Message HaxeProtocol_obj::readMessage( ::haxe::io::Input input){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.HaxeProtocol","readMessage",0x29d2284c,"org.flashdevelop.cpp.debugger.HaxeProtocol.readMessage","org/flashdevelop/cpp/debugger/HaxeProtocol.hx",82,0xe248d6b5)
	HX_STACK_ARG(input,"input")
	HX_STACK_LINE(83)
	Dynamic raw = ::org::flashdevelop::cpp::debugger::HaxeProtocol_obj::readDynamic(input);		HX_STACK_VAR(raw,"raw");
	HX_STACK_LINE(86)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(87)
		return hx::TCast< org::flashdevelop::cpp::debugger::Message >::cast(raw);
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(90)
				::String _g = ::Std_obj::string(raw);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(90)
				::String _g1 = (HX_CSTRING("Expected Message, but got ") + _g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(90)
				::String _g2 = (_g1 + HX_CSTRING(": "));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(90)
				::String _g3 = ::Std_obj::string(e);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(90)
				HX_STACK_DO_THROW((_g2 + _g3));
			}
		}
	}
	HX_STACK_LINE(86)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HaxeProtocol_obj,readMessage,return )

Void HaxeProtocol_obj::writeDynamic( ::haxe::io::Output output,Dynamic value){
{
		HX_STACK_FRAME("org.flashdevelop.cpp.debugger.HaxeProtocol","writeDynamic",0xf92238c5,"org.flashdevelop.cpp.debugger.HaxeProtocol.writeDynamic","org/flashdevelop/cpp/debugger/HaxeProtocol.hx",96,0xe248d6b5)
		HX_STACK_ARG(output,"output")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(98)
		::String string = ::haxe::Serializer_obj::run(value);		HX_STACK_VAR(string,"string");
		HX_STACK_LINE(101)
		int msg_len = string.length;		HX_STACK_VAR(msg_len,"msg_len");
		HX_STACK_LINE(102)
		::haxe::io::Bytes msg_len_raw = ::haxe::io::Bytes_obj::alloc((int)8);		HX_STACK_VAR(msg_len_raw,"msg_len_raw");
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(104)
			while((true)){
				HX_STACK_LINE(104)
				if ((!(((_g < (int)8))))){
					HX_STACK_LINE(104)
					break;
				}
				HX_STACK_LINE(104)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(105)
				msg_len_raw->b[((int)7 - i)] = (hx::Mod(msg_len,(int)10) + (int)48);
				HX_STACK_LINE(106)
				int _g1 = ::Std_obj::_int((Float(msg_len) / Float((int)10)));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(106)
				msg_len = _g1;
			}
		}
		HX_STACK_LINE(109)
		output->write(msg_len_raw);
		HX_STACK_LINE(110)
		output->writeString(string);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HaxeProtocol_obj,writeDynamic,(void))

Dynamic HaxeProtocol_obj::readDynamic( ::haxe::io::Input input){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger.HaxeProtocol","readDynamic",0xc5d69204,"org.flashdevelop.cpp.debugger.HaxeProtocol.readDynamic","org/flashdevelop/cpp/debugger/HaxeProtocol.hx",114,0xe248d6b5)
	HX_STACK_ARG(input,"input")
	HX_STACK_LINE(115)
	::haxe::io::Bytes msg_len_raw = input->read((int)8);		HX_STACK_VAR(msg_len_raw,"msg_len_raw");
	HX_STACK_LINE(118)
	int msg_len = (int)0;		HX_STACK_VAR(msg_len,"msg_len");
	HX_STACK_LINE(119)
	{
		HX_STACK_LINE(119)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(119)
		while((true)){
			HX_STACK_LINE(119)
			if ((!(((_g < (int)8))))){
				HX_STACK_LINE(119)
				break;
			}
			HX_STACK_LINE(119)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(120)
			hx::MultEq(msg_len,(int)10);
			HX_STACK_LINE(121)
			hx::AddEq(msg_len,(msg_len_raw->b->__get(i) - (int)48));
		}
	}
	HX_STACK_LINE(126)
	if (((msg_len > (int)102400))){
		HX_STACK_LINE(127)
		HX_STACK_DO_THROW(((HX_CSTRING("Read bad message length: ") + msg_len) + HX_CSTRING(".")));
	}
	HX_STACK_LINE(131)
	::String _g = input->read(msg_len)->toString();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(131)
	return ::haxe::Unserializer_obj::run(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HaxeProtocol_obj,readDynamic,return )

::String HaxeProtocol_obj::gClientIdentification;

::String HaxeProtocol_obj::gServerIdentification;


HaxeProtocol_obj::HaxeProtocol_obj()
{
}

Dynamic HaxeProtocol_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"readCommand") ) { return readCommand_dyn(); }
		if (HX_FIELD_EQ(inName,"readMessage") ) { return readMessage_dyn(); }
		if (HX_FIELD_EQ(inName,"readDynamic") ) { return readDynamic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"writeCommand") ) { return writeCommand_dyn(); }
		if (HX_FIELD_EQ(inName,"writeMessage") ) { return writeMessage_dyn(); }
		if (HX_FIELD_EQ(inName,"writeDynamic") ) { return writeDynamic_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"gClientIdentification") ) { return gClientIdentification; }
		if (HX_FIELD_EQ(inName,"gServerIdentification") ) { return gServerIdentification; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"readClientIdentification") ) { return readClientIdentification_dyn(); }
		if (HX_FIELD_EQ(inName,"readServerIdentification") ) { return readServerIdentification_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"writeClientIdentification") ) { return writeClientIdentification_dyn(); }
		if (HX_FIELD_EQ(inName,"writeServerIdentification") ) { return writeServerIdentification_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HaxeProtocol_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"gClientIdentification") ) { gClientIdentification=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gServerIdentification") ) { gServerIdentification=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HaxeProtocol_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("writeClientIdentification"),
	HX_CSTRING("writeServerIdentification"),
	HX_CSTRING("readClientIdentification"),
	HX_CSTRING("readServerIdentification"),
	HX_CSTRING("writeCommand"),
	HX_CSTRING("writeMessage"),
	HX_CSTRING("readCommand"),
	HX_CSTRING("readMessage"),
	HX_CSTRING("writeDynamic"),
	HX_CSTRING("readDynamic"),
	HX_CSTRING("gClientIdentification"),
	HX_CSTRING("gServerIdentification"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HaxeProtocol_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HaxeProtocol_obj::gClientIdentification,"gClientIdentification");
	HX_MARK_MEMBER_NAME(HaxeProtocol_obj::gServerIdentification,"gServerIdentification");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HaxeProtocol_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HaxeProtocol_obj::gClientIdentification,"gClientIdentification");
	HX_VISIT_MEMBER_NAME(HaxeProtocol_obj::gServerIdentification,"gServerIdentification");
};

#endif

Class HaxeProtocol_obj::__mClass;

void HaxeProtocol_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger.HaxeProtocol"), hx::TCanCast< HaxeProtocol_obj> ,sStaticFields,sMemberFields,
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

void HaxeProtocol_obj::__boot()
{
	gClientIdentification= HX_CSTRING("Haxe debug client v1.0 coming at you!\n\n");
	gServerIdentification= HX_CSTRING("Haxe debug server v1.0 ready and willing, sir!\n\n");
}

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
