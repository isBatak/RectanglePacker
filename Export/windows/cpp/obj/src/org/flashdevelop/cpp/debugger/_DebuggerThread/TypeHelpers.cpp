#include <hxcpp.h>

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
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_VariableName
#include <org/flashdevelop/cpp/debugger/VariableName.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger_VariableValue
#include <org/flashdevelop/cpp/debugger/VariableValue.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_DebuggerVariables
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/DebuggerVariables.h>
#endif
#ifndef INCLUDED_org_flashdevelop_cpp_debugger__DebuggerThread_TypeHelpers
#include <org/flashdevelop/cpp/debugger/_DebuggerThread/TypeHelpers.h>
#endif
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{
namespace _DebuggerThread{

Void TypeHelpers_obj::__construct()
{
	return null();
}

//TypeHelpers_obj::~TypeHelpers_obj() { }

Dynamic TypeHelpers_obj::__CreateEmpty() { return  new TypeHelpers_obj; }
hx::ObjectPtr< TypeHelpers_obj > TypeHelpers_obj::__new()
{  hx::ObjectPtr< TypeHelpers_obj > result = new TypeHelpers_obj();
	result->__construct();
	return result;}

Dynamic TypeHelpers_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TypeHelpers_obj > result = new TypeHelpers_obj();
	result->__construct();
	return result;}

::String TypeHelpers_obj::getValueTypeName( Dynamic value){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.TypeHelpers","getValueTypeName",0xe37e8752,"org.flashdevelop.cpp.debugger._DebuggerThread.TypeHelpers.getValueTypeName","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1143,0xe680eae8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1144)
	{
		HX_STACK_LINE(1144)
		::ValueType _g = ::Type_obj::_typeof(value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1144)
		switch( (int)(_g->__Index())){
			case (int)8: {
				HX_STACK_LINE(1146)
				return HX_CSTRING("UNKNOWN");
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(1148)
				return HX_CSTRING("NULL");
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(1150)
				return HX_CSTRING("Class<T>");
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(1152)
				return HX_CSTRING("Int");
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(1154)
				return HX_CSTRING("Function");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1156)
				return HX_CSTRING("Float");
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(1144)
				::Enum e = (::ValueType(_g))->__Param(0);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(1158)
				return ::Type_obj::getEnumName(e);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(1144)
				::Class c = (::ValueType(_g))->__Param(0);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(1144)
				::Class _switch_1 = ((::ValueType(_g))->__Param(0));
				if (  ( _switch_1==hx::ClassOf< Array<int> >())){
					HX_STACK_LINE(1160)
					Dynamic arr;		HX_STACK_VAR(arr,"arr");
					HX_STACK_LINE(1160)
					arr = hx::TCastToArray(value);
					HX_STACK_LINE(1161)
					if (((arr->__Field(HX_CSTRING("length"),true) == (int)0))){
						HX_STACK_LINE(1162)
						return HX_CSTRING("Array<>");
					}
					else{
						HX_STACK_LINE(1165)
						::String _g1 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueTypeName(arr->__GetItem((int)0));		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1165)
						::String _g11 = (HX_CSTRING("Array<") + _g1);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(1165)
						::String _g2 = (_g11 + HX_CSTRING(">["));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1165)
						::String _g3 = (_g2 + arr->__Field(HX_CSTRING("length"),true));		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1165)
						return (_g3 + HX_CSTRING("]"));
					}
				}
				else if (  ( _switch_1==hx::ClassOf< ::org::flashdevelop::cpp::debugger::_DebuggerThread::DebuggerVariables >())){
					HX_STACK_LINE(1169)
					return HX_CSTRING("Debugger variables");
				}
				else  {
					HX_STACK_LINE(1171)
					return ::Type_obj::getClassName(c);
				}
;
;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(1173)
				return HX_CSTRING("Bool");
			}
			;break;
		}
	}
	HX_STACK_LINE(1176)
	return HX_CSTRING("INVALID");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeHelpers_obj,getValueTypeName,return )

