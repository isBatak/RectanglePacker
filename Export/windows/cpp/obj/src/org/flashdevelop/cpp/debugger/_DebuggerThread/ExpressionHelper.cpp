#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_cpp_vm_Debugger
#include <cpp/vm/Debugger.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_DebuggerVariables
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/DebuggerVariables.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ElementEnum
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/ElementEnum.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ElementException
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/ElementException.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ElementParser
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/ElementParser.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ExpressionEnum
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/ExpressionEnum.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_ExpressionHelper
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/ExpressionHelper.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{
namespace _DebuggerThread{

Void ExpressionHelper_obj::__construct()
{
	return null();
}

//ExpressionHelper_obj::~ExpressionHelper_obj() { }

Dynamic ExpressionHelper_obj::__CreateEmpty() { return  new ExpressionHelper_obj; }
hx::ObjectPtr< ExpressionHelper_obj > ExpressionHelper_obj::__new()
{  hx::ObjectPtr< ExpressionHelper_obj > result = new ExpressionHelper_obj();
	result->__construct();
	return result;}

Dynamic ExpressionHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExpressionHelper_obj > result = new ExpressionHelper_obj();
	result->__construct();
	return result;}

Dynamic ExpressionHelper_obj::getValue( ::String str,Dynamic varSrc){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper","getValue",0x1d6c2cf4,"org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper.getValue","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1612,0xe680eae8)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(varSrc,"varSrc")
	HX_STACK_LINE(1612)
	try
	{
	HX_STACK_CATCHABLE(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException, 0);
	{
		HX_STACK_LINE(1613)
		::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum parsed = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementParser_obj::parse(str,(int)0);		HX_STACK_VAR(parsed,"parsed");
		HX_STACK_LINE(1614)
		return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::getElementValue(parsed,varSrc);
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException >() ){
			HX_STACK_BEGIN_CATCH
			::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException e = __e;{
				HX_STACK_LINE(1617)
				::String _g = str.substr((int)0,e->begin);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1617)
				::String _g1 = ((e->reason + HX_CSTRING(": ")) + _g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1617)
				::String _g2 = (_g1 + HX_CSTRING(" -> "));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1618)
				::String _g3 = str.substr(e->begin,(e->end + (int)1));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1617)
				::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1617)
				::String _g5 = (_g4 + HX_CSTRING(" <- "));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(1619)
				::String _g6 = str.substr((e->end + (int)1),null());		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(1617)
				HX_STACK_DO_THROW((_g5 + _g6));
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(1612)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExpressionHelper_obj,getValue,return )

Dynamic ExpressionHelper_obj::setValue( ::String lhs,::String rhs,Dynamic varSrc){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper","setValue",0xcbc98668,"org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper.setValue","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1625,0xe680eae8)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_ARG(varSrc,"varSrc")
	HX_STACK_LINE(1626)
	::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum lhs_element;		HX_STACK_VAR(lhs_element,"lhs_element");
	HX_STACK_LINE(1628)
	try
	{
	HX_STACK_CATCHABLE(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException, 0);
	{
		HX_STACK_LINE(1629)
		::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum _g = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementParser_obj::parse(lhs,(int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1629)
		lhs_element = _g;
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException >() ){
			HX_STACK_BEGIN_CATCH
			::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException e = __e;{
				HX_STACK_LINE(1632)
				::String _g1 = lhs.substr((int)0,e->begin);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1632)
				::String _g2 = ((e->reason + HX_CSTRING(": ")) + _g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1632)
				::String _g3 = (_g2 + HX_CSTRING(" -> "));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1633)
				::String _g4 = lhs.substr(e->begin,(e->end + (int)1));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1632)
				::String _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(1632)
				::String _g6 = (_g5 + HX_CSTRING(" <- "));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(1634)
				::String _g7 = lhs.substr((e->end + (int)1),null());		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(1632)
				HX_STACK_DO_THROW((_g6 + _g7));
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(1637)
	::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum lhs_expr = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::getExpression(lhs_element,varSrc);		HX_STACK_VAR(lhs_expr,"lhs_expr");
	HX_STACK_LINE(1639)
	Dynamic rhs_value = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::getValue(rhs,varSrc);		HX_STACK_VAR(rhs_value,"rhs_value");
	HX_STACK_LINE(1641)
	switch( (int)(lhs_expr->__Index())){
		case (int)0: {
			HX_STACK_LINE(1641)
			Dynamic value = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum(lhs_expr))->__Param(0);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(1643)
			HX_STACK_DO_THROW(HX_CSTRING("Cannot set value"));
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(1641)
			::String field = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum(lhs_expr))->__Param(1);		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(1641)
			Dynamic value = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum(lhs_expr))->__Param(0);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(1645)
			if (((value != null()))){
				HX_STACK_LINE(1645)
				value->__SetField(field,rhs_value,true);
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1641)
			::String field = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum(lhs_expr))->__Param(1);		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(1641)
			Dynamic value = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum(lhs_expr))->__Param(0);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(1647)
			if (((value != null()))){
				HX_STACK_LINE(1647)
				value->__SetField(field,rhs_value,false);
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(1641)
			::String field = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum(lhs_expr))->__Param(0);		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(1649)
			varSrc->__Field(HX_CSTRING("dbgVars"),true)->__Field(HX_CSTRING("set"),true)(field,rhs_value);
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(1651)
			HX_STACK_DO_THROW(HX_CSTRING("Cannot assign a value to $"));
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(1641)
			int index = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum(lhs_expr))->__Param(1);		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(1641)
			Dynamic value = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum(lhs_expr))->__Param(0);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(1652)
			{
				HX_STACK_LINE(1653)
				Dynamic arr = value;		HX_STACK_VAR(arr,"arr");
				HX_STACK_LINE(1654)
				hx::IndexRef((arr).mPtr,index) = rhs_value;
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(1641)
			::String name = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum(lhs_expr))->__Param(0);		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(1656)
			return ::cpp::vm::Debugger_obj::setStackVariableValue(varSrc->__Field(HX_CSTRING("threadNumber"),true),varSrc->__Field(HX_CSTRING("stackFrame"),true),name,rhs_value,varSrc->__Field(HX_CSTRING("unsafe"),true));
		}
		;break;
	}
	HX_STACK_LINE(1661)
	return rhs_value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExpressionHelper_obj,setValue,return )

