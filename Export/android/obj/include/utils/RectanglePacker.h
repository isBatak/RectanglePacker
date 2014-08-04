#ifndef INCLUDED_utils_RectanglePacker
#define INCLUDED_utils_RectanglePacker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS1(utils,IntegerRectangle)
HX_DECLARE_CLASS1(utils,RectanglePacker)
HX_DECLARE_CLASS1(utils,SortableSize)
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  RectanglePacker_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RectanglePacker_obj OBJ_;
		RectanglePacker_obj();
		Void __construct(int width,int height,hx::Null< int >  __o_padding);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RectanglePacker_obj > __new(int width,int height,hx::Null< int >  __o_padding);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RectanglePacker_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RectanglePacker"); }

		int mWidth;
		int mHeight;
		int mPadding;
		int mPackedWidth;
		int mPackedHeight;
		Array< ::Dynamic > mInsertList;
		Array< ::Dynamic > mInsertedRectangles;
		Array< ::Dynamic > mFreeAreas;
		Array< ::Dynamic > mNewFreeAreas;
		::utils::IntegerRectangle mOutsideRectangle;
		Array< ::Dynamic > mSortableSizeStack;
		Array< ::Dynamic > mRectangleStack;
		virtual int get_rectangleCount( );
		Dynamic get_rectangleCount_dyn();

		virtual int get_packedWidth( );
		Dynamic get_packedWidth_dyn();

		virtual int get_packedHeight( );
		Dynamic get_packedHeight_dyn();

		virtual int get_padding( );
		Dynamic get_padding_dyn();

		virtual Void reset( int width,int height,hx::Null< int >  padding);
		Dynamic reset_dyn();

		virtual ::openfl::geom::Rectangle getRectangle( int index,::openfl::geom::Rectangle rectangle);
		Dynamic getRectangle_dyn();

		virtual int getRectangleId( int index);
		Dynamic getRectangleId_dyn();

		virtual Void insertRectangle( int width,int height,int id);
		Dynamic insertRectangle_dyn();

		virtual int packRectangles( hx::Null< bool >  sort);
		Dynamic packRectangles_dyn();

		virtual Void filterSelfSubAreas( Array< ::Dynamic > areas);
		Dynamic filterSelfSubAreas_dyn();

		virtual Void generateNewFreeAreas( ::utils::IntegerRectangle target,Array< ::Dynamic > areas,Array< ::Dynamic > results);
		Dynamic generateNewFreeAreas_dyn();

		virtual Void generateDividedAreas( ::utils::IntegerRectangle divider,::utils::IntegerRectangle area,Array< ::Dynamic > results);
		Dynamic generateDividedAreas_dyn();

		virtual int getFreeAreaIndex( int width,int height);
		Dynamic getFreeAreaIndex_dyn();

		virtual ::utils::IntegerRectangle allocateRectangle( int x,int y,int width,int height);
		Dynamic allocateRectangle_dyn();

		virtual Void freeRectangle( ::utils::IntegerRectangle rectangle);
		Dynamic freeRectangle_dyn();

		virtual ::utils::SortableSize allocateSize( int width,int height,int id);
		Dynamic allocateSize_dyn();

		virtual Void freeSize( ::utils::SortableSize size);
		Dynamic freeSize_dyn();

		static ::String VERSION;
};

} // end namespace utils

#endif /* INCLUDED_utils_RectanglePacker */ 
