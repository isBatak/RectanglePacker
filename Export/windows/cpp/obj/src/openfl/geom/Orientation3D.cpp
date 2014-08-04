#include <hxcpp.h>

#ifndef INCLUDED_openfl_geom_Orientation3D
#include <openfl/geom/Orientation3D.h>
#endif
namespace openfl{
namespace geom{

::openfl::geom::Orientation3D Orientation3D_obj::AXIS_ANGLE;

::openfl::geom::Orientation3D Orientation3D_obj::EULER_ANGLES;

::openfl::geom::Orientation3D Orientation3D_obj::QUATERNION;

HX_DEFINE_CREATE_ENUM(Orientation3D_obj)

int Orientation3D_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("AXIS_ANGLE")) return 0;
	if (inName==HX_CSTRING("EULER_ANGLES")) return 1;
	if (inName==HX_CSTRING("QUATERNION")) return 2;
	return super::__FindIndex(inName);
}

int Orientation3D_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("AXIS_ANGLE")) return 0;
	if (inName==HX_CSTRING("EULER_ANGLES")) return 0;
	if (inName==HX_CSTRING("QUATERNION")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Orientation3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("AXIS_ANGLE")) return AXIS_ANGLE;
	if (inName==HX_CSTRING("EULER_ANGLES")) return EULER_ANGLES;
	if (inName==HX_CSTRING("QUATERNION")) return QUATERNION;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("AXIS_ANGLE"),
	HX_CSTRING("EULER_ANGLES"),
	HX_CSTRING("QUATERNION"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Orientation3D_obj::AXIS_ANGLE,"AXIS_ANGLE");
	HX_MARK_MEMBER_NAME(Orientation3D_obj::EULER_ANGLES,"EULER_ANGLES");
	HX_MARK_MEMBER_NAME(Orientation3D_obj::QUATERNION,"QUATERNION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Orientation3D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Orientation3D_obj::AXIS_ANGLE,"AXIS_ANGLE");
	HX_VISIT_MEMBER_NAME(Orientation3D_obj::EULER_ANGLES,"EULER_ANGLES");
	HX_VISIT_MEMBER_NAME(Orientation3D_obj::QUATERNION,"QUATERNION");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Orientation3D_obj::__mClass;

Dynamic __Create_Orientation3D_obj() { return new Orientation3D_obj; }

void Orientation3D_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.geom.Orientation3D"), hx::TCanCast< Orientation3D_obj >,sStaticFields,sMemberFields,
	&__Create_Orientation3D_obj, &__Create,
	&super::__SGetClass(), &CreateOrientation3D_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Orientation3D_obj::__boot()
{
hx::Static(AXIS_ANGLE) = hx::CreateEnum< Orientation3D_obj >(HX_CSTRING("AXIS_ANGLE"),0);
hx::Static(EULER_ANGLES) = hx::CreateEnum< Orientation3D_obj >(HX_CSTRING("EULER_ANGLES"),1);
hx::Static(QUATERNION) = hx::CreateEnum< Orientation3D_obj >(HX_CSTRING("QUATERNION"),2);
}


} // end namespace openfl
} // end namespace geom