Dynamic ExpressionHelper_obj::getElementValue( ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum e,Dynamic varSrc){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper","getElementValue",0x2e8eaff2,"org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper.getElementValue","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1667,0xe680eae8)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(varSrc,"varSrc")
	HX_STACK_LINE(1668)
	::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum expr = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::getExpression(e,varSrc);		HX_STACK_VAR(expr,"expr");
	HX_STACK_LINE(1670)
	switch( (int)(expr->__Index())){
		case (int)0: {
			HX_STACK_LINE(1670)
			Dynamic value = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum(expr))->__Param(0);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(1672)
			return value;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(1670)
			::String field = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum(expr))->__Param(1);		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(1670)
			Dynamic value = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum(expr))->__Param(0);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(1674)
			return (  (((value == null()))) ? Dynamic(null()) : Dynamic(value->__Field(field,true)) );
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1670)
			::String field = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum(expr))->__Param(1);		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(1670)
			Dynamic value = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum(expr))->__Param(0);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(1676)
			return ::Reflect_obj::field(value,field);
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(1670)
			::String field = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum(expr))->__Param(0);		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(1677)
			{
				HX_STACK_LINE(1678)
				Dynamic value = varSrc->__Field(HX_CSTRING("dbgVars"),true)->__Field(HX_CSTRING("get"),true)(field);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(1679)
				if (((value == null()))){
					HX_STACK_LINE(1680)
					HX_STACK_DO_THROW((HX_CSTRING("No such debugger variable $.") + field));
				}
				HX_STACK_LINE(1682)
				return value;
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(1684)
			return varSrc->__Field(HX_CSTRING("dbgVars"),true);
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(1670)
			int index = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum(expr))->__Param(1);		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(1670)
			Dynamic value = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum(expr))->__Param(0);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(1685)
			{
				HX_STACK_LINE(1686)
				Dynamic arr = value;		HX_STACK_VAR(arr,"arr");
				HX_STACK_LINE(1687)
				if (((index >= arr->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(1688)
					HX_STACK_DO_THROW(HX_CSTRING("Out-of-bounds array reference"));
				}
				HX_STACK_LINE(1690)
				return arr->__GetItem(index);
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(1670)
			::String name = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum(expr))->__Param(0);		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(1692)
			return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::getStackValue(name,varSrc);
		}
		;break;
	}
	HX_STACK_LINE(1670)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExpressionHelper_obj,getElementValue,return )

