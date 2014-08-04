#ifndef INCLUDED_utils_SortableSize
#define INCLUDED_utils_SortableSize

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(utils,SortableSize)
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  SortableSize_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SortableSize_obj OBJ_;
		SortableSize_obj();
		Void __construct(int width,int height,int id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SortableSize_obj > __new(int width,int height,int id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SortableSize_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SortableSize"); }

		int width;
		int height;
		int id;
};

} // end namespace utils

#endif /* INCLUDED_utils_SortableSize */ 
