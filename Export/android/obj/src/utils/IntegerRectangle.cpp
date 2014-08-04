#include <hxcpp.h>

#ifndef INCLUDED_utils_IntegerRectangle
#include <utils/IntegerRectangle.h>
#endif
namespace utils{

Void IntegerRectangle_obj::__construct(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{
HX_STACK_FRAME("utils.IntegerRectangle","new",0x7d273580,"utils.IntegerRectangle.new","utils/IntegerRectangle.hx",13,0xc63c9e8f)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
int x = __o_x.Default(0);
int y = __o_y.Default(0);
int width = __o_width.Default(0);
int height = __o_height.Default(0);
{
	HX_STACK_LINE(14)
	this->x = x;
	HX_STACK_LINE(15)
	this->y = y;
	HX_STACK_LINE(16)
	this->width = width;
	HX_STACK_LINE(17)
	this->height = height;
	HX_STACK_LINE(18)
	this->right = (x + width);
	HX_STACK_LINE(19)
	this->bottom = (y + height);
}
;
	return null();
}

//IntegerRectangle_obj::~IntegerRectangle_obj() { }

Dynamic IntegerRectangle_obj::__CreateEmpty() { return  new IntegerRectangle_obj; }
hx::ObjectPtr< IntegerRectangle_obj > IntegerRectangle_obj::__new(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{  hx::ObjectPtr< IntegerRectangle_obj > result = new IntegerRectangle_obj();
	result->__construct(__o_x,__o_y,__o_width,__o_height);
	return result;}

Dynamic IntegerRectangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntegerRectangle_obj > result = new IntegerRectangle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


IntegerRectangle_obj::IntegerRectangle_obj()
{
}

Dynamic IntegerRectangle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"right") ) { return right; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"bottom") ) { return bottom; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IntegerRectangle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottom") ) { bottom=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntegerRectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("bottom"));
	outFields->push(HX_CSTRING("id"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(IntegerRectangle_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(IntegerRectangle_obj,y),HX_CSTRING("y")},
	{hx::fsInt,(int)offsetof(IntegerRectangle_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(IntegerRectangle_obj,height),HX_CSTRING("height")},
	{hx::fsInt,(int)offsetof(IntegerRectangle_obj,right),HX_CSTRING("right")},
	{hx::fsInt,(int)offsetof(IntegerRectangle_obj,bottom),HX_CSTRING("bottom")},
	{hx::fsInt,(int)offsetof(IntegerRectangle_obj,id),HX_CSTRING("id")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("right"),
	HX_CSTRING("bottom"),
	HX_CSTRING("id"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntegerRectangle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntegerRectangle_obj::__mClass,"__mClass");
};

#endif

Class IntegerRectangle_obj::__mClass;

void IntegerRectangle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("utils.IntegerRectangle"), hx::TCanCast< IntegerRectangle_obj> ,sStaticFields,sMemberFields,
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

void IntegerRectangle_obj::__boot()
{
}

} // end namespace utils
