#ifndef INCLUDED_cpp_vm_StackFrame
#define INCLUDED_cpp_vm_StackFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Parameter)
HX_DECLARE_CLASS2(cpp,vm,StackFrame)
namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES  StackFrame_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StackFrame_obj OBJ_;
		StackFrame_obj();
		Void __construct(::String fileName,int lineNumber,::String className,::String functionName);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StackFrame_obj > __new(::String fileName,int lineNumber,::String className,::String functionName);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StackFrame_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("StackFrame"); }

		::String fileName;
		int lineNumber;
		::String className;
		::String functionName;
		Array< ::Dynamic > parameters;
};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_StackFrame */ 