::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum ExpressionHelper_obj::getExpression( ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum e,Dynamic varSrc){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper","getExpression",0x18388935,"org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper.getExpression","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1702,0xe680eae8)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(varSrc,"varSrc")
	HX_STACK_LINE(1702)
	switch( (int)(e->__Index())){
		case (int)0: {
			HX_STACK_LINE(1702)
			int value_end = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(2);		HX_STACK_VAR(value_end,"value_end");
			HX_STACK_LINE(1702)
			int value_begin = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(1);		HX_STACK_VAR(value_begin,"value_begin");
			HX_STACK_LINE(1702)
			::String value = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(0);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(1703)
			{
				HX_STACK_LINE(1705)
				Dynamic _g = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::resolveValue(value,varSrc);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1705)
				return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum_obj::Value(_g);
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(1702)
			Array< ::Dynamic > array = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(0);		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(1707)
			{
				HX_STACK_LINE(1709)
				Dynamic arr = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(arr,"arr");
				HX_STACK_LINE(1710)
				{
					HX_STACK_LINE(1710)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1710)
					while((true)){
						HX_STACK_LINE(1710)
						if ((!(((_g < array->length))))){
							HX_STACK_LINE(1710)
							break;
						}
						HX_STACK_LINE(1710)
						::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum element = array->__get(_g).StaticCast< ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum >();		HX_STACK_VAR(element,"element");
						HX_STACK_LINE(1710)
						++(_g);
						HX_STACK_LINE(1712)
						Dynamic _g1 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::getElementValue(element,varSrc);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1712)
						arr->__Field(HX_CSTRING("push"),true)(_g1);
					}
				}
				HX_STACK_LINE(1715)
				return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum_obj::Value(arr);
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1702)
			int field_end = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(3);		HX_STACK_VAR(field_end,"field_end");
			HX_STACK_LINE(1702)
			int field_begin = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(2);		HX_STACK_VAR(field_begin,"field_begin");
			HX_STACK_LINE(1702)
			::String field = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(1);		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(1702)
			::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum element = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(0);		HX_STACK_VAR(element,"element");
			HX_STACK_LINE(1717)
			{
				HX_STACK_LINE(1720)
				Dynamic _g2 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::getElementValue(element,varSrc);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1720)
				return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum_obj::FieldRef(_g2,field);
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(1702)
			int field_end = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(2);		HX_STACK_VAR(field_end,"field_end");
			HX_STACK_LINE(1702)
			int field_begin = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(1);		HX_STACK_VAR(field_begin,"field_begin");
			HX_STACK_LINE(1702)
			::String field = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(0);		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(1724)
			return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum_obj::DebuggerFieldRef(field);
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(1727)
			return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum_obj::DebuggerFields;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(1702)
			::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum index = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(1);		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(1702)
			::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum element = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(0);		HX_STACK_VAR(element,"element");
			HX_STACK_LINE(1729)
			{
				HX_STACK_LINE(1731)
				Dynamic array = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::getElementValue(element,varSrc);		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(1732)
				Dynamic indexValue = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::getElementValue(index,varSrc);		HX_STACK_VAR(indexValue,"indexValue");
				HX_STACK_LINE(1733)
				{
					HX_STACK_LINE(1733)
					::ValueType _g = ::Type_obj::_typeof(indexValue);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1733)
					switch( (int)(_g->__Index())){
						case (int)1: {
							HX_STACK_LINE(1738)
							Dynamic _g3 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::getElementValue(element,varSrc);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(1737)
							return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum_obj::ArrayRef(_g3,indexValue);
						}
						;break;
						default: {
							HX_STACK_LINE(1740)
							HX_STACK_DO_THROW(HX_CSTRING("Non-integer array index"));
						}
					}
				}
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(1702)
			Array< ::Dynamic > parameters = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(1);		HX_STACK_VAR(parameters,"parameters");
			HX_STACK_LINE(1702)
			::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum element = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(0);		HX_STACK_VAR(element,"element");
			HX_STACK_LINE(1743)
			{
				HX_STACK_LINE(1745)
				Dynamic o = null();		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1747)
				Dynamic func = null();		HX_STACK_VAR(func,"func");
				HX_STACK_LINE(1748)
				switch( (int)(element->__Index())){
					case (int)0: {
						HX_STACK_LINE(1748)
						int value_end = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(2);		HX_STACK_VAR(value_end,"value_end");
						HX_STACK_LINE(1748)
						int value_begin = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(1);		HX_STACK_VAR(value_begin,"value_begin");
						HX_STACK_LINE(1748)
						::String value = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(0);		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(1750)
						HX_STACK_DO_THROW(HX_CSTRING("Cannot call a function on a value"));
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(1748)
						Array< ::Dynamic > array = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(0);		HX_STACK_VAR(array,"array");
						HX_STACK_LINE(1752)
						HX_STACK_DO_THROW(HX_CSTRING("Cannot call a function on an array"));
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(1748)
						int field_end = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(3);		HX_STACK_VAR(field_end,"field_end");
						HX_STACK_LINE(1748)
						int field_begin = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(2);		HX_STACK_VAR(field_begin,"field_begin");
						HX_STACK_LINE(1748)
						::String field = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(1);		HX_STACK_VAR(field,"field");
						HX_STACK_LINE(1748)
						::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum inner_element = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(0);		HX_STACK_VAR(inner_element,"inner_element");
						HX_STACK_LINE(1753)
						{
							HX_STACK_LINE(1758)
							Dynamic _g4 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::getElementValue(inner_element,varSrc);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(1758)
							o = _g4;
							HX_STACK_LINE(1759)
							Dynamic _g5;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(1759)
							_g5 = (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(field,true)) );
							HX_STACK_LINE(1759)
							func = _g5;
						}
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(1748)
						int field_end = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(2);		HX_STACK_VAR(field_end,"field_end");
						HX_STACK_LINE(1748)
						int field_begin = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(1);		HX_STACK_VAR(field_begin,"field_begin");
						HX_STACK_LINE(1748)
						::String field = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(0);		HX_STACK_VAR(field,"field");
						HX_STACK_LINE(1760)
						{
							HX_STACK_LINE(1763)
							Dynamic _g6 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::getElementValue(element,varSrc);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(1763)
							func = _g6;
						}
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(1765)
						HX_STACK_DO_THROW(HX_CSTRING("Cannot call a function on $"));
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(1748)
						::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum index = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(1);		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(1748)
						::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum inner_element = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(0);		HX_STACK_VAR(inner_element,"inner_element");
						HX_STACK_LINE(1766)
						{
							HX_STACK_LINE(1769)
							Dynamic _g7 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::getElementValue(element,varSrc);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(1769)
							func = _g7;
						}
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(1748)
						Array< ::Dynamic > inner_parameters = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(1);		HX_STACK_VAR(inner_parameters,"inner_parameters");
						HX_STACK_LINE(1748)
						::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum inner_element = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(0);		HX_STACK_VAR(inner_element,"inner_element");
						HX_STACK_LINE(1770)
						{
							HX_STACK_LINE(1773)
							Dynamic _g8 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::getElementValue(element,varSrc);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(1773)
							func = _g8;
						}
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(1748)
						int class_name_end = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(3);		HX_STACK_VAR(class_name_end,"class_name_end");
						HX_STACK_LINE(1748)
						int class_name_begin = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(2);		HX_STACK_VAR(class_name_begin,"class_name_begin");
						HX_STACK_LINE(1748)
						Array< ::Dynamic > parameters1 = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(1);		HX_STACK_VAR(parameters1,"parameters1");
						HX_STACK_LINE(1748)
						::String class_name = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(0);		HX_STACK_VAR(class_name,"class_name");
						HX_STACK_LINE(1778)
						HX_STACK_DO_THROW(HX_CSTRING("Cannot call a function on a constructed object"));
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(1748)
						int path_end = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(2);		HX_STACK_VAR(path_end,"path_end");
						HX_STACK_LINE(1748)
						int path_begin = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(1);		HX_STACK_VAR(path_begin,"path_begin");
						HX_STACK_LINE(1748)
						::String path = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(element))->__Param(0);		HX_STACK_VAR(path,"path");
						HX_STACK_LINE(1779)
						{
							HX_STACK_LINE(1780)
							Dynamic _g9 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::getElementValue(element,varSrc);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(1780)
							func = _g9;
						}
					}
					;break;
				}
				HX_STACK_LINE(1782)
				if (((  ((!(((func == null()))))) ? bool(!(::Reflect_obj::isFunction(func))) : bool(true) ))){
					HX_STACK_LINE(1783)
					HX_STACK_DO_THROW(HX_CSTRING("No such function"));
				}
				HX_STACK_LINE(1786)
				Dynamic args = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(args,"args");
				HX_STACK_LINE(1787)
				{
					HX_STACK_LINE(1787)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1787)
					while((true)){
						HX_STACK_LINE(1787)
						if ((!(((_g < parameters->length))))){
							HX_STACK_LINE(1787)
							break;
						}
						HX_STACK_LINE(1787)
						::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum p = parameters->__get(_g).StaticCast< ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum >();		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(1787)
						++(_g);
						HX_STACK_LINE(1788)
						Dynamic _g10 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::getElementValue(p,varSrc);		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(1788)
						args->__Field(HX_CSTRING("push"),true)(_g10);
					}
				}
				HX_STACK_LINE(1790)
				Dynamic _g11 = ::Reflect_obj::callMethod(o,func,args);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1790)
				return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum_obj::Value(_g11);
			}
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(1702)
			int class_name_end = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(3);		HX_STACK_VAR(class_name_end,"class_name_end");
			HX_STACK_LINE(1702)
			int class_name_begin = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(2);		HX_STACK_VAR(class_name_begin,"class_name_begin");
			HX_STACK_LINE(1702)
			Array< ::Dynamic > parameters = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(1);		HX_STACK_VAR(parameters,"parameters");
			HX_STACK_LINE(1702)
			::String class_name = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(0);		HX_STACK_VAR(class_name,"class_name");
			HX_STACK_LINE(1792)
			{
				HX_STACK_LINE(1794)
				::Class klass = ::Type_obj::resolveClass(class_name);		HX_STACK_VAR(klass,"klass");
				HX_STACK_LINE(1795)
				if (((klass == null()))){
					HX_STACK_LINE(1796)
					HX_STACK_DO_THROW((HX_CSTRING("Cannot resolve class ") + class_name));
				}
				HX_STACK_LINE(1798)
				Dynamic args = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(args,"args");
				HX_STACK_LINE(1799)
				{
					HX_STACK_LINE(1799)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1799)
					while((true)){
						HX_STACK_LINE(1799)
						if ((!(((_g < parameters->length))))){
							HX_STACK_LINE(1799)
							break;
						}
						HX_STACK_LINE(1799)
						::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum p = parameters->__get(_g).StaticCast< ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum >();		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(1799)
						++(_g);
						HX_STACK_LINE(1800)
						Dynamic _g12 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::getElementValue(p,varSrc);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(1800)
						args->__Field(HX_CSTRING("push"),true)(_g12);
					}
				}
				HX_STACK_LINE(1802)
				Dynamic _g13 = ::Type_obj::createInstance(klass,args);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(1802)
				return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum_obj::Value(_g13);
			}
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(1702)
			int path_end = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(2);		HX_STACK_VAR(path_end,"path_end");
			HX_STACK_LINE(1702)
			int path_begin = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(1);		HX_STACK_VAR(path_begin,"path_begin");
			HX_STACK_LINE(1702)
			::String path = (::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum(e))->__Param(0);		HX_STACK_VAR(path,"path");
			HX_STACK_LINE(1805)
			return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::resolvePath(path,varSrc);
		}
		;break;
	}
	HX_STACK_LINE(1702)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExpressionHelper_obj,getExpression,return )

