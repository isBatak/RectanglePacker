#ifndef INCLUDED_utils_IntegerRectangle
#define INCLUDED_utils_IntegerRectangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(utils,IntegerRectangle)
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  IntegerRectangle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IntegerRectangle_obj OBJ_;
		IntegerRectangle_obj();
		Void __construct(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< IntegerRectangle_obj > __new(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IntegerRectangle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("IntegerRectangle"); }

		int x;
		int y;
		int width;
		int height;
		int right;
		int bottom;
		int id;
};

} // end namespace utils

#endif /* INCLUDED_utils_IntegerRectangle */ 