::String TypeHelpers_obj::getValueString( Dynamic value,::String __o_indent,hx::Null< bool >  __o_ellipseForObjects){
::String indent = __o_indent.Default(HX_CSTRING(""));
bool ellipseForObjects = __o_ellipseForObjects.Default(false);
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.TypeHelpers","getValueString",0x101ba4be,"org.flashdevelop.cpp.debugger._DebuggerThread.TypeHelpers.getValueString","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1181,0xe680eae8)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(indent,"indent")
	HX_STACK_ARG(ellipseForObjects,"ellipseForObjects")
{
		HX_STACK_LINE(1182)
		{
			HX_STACK_LINE(1182)
			::ValueType _g = ::Type_obj::_typeof(value);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1182)
			switch( (int)(_g->__Index())){
				case (int)8: {
				}
				;break;
				case (int)1: {
				}
				;break;
				case (int)3: {
				}
				;break;
				case (int)2: {
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(1182)
					::Enum e = (::ValueType(_g))->__Param(0);		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(1187)
					{
					}
				}
				;break;
				case (int)0: {
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(1190)
					return ::Std_obj::string(value);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(1192)
					::String _g1 = ::Std_obj::string(value);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1192)
					::String _g11 = (HX_CSTRING("Class<") + _g1);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(1192)
					::String _g2 = (_g11 + HX_CSTRING(">"));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1193)
					::String _g3 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getAnonValueString(value,indent);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1192)
					return (_g2 + _g3);
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(1182)
					::Class c = (::ValueType(_g))->__Param(0);		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(1182)
					::Class _switch_2 = ((::ValueType(_g))->__Param(0));
					if (  ( _switch_2==hx::ClassOf< Array<int> >())){
						HX_STACK_LINE(1195)
						Dynamic arr = value;		HX_STACK_VAR(arr,"arr");
						HX_STACK_LINE(1196)
						if (((arr->__Field(HX_CSTRING("length"),true) == (int)0))){
							HX_STACK_LINE(1197)
							return HX_CSTRING("[ ]");
						}
						HX_STACK_LINE(1199)
						if ((ellipseForObjects)){
							HX_STACK_LINE(1200)
							return HX_CSTRING("[ ... ]");
						}
						HX_STACK_LINE(1202)
						::String ret = HX_CSTRING("[ ");		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1203)
						bool needComma = false;		HX_STACK_VAR(needComma,"needComma");
						HX_STACK_LINE(1204)
						{
							HX_STACK_LINE(1204)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1204)
							while((true)){
								HX_STACK_LINE(1204)
								if ((!(((_g1 < arr->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(1204)
									break;
								}
								HX_STACK_LINE(1204)
								Dynamic a = arr->__GetItem(_g1);		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1204)
								++(_g1);
								HX_STACK_LINE(1205)
								if ((needComma)){
									HX_STACK_LINE(1206)
									hx::AddEq(ret,HX_CSTRING(", "));
								}
								else{
									HX_STACK_LINE(1209)
									needComma = true;
								}
								HX_STACK_LINE(1211)
								::String _g4 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueString(a,indent,null());		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(1211)
								hx::AddEq(ret,_g4);
							}
						}
						HX_STACK_LINE(1213)
						return (ret + HX_CSTRING(" ]"));
					}
					else if (  ( _switch_2==hx::ClassOf< ::String >())){
						HX_STACK_LINE(1215)
						::String _g5 = ::Std_obj::string(value);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(1215)
						::String _g6 = (HX_CSTRING("\"") + _g5);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(1215)
						return (_g6 + HX_CSTRING("\""));
					}
					else if (  ( _switch_2==hx::ClassOf< ::org::flashdevelop::cpp::debugger::_DebuggerThread::DebuggerVariables >())){
						HX_STACK_LINE(1217)
						return value->toString();
					}
					else  {
						HX_STACK_LINE(1219)
						if ((ellipseForObjects)){
							HX_STACK_LINE(1220)
							return HX_CSTRING("...");
						}
						HX_STACK_LINE(1222)
						::Class klass = ::Type_obj::getClass(value);		HX_STACK_VAR(klass,"klass");
						HX_STACK_LINE(1223)
						if (((klass == null()))){
							HX_STACK_LINE(1224)
							return HX_CSTRING("???");
						}
						HX_STACK_LINE(1226)
						::Class _g7 = ::Type_obj::getClass(value);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(1226)
						return ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getInstanceValueString(_g7,value,indent);
					}
;
;
				}
				;break;
			}
		}
		HX_STACK_LINE(1229)
		return ::Std_obj::string(value);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TypeHelpers_obj,getValueString,return )

