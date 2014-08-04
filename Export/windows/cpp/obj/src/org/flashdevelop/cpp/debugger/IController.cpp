#include <hxcpp.h>

#ifndef INCLUDED_org_flashdevelop_cpp_debugger_Command
#include <org/flashdevelop/cpp/debugger/Command.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_IController
#include <org/flashdevelop/cpp/debugger/IController.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_Message
#include <org/flashdevelop/cpp/debugger/Message.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{

HX_DEFINE_DYNAMIC_FUNC0(IController_obj,getNextCommand,return )

HX_DEFINE_DYNAMIC_FUNC1(IController_obj,acceptMessage,)


static ::String sMemberFields[] = {
	HX_CSTRING("getNextCommand"),
	HX_CSTRING("acceptMessage"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IController_obj::__mClass,"__mClass");
};

#endif

Class IController_obj::__mClass;

void IController_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger.IController"), hx::TCanCast< IController_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void IController_obj::__boot()
{
}

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
