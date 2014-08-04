#include <hxcpp.h>

#ifndef INCLUDED_utils_SortableSize
#include <utils/SortableSize.h>
#endif
namespace utils{

Void SortableSize_obj::__construct(int width,int height,int id)
{
HX_STACK_FRAME("utils.SortableSize","new",0x5dcfad48,"utils.SortableSize.new","utils/SortableSize.hx",12,0xdc45bc47)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(13)
	this->width = width;
	HX_STACK_LINE(14)
	this->height = height;
	HX_STACK_LINE(15)
	this->id = id;
}
;
	return null();
}

//SortableSize_obj::~SortableSize_obj() { }

Dynamic SortableSize_obj::__CreateEmpty() { return  new SortableSize_obj; }
hx::ObjectPtr< SortableSize_obj > SortableSize_obj::__new(int width,int height,int id)
{  hx::ObjectPtr< SortableSize_obj > result = new SortableSize_obj();
	result->__construct(width,height,id);
	return result;}

Dynamic SortableSize_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SortableSize_obj > result = new SortableSize_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


SortableSize_obj::SortableSize_obj()
{
}

Dynamic SortableSize_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SortableSize_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SortableSize_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("id"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SortableSize_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(SortableSize_obj,height),HX_CSTRING("height")},
	{hx::fsInt,(int)offsetof(SortableSize_obj,id),HX_CSTRING("id")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("id"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SortableSize_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SortableSize_obj::__mClass,"__mClass");
};

#endif

Class SortableSize_obj::__mClass;

void SortableSize_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("utils.SortableSize"), hx::TCanCast< SortableSize_obj> ,sStaticFields,sMemberFields,
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

void SortableSize_obj::__boot()
{
}

} // end namespace utils