::String TypeHelpers_obj::getAnonValueString( Dynamic value,::String indent){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.TypeHelpers","getAnonValueString",0xe70c1ad2,"org.flashdevelop.cpp.debugger._DebuggerThread.TypeHelpers.getAnonValueString","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1234,0xe680eae8)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(indent,"indent")
	HX_STACK_LINE(1235)
	::String ret = ((HX_CSTRING("\n") + indent) + HX_CSTRING("{\n"));		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1237)
	Array< ::String > fields = Array_obj< ::String >::__new();		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(1239)
	{
		HX_STACK_LINE(1239)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1239)
		Array< ::String > _g1 = ::Reflect_obj::fields(value);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1239)
		while((true)){
			HX_STACK_LINE(1239)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(1239)
				break;
			}
			HX_STACK_LINE(1239)
			::String f = _g1->__get(_g);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(1239)
			++(_g);
			HX_STACK_LINE(1240)
			fields->unshift(f);
		}
	}
	HX_STACK_LINE(1242)
	{
		HX_STACK_LINE(1242)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1242)
		while((true)){
			HX_STACK_LINE(1242)
			if ((!(((_g < fields->length))))){
				HX_STACK_LINE(1242)
				break;
			}
			HX_STACK_LINE(1242)
			::String f = fields->__get(_g);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(1242)
			++(_g);
			HX_STACK_LINE(1243)
			Dynamic fieldValue = ::Reflect_obj::field(value,f);		HX_STACK_VAR(fieldValue,"fieldValue");
			HX_STACK_LINE(1245)
			::String _g1 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueTypeName(fieldValue);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1244)
			::String _g11 = ((((indent + HX_CSTRING("    ")) + f) + HX_CSTRING(" : ")) + _g1);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1244)
			::String _g2 = (_g11 + HX_CSTRING(" = "));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1246)
			::String _g3 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueString(fieldValue,(indent + HX_CSTRING("    ")),true);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1244)
			::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1244)
			::String _g5 = (_g4 + HX_CSTRING("\n"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1244)
			hx::AddEq(ret,_g5);
		}
	}
	HX_STACK_LINE(1249)
	return ((ret + indent) + HX_CSTRING("}"));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypeHelpers_obj,getAnonValueString,return )

