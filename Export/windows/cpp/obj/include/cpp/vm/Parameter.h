#ifndef INCLUDED_cpp_vm_Parameter
#define INCLUDED_cpp_vm_Parameter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Parameter)
namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES  Parameter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Parameter_obj OBJ_;
		Parameter_obj();
		Void __construct(::String name,Dynamic value);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Parameter_obj > __new(::String name,Dynamic value);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Parameter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Parameter"); }

		::String name;
		Dynamic value;
};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_Parameter */ 
