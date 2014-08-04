#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
namespace org{
namespace flashdevelop{
namespace cpp{
namespace debugger{
namespace _DebuggerThread{

Void ElementParser_obj::__construct()
{
	return null();
}

//ElementParser_obj::~ElementParser_obj() { }

Dynamic ElementParser_obj::__CreateEmpty() { return  new ElementParser_obj; }
hx::ObjectPtr< ElementParser_obj > ElementParser_obj::__new()
{  hx::ObjectPtr< ElementParser_obj > result = new ElementParser_obj();
	result->__construct();
	return result;}

Dynamic ElementParser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ElementParser_obj > result = new ElementParser_obj();
	result->__construct();
	return result;}

::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum ElementParser_obj::parse( ::String str,int beginColumn){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.ElementParser","parse",0x93b6eb31,"org.flashdevelop.cpp.debugger._DebuggerThread.ElementParser.parse","org/flashdevelop/cpp/debugger/DebuggerThread.hx",2143,0xe680eae8)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(beginColumn,"beginColumn")
	HX_STACK_LINE(2145)
	int endIndex = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementParser_obj::maxIndexOf(str,(str.length - (int)1),HX_CSTRING("\".])"));		HX_STACK_VAR(endIndex,"endIndex");
	HX_STACK_LINE(2148)
	if (((endIndex == (int)-1))){
		HX_STACK_LINE(2149)
		::String value = ::StringTools_obj::trim(str);		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(2150)
		int endColumn = (beginColumn + ((str.length - (int)1)));		HX_STACK_VAR(endColumn,"endColumn");
		HX_STACK_LINE(2151)
		if (((value.length == (int)0))){
			HX_STACK_LINE(2152)
			if (((endColumn < beginColumn))){
				HX_STACK_LINE(2153)
				endColumn = beginColumn;
			}
			HX_STACK_LINE(2155)
			HX_STACK_DO_THROW(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException_obj::__new(HX_CSTRING("Empty value"),beginColumn,endColumn));
		}
		HX_STACK_LINE(2158)
		return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum_obj::Path(value,beginColumn,endColumn);
	}
	HX_STACK_LINE(2161)
	::String _g = str.charAt(endIndex);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(2161)
	::String _switch_1 = (_g);
	if (  ( _switch_1==HX_CSTRING("\""))){
		HX_STACK_LINE(2163)
		int beginIndex = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementParser_obj::findBeginQuote(str,(endIndex - (int)1));		HX_STACK_VAR(beginIndex,"beginIndex");
		HX_STACK_LINE(2164)
		if (((beginIndex == (int)-1))){
			HX_STACK_LINE(2165)
			HX_STACK_DO_THROW(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException_obj::__new(HX_CSTRING("Mismatched quotes"),(beginColumn + endIndex),(beginColumn + ((str.length - (int)1)))));
		}
		HX_STACK_LINE(2169)
		if (((::StringTools_obj::trim(str.substring((int)0,beginIndex)).length > (int)0))){
			HX_STACK_LINE(2170)
			HX_STACK_DO_THROW(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException_obj::__new(HX_CSTRING("Unexpected value before quotes"),beginColumn,(beginColumn + beginIndex)));
		}
		HX_STACK_LINE(2175)
		::String _g1 = str.substring(beginIndex,(endIndex + (int)1));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2174)
		return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum_obj::Value(_g1,(beginColumn + beginIndex),(beginColumn + endIndex));
	}
	else if (  ( _switch_1==HX_CSTRING("."))){
		HX_STACK_LINE(2179)
		if ((::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementParser_obj::gFloatRegex->match(str))){
			HX_STACK_LINE(2181)
			if (((bool((::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementParser_obj::gFloatRegex->matched((int)2).length == (int)0)) && bool((::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementParser_obj::gFloatRegex->matched((int)3).length == (int)0))))){
				HX_STACK_LINE(2183)
				HX_STACK_DO_THROW(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException_obj::__new(HX_CSTRING("Invalid value"),beginColumn,(beginColumn + ((str.length - (int)1)))));
			}
			HX_STACK_LINE(2188)
			::String _g1 = ::StringTools_obj::trim(str);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2188)
			return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum_obj::Value(_g1,beginColumn,(beginColumn + ((str.length - (int)1))));
		}
		HX_STACK_LINE(2192)
		::String _g2 = str.substring((endIndex + (int)1),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(2192)
		::String field = ::StringTools_obj::trim(_g2);		HX_STACK_VAR(field,"field");
		HX_STACK_LINE(2193)
		if (((field.length == (int)0))){
			HX_STACK_LINE(2194)
			HX_STACK_DO_THROW(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException_obj::__new(HX_CSTRING("Missing field"),(beginColumn + endIndex),(beginColumn + endIndex)));
		}
		HX_STACK_LINE(2199)
		::String _g3 = str.substring((int)0,endIndex);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(2199)
		::String pre = ::StringTools_obj::trim(_g3);		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2200)
		if (((pre.length == (int)0))){
			HX_STACK_LINE(2201)
			HX_STACK_DO_THROW(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException_obj::__new(HX_CSTRING("Missing value"),beginColumn,(beginColumn + endIndex)));
		}
		HX_STACK_LINE(2205)
		if (((pre == HX_CSTRING("$")))){
			HX_STACK_LINE(2206)
			return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum_obj::DebuggerField(field,(int)0,(str.length - (int)1));
		}
		HX_STACK_LINE(2211)
		if (((beginColumn == (int)0))){
			HX_STACK_LINE(2213)
			if ((::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementParser_obj::gPathRegex->match(str))){
				HX_STACK_LINE(2218)
				::String _g4 = ::StringTools_obj::trim(str);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(2217)
				return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum_obj::Path(_g4,(int)0,(str.length - (int)1));
			}
		}
		HX_STACK_LINE(2222)
		if ((::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementParser_obj::gFieldRegex->match(field))){
			HX_STACK_LINE(2223)
			::String _g5 = str.substring((int)0,endIndex);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(2223)
			::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum element = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementParser_obj::parse(_g5,beginColumn);		HX_STACK_VAR(element,"element");
			HX_STACK_LINE(2224)
			return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum_obj::Field(element,field,beginColumn,(beginColumn + ((str.length - (int)1))));
		}
		else{
			HX_STACK_LINE(2228)
			HX_STACK_DO_THROW(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException_obj::__new(HX_CSTRING("Invalid field name"),((beginColumn + endIndex) + (int)1),(beginColumn + ((str.length - (int)1)))));
		}
	}
	else if (  ( _switch_1==HX_CSTRING("]"))){
		HX_STACK_LINE(2233)
		int beginIndex = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementParser_obj::levelPreviousIndexOf(str,(endIndex - (int)1),HX_CSTRING("["),beginColumn);		HX_STACK_VAR(beginIndex,"beginIndex");
		HX_STACK_LINE(2235)
		if (((beginIndex == (int)-1))){
			HX_STACK_LINE(2236)
			HX_STACK_DO_THROW(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException_obj::__new(HX_CSTRING("Mismatched array end"),beginColumn,(beginColumn + endIndex)));
		}
		HX_STACK_LINE(2240)
		if (((::StringTools_obj::trim(str.substring((endIndex + (int)1),null())).length > (int)0))){
			HX_STACK_LINE(2241)
			HX_STACK_DO_THROW(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException_obj::__new(HX_CSTRING("Unexpected value after array index"),((beginColumn + endIndex) + (int)1),(beginColumn + ((str.length - (int)1)))));
		}
		HX_STACK_LINE(2248)
		if (((::StringTools_obj::trim(str.substring((int)0,beginIndex)).length == (int)0))){
			HX_STACK_LINE(2250)
			::String _g6 = str.substring((beginIndex + (int)1),endIndex);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(2249)
			Array< ::Dynamic > array = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementParser_obj::parseList(_g6,((beginColumn + beginIndex) + (int)1));		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(2252)
			return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum_obj::Array_Value(array);
		}
		else{
			HX_STACK_LINE(2256)
			::String _g7 = str.substring((int)0,beginIndex);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(2256)
			::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum element = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementParser_obj::parse(_g7,beginColumn);		HX_STACK_VAR(element,"element");
			HX_STACK_LINE(2257)
			::String _g8 = str.substring((beginIndex + (int)1),endIndex);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(2257)
			::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum index = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementParser_obj::parse(_g8,beginColumn);		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(2259)
			return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum_obj::Array_Element(element,index);
		}
	}
	else  {
		HX_STACK_LINE(2262)
		int beginIndex = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementParser_obj::levelPreviousIndexOf(str,(endIndex - (int)1),HX_CSTRING("("),beginColumn);		HX_STACK_VAR(beginIndex,"beginIndex");
		HX_STACK_LINE(2264)
		if (((beginIndex == (int)-1))){
			HX_STACK_LINE(2265)
			HX_STACK_DO_THROW(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException_obj::__new(HX_CSTRING("Mismatched function parameters begin"),beginColumn,(beginColumn + endIndex)));
		}
		HX_STACK_LINE(2269)
		if (((::StringTools_obj::trim(str.substring((endIndex + (int)1),null())).length > (int)0))){
			HX_STACK_LINE(2270)
			HX_STACK_DO_THROW(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException_obj::__new(HX_CSTRING("Unexpected value after function call"),((beginColumn + endIndex) + (int)1),(beginColumn + ((str.length - (int)1)))));
		}
		HX_STACK_LINE(2275)
		::String _g9 = str.substring((beginIndex + (int)1),endIndex);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(2275)
		Array< ::Dynamic > parameters = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementParser_obj::parseList(_g9,((beginColumn + beginIndex) + (int)1));		HX_STACK_VAR(parameters,"parameters");
		HX_STACK_LINE(2278)
		::String _g10 = str.substring((int)0,beginIndex);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(2278)
		::String value = ::StringTools_obj::trim(_g10);		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(2279)
		if ((::StringTools_obj::startsWith(value,HX_CSTRING("new ")))){
			HX_STACK_LINE(2280)
			if (((value.length < (int)5))){
				HX_STACK_LINE(2281)
				HX_STACK_DO_THROW(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException_obj::__new(HX_CSTRING("Invalid constructor call"),(int)0,beginIndex));
			}
			HX_STACK_LINE(2285)
			::String _g11 = value.substring((int)4,null());		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(2284)
			return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum_obj::Constructor_Call(_g11,parameters,beginColumn,(beginColumn + beginIndex));
		}
		else{
			HX_STACK_LINE(2289)
			::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum element = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementParser_obj::parse(value,beginColumn);		HX_STACK_VAR(element,"element");
			HX_STACK_LINE(2290)
			return ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum_obj::Function_Call(element,parameters);
		}
	}
;
;
	HX_STACK_LINE(2161)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementParser_obj,parse,return )

Array< ::Dynamic > ElementParser_obj::parseList( ::String str,int beginColumn){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.ElementParser","parseList",0x3a37202f,"org.flashdevelop.cpp.debugger._DebuggerThread.ElementParser.parseList","org/flashdevelop/cpp/debugger/DebuggerThread.hx",2297,0xe680eae8)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(beginColumn,"beginColumn")
	HX_STACK_LINE(2298)
	Array< ::Dynamic > ret = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2300)
	int index = (str.length - (int)1);		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(2302)
	while((true)){
		HX_STACK_LINE(2302)
		if ((!(((index >= (int)0))))){
			HX_STACK_LINE(2302)
			break;
		}
		HX_STACK_LINE(2303)
		::String current;		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(2304)
		int commaIndex = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementParser_obj::levelPreviousIndexOf(str,index,HX_CSTRING(","),beginColumn);		HX_STACK_VAR(commaIndex,"commaIndex");
		HX_STACK_LINE(2305)
		if (((commaIndex == (int)-1))){
			HX_STACK_LINE(2306)
			::String _g = ::StringTools_obj::trim(str);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2306)
			current = _g;
			HX_STACK_LINE(2307)
			if (((current.length == (int)0))){
				HX_STACK_LINE(2308)
				return ret;
			}
			HX_STACK_LINE(2310)
			str = HX_CSTRING("");
		}
		else{
			HX_STACK_LINE(2312)
			if (((commaIndex == (int)0))){
				HX_STACK_LINE(2313)
				HX_STACK_DO_THROW(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException_obj::__new(HX_CSTRING("Missing array element"),beginColumn,(beginColumn + commaIndex)));
			}
			else{
				HX_STACK_LINE(2318)
				::String _g1 = str.substring((commaIndex + (int)1),null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(2318)
				::String _g2 = ::StringTools_obj::trim(_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(2318)
				current = _g2;
				HX_STACK_LINE(2319)
				if (((current.length == (int)0))){
					HX_STACK_LINE(2320)
					HX_STACK_DO_THROW(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException_obj::__new(HX_CSTRING("Missing array element"),((beginColumn + commaIndex) + (int)1),((beginColumn + commaIndex) + (int)1)));
				}
				HX_STACK_LINE(2324)
				::String _g3 = str.substring((int)0,commaIndex);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(2324)
				str = _g3;
			}
		}
		HX_STACK_LINE(2327)
		::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementEnum _g4 = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementParser_obj::parse(current,beginColumn);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(2327)
		ret->unshift(_g4);
	}
	HX_STACK_LINE(2330)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementParser_obj,parseList,return )

int ElementParser_obj::maxIndexOf( ::String str,int index,::String find){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.ElementParser","maxIndexOf",0x6201cec7,"org.flashdevelop.cpp.debugger._DebuggerThread.ElementParser.maxIndexOf","org/flashdevelop/cpp/debugger/DebuggerThread.hx",2335,0xe680eae8)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(find,"find")
	HX_STACK_LINE(2336)
	while((true)){
		HX_STACK_LINE(2336)
		if ((!(((index >= (int)0))))){
			HX_STACK_LINE(2336)
			break;
		}
		HX_STACK_LINE(2337)
		::String c = str.charAt(index);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(2338)
		{
			HX_STACK_LINE(2338)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2338)
			int _g = find.length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2338)
			while((true)){
				HX_STACK_LINE(2338)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(2338)
					break;
				}
				HX_STACK_LINE(2338)
				int f = (_g1)++;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(2339)
				::String _g2 = find.charAt(f);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(2339)
				if (((c == _g2))){
					HX_STACK_LINE(2340)
					return index;
				}
			}
		}
		HX_STACK_LINE(2343)
		hx::SubEq(index,(int)1);
	}
	HX_STACK_LINE(2345)
	return (int)-1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ElementParser_obj,maxIndexOf,return )

