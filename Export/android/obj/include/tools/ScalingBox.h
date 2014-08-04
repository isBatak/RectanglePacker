#ifndef INCLUDED_tools_ScalingBox
#define INCLUDED_tools_ScalingBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS1(tools,ScalingBox)
namespace tools{


class HXCPP_CLASS_ATTRIBUTES  ScalingBox_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef ScalingBox_obj OBJ_;
		ScalingBox_obj();
		Void __construct(int x,int y,int width,int height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ScalingBox_obj > __new(int x,int y,int width,int height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScalingBox_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ScalingBox"); }

		int mX;
		int mY;
		int mWidth;
		int mHeight;
		int mMaxWidth;
		int mMaxHeight;
		int mNewWidth;
		int mNewHeight;
		::openfl::display::Sprite mDragBox;
		bool mDragging;
		virtual int get_boxWidth( );
		Dynamic get_boxWidth_dyn();

		virtual int get_boxHeight( );
		Dynamic get_boxHeight_dyn();

		virtual int get_newBoxWidth( );
		Dynamic get_newBoxWidth_dyn();

		virtual int get_newBoxHeight( );
		Dynamic get_newBoxHeight_dyn();

		virtual Void updateBox( int width,int height);
		Dynamic updateBox_dyn();

		virtual Void onAddedToStage( ::openfl::events::Event event);
		Dynamic onAddedToStage_dyn();

		virtual Void onMouseUp( ::openfl::events::MouseEvent event);
		Dynamic onMouseUp_dyn();

		virtual Void onMouseMove( ::openfl::events::MouseEvent event);
		Dynamic onMouseMove_dyn();

		virtual Void onStartDrag( ::openfl::events::MouseEvent event);
		Dynamic onStartDrag_dyn();

};

} // end namespace tools

#endif /* INCLUDED_tools_ScalingBox */ 