Dynamic ExpressionHelper_obj::getStackValue( ::String name,Dynamic varSrc){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper","getStackValue",0x2e709aa6,"org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper.getStackValue","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1811,0xe680eae8)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(varSrc,"varSrc")
	HX_STACK_LINE(1812)
	Dynamic value = ::cpp::vm::Debugger_obj::getStackVariableValue(varSrc->__Field(HX_CSTRING("threadNumber"),true),varSrc->__Field(HX_CSTRING("stackFrame"),true),name,varSrc->__Field(HX_CSTRING("unsafe"),true));		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(1815)
	if (((value == ::cpp::vm::Debugger_obj::THREAD_NOT_STOPPED))){
		HX_STACK_LINE(1816)
		HX_STACK_DO_THROW(value);
	}
	HX_STACK_LINE(1819)
	if (((value == ::cpp::vm::Debugger_obj::NONEXISTENT_VALUE))){
		HX_STACK_LINE(1820)
		HX_STACK_DO_THROW(value);
	}
	HX_STACK_LINE(1823)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExpressionHelper_obj,getStackValue,return )

::String ExpressionHelper_obj::join( Array< ::String > arr,::String sep,int begin,int end){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper","join",0x98cb2163,"org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper.join","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1828,0xe680eae8)
	HX_STACK_ARG(arr,"arr")
	HX_STACK_ARG(sep,"sep")
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(1829)
	::String ret = HX_CSTRING("");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1831)
	{
		HX_STACK_LINE(1831)
		int _g = begin;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1831)
		while((true)){
			HX_STACK_LINE(1831)
			if ((!(((_g < end))))){
				HX_STACK_LINE(1831)
				break;
			}
			HX_STACK_LINE(1831)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1832)
			hx::AddEq(ret,(arr->__get(i) + sep));
		}
	}
	HX_STACK_LINE(1835)
	if (((end < arr->length))){
		HX_STACK_LINE(1836)
		hx::AddEq(ret,arr->__get(end));
	}
	HX_STACK_LINE(1839)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ExpressionHelper_obj,join,return )

