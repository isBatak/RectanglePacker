#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_tools_ScalingBox
#include <tools/ScalingBox.h>
#endif
namespace tools{

Void ScalingBox_obj::__construct(int x,int y,int width,int height)
{
HX_STACK_FRAME("tools.ScalingBox","new",0x43da2e09,"tools.ScalingBox.new","tools/ScalingBox.hx",9,0x2c9878e6)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(22)
	this->mDragging = false;
	HX_STACK_LINE(21)
	this->mDragBox = ::openfl::display::Sprite_obj::__new();
	HX_STACK_LINE(19)
	this->mNewHeight = (int)0;
	HX_STACK_LINE(18)
	this->mNewWidth = (int)0;
	HX_STACK_LINE(16)
	this->mMaxHeight = (int)0;
	HX_STACK_LINE(15)
	this->mMaxWidth = (int)0;
	HX_STACK_LINE(14)
	this->mHeight = (int)0;
	HX_STACK_LINE(13)
	this->mWidth = (int)0;
	HX_STACK_LINE(12)
	this->mY = (int)0;
	HX_STACK_LINE(11)
	this->mX = (int)0;
	HX_STACK_LINE(37)
	super::__construct();
	HX_STACK_LINE(39)
	this->mX = x;
	HX_STACK_LINE(40)
	this->mY = y;
	HX_STACK_LINE(42)
	this->mMaxWidth = width;
	HX_STACK_LINE(43)
	this->mMaxHeight = height;
	HX_STACK_LINE(45)
	this->set_x(x);
	HX_STACK_LINE(46)
	this->set_y(y);
	HX_STACK_LINE(48)
	this->mDragBox->get_graphics()->beginFill((int)16744528,null());
	HX_STACK_LINE(49)
	this->mDragBox->get_graphics()->drawCircle((int)0,(int)0,(int)10);
	HX_STACK_LINE(50)
	this->mDragBox->get_graphics()->endFill();
	HX_STACK_LINE(52)
	this->addChild(this->mDragBox);
	HX_STACK_LINE(53)
	this->mDragBox->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->onStartDrag_dyn(),null(),null(),null());
	HX_STACK_LINE(54)
	this->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->onAddedToStage_dyn(),null(),null(),null());
	HX_STACK_LINE(55)
	this->updateBox(width,height);
}
;
	return null();
}

//ScalingBox_obj::~ScalingBox_obj() { }

Dynamic ScalingBox_obj::__CreateEmpty() { return  new ScalingBox_obj; }
hx::ObjectPtr< ScalingBox_obj > ScalingBox_obj::__new(int x,int y,int width,int height)
{  hx::ObjectPtr< ScalingBox_obj > result = new ScalingBox_obj();
	result->__construct(x,y,width,height);
	return result;}

Dynamic ScalingBox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScalingBox_obj > result = new ScalingBox_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

