#ifndef INCLUDED_org_flashdevelop_cpp_debugger_IController
#define INCLUDED_org_flashdevelop_cpp_debugger_IController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,Command)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,IController)
HX_DECLARE_CLASS4(org,flashdevelop,cpp,debugger,Message)
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{


class HXCPP_CLASS_ATTRIBUTES  IController_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IController_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual ::org::flashdevelop::cpp::debugger::Command getNextCommand( )=0;
		Dynamic getNextCommand_dyn();
virtual Void acceptMessage( ::org::flashdevelop::cpp::debugger::Message message)=0;
		Dynamic acceptMessage_dyn();
};

#define DELEGATE_org_flashdevelop_cpp_debugger_IController \
virtual ::org::flashdevelop::cpp::debugger::Command getNextCommand( ) { return mDelegate->getNextCommand();}  \
virtual Dynamic getNextCommand_dyn() { return mDelegate->getNextCommand_dyn();}  \
virtual Void acceptMessage( ::org::flashdevelop::cpp::debugger::Message message) { return mDelegate->acceptMessage(message);}  \
virtual Dynamic acceptMessage_dyn() { return mDelegate->acceptMessage_dyn();}  \


template<typename IMPL>
class IController_delegate_ : public IController_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IController_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_flashdevelop_cpp_debugger_IController
};

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger

#endif /* INCLUDED_org_flashdevelop_cpp_debugger_IController */ 
