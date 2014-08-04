#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_utils_IntegerRectangle
#include <utils/IntegerRectangle.h>
#endif
#ifndef INCLUDED_utils_RectanglePacker
#include <utils/RectanglePacker.h>
#endif
#ifndef INCLUDED_utils_SortableSize
#include <utils/SortableSize.h>
#endif
namespace utils{

Void RectanglePacker_obj::__construct(int width,int height,hx::Null< int >  __o_padding)
{
HX_STACK_FRAME("utils.RectanglePacker","new",0x758311aa,"utils.RectanglePacker.new","utils/RectanglePacker.hx",7,0x1ed56547)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_padding,"padding")
int padding = __o_padding.Default(0);
{
	HX_STACK_LINE(27)
	this->mRectangleStack = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(26)
	this->mSortableSizeStack = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(22)
	this->mNewFreeAreas = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(21)
	this->mFreeAreas = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(20)
	this->mInsertedRectangles = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(18)
	this->mInsertList = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(16)
	this->mPackedHeight = (int)0;
	HX_STACK_LINE(15)
	this->mPackedWidth = (int)0;
	HX_STACK_LINE(13)
	this->mPadding = (int)8;
	HX_STACK_LINE(12)
	this->mHeight = (int)0;
	HX_STACK_LINE(11)
	this->mWidth = (int)0;
	HX_STACK_LINE(47)
	::utils::IntegerRectangle _g = ::utils::IntegerRectangle_obj::__new((width + (int)1),(height + (int)1),(int)0,(int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(47)
	this->mOutsideRectangle = _g;
	HX_STACK_LINE(48)
	this->reset(width,height,padding);
}
;
	return null();
}

//RectanglePacker_obj::~RectanglePacker_obj() { }

Dynamic RectanglePacker_obj::__CreateEmpty() { return  new RectanglePacker_obj; }
hx::ObjectPtr< RectanglePacker_obj > RectanglePacker_obj::__new(int width,int height,hx::Null< int >  __o_padding)
{  hx::ObjectPtr< RectanglePacker_obj > result = new RectanglePacker_obj();
	result->__construct(width,height,__o_padding);
	return result;}

Dynamic RectanglePacker_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RectanglePacker_obj > result = new RectanglePacker_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

int RectanglePacker_obj::get_rectangleCount( ){
	HX_STACK_FRAME("utils.RectanglePacker","get_rectangleCount",0x7780f8df,"utils.RectanglePacker.get_rectangleCount","utils/RectanglePacker.hx",30,0x1ed56547)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	return this->mInsertedRectangles->length;
}


HX_DEFINE_DYNAMIC_FUNC0(RectanglePacker_obj,get_rectangleCount,return )

int RectanglePacker_obj::get_packedWidth( ){
	HX_STACK_FRAME("utils.RectanglePacker","get_packedWidth",0x44427b4f,"utils.RectanglePacker.get_packedWidth","utils/RectanglePacker.hx",33,0x1ed56547)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	return this->mPackedWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(RectanglePacker_obj,get_packedWidth,return )

int RectanglePacker_obj::get_packedHeight( ){
	HX_STACK_FRAME("utils.RectanglePacker","get_packedHeight",0x2c38e27e,"utils.RectanglePacker.get_packedHeight","utils/RectanglePacker.hx",36,0x1ed56547)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	return this->mPackedHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(RectanglePacker_obj,get_packedHeight,return )

int RectanglePacker_obj::get_padding( ){
	HX_STACK_FRAME("utils.RectanglePacker","get_padding",0x58185532,"utils.RectanglePacker.get_padding","utils/RectanglePacker.hx",39,0x1ed56547)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	return this->mPadding;
}


HX_DEFINE_DYNAMIC_FUNC0(RectanglePacker_obj,get_padding,return )

Void RectanglePacker_obj::reset( int width,int height,hx::Null< int >  __o_padding){
int padding = __o_padding.Default(0);
	HX_STACK_FRAME("utils.RectanglePacker","reset",0x7741f199,"utils.RectanglePacker.reset","utils/RectanglePacker.hx",56,0x1ed56547)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(padding,"padding")
{
		HX_STACK_LINE(57)
		while((true)){
			HX_STACK_LINE(57)
			if ((!(((this->mInsertedRectangles->length != (int)0))))){
				HX_STACK_LINE(57)
				break;
			}
			HX_STACK_LINE(59)
			::utils::IntegerRectangle _g = this->mInsertedRectangles->pop().StaticCast< ::utils::IntegerRectangle >();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(59)
			this->freeRectangle(_g);
		}
		HX_STACK_LINE(62)
		while((true)){
			HX_STACK_LINE(62)
			if ((!(((this->mFreeAreas->length != (int)0))))){
				HX_STACK_LINE(62)
				break;
			}
			HX_STACK_LINE(64)
			::utils::IntegerRectangle _g1 = this->mFreeAreas->pop().StaticCast< ::utils::IntegerRectangle >();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(64)
			this->freeRectangle(_g1);
		}
		HX_STACK_LINE(67)
		this->mWidth = width;
		HX_STACK_LINE(68)
		this->mHeight = height;
		HX_STACK_LINE(70)
		this->mPackedWidth = (int)0;
		HX_STACK_LINE(71)
		this->mPackedHeight = (int)0;
		HX_STACK_LINE(73)
		this->mFreeAreas[(int)0] = this->allocateRectangle((int)0,(int)0,this->mWidth,this->mHeight);
		HX_STACK_LINE(75)
		while((true)){
			HX_STACK_LINE(75)
			if ((!(((this->mInsertList->length != (int)0))))){
				HX_STACK_LINE(75)
				break;
			}
			HX_STACK_LINE(77)
			::utils::SortableSize _g2 = this->mInsertList->pop().StaticCast< ::utils::SortableSize >();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(77)
			this->freeSize(_g2);
		}
		HX_STACK_LINE(80)
		this->mPadding = padding;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(RectanglePacker_obj,reset,(void))

::openfl::geom::Rectangle RectanglePacker_obj::getRectangle( int index,::openfl::geom::Rectangle rectangle){
	HX_STACK_FRAME("utils.RectanglePacker","getRectangle",0x93bab62f,"utils.RectanglePacker.getRectangle","utils/RectanglePacker.hx",90,0x1ed56547)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(rectangle,"rectangle")
	HX_STACK_LINE(91)
	::utils::IntegerRectangle inserted = this->mInsertedRectangles->__get(index).StaticCast< ::utils::IntegerRectangle >();		HX_STACK_VAR(inserted,"inserted");
	HX_STACK_LINE(92)
	if (((rectangle != null()))){
		HX_STACK_LINE(94)
		rectangle->x = inserted->x;
		HX_STACK_LINE(95)
		rectangle->y = inserted->y;
		HX_STACK_LINE(96)
		rectangle->width = inserted->width;
		HX_STACK_LINE(97)
		rectangle->height = inserted->height;
		HX_STACK_LINE(98)
		return rectangle;
	}
	HX_STACK_LINE(101)
	return ::openfl::geom::Rectangle_obj::__new(inserted->x,inserted->y,inserted->width,inserted->height);
}


HX_DEFINE_DYNAMIC_FUNC2(RectanglePacker_obj,getRectangle,return )

int RectanglePacker_obj::getRectangleId( int index){
	HX_STACK_FRAME("utils.RectanglePacker","getRectangleId",0x00781fea,"utils.RectanglePacker.getRectangleId","utils/RectanglePacker.hx",110,0x1ed56547)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(111)
	::utils::IntegerRectangle inserted = this->mInsertedRectangles->__get(index).StaticCast< ::utils::IntegerRectangle >();		HX_STACK_VAR(inserted,"inserted");
	HX_STACK_LINE(112)
	return inserted->id;
}


HX_DEFINE_DYNAMIC_FUNC1(RectanglePacker_obj,getRectangleId,return )

Void RectanglePacker_obj::insertRectangle( int width,int height,int id){
{
		HX_STACK_FRAME("utils.RectanglePacker","insertRectangle",0x50f7ca00,"utils.RectanglePacker.insertRectangle","utils/RectanglePacker.hx",123,0x1ed56547)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(124)
		::utils::SortableSize sortableSize = this->allocateSize(width,height,id);		HX_STACK_VAR(sortableSize,"sortableSize");
		HX_STACK_LINE(125)
		this->mInsertList->push(sortableSize);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(RectanglePacker_obj,insertRectangle,(void))

int RectanglePacker_obj::packRectangles( hx::Null< bool >  __o_sort){
bool sort = __o_sort.Default(true);
	HX_STACK_FRAME("utils.RectanglePacker","packRectangles",0x758c2893,"utils.RectanglePacker.packRectangles","utils/RectanglePacker.hx",134,0x1ed56547)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sort,"sort")
{
		HX_STACK_LINE(135)
		if ((sort)){

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int run(::utils::SortableSize a,::utils::SortableSize b){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","utils/RectanglePacker.hx",137,0x1ed56547)
				HX_STACK_ARG(a,"a")
				HX_STACK_ARG(b,"b")
				{
					HX_STACK_LINE(137)
					return ::Reflect_obj::compare(a->width,b->width);
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(137)
			this->mInsertList->sort( Dynamic(new _Function_2_1()));
		}
		HX_STACK_LINE(140)
		while((true)){
			HX_STACK_LINE(140)
			if ((!(((this->mInsertList->length > (int)0))))){
				HX_STACK_LINE(140)
				break;
			}
			HX_STACK_LINE(142)
			::utils::SortableSize sortableSize;		HX_STACK_VAR(sortableSize,"sortableSize");
			HX_STACK_LINE(142)
			sortableSize = hx::TCast< utils::SortableSize >::cast(this->mInsertList->pop().StaticCast< ::utils::SortableSize >());
			HX_STACK_LINE(143)
			int width = sortableSize->width;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(144)
			int height = sortableSize->height;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(146)
			int index = this->getFreeAreaIndex(width,height);		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(147)
			if (((index >= (int)0))){
				HX_STACK_LINE(149)
				::utils::IntegerRectangle freeArea = this->mFreeAreas->__get(index).StaticCast< ::utils::IntegerRectangle >();		HX_STACK_VAR(freeArea,"freeArea");
				HX_STACK_LINE(150)
				::utils::IntegerRectangle target = this->allocateRectangle(freeArea->x,freeArea->y,width,height);		HX_STACK_VAR(target,"target");
				HX_STACK_LINE(151)
				target->id = sortableSize->id;
				HX_STACK_LINE(154)
				this->generateNewFreeAreas(target,this->mFreeAreas,this->mNewFreeAreas);
				HX_STACK_LINE(156)
				while((true)){
					HX_STACK_LINE(156)
					if ((!(((this->mNewFreeAreas->length > (int)0))))){
						HX_STACK_LINE(156)
						break;
					}
					HX_STACK_LINE(158)
					this->mFreeAreas[this->mFreeAreas->length] = this->mNewFreeAreas->pop().StaticCast< ::utils::IntegerRectangle >();
				}
				HX_STACK_LINE(161)
				this->mInsertedRectangles[this->mInsertedRectangles->length] = target;
				HX_STACK_LINE(162)
				if (((target->right > this->mPackedWidth))){
					HX_STACK_LINE(164)
					this->mPackedWidth = target->right;
				}
				HX_STACK_LINE(166)
				if (((target->bottom > this->mPackedHeight))){
					HX_STACK_LINE(168)
					this->mPackedHeight = target->bottom;
				}
			}
			HX_STACK_LINE(172)
			this->freeSize(sortableSize);
		}
		HX_STACK_LINE(175)
		return this->get_rectangleCount();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(RectanglePacker_obj,packRectangles,return )

Void RectanglePacker_obj::filterSelfSubAreas( Array< ::Dynamic > areas){
{
		HX_STACK_FRAME("utils.RectanglePacker","filterSelfSubAreas",0xc1117c20,"utils.RectanglePacker.filterSelfSubAreas","utils/RectanglePacker.hx",183,0x1ed56547)
		HX_STACK_THIS(this)
		HX_STACK_ARG(areas,"areas")
		HX_STACK_LINE(185)
		int i = (areas->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(186)
		while((true)){
			HX_STACK_LINE(186)
			if ((!(((i >= (int)0))))){
				HX_STACK_LINE(186)
				break;
			}
			HX_STACK_LINE(188)
			::utils::IntegerRectangle filtered = areas->__get(i).StaticCast< ::utils::IntegerRectangle >();		HX_STACK_VAR(filtered,"filtered");
			HX_STACK_LINE(190)
			int j = (areas->length - (int)1);		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(191)
			while((true)){
				HX_STACK_LINE(191)
				if ((!(((j >= (int)0))))){
					HX_STACK_LINE(191)
					break;
				}
				HX_STACK_LINE(193)
				if (((i != j))){
					HX_STACK_LINE(195)
					::utils::IntegerRectangle area = areas->__get(j).StaticCast< ::utils::IntegerRectangle >();		HX_STACK_VAR(area,"area");
					HX_STACK_LINE(196)
					if (((bool((bool((bool((filtered->x >= area->x)) && bool((filtered->y >= area->y)))) && bool((filtered->right <= area->right)))) && bool((filtered->bottom <= area->bottom))))){
						HX_STACK_LINE(198)
						this->freeRectangle(filtered);
						HX_STACK_LINE(199)
						::utils::IntegerRectangle topOfStack = areas->pop().StaticCast< ::utils::IntegerRectangle >();		HX_STACK_VAR(topOfStack,"topOfStack");
						HX_STACK_LINE(200)
						if (((i < areas->length))){
							HX_STACK_LINE(203)
							areas[i] = topOfStack;
						}
						HX_STACK_LINE(205)
						break;
					}
				}
				HX_STACK_LINE(208)
				(j)--;
			}
			HX_STACK_LINE(210)
			(i)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RectanglePacker_obj,filterSelfSubAreas,(void))

Void RectanglePacker_obj::generateNewFreeAreas( ::utils::IntegerRectangle target,Array< ::Dynamic > areas,Array< ::Dynamic > results){
{
		HX_STACK_FRAME("utils.RectanglePacker","generateNewFreeAreas",0x066ac9c5,"utils.RectanglePacker.generateNewFreeAreas","utils/RectanglePacker.hx",222,0x1ed56547)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(areas,"areas")
		HX_STACK_ARG(results,"results")
		HX_STACK_LINE(225)
		int x = target->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(226)
		int y = target->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(227)
		int right = ((target->right + (int)1) + this->mPadding);		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(228)
		int bottom = ((target->bottom + (int)1) + this->mPadding);		HX_STACK_VAR(bottom,"bottom");
		HX_STACK_LINE(230)
		::utils::IntegerRectangle targetWithPadding = null();		HX_STACK_VAR(targetWithPadding,"targetWithPadding");
		HX_STACK_LINE(231)
		if (((this->mPadding == (int)0))){
			HX_STACK_LINE(233)
			targetWithPadding = target;
		}
		HX_STACK_LINE(237)
		int i = (areas->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(238)
		while((true)){
			HX_STACK_LINE(238)
			if ((!(((i >= (int)0))))){
				HX_STACK_LINE(238)
				break;
			}
			HX_STACK_LINE(240)
			::utils::IntegerRectangle area = areas->__get(i).StaticCast< ::utils::IntegerRectangle >();		HX_STACK_VAR(area,"area");
			HX_STACK_LINE(241)
			if ((!(((bool((bool((bool((x >= area->right)) || bool((right <= area->x)))) || bool((y >= area->bottom)))) || bool((bottom <= area->y))))))){
				HX_STACK_LINE(243)
				if (((targetWithPadding == null()))){
					HX_STACK_LINE(245)
					::utils::IntegerRectangle _g = this->allocateRectangle(target->x,target->y,(target->width + this->mPadding),(target->height + this->mPadding));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(245)
					targetWithPadding = _g;
				}
				HX_STACK_LINE(248)
				this->generateDividedAreas(targetWithPadding,area,results);
				HX_STACK_LINE(249)
				::utils::IntegerRectangle topOfStack = areas->pop().StaticCast< ::utils::IntegerRectangle >();		HX_STACK_VAR(topOfStack,"topOfStack");
				HX_STACK_LINE(250)
				if (((i < areas->length))){
					HX_STACK_LINE(253)
					areas[i] = topOfStack;
				}
			}
			HX_STACK_LINE(256)
			(i)--;
		}
		HX_STACK_LINE(259)
		if (((bool((targetWithPadding != null())) && bool((targetWithPadding != target))))){
			HX_STACK_LINE(261)
			this->freeRectangle(targetWithPadding);
		}
		HX_STACK_LINE(264)
		this->filterSelfSubAreas(results);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(RectanglePacker_obj,generateNewFreeAreas,(void))

Void RectanglePacker_obj::generateDividedAreas( ::utils::IntegerRectangle divider,::utils::IntegerRectangle area,Array< ::Dynamic > results){
{
		HX_STACK_FRAME("utils.RectanglePacker","generateDividedAreas",0x080377c6,"utils.RectanglePacker.generateDividedAreas","utils/RectanglePacker.hx",274,0x1ed56547)
		HX_STACK_THIS(this)
		HX_STACK_ARG(divider,"divider")
		HX_STACK_ARG(area,"area")
		HX_STACK_ARG(results,"results")
		HX_STACK_LINE(275)
		int count = (int)0;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(276)
		int rightDelta = (area->right - divider->right);		HX_STACK_VAR(rightDelta,"rightDelta");
		HX_STACK_LINE(277)
		if (((rightDelta > (int)0))){
			HX_STACK_LINE(279)
			results[results->length] = this->allocateRectangle(divider->right,area->y,rightDelta,area->height);
			HX_STACK_LINE(280)
			(count)++;
		}
		HX_STACK_LINE(283)
		int leftDelta = (divider->x - area->x);		HX_STACK_VAR(leftDelta,"leftDelta");
		HX_STACK_LINE(284)
		if (((leftDelta > (int)0))){
			HX_STACK_LINE(286)
			results[results->length] = this->allocateRectangle(area->x,area->y,leftDelta,area->height);
			HX_STACK_LINE(287)
			(count)++;
		}
		HX_STACK_LINE(290)
		int bottomDelta = (area->bottom - divider->bottom);		HX_STACK_VAR(bottomDelta,"bottomDelta");
		HX_STACK_LINE(291)
		if (((bottomDelta > (int)0))){
			HX_STACK_LINE(293)
			results[results->length] = this->allocateRectangle(area->x,divider->bottom,area->width,bottomDelta);
			HX_STACK_LINE(294)
			(count)++;
		}
		HX_STACK_LINE(297)
		int topDelta = (divider->y - area->y);		HX_STACK_VAR(topDelta,"topDelta");
		HX_STACK_LINE(298)
		if (((topDelta > (int)0))){
			HX_STACK_LINE(300)
			results[results->length] = this->allocateRectangle(area->x,area->y,area->width,topDelta);
			HX_STACK_LINE(301)
			(count)++;
		}
		HX_STACK_LINE(304)
		if (((bool((count == (int)0)) && bool(((bool((divider->width < area->width)) || bool((divider->height < area->height)))))))){
			HX_STACK_LINE(307)
			results[results->length] = area;
		}
		else{
			HX_STACK_LINE(311)
			this->freeRectangle(area);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(RectanglePacker_obj,generateDividedAreas,(void))

int RectanglePacker_obj::getFreeAreaIndex( int width,int height){
	HX_STACK_FRAME("utils.RectanglePacker","getFreeAreaIndex",0xbc83aff9,"utils.RectanglePacker.getFreeAreaIndex","utils/RectanglePacker.hx",322,0x1ed56547)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(323)
	::utils::IntegerRectangle best = this->mOutsideRectangle;		HX_STACK_VAR(best,"best");
	HX_STACK_LINE(324)
	int index = (int)-1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(326)
	int paddedWidth = (width + this->mPadding);		HX_STACK_VAR(paddedWidth,"paddedWidth");
	HX_STACK_LINE(327)
	int paddedHeight = (height + this->mPadding);		HX_STACK_VAR(paddedHeight,"paddedHeight");
	HX_STACK_LINE(330)
	int i = (this->mFreeAreas->length - (int)1);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(331)
	while((true)){
		HX_STACK_LINE(331)
		if ((!(((i >= (int)0))))){
			HX_STACK_LINE(331)
			break;
		}
		HX_STACK_LINE(333)
		::utils::IntegerRectangle free = this->mFreeAreas->__get(i).StaticCast< ::utils::IntegerRectangle >();		HX_STACK_VAR(free,"free");
		HX_STACK_LINE(334)
		if (((bool((free->x < this->mPackedWidth)) || bool((free->y < this->mPackedHeight))))){
			HX_STACK_LINE(337)
			if (((bool((bool((free->x < best->x)) && bool((paddedWidth <= free->width)))) && bool((paddedHeight <= free->height))))){
				HX_STACK_LINE(339)
				index = i;
				HX_STACK_LINE(340)
				if (((bool((bool((bool((paddedWidth == free->width)) && bool((free->width <= free->height)))) && bool((free->right < this->mWidth)))) || bool((bool((paddedHeight == free->height)) && bool((free->height <= free->width))))))){
					HX_STACK_LINE(342)
					break;
				}
				HX_STACK_LINE(344)
				best = free;
			}
		}
		else{
			HX_STACK_LINE(350)
			if (((bool((bool((free->x < best->x)) && bool((width <= free->width)))) && bool((height <= free->height))))){
				HX_STACK_LINE(352)
				index = i;
				HX_STACK_LINE(353)
				if (((bool((bool((bool((width == free->width)) && bool((free->width <= free->height)))) && bool((free->right < this->mWidth)))) || bool((bool((height == free->height)) && bool((free->height <= free->width))))))){
					HX_STACK_LINE(355)
					break;
				}
				HX_STACK_LINE(357)
				best = free;
			}
		}
		HX_STACK_LINE(360)
		(i)--;
	}
	HX_STACK_LINE(363)
	return index;
}


HX_DEFINE_DYNAMIC_FUNC2(RectanglePacker_obj,getFreeAreaIndex,return )

::utils::IntegerRectangle RectanglePacker_obj::allocateRectangle( int x,int y,int width,int height){
	HX_STACK_FRAME("utils.RectanglePacker","allocateRectangle",0x4830507c,"utils.RectanglePacker.allocateRectangle","utils/RectanglePacker.hx",375,0x1ed56547)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(376)
	if (((this->mRectangleStack->length > (int)0))){
		HX_STACK_LINE(378)
		::utils::IntegerRectangle rectangle = this->mRectangleStack->pop().StaticCast< ::utils::IntegerRectangle >();		HX_STACK_VAR(rectangle,"rectangle");
		HX_STACK_LINE(379)
		rectangle->x = x;
		HX_STACK_LINE(380)
		rectangle->y = y;
		HX_STACK_LINE(381)
		rectangle->width = width;
		HX_STACK_LINE(382)
		rectangle->height = height;
		HX_STACK_LINE(383)
		rectangle->right = (x + width);
		HX_STACK_LINE(384)
		rectangle->bottom = (y + height);
		HX_STACK_LINE(386)
		return rectangle;
	}
	HX_STACK_LINE(389)
	return ::utils::IntegerRectangle_obj::__new(x,y,width,height);
}


HX_DEFINE_DYNAMIC_FUNC4(RectanglePacker_obj,allocateRectangle,return )

Void RectanglePacker_obj::freeRectangle( ::utils::IntegerRectangle rectangle){
{
		HX_STACK_FRAME("utils.RectanglePacker","freeRectangle",0xa1d7a3ad,"utils.RectanglePacker.freeRectangle","utils/RectanglePacker.hx",398,0x1ed56547)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rectangle,"rectangle")
		HX_STACK_LINE(398)
		this->mRectangleStack[this->mRectangleStack->length] = rectangle;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RectanglePacker_obj,freeRectangle,(void))

::utils::SortableSize RectanglePacker_obj::allocateSize( int width,int height,int id){
	HX_STACK_FRAME("utils.RectanglePacker","allocateSize",0xe88b8794,"utils.RectanglePacker.allocateSize","utils/RectanglePacker.hx",409,0x1ed56547)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(410)
	if (((this->mSortableSizeStack->length > (int)0))){
		HX_STACK_LINE(412)
		::utils::SortableSize size = this->mSortableSizeStack->pop().StaticCast< ::utils::SortableSize >();		HX_STACK_VAR(size,"size");
		HX_STACK_LINE(413)
		size->width = width;
		HX_STACK_LINE(414)
		size->height = height;
		HX_STACK_LINE(415)
		size->id = id;
		HX_STACK_LINE(417)
		return size;
	}
	HX_STACK_LINE(420)
	return ::utils::SortableSize_obj::__new(width,height,id);
}


HX_DEFINE_DYNAMIC_FUNC3(RectanglePacker_obj,allocateSize,return )

Void RectanglePacker_obj::freeSize( ::utils::SortableSize size){
{
		HX_STACK_FRAME("utils.RectanglePacker","freeSize",0x38a70203,"utils.RectanglePacker.freeSize","utils/RectanglePacker.hx",429,0x1ed56547)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_LINE(429)
		this->mSortableSizeStack[this->mSortableSizeStack->length] = size;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RectanglePacker_obj,freeSize,(void))

::String RectanglePacker_obj::VERSION;


RectanglePacker_obj::RectanglePacker_obj()
{
}

void RectanglePacker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RectanglePacker);
	HX_MARK_MEMBER_NAME(mWidth,"mWidth");
	HX_MARK_MEMBER_NAME(mHeight,"mHeight");
	HX_MARK_MEMBER_NAME(mPadding,"mPadding");
	HX_MARK_MEMBER_NAME(mPackedWidth,"mPackedWidth");
	HX_MARK_MEMBER_NAME(mPackedHeight,"mPackedHeight");
	HX_MARK_MEMBER_NAME(mInsertList,"mInsertList");
	HX_MARK_MEMBER_NAME(mInsertedRectangles,"mInsertedRectangles");
	HX_MARK_MEMBER_NAME(mFreeAreas,"mFreeAreas");
	HX_MARK_MEMBER_NAME(mNewFreeAreas,"mNewFreeAreas");
	HX_MARK_MEMBER_NAME(mOutsideRectangle,"mOutsideRectangle");
	HX_MARK_MEMBER_NAME(mSortableSizeStack,"mSortableSizeStack");
	HX_MARK_MEMBER_NAME(mRectangleStack,"mRectangleStack");
	HX_MARK_END_CLASS();
}

void RectanglePacker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mWidth,"mWidth");
	HX_VISIT_MEMBER_NAME(mHeight,"mHeight");
	HX_VISIT_MEMBER_NAME(mPadding,"mPadding");
	HX_VISIT_MEMBER_NAME(mPackedWidth,"mPackedWidth");
	HX_VISIT_MEMBER_NAME(mPackedHeight,"mPackedHeight");
	HX_VISIT_MEMBER_NAME(mInsertList,"mInsertList");
	HX_VISIT_MEMBER_NAME(mInsertedRectangles,"mInsertedRectangles");
	HX_VISIT_MEMBER_NAME(mFreeAreas,"mFreeAreas");
	HX_VISIT_MEMBER_NAME(mNewFreeAreas,"mNewFreeAreas");
	HX_VISIT_MEMBER_NAME(mOutsideRectangle,"mOutsideRectangle");
	HX_VISIT_MEMBER_NAME(mSortableSizeStack,"mSortableSizeStack");
	HX_VISIT_MEMBER_NAME(mRectangleStack,"mRectangleStack");
}

Dynamic RectanglePacker_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mWidth") ) { return mWidth; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mHeight") ) { return mHeight; }
		if (HX_FIELD_EQ(inName,"padding") ) { return get_padding(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mPadding") ) { return mPadding; }
		if (HX_FIELD_EQ(inName,"freeSize") ) { return freeSize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mFreeAreas") ) { return mFreeAreas; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mInsertList") ) { return mInsertList; }
		if (HX_FIELD_EQ(inName,"packedWidth") ) { return get_packedWidth(); }
		if (HX_FIELD_EQ(inName,"get_padding") ) { return get_padding_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mPackedWidth") ) { return mPackedWidth; }
		if (HX_FIELD_EQ(inName,"packedHeight") ) { return get_packedHeight(); }
		if (HX_FIELD_EQ(inName,"getRectangle") ) { return getRectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"allocateSize") ) { return allocateSize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mPackedHeight") ) { return mPackedHeight; }
		if (HX_FIELD_EQ(inName,"mNewFreeAreas") ) { return mNewFreeAreas; }
		if (HX_FIELD_EQ(inName,"freeRectangle") ) { return freeRectangle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rectangleCount") ) { return get_rectangleCount(); }
		if (HX_FIELD_EQ(inName,"getRectangleId") ) { return getRectangleId_dyn(); }
		if (HX_FIELD_EQ(inName,"packRectangles") ) { return packRectangles_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mRectangleStack") ) { return mRectangleStack; }
		if (HX_FIELD_EQ(inName,"get_packedWidth") ) { return get_packedWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"insertRectangle") ) { return insertRectangle_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_packedHeight") ) { return get_packedHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"getFreeAreaIndex") ) { return getFreeAreaIndex_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"mOutsideRectangle") ) { return mOutsideRectangle; }
		if (HX_FIELD_EQ(inName,"allocateRectangle") ) { return allocateRectangle_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"mSortableSizeStack") ) { return mSortableSizeStack; }
		if (HX_FIELD_EQ(inName,"get_rectangleCount") ) { return get_rectangleCount_dyn(); }
		if (HX_FIELD_EQ(inName,"filterSelfSubAreas") ) { return filterSelfSubAreas_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mInsertedRectangles") ) { return mInsertedRectangles; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"generateNewFreeAreas") ) { return generateNewFreeAreas_dyn(); }
		if (HX_FIELD_EQ(inName,"generateDividedAreas") ) { return generateDividedAreas_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RectanglePacker_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"mWidth") ) { mWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mHeight") ) { mHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mPadding") ) { mPadding=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mFreeAreas") ) { mFreeAreas=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mInsertList") ) { mInsertList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mPackedWidth") ) { mPackedWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mPackedHeight") ) { mPackedHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mNewFreeAreas") ) { mNewFreeAreas=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mRectangleStack") ) { mRectangleStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"mOutsideRectangle") ) { mOutsideRectangle=inValue.Cast< ::utils::IntegerRectangle >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"mSortableSizeStack") ) { mSortableSizeStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mInsertedRectangles") ) { mInsertedRectangles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RectanglePacker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mWidth"));
	outFields->push(HX_CSTRING("mHeight"));
	outFields->push(HX_CSTRING("mPadding"));
	outFields->push(HX_CSTRING("mPackedWidth"));
	outFields->push(HX_CSTRING("mPackedHeight"));
	outFields->push(HX_CSTRING("mInsertList"));
	outFields->push(HX_CSTRING("mInsertedRectangles"));
	outFields->push(HX_CSTRING("mFreeAreas"));
	outFields->push(HX_CSTRING("mNewFreeAreas"));
	outFields->push(HX_CSTRING("mOutsideRectangle"));
	outFields->push(HX_CSTRING("mSortableSizeStack"));
	outFields->push(HX_CSTRING("mRectangleStack"));
	outFields->push(HX_CSTRING("rectangleCount"));
	outFields->push(HX_CSTRING("packedWidth"));
	outFields->push(HX_CSTRING("packedHeight"));
	outFields->push(HX_CSTRING("padding"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("VERSION"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(RectanglePacker_obj,mWidth),HX_CSTRING("mWidth")},
	{hx::fsInt,(int)offsetof(RectanglePacker_obj,mHeight),HX_CSTRING("mHeight")},
	{hx::fsInt,(int)offsetof(RectanglePacker_obj,mPadding),HX_CSTRING("mPadding")},
	{hx::fsInt,(int)offsetof(RectanglePacker_obj,mPackedWidth),HX_CSTRING("mPackedWidth")},
	{hx::fsInt,(int)offsetof(RectanglePacker_obj,mPackedHeight),HX_CSTRING("mPackedHeight")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(RectanglePacker_obj,mInsertList),HX_CSTRING("mInsertList")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(RectanglePacker_obj,mInsertedRectangles),HX_CSTRING("mInsertedRectangles")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(RectanglePacker_obj,mFreeAreas),HX_CSTRING("mFreeAreas")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(RectanglePacker_obj,mNewFreeAreas),HX_CSTRING("mNewFreeAreas")},
	{hx::fsObject /*::utils::IntegerRectangle*/ ,(int)offsetof(RectanglePacker_obj,mOutsideRectangle),HX_CSTRING("mOutsideRectangle")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(RectanglePacker_obj,mSortableSizeStack),HX_CSTRING("mSortableSizeStack")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(RectanglePacker_obj,mRectangleStack),HX_CSTRING("mRectangleStack")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mWidth"),
	HX_CSTRING("mHeight"),
	HX_CSTRING("mPadding"),
	HX_CSTRING("mPackedWidth"),
	HX_CSTRING("mPackedHeight"),
	HX_CSTRING("mInsertList"),
	HX_CSTRING("mInsertedRectangles"),
	HX_CSTRING("mFreeAreas"),
	HX_CSTRING("mNewFreeAreas"),
	HX_CSTRING("mOutsideRectangle"),
	HX_CSTRING("mSortableSizeStack"),
	HX_CSTRING("mRectangleStack"),
	HX_CSTRING("get_rectangleCount"),
	HX_CSTRING("get_packedWidth"),
	HX_CSTRING("get_packedHeight"),
	HX_CSTRING("get_padding"),
	HX_CSTRING("reset"),
	HX_CSTRING("getRectangle"),
	HX_CSTRING("getRectangleId"),
	HX_CSTRING("insertRectangle"),
	HX_CSTRING("packRectangles"),
	HX_CSTRING("filterSelfSubAreas"),
	HX_CSTRING("generateNewFreeAreas"),
	HX_CSTRING("generateDividedAreas"),
	HX_CSTRING("getFreeAreaIndex"),
	HX_CSTRING("allocateRectangle"),
	HX_CSTRING("freeRectangle"),
	HX_CSTRING("allocateSize"),
	HX_CSTRING("freeSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RectanglePacker_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RectanglePacker_obj::VERSION,"VERSION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RectanglePacker_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RectanglePacker_obj::VERSION,"VERSION");
};

#endif

Class RectanglePacker_obj::__mClass;

void RectanglePacker_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("utils.RectanglePacker"), hx::TCanCast< RectanglePacker_obj> ,sStaticFields,sMemberFields,
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

void RectanglePacker_obj::__boot()
{
	VERSION= HX_CSTRING("1.3.0");
}

} // end namespace utils