::String TypeHelpers_obj::getClassValueString( ::Class klass,::String indent){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.TypeHelpers","getClassValueString",0x154c2eae,"org.flashdevelop.cpp.debugger._DebuggerThread.TypeHelpers.getClassValueString","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1254,0xe680eae8)
	HX_STACK_ARG(klass,"klass")
	HX_STACK_ARG(indent,"indent")
	HX_STACK_LINE(1255)
	::String ret = ((HX_CSTRING("\n") + indent) + HX_CSTRING("{\n"));		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1257)
	Array< ::String > fields = Array_obj< ::String >::__new();		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(1259)
	{
		HX_STACK_LINE(1259)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1259)
		Array< ::String > _g1 = ::Type_obj::getClassFields(klass);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1259)
		while((true)){
			HX_STACK_LINE(1259)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(1259)
				break;
			}
			HX_STACK_LINE(1259)
			::String f = _g1->__get(_g);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(1259)
			++(_g);
			HX_STACK_LINE(1260)
			Dynamic _g2 = ::Reflect_obj::field(klass,f);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1260)
			if ((::Reflect_obj::isFunction(_g2))){
				HX_STACK_LINE(1261)
				continue;
			}
			HX_STACK_LINE(1263)
			fields->push(f);
		}
	}
	HX_STACK_LINE(1266)
	{
		HX_STACK_LINE(1266)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1266)
		while((true)){
			HX_STACK_LINE(1266)
			if ((!(((_g < fields->length))))){
				HX_STACK_LINE(1266)
				break;
			}
			HX_STACK_LINE(1266)
			::String f = fields->__get(_g);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(1266)
			++(_g);
			HX_STACK_LINE(1267)
			Dynamic fieldValue;		HX_STACK_VAR(fieldValue,"fieldValue");
			HX_STACK_LINE(1267)
			fieldValue = (  (((klass == null()))) ? Dynamic(null()) : Dynamic(klass->__Field(f,true)) );
			HX_STACK_LINE(1269)
			::String _g1 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueTypeName(fieldValue);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1268)
			::String _g2 = ((((indent + HX_CSTRING("    ")) + f) + HX_CSTRING(" : static ")) + _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1268)
			::String _g3 = (_g2 + HX_CSTRING(" = "));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1270)
			::String _g4 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueString(fieldValue,(indent + HX_CSTRING("    ")),true);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1268)
			::String _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1268)
			::String _g6 = (_g5 + HX_CSTRING("\n"));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(1268)
			hx::AddEq(ret,_g6);
		}
	}
	HX_STACK_LINE(1273)
	return ((ret + indent) + HX_CSTRING("}"));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypeHelpers_obj,getClassValueString,return )