int ScalingBox_obj::get_boxWidth( ){
	HX_STACK_FRAME("tools.ScalingBox","get_boxWidth",0x150a793b,"tools.ScalingBox.get_boxWidth","tools/ScalingBox.hx",25,0x2c9878e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	return this->mWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(ScalingBox_obj,get_boxWidth,return )

int ScalingBox_obj::get_boxHeight( ){
	HX_STACK_FRAME("tools.ScalingBox","get_boxHeight",0x0a6f1312,"tools.ScalingBox.get_boxHeight","tools/ScalingBox.hx",28,0x2c9878e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	return this->mHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(ScalingBox_obj,get_boxHeight,return )

int ScalingBox_obj::get_newBoxWidth( ){
	HX_STACK_FRAME("tools.ScalingBox","get_newBoxWidth",0x9970fb3b,"tools.ScalingBox.get_newBoxWidth","tools/ScalingBox.hx",31,0x2c9878e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	return this->mNewWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(ScalingBox_obj,get_newBoxWidth,return )

int ScalingBox_obj::get_newBoxHeight( ){
	HX_STACK_FRAME("tools.ScalingBox","get_newBoxHeight",0x5fba5112,"tools.ScalingBox.get_newBoxHeight","tools/ScalingBox.hx",34,0x2c9878e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	return this->mNewHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(ScalingBox_obj,get_newBoxHeight,return )

Void ScalingBox_obj::updateBox( int width,int height){
{
		HX_STACK_FRAME("tools.ScalingBox","updateBox",0xeead1deb,"tools.ScalingBox.updateBox","tools/ScalingBox.hx",59,0x2c9878e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(60)
		this->mWidth = width;
		HX_STACK_LINE(61)
		this->mHeight = height;
		HX_STACK_LINE(62)
		this->mNewWidth = width;
		HX_STACK_LINE(63)
		this->mNewHeight = height;
		HX_STACK_LINE(65)
		this->get_graphics()->clear();
		HX_STACK_LINE(66)
		this->get_graphics()->lineStyle(1.0,(int)0,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(67)
		this->get_graphics()->drawRect((int)0,(int)0,this->mWidth,this->mHeight);
		HX_STACK_LINE(69)
		this->mDragBox->set_x(this->mWidth);
		HX_STACK_LINE(70)
		this->mDragBox->set_y(this->mHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ScalingBox_obj,updateBox,(void))

Void ScalingBox_obj::onAddedToStage( ::openfl::events::Event event){
{
		HX_STACK_FRAME("tools.ScalingBox","onAddedToStage",0x26b0a319,"tools.ScalingBox.onAddedToStage","tools/ScalingBox.hx",74,0x2c9878e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(75)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->onMouseMove_dyn(),null(),null(),null());
		HX_STACK_LINE(76)
		this->get_stage()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScalingBox_obj,onAddedToStage,(void))

Void ScalingBox_obj::onMouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("tools.ScalingBox","onMouseUp",0x03f32eea,"tools.ScalingBox.onMouseUp","tools/ScalingBox.hx",81,0x2c9878e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(81)
		this->mDragging = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScalingBox_obj,onMouseUp,(void))

Void ScalingBox_obj::onMouseMove( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("tools.ScalingBox","onMouseMove",0x45022d60,"tools.ScalingBox.onMouseMove","tools/ScalingBox.hx",86,0x2c9878e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(86)
		if ((this->mDragging)){
			HX_STACK_LINE(88)
			int _g = ::Std_obj::_int((event->stageX - this->mX));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			this->mNewWidth = _g;
			HX_STACK_LINE(89)
			int _g1 = ::Std_obj::_int((event->stageY - this->mY));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(89)
			this->mNewHeight = _g1;
			HX_STACK_LINE(91)
			if (((this->mNewWidth > this->mMaxWidth))){
				HX_STACK_LINE(93)
				this->mNewWidth = this->mMaxWidth;
			}
			HX_STACK_LINE(96)
			if (((this->mNewHeight > this->mMaxHeight))){
				HX_STACK_LINE(98)
				this->mNewHeight = this->mMaxHeight;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScalingBox_obj,onMouseMove,(void))

Void ScalingBox_obj::onStartDrag( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("tools.ScalingBox","onStartDrag",0x4bb03700,"tools.ScalingBox.onStartDrag","tools/ScalingBox.hx",105,0x2c9878e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(105)
		this->mDragging = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScalingBox_obj,onStartDrag,(void))


ScalingBox_obj::ScalingBox_obj()
{
}

void ScalingBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScalingBox);
	HX_MARK_MEMBER_NAME(mX,"mX");
	HX_MARK_MEMBER_NAME(mY,"mY");
	HX_MARK_MEMBER_NAME(mWidth,"mWidth");
	HX_MARK_MEMBER_NAME(mHeight,"mHeight");
	HX_MARK_MEMBER_NAME(mMaxWidth,"mMaxWidth");
	HX_MARK_MEMBER_NAME(mMaxHeight,"mMaxHeight");
	HX_MARK_MEMBER_NAME(mNewWidth,"mNewWidth");
	HX_MARK_MEMBER_NAME(mNewHeight,"mNewHeight");
	HX_MARK_MEMBER_NAME(mDragBox,"mDragBox");
	HX_MARK_MEMBER_NAME(mDragging,"mDragging");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScalingBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mX,"mX");
	HX_VISIT_MEMBER_NAME(mY,"mY");
	HX_VISIT_MEMBER_NAME(mWidth,"mWidth");
	HX_VISIT_MEMBER_NAME(mHeight,"mHeight");
	HX_VISIT_MEMBER_NAME(mMaxWidth,"mMaxWidth");
	HX_VISIT_MEMBER_NAME(mMaxHeight,"mMaxHeight");
	HX_VISIT_MEMBER_NAME(mNewWidth,"mNewWidth");
	HX_VISIT_MEMBER_NAME(mNewHeight,"mNewHeight");
	HX_VISIT_MEMBER_NAME(mDragBox,"mDragBox");
	HX_VISIT_MEMBER_NAME(mDragging,"mDragging");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ScalingBox_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mX") ) { return mX; }
		if (HX_FIELD_EQ(inName,"mY") ) { return mY; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mWidth") ) { return mWidth; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mHeight") ) { return mHeight; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mDragBox") ) { return mDragBox; }
		if (HX_FIELD_EQ(inName,"boxWidth") ) { return get_boxWidth(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mMaxWidth") ) { return mMaxWidth; }
		if (HX_FIELD_EQ(inName,"mNewWidth") ) { return mNewWidth; }
		if (HX_FIELD_EQ(inName,"mDragging") ) { return mDragging; }
		if (HX_FIELD_EQ(inName,"boxHeight") ) { return get_boxHeight(); }
		if (HX_FIELD_EQ(inName,"updateBox") ) { return updateBox_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mMaxHeight") ) { return mMaxHeight; }
		if (HX_FIELD_EQ(inName,"mNewHeight") ) { return mNewHeight; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"newBoxWidth") ) { return get_newBoxWidth(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onStartDrag") ) { return onStartDrag_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_boxWidth") ) { return get_boxWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"newBoxHeight") ) { return get_newBoxHeight(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_boxHeight") ) { return get_boxHeight_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onAddedToStage") ) { return onAddedToStage_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_newBoxWidth") ) { return get_newBoxWidth_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_newBoxHeight") ) { return get_newBoxHeight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScalingBox_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mX") ) { mX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mY") ) { mY=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mWidth") ) { mWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mHeight") ) { mHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mDragBox") ) { mDragBox=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mMaxWidth") ) { mMaxWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mNewWidth") ) { mNewWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mDragging") ) { mDragging=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mMaxHeight") ) { mMaxHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mNewHeight") ) { mNewHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScalingBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mX"));
	outFields->push(HX_CSTRING("mY"));
	outFields->push(HX_CSTRING("mWidth"));
	outFields->push(HX_CSTRING("mHeight"));
	outFields->push(HX_CSTRING("mMaxWidth"));
	outFields->push(HX_CSTRING("mMaxHeight"));
	outFields->push(HX_CSTRING("mNewWidth"));
	outFields->push(HX_CSTRING("mNewHeight"));
	outFields->push(HX_CSTRING("mDragBox"));
	outFields->push(HX_CSTRING("mDragging"));
	outFields->push(HX_CSTRING("boxWidth"));
	outFields->push(HX_CSTRING("boxHeight"));
	outFields->push(HX_CSTRING("newBoxWidth"));
	outFields->push(HX_CSTRING("newBoxHeight"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ScalingBox_obj,mX),HX_CSTRING("mX")},
	{hx::fsInt,(int)offsetof(ScalingBox_obj,mY),HX_CSTRING("mY")},
	{hx::fsInt,(int)offsetof(ScalingBox_obj,mWidth),HX_CSTRING("mWidth")},
	{hx::fsInt,(int)offsetof(ScalingBox_obj,mHeight),HX_CSTRING("mHeight")},
	{hx::fsInt,(int)offsetof(ScalingBox_obj,mMaxWidth),HX_CSTRING("mMaxWidth")},
	{hx::fsInt,(int)offsetof(ScalingBox_obj,mMaxHeight),HX_CSTRING("mMaxHeight")},
	{hx::fsInt,(int)offsetof(ScalingBox_obj,mNewWidth),HX_CSTRING("mNewWidth")},
	{hx::fsInt,(int)offsetof(ScalingBox_obj,mNewHeight),HX_CSTRING("mNewHeight")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(ScalingBox_obj,mDragBox),HX_CSTRING("mDragBox")},
	{hx::fsBool,(int)offsetof(ScalingBox_obj,mDragging),HX_CSTRING("mDragging")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mX"),
	HX_CSTRING("mY"),
	HX_CSTRING("mWidth"),
	HX_CSTRING("mHeight"),
	HX_CSTRING("mMaxWidth"),
	HX_CSTRING("mMaxHeight"),
	HX_CSTRING("mNewWidth"),
	HX_CSTRING("mNewHeight"),
	HX_CSTRING("mDragBox"),
	HX_CSTRING("mDragging"),
	HX_CSTRING("get_boxWidth"),
	HX_CSTRING("get_boxHeight"),
	HX_CSTRING("get_newBoxWidth"),
	HX_CSTRING("get_newBoxHeight"),
	HX_CSTRING("updateBox"),
	HX_CSTRING("onAddedToStage"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseMove"),
	HX_CSTRING("onStartDrag"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScalingBox_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScalingBox_obj::__mClass,"__mClass");
};

#endif

Class ScalingBox_obj::__mClass;

void ScalingBox_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tools.ScalingBox"), hx::TCanCast< ScalingBox_obj> ,sStaticFields,sMemberFields,
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

void ScalingBox_obj::__boot()
{
}

} // end namespace tools
