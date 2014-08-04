#ifndef INCLUDED_cpp_vm_Deque
#define INCLUDED_cpp_vm_Deque

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Deque)
namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES  Deque_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Deque_obj OBJ_;
		Deque_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Deque_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Deque_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Deque"); }

		Dynamic q;
		virtual Void push( Dynamic i);
		Dynamic push_dyn();

		virtual Dynamic pop( bool block);
		Dynamic pop_dyn();

};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_Deque */ 
