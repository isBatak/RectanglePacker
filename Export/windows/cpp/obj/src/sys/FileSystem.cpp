#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
namespace sys{

Void FileSystem_obj::__construct()
{
	return null();
}

//FileSystem_obj::~FileSystem_obj() { }

Dynamic FileSystem_obj::__CreateEmpty() { return  new FileSystem_obj; }
hx::ObjectPtr< FileSystem_obj > FileSystem_obj::__new()
{  hx::ObjectPtr< FileSystem_obj > result = new FileSystem_obj();
	result->__construct();
	return result;}

Dynamic FileSystem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FileSystem_obj > result = new FileSystem_obj();
	result->__construct();
	return result;}

Dynamic FileSystem_obj::stat( ::String path){
	HX_STACK_FRAME("sys.FileSystem","stat",0xa630df16,"sys.FileSystem.stat","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/FileSystem.hx",42,0xb7079c8b)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(43)
	Dynamic s = ::sys::FileSystem_obj::sys_stat(path);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(44)
	if (((s == null()))){
		HX_STACK_LINE(45)
		::Date _g = ::Date_obj::fromTime((int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		::Date _g1 = ::Date_obj::fromTime((int)0);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		::Date _g2 = ::Date_obj::fromTime((int)0);		HX_STACK_VAR(_g2,"_g2");
		struct _Function_2_1{
			inline static Dynamic Block( ::Date &_g1,::Date &_g,::Date &_g2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/FileSystem.hx",45,0xb7079c8b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("gid") , (int)0,false);
					__result->Add(HX_CSTRING("uid") , (int)0,false);
					__result->Add(HX_CSTRING("atime") , _g,false);
					__result->Add(HX_CSTRING("mtime") , _g1,false);
					__result->Add(HX_CSTRING("ctime") , _g2,false);
					__result->Add(HX_CSTRING("dev") , (int)0,false);
					__result->Add(HX_CSTRING("ino") , (int)0,false);
					__result->Add(HX_CSTRING("nlink") , (int)0,false);
					__result->Add(HX_CSTRING("rdev") , (int)0,false);
					__result->Add(HX_CSTRING("size") , (int)0,false);
					__result->Add(HX_CSTRING("mode") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(45)
		return _Function_2_1::Block(_g1,_g,_g2);
	}
	HX_STACK_LINE(46)
	::Date _g3 = ::Date_obj::fromTime((1000.0 * s->__Field(HX_CSTRING("atime"),true)));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(46)
	s->__FieldRef(HX_CSTRING("atime")) = _g3;
	HX_STACK_LINE(47)
	::Date _g4 = ::Date_obj::fromTime((1000.0 * s->__Field(HX_CSTRING("mtime"),true)));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(47)
	s->__FieldRef(HX_CSTRING("mtime")) = _g4;
	HX_STACK_LINE(48)
	::Date _g5 = ::Date_obj::fromTime((1000.0 * s->__Field(HX_CSTRING("ctime"),true)));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(48)
	s->__FieldRef(HX_CSTRING("ctime")) = _g5;
	HX_STACK_LINE(49)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,stat,return )

::String FileSystem_obj::fullPath( ::String relPath){
	HX_STACK_FRAME("sys.FileSystem","fullPath",0xc6463316,"sys.FileSystem.fullPath","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/FileSystem.hx",52,0xb7079c8b)
	HX_STACK_ARG(relPath,"relPath")
	HX_STACK_LINE(53)
	::String _g = ::sys::FileSystem_obj::file_full_path(relPath);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(53)
	return ::String(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,fullPath,return )

Dynamic FileSystem_obj::sys_stat;

Dynamic FileSystem_obj::file_full_path;


FileSystem_obj::FileSystem_obj()
{
}

Dynamic FileSystem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stat") ) { return stat_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fullPath") ) { return fullPath_dyn(); }
		if (HX_FIELD_EQ(inName,"sys_stat") ) { return sys_stat; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"file_full_path") ) { return file_full_path; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FileSystem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"sys_stat") ) { sys_stat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"file_full_path") ) { file_full_path=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FileSystem_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("stat"),
	HX_CSTRING("fullPath"),
	HX_CSTRING("sys_stat"),
	HX_CSTRING("file_full_path"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileSystem_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FileSystem_obj::sys_stat,"sys_stat");
	HX_MARK_MEMBER_NAME(FileSystem_obj::file_full_path,"file_full_path");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileSystem_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FileSystem_obj::sys_stat,"sys_stat");
	HX_VISIT_MEMBER_NAME(FileSystem_obj::file_full_path,"file_full_path");
};

#endif

Class FileSystem_obj::__mClass;

void FileSystem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sys.FileSystem"), hx::TCanCast< FileSystem_obj> ,sStaticFields,sMemberFields,
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

void FileSystem_obj::__boot()
{
	sys_stat= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("sys_stat"),(int)1);
	file_full_path= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("file_full_path"),(int)1);
}

} // end namespace sys