::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum ExpressionHelper_obj::resolvePath( ::String path,Dynamic varSrc){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper","resolvePath",0x9646ae58,"org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper.resolvePath","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1848,0xe680eae8)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(varSrc,"varSrc")
	HX_STACK_LINE(1849)
	Array< ::String > arr = path.split(HX_CSTRING("."));		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(1854)
	if (((arr->__get((int)0) == HX_CSTRING("$")))){
		HX_STACK_LINE(1855)
		if (((arr->length == (int)1))){
			HX_STACK_LINE(1856)
			return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum_obj::DebuggerFields;
		}
		HX_STACK_LINE(1858)
		if (((arr->length == (int)2))){
			HX_STACK_LINE(1859)
			return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum_obj::DebuggerFieldRef(arr->__get((int)1));
		}
		HX_STACK_LINE(1861)
		Dynamic value = varSrc->__Field(HX_CSTRING("dbgVars"),true)->__Field(HX_CSTRING("get"),true)(arr->__get((int)1));		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(1862)
		if (((value == null()))){
			HX_STACK_LINE(1863)
			HX_STACK_DO_THROW(HX_CSTRING("No value"));
		}
		HX_STACK_LINE(1865)
		::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum result = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::resolveField(value,arr,(int)2);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(1866)
		if (((result == null()))){
			HX_STACK_LINE(1867)
			HX_STACK_DO_THROW((HX_CSTRING("No value ") + path));
		}
		HX_STACK_LINE(1869)
		return result;
	}
	HX_STACK_LINE(1874)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(1875)
		Dynamic _g = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::resolveConstant(path);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1875)
		return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum_obj::Value(_g);
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(1883)
	{
		HX_STACK_LINE(1883)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1883)
		int _g = arr->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1883)
		while((true)){
			HX_STACK_LINE(1883)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(1883)
				break;
			}
			HX_STACK_LINE(1883)
			int index = (_g1)++;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(1884)
			::String _g11 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::join(arr,HX_CSTRING("."),(int)0,index);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1884)
			::Class klass = ::Type_obj::resolveClass(_g11);		HX_STACK_VAR(klass,"klass");
			HX_STACK_LINE(1885)
			if (((klass == null()))){
				HX_STACK_LINE(1886)
				continue;
			}
			HX_STACK_LINE(1888)
			if (((index == (arr->length - (int)1)))){
				HX_STACK_LINE(1890)
				return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum_obj::Value(klass);
			}
			HX_STACK_LINE(1893)
			::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum result = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::resolveField(klass,arr,(index + (int)1));		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(1894)
			if (((result != null()))){
				HX_STACK_LINE(1895)
				return result;
			}
		}
	}
	HX_STACK_LINE(1900)
	Dynamic value = ::cpp::vm::Debugger_obj::getStackVariableValue(varSrc->__Field(HX_CSTRING("threadNumber"),true),varSrc->__Field(HX_CSTRING("stackFrame"),true),arr->__get((int)0),varSrc->__Field(HX_CSTRING("unsafe"),true));		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(1904)
	if (((value == ::cpp::vm::Debugger_obj::THREAD_NOT_STOPPED))){
		HX_STACK_LINE(1905)
		HX_STACK_DO_THROW(value);
	}
	HX_STACK_LINE(1908)
	if (((value == ::cpp::vm::Debugger_obj::NONEXISTENT_VALUE))){
		HX_STACK_LINE(1910)
		Dynamic _g2 = ::cpp::vm::Debugger_obj::getStackVariableValue(varSrc->__Field(HX_CSTRING("threadNumber"),true),varSrc->__Field(HX_CSTRING("stackFrame"),true),HX_CSTRING("this"),varSrc->__Field(HX_CSTRING("unsafe"),true));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1910)
		value = _g2;
		HX_STACK_LINE(1913)
		if (((value == ::cpp::vm::Debugger_obj::THREAD_NOT_STOPPED))){
			HX_STACK_LINE(1914)
			HX_STACK_DO_THROW(value);
		}
		else{
			HX_STACK_LINE(1916)
			if (((value == ::cpp::vm::Debugger_obj::NONEXISTENT_VALUE))){
				HX_STACK_LINE(1917)
				HX_STACK_DO_THROW(value);
			}
		}
		HX_STACK_LINE(1920)
		if (((value == null()))){
			HX_STACK_LINE(1921)
			HX_STACK_DO_THROW((HX_CSTRING("Null dereference ") + arr->__get((int)0)));
		}
		HX_STACK_LINE(1924)
		::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum result = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::resolveField(value,arr,(int)0);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(1926)
		if (((result == null()))){
			HX_STACK_LINE(1927)
			HX_STACK_DO_THROW((HX_CSTRING("No value ") + path));
		}
		HX_STACK_LINE(1930)
		return result;
	}
	else{
		HX_STACK_LINE(1935)
		if (((arr->length == (int)1))){
			HX_STACK_LINE(1936)
			return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum_obj::StackRef(arr->__get((int)0));
		}
		HX_STACK_LINE(1939)
		if (((value == null()))){
			HX_STACK_LINE(1940)
			HX_STACK_DO_THROW((HX_CSTRING("Null dereference ") + arr->__get((int)0)));
		}
		HX_STACK_LINE(1943)
		::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum result = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::resolveField(value,arr,(int)1);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(1945)
		if (((result == null()))){
			HX_STACK_LINE(1946)
			HX_STACK_DO_THROW((HX_CSTRING("No value ") + path));
		}
		HX_STACK_LINE(1949)
		return result;
	}
	HX_STACK_LINE(1908)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExpressionHelper_obj,resolvePath,return )

