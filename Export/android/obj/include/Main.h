#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS1(tools,ScalingBox)
HX_DECLARE_CLASS1(utils,RectanglePacker)


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Main"); }

		::openfl::display::BitmapData mBitmapData;
		::openfl::text::TextField mCopyRight;
		::openfl::text::TextField mText;
		::utils::RectanglePacker mPacker;
		::tools::ScalingBox mScalingBox;
		Array< ::Dynamic > mRectangles;
		virtual Void createRectangles( );
		Dynamic createRectangles_dyn();

		virtual Void onAddedToStage( ::openfl::events::Event event);
		Dynamic onAddedToStage_dyn();

		virtual Void onEnterFrame( ::openfl::events::Event event);
		Dynamic onEnterFrame_dyn();

		virtual Void updateRectangles( );
		Dynamic updateRectangles_dyn();

		static int WIDTH;
		static int HEIGHT;
		static int Y_MARGIN;
		static int BOX_MARGIN;
		static int RECTANGLE_COUNT;
		static Float SIZE_MULTIPLIER;
};


#endif /* INCLUDED_Main */ 