::String TypeHelpers_obj::getInstanceValueString( ::Class klass,Dynamic value,::String indent){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.TypeHelpers","getInstanceValueString",0xac7f4729,"org.flashdevelop.cpp.debugger._DebuggerThread.TypeHelpers.getInstanceValueString","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1279,0xe680eae8)
	HX_STACK_ARG(klass,"klass")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(indent,"indent")
	HX_STACK_LINE(1280)
	::String ret = ((HX_CSTRING("\n") + indent) + HX_CSTRING("{\n"));		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1284)
	Array< ::String > fields = Array_obj< ::String >::__new();		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(1286)
	{
		HX_STACK_LINE(1286)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1286)
		Array< ::String > _g1 = ::Type_obj::getInstanceFields(klass);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1286)
		while((true)){
			HX_STACK_LINE(1286)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(1286)
				break;
			}
			HX_STACK_LINE(1286)
			::String f = _g1->__get(_g);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(1286)
			++(_g);
			HX_STACK_LINE(1287)
			Dynamic _g2 = ::Reflect_obj::field(value,f);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1287)
			if ((::Reflect_obj::isFunction(_g2))){
				HX_STACK_LINE(1288)
				continue;
			}
			HX_STACK_LINE(1290)
			fields->unshift(f);
		}
	}
	HX_STACK_LINE(1293)
	{
		HX_STACK_LINE(1293)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1293)
		while((true)){
			HX_STACK_LINE(1293)
			if ((!(((_g < fields->length))))){
				HX_STACK_LINE(1293)
				break;
			}
			HX_STACK_LINE(1293)
			::String f = fields->__get(_g);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(1293)
			++(_g);
			HX_STACK_LINE(1294)
			Dynamic fieldValue;		HX_STACK_VAR(fieldValue,"fieldValue");
			HX_STACK_LINE(1294)
			fieldValue = (  (((value == null()))) ? Dynamic(null()) : Dynamic(value->__Field(f,true)) );
			HX_STACK_LINE(1296)
			::String _g1 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueTypeName(fieldValue);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1295)
			::String _g2 = ((((indent + HX_CSTRING("    ")) + f) + HX_CSTRING(" : ")) + _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1295)
			::String _g3 = (_g2 + HX_CSTRING(" = "));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1297)
			::String _g4 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueString(fieldValue,(indent + HX_CSTRING("    ")),true);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1295)
			::String _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1295)
			::String _g6 = (_g5 + HX_CSTRING("\n"));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(1295)
			hx::AddEq(ret,_g6);
		}
	}
	HX_STACK_LINE(1300)
	Array< ::String > _g7 = Array_obj< ::String >::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(1300)
	fields = _g7;
	HX_STACK_LINE(1305)
	while((true)){
		HX_STACK_LINE(1305)
		if ((!(((klass != null()))))){
			HX_STACK_LINE(1305)
			break;
		}
		HX_STACK_LINE(1306)
		{
			HX_STACK_LINE(1306)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1306)
			Array< ::String > _g1 = ::Type_obj::getClassFields(klass);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1306)
			while((true)){
				HX_STACK_LINE(1306)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(1306)
					break;
				}
				HX_STACK_LINE(1306)
				::String f = _g1->__get(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(1306)
				++(_g);
				HX_STACK_LINE(1307)
				Dynamic _g8 = ::Reflect_obj::field(value,f);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(1307)
				if ((::Reflect_obj::isFunction(_g8))){
					HX_STACK_LINE(1308)
					continue;
				}
				HX_STACK_LINE(1310)
				fields->push(f);
			}
		}
		HX_STACK_LINE(1312)
		::Class _g9 = ::Type_obj::getSuperClass(klass);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(1312)
		klass = _g9;
	}
	HX_STACK_LINE(1315)
	{
		HX_STACK_LINE(1315)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1315)
		while((true)){
			HX_STACK_LINE(1315)
			if ((!(((_g < fields->length))))){
				HX_STACK_LINE(1315)
				break;
			}
			HX_STACK_LINE(1315)
			::String f = fields->__get(_g);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(1315)
			++(_g);
			HX_STACK_LINE(1316)
			Dynamic fieldValue;		HX_STACK_VAR(fieldValue,"fieldValue");
			HX_STACK_LINE(1316)
			fieldValue = (  (((value == null()))) ? Dynamic(null()) : Dynamic(value->__Field(f,true)) );
			HX_STACK_LINE(1318)
			::String _g10 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueTypeName(fieldValue);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(1317)
			::String _g11 = ((((indent + HX_CSTRING("    ")) + f) + HX_CSTRING(" : static ")) + _g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1317)
			::String _g12 = (_g11 + HX_CSTRING(" = "));		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(1319)
			::String _g13 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueString(fieldValue,(indent + HX_CSTRING("    ")),true);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(1317)
			::String _g14 = (_g12 + _g13);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(1317)
			::String _g15 = (_g14 + HX_CSTRING("\n"));		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(1317)
			hx::AddEq(ret,_g15);
		}
	}
	HX_STACK_LINE(1322)
	return ((ret + indent) + HX_CSTRING("}"));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TypeHelpers_obj,getInstanceValueString,return )