int ElementParser_obj::findBeginQuote( ::String str,int index){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.ElementParser","findBeginQuote",0x5c183f2e,"org.flashdevelop.cpp.debugger._DebuggerThread.ElementParser.findBeginQuote","org/flashdevelop/cpp/debugger/DebuggerThread.hx",2349,0xe680eae8)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(2350)
	while((true)){
		HX_STACK_LINE(2350)
		if ((!(((index >= (int)0))))){
			HX_STACK_LINE(2350)
			break;
		}
		HX_STACK_LINE(2351)
		int quoteIndex = str.lastIndexOf(HX_CSTRING("\""),index);		HX_STACK_VAR(quoteIndex,"quoteIndex");
		HX_STACK_LINE(2353)
		int slashCount = (int)0;		HX_STACK_VAR(slashCount,"slashCount");
		HX_STACK_LINE(2354)
		int si = (quoteIndex - (int)1);		HX_STACK_VAR(si,"si");
		HX_STACK_LINE(2355)
		while((true)){
			struct _Function_3_1{
				inline static bool Block( ::String &str,int &si){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/flashdevelop/cpp/debugger/DebuggerThread.hx",2355,0xe680eae8)
					{
						HX_STACK_LINE(2355)
						::String _g = str.charAt(si);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2355)
						return (_g == HX_CSTRING("\\"));
					}
					return null();
				}
			};
			HX_STACK_LINE(2355)
			if ((!(((  (((si >= (int)0))) ? bool(_Function_3_1::Block(str,si)) : bool(false) ))))){
				HX_STACK_LINE(2355)
				break;
			}
			HX_STACK_LINE(2356)
			hx::AddEq(slashCount,(int)1);
			HX_STACK_LINE(2357)
			hx::SubEq(si,(int)1);
		}
		HX_STACK_LINE(2361)
		if (((hx::Mod(slashCount,(int)2) == (int)0))){
			HX_STACK_LINE(2362)
			return quoteIndex;
		}
		else{
			HX_STACK_LINE(2366)
			index = (quoteIndex - (int)1);
		}
	}
	HX_STACK_LINE(2369)
	return (int)-1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ElementParser_obj,findBeginQuote,return )