::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum ExpressionHelper_obj::resolveField( Dynamic value,Array< ::String > arr,int index){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper","resolveField",0x2ace68a7,"org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper.resolveField","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1955,0xe680eae8)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(arr,"arr")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(1956)
	::Class klass;		HX_STACK_VAR(klass,"klass");
	HX_STACK_LINE(1957)
	{
		HX_STACK_LINE(1957)
		::ValueType _g = ::Type_obj::_typeof(value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1957)
		switch( (int)(_g->__Index())){
			case (int)4: {
				HX_STACK_LINE(1961)
				{
					HX_STACK_LINE(1961)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1961)
					Array< ::String > _g2 = ::Reflect_obj::fields(value);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1961)
					while((true)){
						HX_STACK_LINE(1961)
						if ((!(((_g1 < _g2->length))))){
							HX_STACK_LINE(1961)
							break;
						}
						HX_STACK_LINE(1961)
						::String f = _g2->__get(_g1);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(1961)
						++(_g1);
						HX_STACK_LINE(1962)
						if (((f == arr->__get(index)))){
							HX_STACK_LINE(1963)
							if (((index == (arr->length - (int)1)))){
								HX_STACK_LINE(1964)
								return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum_obj::AnonymousFieldRef(value,arr->__get(index));
							}
							else{
								HX_STACK_LINE(1966)
								Dynamic _g3 = ::Reflect_obj::field(value,arr->__get(index));		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(1966)
								value = _g3;
								HX_STACK_LINE(1967)
								if (((value == null()))){
									HX_STACK_LINE(1968)
									::String _g11 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::join(arr,HX_CSTRING("."),(int)0,index);		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(1968)
									HX_STACK_DO_THROW((HX_CSTRING("Null value dereference ") + _g11));
								}
								HX_STACK_LINE(1970)
								return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::resolveField(value,arr,(index + (int)1));
							}
						}
					}
				}
				HX_STACK_LINE(1974)
				return null();
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(1957)
				::Class c = (::ValueType(_g))->__Param(0);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(1975)
				{
					HX_STACK_LINE(1976)
					::Class _g2 = ::Type_obj::getClass(value);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1976)
					klass = _g2;
				}
			}
			;break;
			default: {
				HX_STACK_LINE(1979)
				return null();
			}
		}
	}
	HX_STACK_LINE(1982)
	bool found = false;		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(1984)
	while((true)){
		HX_STACK_LINE(1984)
		if ((!(((klass != null()))))){
			HX_STACK_LINE(1984)
			break;
		}
		HX_STACK_LINE(1985)
		{
			HX_STACK_LINE(1985)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1986)
			Array< ::String > _g3 = ::Type_obj::getClassFields(klass);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1985)
			Array< ::String > _g1 = ::Type_obj::getInstanceFields(klass)->concat(_g3);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1985)
			while((true)){
				HX_STACK_LINE(1985)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(1985)
					break;
				}
				HX_STACK_LINE(1985)
				::String f = _g1->__get(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(1985)
				++(_g);
				HX_STACK_LINE(1987)
				if (((f == arr->__get(index)))){
					HX_STACK_LINE(1988)
					found = true;
					HX_STACK_LINE(1989)
					break;
				}
			}
		}
		HX_STACK_LINE(1993)
		if ((!(found))){
			HX_STACK_LINE(1995)
			::Class _g4 = ::Type_obj::getSuperClass(klass);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1995)
			klass = _g4;
			HX_STACK_LINE(1996)
			if (((klass != null()))){
				HX_STACK_LINE(1997)
				continue;
			}
			HX_STACK_LINE(1999)
			return null();
		}
		HX_STACK_LINE(2001)
		break;
	}
	HX_STACK_LINE(2004)
	if (((index == (arr->length - (int)1)))){
		HX_STACK_LINE(2005)
		return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionEnum_obj::FieldRef(value,arr->__get(index));
	}
	HX_STACK_LINE(2008)
	Dynamic _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(2008)
	_g5 = (  (((value == null()))) ? Dynamic(null()) : Dynamic(value->__Field(arr->__get(index),true)) );
	HX_STACK_LINE(2008)
	value = _g5;
	HX_STACK_LINE(2010)
	if (((value == null()))){
		HX_STACK_LINE(2011)
		::String _g6 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::join(arr,HX_CSTRING("."),(int)0,index);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(2011)
		HX_STACK_DO_THROW((HX_CSTRING("Null value dereference ") + _g6));
	}
	HX_STACK_LINE(2014)
	return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::resolveField(value,arr,(index + (int)1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExpressionHelper_obj,resolveField,return )

Dynamic ExpressionHelper_obj::resolveConstant( ::String value){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper","resolveConstant",0x30505f97,"org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper.resolveConstant","org/flashdevelop/cpp/debugger/DebuggerThread.hx",2019,0xe680eae8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2021)
	::String _g = value.charAt((int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(2021)
	if (((_g == HX_CSTRING("\"")))){
		HX_STACK_LINE(2022)
		return value.substring((int)1,(value.length - (int)1));
	}
	else{
		HX_STACK_LINE(2025)
		if (((value == HX_CSTRING("true")))){
			HX_STACK_LINE(2026)
			return true;
		}
		else{
			HX_STACK_LINE(2028)
			if (((value == HX_CSTRING("false")))){
				HX_STACK_LINE(2029)
				return false;
			}
			else{
				HX_STACK_LINE(2031)
				if (((value == HX_CSTRING("null")))){
					HX_STACK_LINE(2032)
					return null();
				}
				else{
					HX_STACK_LINE(2035)
					if ((::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::gNumberRegex->match(value))){
						HX_STACK_LINE(2036)
						if (((::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::gNumberRegex->matched((int)1).length > (int)0))){
							HX_STACK_LINE(2037)
							return ::Std_obj::parseFloat(value);
						}
						else{
							HX_STACK_LINE(2040)
							return ::Std_obj::parseInt(value);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2044)
	HX_STACK_DO_THROW(HX_CSTRING("Not a constant"));
	HX_STACK_LINE(2044)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExpressionHelper_obj,resolveConstant,return )

Dynamic ExpressionHelper_obj::resolveValue( ::String value,Dynamic varSrc){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper","resolveValue",0x5bf3535e,"org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper.resolveValue","org/flashdevelop/cpp/debugger/DebuggerThread.hx",2051,0xe680eae8)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(varSrc,"varSrc")
	HX_STACK_LINE(2052)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(2053)
		return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::resolveConstant(value);
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(2060)
	return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ExpressionHelper_obj::getStackValue(value,varSrc);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExpressionHelper_obj,resolveValue,return )

::EReg ExpressionHelper_obj::gNumberRegex;


ExpressionHelper_obj::ExpressionHelper_obj()
{
}

Dynamic ExpressionHelper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"join") ) { return join_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getValue") ) { return getValue_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue") ) { return setValue_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resolvePath") ) { return resolvePath_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveField") ) { return resolveField_dyn(); }
		if (HX_FIELD_EQ(inName,"resolveValue") ) { return resolveValue_dyn(); }
		if (HX_FIELD_EQ(inName,"gNumberRegex") ) { return gNumberRegex; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getExpression") ) { return getExpression_dyn(); }
		if (HX_FIELD_EQ(inName,"getStackValue") ) { return getStackValue_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getElementValue") ) { return getElementValue_dyn(); }
		if (HX_FIELD_EQ(inName,"resolveConstant") ) { return resolveConstant_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ExpressionHelper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"gNumberRegex") ) { gNumberRegex=inValue.Cast< ::EReg >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ExpressionHelper_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getValue"),
	HX_CSTRING("setValue"),
	HX_CSTRING("getElementValue"),
	HX_CSTRING("getExpression"),
	HX_CSTRING("getStackValue"),
	HX_CSTRING("join"),
	HX_CSTRING("resolvePath"),
	HX_CSTRING("resolveField"),
	HX_CSTRING("resolveConstant"),
	HX_CSTRING("resolveValue"),
	HX_CSTRING("gNumberRegex"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExpressionHelper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ExpressionHelper_obj::gNumberRegex,"gNumberRegex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExpressionHelper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ExpressionHelper_obj::gNumberRegex,"gNumberRegex");
};

#endif

Class ExpressionHelper_obj::__mClass;

void ExpressionHelper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger._DebuggerThread.ExpressionHelper"), hx::TCanCast< ExpressionHelper_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void ExpressionHelper_obj::__boot()
{
	gNumberRegex= ::EReg_obj::__new(HX_CSTRING("^-?[0-9]*(\\.?)[0-9]*$"),HX_CSTRING(""));
}

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
} // end namespace _DebuggerThread