::org::flashdevelop::cpp::debugger::VariableValue TypeHelpers_obj::getVariableValue( ::String parentName,Dynamic value){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.TypeHelpers","getVariableValue",0xa144c031,"org.flashdevelop.cpp.debugger._DebuggerThread.TypeHelpers.getVariableValue","org/flashdevelop/cpp/debugger/DebuggerThread.hx",1326,0xe680eae8)
	HX_STACK_ARG(parentName,"parentName")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1327)
	{
		HX_STACK_LINE(1327)
		::ValueType _g = ::Type_obj::_typeof(value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1327)
		switch( (int)(_g->__Index())){
			case (int)8: {
			}
			;break;
			case (int)1: {
			}
			;break;
			case (int)3: {
			}
			;break;
			case (int)2: {
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(1327)
				::Enum e = (::ValueType(_g))->__Param(0);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(1332)
				{
				}
			}
			;break;
			case (int)0: {
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(1335)
				::String _g1 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueTypeName(value);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1335)
				::String _g11 = ::Std_obj::string(value);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1335)
				Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1335)
				return ::org::flashdevelop::cpp::debugger::VariableValue_obj::Item(_g1,_g11,_g2);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(1337)
				Array< ::Dynamic > list = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(list,"list");
				HX_STACK_LINE(1338)
				Array< ::String > fields = Array_obj< ::String >::__new();		HX_STACK_VAR(fields,"fields");
				HX_STACK_LINE(1339)
				{
					HX_STACK_LINE(1339)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1339)
					Array< ::String > _g2 = ::Reflect_obj::fields(value);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1339)
					while((true)){
						HX_STACK_LINE(1339)
						if ((!(((_g1 < _g2->length))))){
							HX_STACK_LINE(1339)
							break;
						}
						HX_STACK_LINE(1339)
						::String f = _g2->__get(_g1);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(1339)
						++(_g1);
						HX_STACK_LINE(1340)
						fields->unshift(f);
					}
				}
				HX_STACK_LINE(1342)
				{
					HX_STACK_LINE(1342)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1342)
					while((true)){
						HX_STACK_LINE(1342)
						if ((!(((_g1 < fields->length))))){
							HX_STACK_LINE(1342)
							break;
						}
						HX_STACK_LINE(1342)
						::String f = fields->__get(_g1);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(1342)
						++(_g1);
						HX_STACK_LINE(1343)
						Dynamic fieldValue = ::Reflect_obj::field(value,f);		HX_STACK_VAR(fieldValue,"fieldValue");
						HX_STACK_LINE(1346)
						::String _g3 = ::Std_obj::string(f);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1345)
						::org::flashdevelop::cpp::debugger::VariableName _g4 = ::org::flashdevelop::cpp::debugger::VariableName_obj::Variable(_g3,((parentName + HX_CSTRING(".")) + f),false,::org::flashdevelop::cpp::debugger::VariableValue_obj::NoItem);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(1344)
						list->push(_g4);
					}
				}
				HX_STACK_LINE(1353)
				::String _g5 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueTypeName(value);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(1353)
				return ::org::flashdevelop::cpp::debugger::VariableValue_obj::Item(_g5,HX_CSTRING("Object"),list);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(1327)
				::Class c = (::ValueType(_g))->__Param(0);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(1327)
				::Class _switch_3 = ((::ValueType(_g))->__Param(0));
				if (  ( _switch_3==hx::ClassOf< Array<int> >())){
					HX_STACK_LINE(1355)
					Dynamic arr = value;		HX_STACK_VAR(arr,"arr");
					HX_STACK_LINE(1356)
					Array< ::Dynamic > list = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(list,"list");
					HX_STACK_LINE(1357)
					{
						HX_STACK_LINE(1357)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1357)
						int _g1 = arr->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1357)
						while((true)){
							HX_STACK_LINE(1357)
							if ((!(((_g2 < _g1))))){
								HX_STACK_LINE(1357)
								break;
							}
							HX_STACK_LINE(1357)
							int i = (_g2)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1360)
							::String _g6 = ::Std_obj::string(i);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(1359)
							::org::flashdevelop::cpp::debugger::VariableName _g7 = ::org::flashdevelop::cpp::debugger::VariableName_obj::Variable(_g6,(((parentName + HX_CSTRING("[")) + i) + HX_CSTRING("]")),false,::org::flashdevelop::cpp::debugger::VariableValue_obj::NoItem);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(1358)
							list->push(_g7);
						}
					}
					HX_STACK_LINE(1367)
					::String _g8 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueTypeName(value);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(1367)
					return ::org::flashdevelop::cpp::debugger::VariableValue_obj::Item(_g8,HX_CSTRING("Array"),list);
				}
				else if (  ( _switch_3==hx::ClassOf< ::String >())){
					HX_STACK_LINE(1369)
					::String _g9 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueTypeName(value);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(1369)
					::String _g10 = ::Std_obj::string(value);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(1369)
					Array< ::Dynamic > _g11 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(1369)
					return ::org::flashdevelop::cpp::debugger::VariableValue_obj::Item(_g9,_g10,_g11);
				}
				else if (  ( _switch_3==hx::ClassOf< ::org::flashdevelop::cpp::debugger::_DebuggerThread::DebuggerVariables >())){
					HX_STACK_LINE(1371)
					::String _g12 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueTypeName(value);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(1371)
					Dynamic _g13 = value->toString();		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(1371)
					Array< ::Dynamic > _g14 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(1371)
					return ::org::flashdevelop::cpp::debugger::VariableValue_obj::Item(_g12,_g13,_g14);
				}
				else  {
					HX_STACK_LINE(1373)
					::Class klass = ::Type_obj::getClass(value);		HX_STACK_VAR(klass,"klass");
					HX_STACK_LINE(1374)
					if (((klass == null()))){
						HX_STACK_LINE(1376)
						::String _g15 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueTypeName(value);		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(1376)
						::String _g16 = ::Std_obj::string(value);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(1376)
						Array< ::Dynamic > _g17 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(1376)
						return ::org::flashdevelop::cpp::debugger::VariableValue_obj::Item(_g15,_g16,_g17);
					}
					HX_STACK_LINE(1378)
					Array< ::Dynamic > list = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(list,"list");
					HX_STACK_LINE(1379)
					Array< ::String > fields = Array_obj< ::String >::__new();		HX_STACK_VAR(fields,"fields");
					HX_STACK_LINE(1382)
					{
						HX_STACK_LINE(1382)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1382)
						Array< ::String > _g2 = ::Type_obj::getInstanceFields(klass);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1382)
						while((true)){
							HX_STACK_LINE(1382)
							if ((!(((_g1 < _g2->length))))){
								HX_STACK_LINE(1382)
								break;
							}
							HX_STACK_LINE(1382)
							::String f = _g2->__get(_g1);		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(1382)
							++(_g1);
							HX_STACK_LINE(1383)
							Dynamic _g18 = ::Reflect_obj::field(value,f);		HX_STACK_VAR(_g18,"_g18");
							HX_STACK_LINE(1383)
							if ((::Reflect_obj::isFunction(_g18))){
								HX_STACK_LINE(1384)
								continue;
							}
							HX_STACK_LINE(1386)
							fields->unshift(f);
						}
					}
					HX_STACK_LINE(1389)
					{
						HX_STACK_LINE(1389)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1389)
						while((true)){
							HX_STACK_LINE(1389)
							if ((!(((_g1 < fields->length))))){
								HX_STACK_LINE(1389)
								break;
							}
							HX_STACK_LINE(1389)
							::String f = fields->__get(_g1);		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(1389)
							++(_g1);
							HX_STACK_LINE(1393)
							::String _g19 = ::Std_obj::string(f);		HX_STACK_VAR(_g19,"_g19");
							HX_STACK_LINE(1392)
							::org::flashdevelop::cpp::debugger::VariableName _g20 = ::org::flashdevelop::cpp::debugger::VariableName_obj::Variable(_g19,((parentName + HX_CSTRING(".")) + f),false,::org::flashdevelop::cpp::debugger::VariableValue_obj::NoItem);		HX_STACK_VAR(_g20,"_g20");
							HX_STACK_LINE(1391)
							list->push(_g20);
						}
					}
					HX_STACK_LINE(1401)
					Array< ::String > _g21 = Array_obj< ::String >::__new();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(1401)
					fields = _g21;
					HX_STACK_LINE(1406)
					while((true)){
						HX_STACK_LINE(1406)
						if ((!(((klass != null()))))){
							HX_STACK_LINE(1406)
							break;
						}
						HX_STACK_LINE(1407)
						{
							HX_STACK_LINE(1407)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1407)
							Array< ::String > _g2 = ::Type_obj::getClassFields(klass);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(1407)
							while((true)){
								HX_STACK_LINE(1407)
								if ((!(((_g1 < _g2->length))))){
									HX_STACK_LINE(1407)
									break;
								}
								HX_STACK_LINE(1407)
								::String f = _g2->__get(_g1);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(1407)
								++(_g1);
								HX_STACK_LINE(1408)
								Dynamic _g22 = ::Reflect_obj::field(value,f);		HX_STACK_VAR(_g22,"_g22");
								HX_STACK_LINE(1408)
								if ((::Reflect_obj::isFunction(_g22))){
									HX_STACK_LINE(1409)
									continue;
								}
								HX_STACK_LINE(1411)
								fields->push(f);
							}
						}
						HX_STACK_LINE(1413)
						::Class _g23 = ::Type_obj::getSuperClass(klass);		HX_STACK_VAR(_g23,"_g23");
						HX_STACK_LINE(1413)
						klass = _g23;
					}
					HX_STACK_LINE(1416)
					{
						HX_STACK_LINE(1416)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1416)
						while((true)){
							HX_STACK_LINE(1416)
							if ((!(((_g1 < fields->length))))){
								HX_STACK_LINE(1416)
								break;
							}
							HX_STACK_LINE(1416)
							::String f = fields->__get(_g1);		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(1416)
							++(_g1);
							HX_STACK_LINE(1420)
							::String _g24 = ::Std_obj::string(f);		HX_STACK_VAR(_g24,"_g24");
							HX_STACK_LINE(1419)
							::org::flashdevelop::cpp::debugger::VariableName _g25 = ::org::flashdevelop::cpp::debugger::VariableName_obj::Variable(_g24,((parentName + HX_CSTRING(".")) + f),true,::org::flashdevelop::cpp::debugger::VariableValue_obj::NoItem);		HX_STACK_VAR(_g25,"_g25");
							HX_STACK_LINE(1418)
							list->push(_g25);
						}
					}
					HX_STACK_LINE(1428)
					::String _g26 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueTypeName(value);		HX_STACK_VAR(_g26,"_g26");
					HX_STACK_LINE(1428)
					::String _g27 = ::Std_obj::string(c);		HX_STACK_VAR(_g27,"_g27");
					HX_STACK_LINE(1428)
					return ::org::flashdevelop::cpp::debugger::VariableValue_obj::Item(_g26,_g27,list);
				}