int ElementParser_obj::levelPreviousIndexOf( ::String str,int index,::String find,int beginColumn){
	HX_STACK_FRAME("org.flashdevelop.cpp.debugger._DebuggerThread.ElementParser","levelPreviousIndexOf",0x82c032f0,"org.flashdevelop.cpp.debugger._DebuggerThread.ElementParser.levelPreviousIndexOf","org/flashdevelop/cpp/debugger/DebuggerThread.hx",2375,0xe680eae8)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(find,"find")
	HX_STACK_ARG(beginColumn,"beginColumn")
	HX_STACK_LINE(2376)
	int bracketLevel = (int)0;		HX_STACK_VAR(bracketLevel,"bracketLevel");
	HX_STACK_LINE(2376)
	int parenLevel = (int)0;		HX_STACK_VAR(parenLevel,"parenLevel");
	HX_STACK_LINE(2378)
	while((true)){
		HX_STACK_LINE(2378)
		if ((!(((index >= (int)0))))){
			HX_STACK_LINE(2378)
			break;
		}
		HX_STACK_LINE(2379)
		::String _char = str.charAt(index);		HX_STACK_VAR(_char,"char");
		HX_STACK_LINE(2380)
		if (((bool((bool((_char == find)) && bool((bracketLevel == (int)0)))) && bool((parenLevel == (int)0))))){
			HX_STACK_LINE(2381)
			return index;
		}
		else{
			HX_STACK_LINE(2383)
			if (((_char == HX_CSTRING("]")))){
				HX_STACK_LINE(2384)
				hx::AddEq(bracketLevel,(int)1);
			}
			else{
				HX_STACK_LINE(2386)
				if (((_char == HX_CSTRING("[")))){
					HX_STACK_LINE(2387)
					hx::SubEq(bracketLevel,(int)1);
				}
				else{
					HX_STACK_LINE(2389)
					if (((_char == HX_CSTRING(")")))){
						HX_STACK_LINE(2390)
						hx::AddEq(parenLevel,(int)1);
					}
					else{
						HX_STACK_LINE(2392)
						if (((_char == HX_CSTRING("(")))){
							HX_STACK_LINE(2393)
							hx::SubEq(parenLevel,(int)1);
						}
						else{
							HX_STACK_LINE(2395)
							if (((_char == HX_CSTRING("\"")))){
								HX_STACK_LINE(2396)
								int beginQuote = ::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementParser_obj::findBeginQuote(str,(index - (int)1));		HX_STACK_VAR(beginQuote,"beginQuote");
								HX_STACK_LINE(2397)
								if (((beginQuote == (int)-1))){
									HX_STACK_LINE(2398)
									HX_STACK_DO_THROW(::org::flashdevelop::cpp::debugger::_DebuggerThread::ElementException_obj::__new(HX_CSTRING("Mismatched quotes"),(int)0,(beginColumn + index)));
								}
								HX_STACK_LINE(2401)
								index = beginQuote;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(2403)
		hx::SubEq(index,(int)1);
	}
	HX_STACK_LINE(2406)
	return (int)-1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ElementParser_obj,levelPreviousIndexOf,return )

::EReg ElementParser_obj::gFieldRegex;

::EReg ElementParser_obj::gPathRegex;

::EReg ElementParser_obj::gFloatRegex;


ElementParser_obj::ElementParser_obj()
{
}

Dynamic ElementParser_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parseList") ) { return parseList_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxIndexOf") ) { return maxIndexOf_dyn(); }
		if (HX_FIELD_EQ(inName,"gPathRegex") ) { return gPathRegex; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gFieldRegex") ) { return gFieldRegex; }
		if (HX_FIELD_EQ(inName,"gFloatRegex") ) { return gFloatRegex; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"findBeginQuote") ) { return findBeginQuote_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"levelPreviousIndexOf") ) { return levelPreviousIndexOf_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ElementParser_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"gPathRegex") ) { gPathRegex=inValue.Cast< ::EReg >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gFieldRegex") ) { gFieldRegex=inValue.Cast< ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gFloatRegex") ) { gFloatRegex=inValue.Cast< ::EReg >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ElementParser_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("parse"),
	HX_CSTRING("parseList"),
	HX_CSTRING("maxIndexOf"),
	HX_CSTRING("findBeginQuote"),
	HX_CSTRING("levelPreviousIndexOf"),
	HX_CSTRING("gFieldRegex"),
	HX_CSTRING("gPathRegex"),
	HX_CSTRING("gFloatRegex"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ElementParser_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ElementParser_obj::gFieldRegex,"gFieldRegex");
	HX_MARK_MEMBER_NAME(ElementParser_obj::gPathRegex,"gPathRegex");
	HX_MARK_MEMBER_NAME(ElementParser_obj::gFloatRegex,"gFloatRegex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ElementParser_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ElementParser_obj::gFieldRegex,"gFieldRegex");
	HX_VISIT_MEMBER_NAME(ElementParser_obj::gPathRegex,"gPathRegex");
	HX_VISIT_MEMBER_NAME(ElementParser_obj::gFloatRegex,"gFloatRegex");
};

#endif

Class ElementParser_obj::__mClass;

void ElementParser_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flashdevelop.cpp.debugger._DebuggerThread.ElementParser"), hx::TCanCast< ElementParser_obj> ,sStaticFields,sMemberFields,
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

void ElementParser_obj::__boot()
{
	gFieldRegex= ::EReg_obj::__new(HX_CSTRING("^[\\s]*([a-zA-Z_][a-zA-Z0-9_]*)[\\s]*$"),HX_CSTRING(""));
	gPathRegex= ::EReg_obj::__new(HX_CSTRING("^[\\s]*[a-zA-Z_][a-zA-Z0-9_]*([\\s]*\\.[\\s]*[a-zA-Z_][a-zA-Z0-9_]*)*[\\s]*$"),HX_CSTRING(""));
	gFloatRegex= ::EReg_obj::__new(HX_CSTRING("^[\\s]*(-)?([0-9]*)\\.([0-9]*)[\\s]*$"),HX_CSTRING(""));
}

} // end namespace org
} // end namespace flashdevelop
} // end namespace cpp
} // end namespace debugger
} // end namespace _DebuggerThread
