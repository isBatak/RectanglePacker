#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
namespace haxe{
namespace io{

Void Output_obj::__construct()
{
	return null();
}

//Output_obj::~Output_obj() { }

Dynamic Output_obj::__CreateEmpty() { return  new Output_obj; }
hx::ObjectPtr< Output_obj > Output_obj::__new()
{  hx::ObjectPtr< Output_obj > result = new Output_obj();
	result->__construct();
	return result;}

Dynamic Output_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Output_obj > result = new Output_obj();
	result->__construct();
	return result;}

Void Output_obj::writeByte( int c){
{
		HX_STACK_FRAME("haxe.io.Output","writeByte",0xb4fe513a,"haxe.io.Output.writeByte","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",39,0x05ec9a64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(39)
		HX_STACK_DO_THROW(HX_CSTRING("Not implemented"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeByte,(void))

int Output_obj::writeBytes( ::haxe::io::Bytes s,int pos,int len){
	HX_STACK_FRAME("haxe.io.Output","writeBytes",0xa988c1f9,"haxe.io.Output.writeBytes","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",42,0x05ec9a64)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(43)
	int k = len;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(44)
	Array< unsigned char > b = s->b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(46)
	if (((bool((bool((pos < (int)0)) || bool((len < (int)0)))) || bool(((pos + len) > s->length))))){
		HX_STACK_LINE(47)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(49)
	while((true)){
		HX_STACK_LINE(49)
		if ((!(((k > (int)0))))){
			HX_STACK_LINE(49)
			break;
		}
		HX_STACK_LINE(55)
		this->writeByte(b->__get(pos));
		HX_STACK_LINE(59)
		(pos)++;
		HX_STACK_LINE(60)
		(k)--;
	}
	HX_STACK_LINE(62)
	return len;
}


HX_DEFINE_DYNAMIC_FUNC3(Output_obj,writeBytes,return )

Void Output_obj::write( ::haxe::io::Bytes s){
{
		HX_STACK_FRAME("haxe.io.Output","write",0x6f1d1512,"haxe.io.Output.write","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",78,0x05ec9a64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(79)
		int l = s->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(80)
		int p = (int)0;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(81)
		while((true)){
			HX_STACK_LINE(81)
			if ((!(((l > (int)0))))){
				HX_STACK_LINE(81)
				break;
			}
			HX_STACK_LINE(82)
			int k = this->writeBytes(s,p,l);		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(83)
			if (((k == (int)0))){
				HX_STACK_LINE(83)
				HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked);
			}
			HX_STACK_LINE(84)
			hx::AddEq(p,k);
			HX_STACK_LINE(85)
			hx::SubEq(l,k);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,write,(void))


Output_obj::Output_obj()
{
}

Dynamic Output_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { return write_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Output_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Output_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("writeByte"),
	HX_CSTRING("writeBytes"),
	HX_CSTRING("write"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Output_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Output_obj::__mClass,"__mClass");
};

#endif

Class Output_obj::__mClass;

void Output_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.io.Output"), hx::TCanCast< Output_obj> ,sStaticFields,sMemberFields,
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

void Output_obj::__boot()
{
}

} // end namespace haxe
} // end namespace io
