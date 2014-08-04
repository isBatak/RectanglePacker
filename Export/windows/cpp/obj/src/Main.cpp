#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_tools_ScalingBox
#include <tools/ScalingBox.h>
#endif
#ifndef INCLUDED_utils_RectanglePacker
#include <utils/RectanglePacker.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",20,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(37)
	this->mRectangles = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(32)
	this->mText = ::openfl::text::TextField_obj::__new();
	HX_STACK_LINE(31)
	this->mCopyRight = ::openfl::text::TextField_obj::__new();
	HX_STACK_LINE(30)
	this->mBitmapData = ::openfl::display::BitmapData_obj::__new((int)480,(int)480,true,(int)-1,null());
	HX_STACK_LINE(41)
	super::__construct();
	HX_STACK_LINE(47)
	this->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->onAddedToStage_dyn(),null(),null(),null());
	HX_STACK_LINE(48)
	this->addEventListener(::openfl::events::Event_obj::ENTER_FRAME,this->onEnterFrame_dyn(),null(),null(),null());
	HX_STACK_LINE(50)
	::openfl::display::Bitmap bitmap = ::openfl::display::Bitmap_obj::__new(this->mBitmapData,null(),null());		HX_STACK_VAR(bitmap,"bitmap");
	HX_STACK_LINE(51)
	this->addChild(bitmap);
	HX_STACK_LINE(52)
	bitmap->set_x((int)15);
	HX_STACK_LINE(53)
	bitmap->set_y((int)40);
	HX_STACK_LINE(55)
	this->mCopyRight->set_x((int)15);
	HX_STACK_LINE(56)
	this->mCopyRight->set_y(5.);
	HX_STACK_LINE(57)
	this->mCopyRight->set_width((int)300);
	HX_STACK_LINE(58)
	this->mCopyRight->set_text(HX_CSTRING("Rectangle Packer"));
	HX_STACK_LINE(59)
	this->addChild(this->mCopyRight);
	HX_STACK_LINE(61)
	this->mText->set_x((int)280);
	HX_STACK_LINE(62)
	this->mText->set_y(5.);
	HX_STACK_LINE(63)
	this->mText->set_width((int)200);
	HX_STACK_LINE(64)
	this->addChild(this->mText);
	HX_STACK_LINE(66)
	::tools::ScalingBox _g = ::tools::ScalingBox_obj::__new((int)15,(int)40,(int)450,(int)410);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(66)
	this->mScalingBox = _g;
	HX_STACK_LINE(67)
	this->addChild(this->mScalingBox);
	HX_STACK_LINE(69)
	this->createRectangles();
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::createRectangles( ){
{
		HX_STACK_FRAME("Main","createRectangles",0xa6b83735,"Main.createRectangles","Main.hx",76,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		int width;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(78)
		int height;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(79)
			while((true)){
				HX_STACK_LINE(79)
				if ((!(((_g < (int)10))))){
					HX_STACK_LINE(79)
					break;
				}
				HX_STACK_LINE(79)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(81)
				Float _g1 = ::Math_obj::random();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(81)
				Float _g11 = (_g1 * (int)8);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(81)
				int _g2 = ::Math_obj::floor(_g11);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(81)
				Float _g3 = (_g2 * 2.0);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(81)
				Float _g4 = (_g3 * 2.0);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(81)
				Float _g5 = (40. + _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(81)
				int _g6 = ::Std_obj::_int(_g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(81)
				width = _g6;
				HX_STACK_LINE(82)
				Float _g7 = ::Math_obj::random();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(82)
				Float _g8 = (_g7 * (int)8);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(82)
				int _g9 = ::Math_obj::floor(_g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(82)
				Float _g10 = (_g9 * 2.0);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(82)
				Float _g111 = (_g10 * 2.0);		HX_STACK_VAR(_g111,"_g111");
				HX_STACK_LINE(82)
				Float _g12 = (40. + _g111);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(82)
				int _g13 = ::Std_obj::_int(_g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(82)
				height = _g13;
				HX_STACK_LINE(83)
				::openfl::geom::Rectangle _g14 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(83)
				this->mRectangles->push(_g14);
			}
		}
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			int _g = (int)10;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(86)
			while((true)){
				HX_STACK_LINE(86)
				if ((!(((_g < (int)500))))){
					HX_STACK_LINE(86)
					break;
				}
				HX_STACK_LINE(86)
				int j = (_g)++;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(88)
				Float _g15 = ::Math_obj::random();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(88)
				Float _g16 = (_g15 * (int)8);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(88)
				int _g17 = ::Math_obj::floor(_g16);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(88)
				Float _g18 = (_g17 * 2.0);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(88)
				Float _g19 = (6. + _g18);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(88)
				int _g20 = ::Std_obj::_int(_g19);		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(88)
				width = _g20;
				HX_STACK_LINE(89)
				Float _g21 = ::Math_obj::random();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(89)
				Float _g22 = (_g21 * (int)8);		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(89)
				int _g23 = ::Math_obj::floor(_g22);		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(89)
				Float _g24 = (_g23 * 2.0);		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(89)
				Float _g25 = (6. + _g24);		HX_STACK_VAR(_g25,"_g25");
				HX_STACK_LINE(89)
				int _g26 = ::Std_obj::_int(_g25);		HX_STACK_VAR(_g26,"_g26");
				HX_STACK_LINE(89)
				height = _g26;
				HX_STACK_LINE(90)
				::openfl::geom::Rectangle _g27 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(_g27,"_g27");
				HX_STACK_LINE(90)
				this->mRectangles->push(_g27);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,createRectangles,(void))

Void Main_obj::onAddedToStage( ::openfl::events::Event event){
{
		HX_STACK_FRAME("Main","onAddedToStage",0xc4fa9e97,"Main.onAddedToStage","Main.hx",95,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(96)
		this->updateRectangles();
		HX_STACK_LINE(97)
		this->get_stage()->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(98)
		this->get_stage()->set_align(::openfl::display::StageAlign_obj::TOP);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onAddedToStage,(void))

Void Main_obj::onEnterFrame( ::openfl::events::Event event){
{
		HX_STACK_FRAME("Main","onEnterFrame",0x016e4b29,"Main.onEnterFrame","Main.hx",102,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(104)
		int _g = this->mScalingBox->get_boxWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(104)
		int _g1 = this->mScalingBox->get_newBoxWidth();		HX_STACK_VAR(_g1,"_g1");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",104,0x087e5c05)
				{
					HX_STACK_LINE(104)
					int _g2 = __this->mScalingBox->get_boxHeight();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(104)
					int _g3 = __this->mScalingBox->get_newBoxHeight();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(104)
					return (_g2 != _g3);
				}
				return null();
			}
		};
		HX_STACK_LINE(104)
		if (((  ((!(((_g != _g1))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))){
			HX_STACK_LINE(106)
			this->updateRectangles();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onEnterFrame,(void))

Void Main_obj::updateRectangles( ){
{
		HX_STACK_FRAME("Main","updateRectangles",0xbb768882,"Main.updateRectangles","Main.hx",112,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		int start = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(114)
		int padding = (int)1;		HX_STACK_VAR(padding,"padding");
		HX_STACK_LINE(117)
		if (((this->mPacker == null()))){
			HX_STACK_LINE(119)
			int _g = this->mScalingBox->get_newBoxWidth();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(119)
			int _g1 = this->mScalingBox->get_newBoxHeight();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(119)
			::utils::RectanglePacker _g2 = ::utils::RectanglePacker_obj::__new(_g,_g1,padding);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(119)
			this->mPacker = _g2;
		}
		else{
			HX_STACK_LINE(123)
			int _g3 = this->mScalingBox->get_newBoxWidth();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(123)
			int _g4 = this->mScalingBox->get_newBoxHeight();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(123)
			this->mPacker->reset(_g3,_g4,padding);
		}
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(126)
			while((true)){
				HX_STACK_LINE(126)
				if ((!(((_g < (int)500))))){
					HX_STACK_LINE(126)
					break;
				}
				HX_STACK_LINE(126)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(128)
				int _g5 = ::Std_obj::_int(this->mRectangles->__get(i).StaticCast< ::openfl::geom::Rectangle >()->width);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(128)
				int _g6 = ::Std_obj::_int(this->mRectangles->__get(i).StaticCast< ::openfl::geom::Rectangle >()->height);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(128)
				this->mPacker->insertRectangle(_g5,_g6,i);
			}
		}
		HX_STACK_LINE(131)
		this->mPacker->packRectangles(null());
		HX_STACK_LINE(133)
		int end = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(end,"end");
		HX_STACK_LINE(135)
		int _g7 = this->mPacker->get_rectangleCount();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(135)
		if (((_g7 > (int)0))){
			HX_STACK_LINE(137)
			int _g8 = this->mPacker->get_rectangleCount();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(137)
			::String _g9 = (_g8 + HX_CSTRING(" rectangles packed in "));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(137)
			::String _g10 = (_g9 + ((end - start)));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(137)
			::String _g11 = (_g10 + HX_CSTRING("ms"));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(137)
			this->mText->set_text(_g11);
			HX_STACK_LINE(139)
			int _g12 = this->mScalingBox->get_newBoxWidth();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(139)
			int _g13 = this->mScalingBox->get_newBoxHeight();		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(139)
			this->mScalingBox->updateBox(_g12,_g13);
			HX_STACK_LINE(140)
			::openfl::geom::Rectangle _g14 = this->mBitmapData->get_rect();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(140)
			this->mBitmapData->fillRect(_g14,(int)-1);
			HX_STACK_LINE(141)
			::openfl::geom::Rectangle rect = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(142)
			{
				HX_STACK_LINE(142)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(142)
				int _g = this->mPacker->get_rectangleCount();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(142)
				while((true)){
					HX_STACK_LINE(142)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(142)
						break;
					}
					HX_STACK_LINE(142)
					int j = (_g1)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(144)
					::openfl::geom::Rectangle _g15 = this->mPacker->getRectangle(j,rect);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(144)
					rect = _g15;
					HX_STACK_LINE(145)
					::openfl::geom::Rectangle _g16 = ::openfl::geom::Rectangle_obj::__new(rect->x,rect->y,rect->width,rect->height);		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(145)
					this->mBitmapData->fillRect(_g16,(int)-16777216);
					HX_STACK_LINE(146)
					int index = this->mPacker->getRectangleId(j);		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(147)
					int color = ((int)-15263997 + (((((int(((int)18 * (hx::Mod(((index + (int)4)),(int)13)))) << int((int)16))) + ((int(((int)31 * (hx::Mod((index * (int)3),(int)8)))) << int((int)8)))) + ((int)63 * (hx::Mod((((index + (int)1)) * (int)3),(int)5))))));		HX_STACK_VAR(color,"color");
					HX_STACK_LINE(148)
					::openfl::geom::Rectangle _g17 = ::openfl::geom::Rectangle_obj::__new((rect->x + (int)1),(rect->y + (int)1),(rect->width - (int)2),(rect->height - (int)2));		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(148)
					this->mBitmapData->fillRect(_g17,color);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,updateRectangles,(void))

int Main_obj::WIDTH;

int Main_obj::HEIGHT;

int Main_obj::Y_MARGIN;

int Main_obj::BOX_MARGIN;

int Main_obj::RECTANGLE_COUNT;

Float Main_obj::SIZE_MULTIPLIER;


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(mBitmapData,"mBitmapData");
	HX_MARK_MEMBER_NAME(mCopyRight,"mCopyRight");
	HX_MARK_MEMBER_NAME(mText,"mText");
	HX_MARK_MEMBER_NAME(mPacker,"mPacker");
	HX_MARK_MEMBER_NAME(mScalingBox,"mScalingBox");
	HX_MARK_MEMBER_NAME(mRectangles,"mRectangles");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mBitmapData,"mBitmapData");
	HX_VISIT_MEMBER_NAME(mCopyRight,"mCopyRight");
	HX_VISIT_MEMBER_NAME(mText,"mText");
	HX_VISIT_MEMBER_NAME(mPacker,"mPacker");
	HX_VISIT_MEMBER_NAME(mScalingBox,"mScalingBox");
	HX_VISIT_MEMBER_NAME(mRectangles,"mRectangles");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mText") ) { return mText; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mPacker") ) { return mPacker; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mCopyRight") ) { return mCopyRight; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mBitmapData") ) { return mBitmapData; }
		if (HX_FIELD_EQ(inName,"mScalingBox") ) { return mScalingBox; }
		if (HX_FIELD_EQ(inName,"mRectangles") ) { return mRectangles; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onAddedToStage") ) { return onAddedToStage_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createRectangles") ) { return createRectangles_dyn(); }
		if (HX_FIELD_EQ(inName,"updateRectangles") ) { return updateRectangles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mText") ) { mText=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mPacker") ) { mPacker=inValue.Cast< ::utils::RectanglePacker >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mCopyRight") ) { mCopyRight=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mBitmapData") ) { mBitmapData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mScalingBox") ) { mScalingBox=inValue.Cast< ::tools::ScalingBox >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mRectangles") ) { mRectangles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mBitmapData"));
	outFields->push(HX_CSTRING("mCopyRight"));
	outFields->push(HX_CSTRING("mText"));
	outFields->push(HX_CSTRING("mPacker"));
	outFields->push(HX_CSTRING("mScalingBox"));
	outFields->push(HX_CSTRING("mRectangles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("WIDTH"),
	HX_CSTRING("HEIGHT"),
	HX_CSTRING("Y_MARGIN"),
	HX_CSTRING("BOX_MARGIN"),
	HX_CSTRING("RECTANGLE_COUNT"),
	HX_CSTRING("SIZE_MULTIPLIER"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Main_obj,mBitmapData),HX_CSTRING("mBitmapData")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,mCopyRight),HX_CSTRING("mCopyRight")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,mText),HX_CSTRING("mText")},
	{hx::fsObject /*::utils::RectanglePacker*/ ,(int)offsetof(Main_obj,mPacker),HX_CSTRING("mPacker")},
	{hx::fsObject /*::tools::ScalingBox*/ ,(int)offsetof(Main_obj,mScalingBox),HX_CSTRING("mScalingBox")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,mRectangles),HX_CSTRING("mRectangles")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mBitmapData"),
	HX_CSTRING("mCopyRight"),
	HX_CSTRING("mText"),
	HX_CSTRING("mPacker"),
	HX_CSTRING("mScalingBox"),
	HX_CSTRING("mRectangles"),
	HX_CSTRING("createRectangles"),
	HX_CSTRING("onAddedToStage"),
	HX_CSTRING("onEnterFrame"),
	HX_CSTRING("updateRectangles"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::WIDTH,"WIDTH");
	HX_MARK_MEMBER_NAME(Main_obj::HEIGHT,"HEIGHT");
	HX_MARK_MEMBER_NAME(Main_obj::Y_MARGIN,"Y_MARGIN");
	HX_MARK_MEMBER_NAME(Main_obj::BOX_MARGIN,"BOX_MARGIN");
	HX_MARK_MEMBER_NAME(Main_obj::RECTANGLE_COUNT,"RECTANGLE_COUNT");
	HX_MARK_MEMBER_NAME(Main_obj::SIZE_MULTIPLIER,"SIZE_MULTIPLIER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::WIDTH,"WIDTH");
	HX_VISIT_MEMBER_NAME(Main_obj::HEIGHT,"HEIGHT");
	HX_VISIT_MEMBER_NAME(Main_obj::Y_MARGIN,"Y_MARGIN");
	HX_VISIT_MEMBER_NAME(Main_obj::BOX_MARGIN,"BOX_MARGIN");
	HX_VISIT_MEMBER_NAME(Main_obj::RECTANGLE_COUNT,"RECTANGLE_COUNT");
	HX_VISIT_MEMBER_NAME(Main_obj::SIZE_MULTIPLIER,"SIZE_MULTIPLIER");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
	WIDTH= (int)480;
	HEIGHT= (int)480;
	Y_MARGIN= (int)40;
	BOX_MARGIN= (int)15;
	RECTANGLE_COUNT= (int)500;
	SIZE_MULTIPLIER= 2.0;
}