;
;
			}
			;break;
		}
	}
	HX_STACK_LINE(1431)
	::String _g28 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::TypeHelpers_obj::getValueTypeName(value);		HX_STACK_VAR(_g28,"_g28");
	HX_STACK_LINE(1431)
	::String _g29 = ::Std_obj::string(value);		HX_STACK_VAR(_g29,"_g29");
	HX_STACK_LINE(1431)
	Array< ::Dynamic > _g30 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g30,"_g30");
	HX_STACK_LINE(1431)
	return ::org::flashdevelop::cpp::debugger::VariableValue_obj::Item(_g28,_g29,_g30);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TypeHelpers_obj,getVariableValue,return )


TypeHelpers_obj::TypeHelpers_obj()
{
}

Dynamic TypeHelpers_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"getValueString") ) { return getValueString_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getValueTypeName") ) { return getValueTypeName_dyn(); }
		if (HX_FIELD_EQ(inName,"getVariableValue") ) { return getVariableValue_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getAnonValueString") ) { return getAnonValueString_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getClassValueString") ) { return getClassValueString_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getInstanceValueString") ) { return getInstanceValueString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TypeHelpers_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TypeHelpers_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getValueTypeName"),
	HX_CSTRING("getValueString"),
	HX_CSTRING("getAnonValueString"),
	HX_CSTRING("getClassValueString"),
	HX_CSTRING("getInstanceValueString"),
	HX_CSTRING("getVariableValue"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TypeHelpers_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TypeHelpers_obj::__mClass,"__mClass");
};

#endif

Class TypeHelpers_obj::__mClass;

void TypeHelpers_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger._DebuggerThread.TypeHelpers"), hx::TCanCast< TypeHelpers_obj> ,sStaticFields,sMemberFields,
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

void TypeHelpers_obj::__boot()
{
}

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
} // end namespace _DebuggerThread
