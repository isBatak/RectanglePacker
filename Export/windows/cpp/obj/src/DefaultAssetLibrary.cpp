#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_AssetLibrary
#include <openfl/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_AssetType
#include <openfl/AssetType.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_FontStyle
#include <openfl/text/FontStyle.h>
#endif
#ifndef INCLUDED_openfl_text_FontType
#include <openfl/text/FontType.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArray
#include <openfl/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

Void DefaultAssetLibrary_obj::__construct()
{
HX_STACK_FRAME("DefaultAssetLibrary","new",0xbc37e41e,"DefaultAssetLibrary.new","DefaultAssetLibrary.hx",32,0x0fc48912)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(37)
	this->type = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(36)
	this->path = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(35)
	this->className = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(43)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(45)
	super::__construct();
	HX_STACK_LINE(60)
	bool useManifest = false;		HX_STACK_VAR(useManifest,"useManifest");
	HX_STACK_LINE(63)
	if ((useManifest)){
		HX_STACK_LINE(65)
		this->loadManifest();
		HX_STACK_LINE(67)
		int _g1 = ::Sys_obj::args()->indexOf(HX_CSTRING("-livereload"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(67)
		if (((_g1 > (int)-1))){
			HX_STACK_LINE(69)
			Array< ::String > path = Array_obj< ::String >::__new().Add(::sys::FileSystem_obj::fullPath(HX_CSTRING("manifest")));		HX_STACK_VAR(path,"path");
			HX_STACK_LINE(70)
			Float _g11 = ::sys::FileSystem_obj::stat(path->__get((int)0))->__Field(HX_CSTRING("mtime"),true)->__Field(HX_CSTRING("getTime"),true)();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(70)
			this->lastModified = _g11;
			HX_STACK_LINE(72)
			::haxe::Timer _g2 = ::haxe::Timer_obj::__new((int)2000);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(72)
			this->timer = _g2;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_g,Array< ::String >,path)
			Void run(){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","DefaultAssetLibrary.hx",73,0x0fc48912)
				{
					HX_STACK_LINE(75)
					Float modified = ::sys::FileSystem_obj::stat(path->__get((int)0))->__Field(HX_CSTRING("mtime"),true)->__Field(HX_CSTRING("getTime"),true)();		HX_STACK_VAR(modified,"modified");
					HX_STACK_LINE(77)
					if (((modified > _g->__get((int)0).StaticCast< ::DefaultAssetLibrary >()->lastModified))){
						HX_STACK_LINE(79)
						_g->__get((int)0).StaticCast< ::DefaultAssetLibrary >()->lastModified = modified;
						HX_STACK_LINE(80)
						_g->__get((int)0).StaticCast< ::DefaultAssetLibrary >()->loadManifest();
						HX_STACK_LINE(82)
						if (((_g->__get((int)0).StaticCast< ::DefaultAssetLibrary >()->eventCallback != null()))){
							HX_STACK_LINE(84)
							_g->__get((int)0).StaticCast< ::DefaultAssetLibrary >()->eventCallback(_g->__get((int)0).StaticCast< ::DefaultAssetLibrary >(),HX_CSTRING("change"));
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(73)
			this->timer->run =  Dynamic(new _Function_3_1(_g,path));
		}
	}
}
;
	return null();
}

//DefaultAssetLibrary_obj::~DefaultAssetLibrary_obj() { }

Dynamic DefaultAssetLibrary_obj::__CreateEmpty() { return  new DefaultAssetLibrary_obj; }
hx::ObjectPtr< DefaultAssetLibrary_obj > DefaultAssetLibrary_obj::__new()
{  hx::ObjectPtr< DefaultAssetLibrary_obj > result = new DefaultAssetLibrary_obj();
	result->__construct();
	return result;}

Dynamic DefaultAssetLibrary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultAssetLibrary_obj > result = new DefaultAssetLibrary_obj();
	result->__construct();
	return result;}

bool DefaultAssetLibrary_obj::exists( ::String id,::openfl::AssetType type){
	HX_STACK_FRAME("DefaultAssetLibrary","exists",0x972074de,"DefaultAssetLibrary.exists","DefaultAssetLibrary.hx",106,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(108)
	::openfl::AssetType assetType = this->type->get(id);		HX_STACK_VAR(assetType,"assetType");
	HX_STACK_LINE(124)
	if (((assetType != null()))){
		HX_STACK_LINE(126)
		if (((bool((assetType == type)) || bool((bool(((bool((type == ::openfl::AssetType_obj::SOUND)) || bool((type == ::openfl::AssetType_obj::MUSIC))))) && bool(((bool((assetType == ::openfl::AssetType_obj::MUSIC)) || bool((assetType == ::openfl::AssetType_obj::SOUND)))))))))){
			HX_STACK_LINE(128)
			return true;
		}
		HX_STACK_LINE(146)
		if (((bool((type == ::openfl::AssetType_obj::BINARY)) || bool((type == null()))))){
			HX_STACK_LINE(148)
			return true;
		}
	}
	HX_STACK_LINE(156)
	return false;
}


::openfl::display::BitmapData DefaultAssetLibrary_obj::getBitmapData( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getBitmapData",0xb8207f2d,"DefaultAssetLibrary.getBitmapData","DefaultAssetLibrary.hx",181,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(181)
	if ((this->className->exists(id))){
		HX_STACK_LINE(181)
		Dynamic _g = this->className->get(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(181)
		return hx::TCast< openfl::display::BitmapData >::cast(::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new())));
	}
	else{
		HX_STACK_LINE(182)
		::String _g1 = this->path->get(id);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(182)
		return ::openfl::display::BitmapData_obj::load(_g1,null());
	}
	HX_STACK_LINE(181)
	return null();
}


::openfl::utils::ByteArray DefaultAssetLibrary_obj::getBytes( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getBytes",0x86b4b377,"DefaultAssetLibrary.getBytes","DefaultAssetLibrary.hx",227,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(227)
	if ((this->className->exists(id))){
		HX_STACK_LINE(227)
		Dynamic _g = this->className->get(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(227)
		return hx::TCast< openfl::utils::ByteArray >::cast(::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new())));
	}
	else{
		HX_STACK_LINE(228)
		::String _g1 = this->path->get(id);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(228)
		return ::openfl::utils::ByteArray_obj::readFile(_g1);
	}
	HX_STACK_LINE(227)
	return null();
}


::openfl::text::Font DefaultAssetLibrary_obj::getFont( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getFont",0x974ed843,"DefaultAssetLibrary.getFont","DefaultAssetLibrary.hx",247,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(247)
	if ((this->className->exists(id))){
		HX_STACK_LINE(248)
		Dynamic fontClass = this->className->get(id);		HX_STACK_VAR(fontClass,"fontClass");
		HX_STACK_LINE(249)
		::openfl::text::Font_obj::registerFont(fontClass);
		HX_STACK_LINE(250)
		return hx::TCast< openfl::text::Font >::cast(::Type_obj::createInstance(fontClass,Dynamic( Array_obj<Dynamic>::__new())));
	}
	else{
		HX_STACK_LINE(251)
		::String _g = this->path->get(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(251)
		return ::openfl::text::Font_obj::__new(_g,null(),null());
	}
	HX_STACK_LINE(247)
	return null();
}


::openfl::media::Sound DefaultAssetLibrary_obj::getMusic( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getMusic",0xd9777bb1,"DefaultAssetLibrary.getMusic","DefaultAssetLibrary.hx",281,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(281)
	if ((this->className->exists(id))){
		HX_STACK_LINE(281)
		Dynamic _g = this->className->get(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(281)
		return hx::TCast< openfl::media::Sound >::cast(::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new())));
	}
	else{
		HX_STACK_LINE(282)
		::String _g1 = this->path->get(id);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(282)
		::openfl::net::URLRequest _g2 = ::openfl::net::URLRequest_obj::__new(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(282)
		return ::openfl::media::Sound_obj::__new(_g2,null(),true);
	}
	HX_STACK_LINE(281)
	return null();
}


::String DefaultAssetLibrary_obj::getPath( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getPath",0x9de06019,"DefaultAssetLibrary.getPath","DefaultAssetLibrary.hx",297,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(297)
	return this->path->get(id);
}


::openfl::media::Sound DefaultAssetLibrary_obj::getSound( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getSound",0x49e937db,"DefaultAssetLibrary.getSound","DefaultAssetLibrary.hx",320,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(320)
	if ((this->className->exists(id))){
		HX_STACK_LINE(320)
		Dynamic _g = this->className->get(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(320)
		return hx::TCast< openfl::media::Sound >::cast(::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new())));
	}
	else{
		HX_STACK_LINE(321)
		::String _g1 = this->path->get(id);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(321)
		::openfl::net::URLRequest _g2 = ::openfl::net::URLRequest_obj::__new(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(321)
		::openfl::AssetType _g3 = this->type->get(id);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(321)
		bool _g4 = (_g3 == ::openfl::AssetType_obj::MUSIC);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(321)
		return ::openfl::media::Sound_obj::__new(_g2,null(),_g4);
	}
	HX_STACK_LINE(320)
	return null();
}


::String DefaultAssetLibrary_obj::getText( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getText",0xa0884721,"DefaultAssetLibrary.getText","DefaultAssetLibrary.hx",328,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(361)
	::openfl::utils::ByteArray bytes = this->getBytes(id);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(363)
	if (((bytes == null()))){
		HX_STACK_LINE(365)
		return null();
	}
	else{
		HX_STACK_LINE(369)
		return bytes->readUTFBytes(bytes->length);
	}
	HX_STACK_LINE(363)
	return null();
}


bool DefaultAssetLibrary_obj::isLocal( ::String id,::openfl::AssetType type){
	HX_STACK_FRAME("DefaultAssetLibrary","isLocal",0x968237df,"DefaultAssetLibrary.isLocal","DefaultAssetLibrary.hx",390,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(390)
	return true;
}


Array< ::String > DefaultAssetLibrary_obj::list( ::openfl::AssetType type){
	HX_STACK_FRAME("DefaultAssetLibrary","list",0xf3604ee0,"DefaultAssetLibrary.list","DefaultAssetLibrary.hx",395,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(397)
	Array< ::String > items = Array_obj< ::String >::__new();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(399)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->type->keys());  __it->hasNext(); ){
		::String id = __it->next();
		if (((  ((!(((type == null()))))) ? bool(this->exists(id,type)) : bool(true) ))){
			HX_STACK_LINE(403)
			items->push(id);
		}
;
	}
	HX_STACK_LINE(409)
	return items;
}


Void DefaultAssetLibrary_obj::loadBitmapData( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadBitmapData",0x9243e881,"DefaultAssetLibrary.loadBitmapData","DefaultAssetLibrary.hx",414,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(440)
		::openfl::display::BitmapData _g = this->getBitmapData(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(440)
		handler(_g).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadBytes( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadBytes",0x8c71caa3,"DefaultAssetLibrary.loadBytes","DefaultAssetLibrary.hx",447,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(477)
		::openfl::utils::ByteArray _g = this->getBytes(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(477)
		handler(_g).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadFont( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadFont",0x1da5ca97,"DefaultAssetLibrary.loadFont","DefaultAssetLibrary.hx",484,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(506)
		::openfl::text::Font _g = this->getFont(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(506)
		handler(_g).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadManifest( ){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadManifest",0x6f596c77,"DefaultAssetLibrary.loadManifest","DefaultAssetLibrary.hx",516,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_LINE(516)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(525)
			::openfl::utils::ByteArray bytes = ::openfl::utils::ByteArray_obj::readFile(HX_CSTRING("manifest"));		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(528)
			if (((bytes != null()))){
				HX_STACK_LINE(530)
				bytes->position = (int)0;
				HX_STACK_LINE(532)
				if (((bytes->length > (int)0))){
					HX_STACK_LINE(534)
					::String data = bytes->readUTFBytes(bytes->length);		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(536)
					if (((bool((data != null())) && bool((data.length > (int)0))))){
						HX_STACK_LINE(538)
						Dynamic manifest = ::haxe::Unserializer_obj::run(data);		HX_STACK_VAR(manifest,"manifest");
						HX_STACK_LINE(540)
						{
							HX_STACK_LINE(540)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(540)
							while((true)){
								HX_STACK_LINE(540)
								if ((!(((_g < manifest->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(540)
									break;
								}
								HX_STACK_LINE(540)
								Dynamic asset = manifest->__GetItem(_g);		HX_STACK_VAR(asset,"asset");
								HX_STACK_LINE(540)
								++(_g);
								struct _Function_7_1{
									inline static bool Block( hx::ObjectPtr< ::DefaultAssetLibrary_obj > __this,Dynamic &asset){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","DefaultAssetLibrary.hx",542,0x0fc48912)
										{
											HX_STACK_LINE(542)
											::String key = asset->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
											HX_STACK_LINE(542)
											return __this->className->exists(key);
										}
										return null();
									}
								};
								HX_STACK_LINE(542)
								if ((!(_Function_7_1::Block(this,asset)))){
									HX_STACK_LINE(544)
									{
										HX_STACK_LINE(544)
										::String key = asset->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(544)
										::String value = asset->__Field(HX_CSTRING("path"),true);		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(544)
										this->path->set(key,value);
									}
									HX_STACK_LINE(545)
									{
										HX_STACK_LINE(545)
										::String key = asset->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(545)
										::openfl::AssetType value = ::Type_obj::createEnum(hx::ClassOf< ::openfl::AssetType >(),asset->__Field(HX_CSTRING("type"),true),null());		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(545)
										this->type->set(key,value);
									}
								}
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(557)
				::haxe::Log_obj::trace(HX_CSTRING("Warning: Could not load asset manifest (bytes was null)"),hx::SourceInfo(HX_CSTRING("DefaultAssetLibrary.hx"),557,HX_CSTRING("DefaultAssetLibrary"),HX_CSTRING("loadManifest")));
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(563)
					::String _g = ::Std_obj::string(e);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(563)
					::String _g1 = (HX_CSTRING("Warning: Could not load asset manifest (") + _g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(563)
					::String _g2 = (_g1 + HX_CSTRING(")"));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(563)
					::haxe::Log_obj::trace(_g2,hx::SourceInfo(HX_CSTRING("DefaultAssetLibrary.hx"),563,HX_CSTRING("DefaultAssetLibrary"),HX_CSTRING("loadManifest")));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DefaultAssetLibrary_obj,loadManifest,(void))

Void DefaultAssetLibrary_obj::loadMusic( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadMusic",0xdf3492dd,"DefaultAssetLibrary.loadMusic","DefaultAssetLibrary.hx",571,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(593)
		::openfl::media::Sound _g = this->getMusic(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(593)
		handler(_g).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadSound( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadSound",0x4fa64f07,"DefaultAssetLibrary.loadSound","DefaultAssetLibrary.hx",600,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(622)
		::openfl::media::Sound _g = this->getSound(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(622)
		handler(_g).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadText( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadText",0x26df3975,"DefaultAssetLibrary.loadText","DefaultAssetLibrary.hx",629,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(629)
		Dynamic handler1 = Dynamic( Array_obj<Dynamic>::__new().Add(handler));		HX_STACK_VAR(handler1,"handler1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,handler1)
		Void run(::openfl::utils::ByteArray bytes){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",653,0x0fc48912)
			HX_STACK_ARG(bytes,"bytes")
			{
				HX_STACK_LINE(653)
				if (((bytes == null()))){
					HX_STACK_LINE(655)
					handler1->__GetItem((int)0)(null()).Cast< Void >();
				}
				else{
					HX_STACK_LINE(659)
					::String _g = bytes->readUTFBytes(bytes->length);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(659)
					handler1->__GetItem((int)0)(_g).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(651)
		Dynamic callback =  Dynamic(new _Function_1_1(handler1));		HX_STACK_VAR(callback,"callback");
		HX_STACK_LINE(665)
		this->loadBytes(id,callback);
	}
return null();
}



DefaultAssetLibrary_obj::DefaultAssetLibrary_obj()
{
}

void DefaultAssetLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultAssetLibrary);
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(lastModified,"lastModified");
	HX_MARK_MEMBER_NAME(timer,"timer");
	::openfl::AssetLibrary_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultAssetLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(lastModified,"lastModified");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	::openfl::AssetLibrary_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DefaultAssetLibrary_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"list") ) { return list_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return getPath_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return isLocal_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getMusic") ) { return getMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return loadFont_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMusic") ) { return loadMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"loadSound") ) { return loadSound_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastModified") ) { return lastModified; }
		if (HX_FIELD_EQ(inName,"loadManifest") ) { return loadManifest_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadBitmapData") ) { return loadBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultAssetLibrary_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastModified") ) { lastModified=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultAssetLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("className"));
	outFields->push(HX_CSTRING("path"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("lastModified"));
	outFields->push(HX_CSTRING("timer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,className),HX_CSTRING("className")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,path),HX_CSTRING("path")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,type),HX_CSTRING("type")},
	{hx::fsFloat,(int)offsetof(DefaultAssetLibrary_obj,lastModified),HX_CSTRING("lastModified")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(DefaultAssetLibrary_obj,timer),HX_CSTRING("timer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("className"),
	HX_CSTRING("path"),
	HX_CSTRING("type"),
	HX_CSTRING("lastModified"),
	HX_CSTRING("timer"),
	HX_CSTRING("exists"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getMusic"),
	HX_CSTRING("getPath"),
	HX_CSTRING("getSound"),
	HX_CSTRING("getText"),
	HX_CSTRING("isLocal"),
	HX_CSTRING("list"),
	HX_CSTRING("loadBitmapData"),
	HX_CSTRING("loadBytes"),
	HX_CSTRING("loadFont"),
	HX_CSTRING("loadManifest"),
	HX_CSTRING("loadMusic"),
	HX_CSTRING("loadSound"),
	HX_CSTRING("loadText"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::__mClass,"__mClass");
};

#endif

Class DefaultAssetLibrary_obj::__mClass;

void DefaultAssetLibrary_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("DefaultAssetLibrary"), hx::TCanCast< DefaultAssetLibrary_obj> ,sStaticFields,sMemberFields,
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

void DefaultAssetLibrary_obj::__boot()
{
}

