#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__internal_AbstractNoise
#include <openfl/display/_internal/AbstractNoise.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_40b07ea52dd2579e_32_new,"openfl.display._internal.AbstractNoise","new",0x3d97fdce,"openfl.display._internal.AbstractNoise.new","openfl/display/_internal/AbstractNoise.hx",32,0x7a192ae5)
HX_LOCAL_STACK_FRAME(_hx_pos_40b07ea52dd2579e_45_fill,"openfl.display._internal.AbstractNoise","fill",0xa21f6155,"openfl.display._internal.AbstractNoise.fill","openfl/display/_internal/AbstractNoise.hx",45,0x7a192ae5)
HX_LOCAL_STACK_FRAME(_hx_pos_40b07ea52dd2579e_50_stitching,"openfl.display._internal.AbstractNoise","stitching",0x0f1810ff,"openfl.display._internal.AbstractNoise.stitching","openfl/display/_internal/AbstractNoise.hx",50,0x7a192ae5)
HX_LOCAL_STACK_FRAME(_hx_pos_40b07ea52dd2579e_89_color,"openfl.display._internal.AbstractNoise","color",0x83195651,"openfl.display._internal.AbstractNoise.color","openfl/display/_internal/AbstractNoise.hx",89,0x7a192ae5)
HX_LOCAL_STACK_FRAME(_hx_pos_40b07ea52dd2579e_114_noiseToColor,"openfl.display._internal.AbstractNoise","noiseToColor",0xe8159240,"openfl.display._internal.AbstractNoise.noiseToColor","openfl/display/_internal/AbstractNoise.hx",114,0x7a192ae5)
HX_LOCAL_STACK_FRAME(_hx_pos_40b07ea52dd2579e_119_fade,"openfl.display._internal.AbstractNoise","fade",0xa219484e,"openfl.display._internal.AbstractNoise.fade","openfl/display/_internal/AbstractNoise.hx",119,0x7a192ae5)
HX_LOCAL_STACK_FRAME(_hx_pos_40b07ea52dd2579e_124_mixI,"openfl.display._internal.AbstractNoise","mixI",0xa6bfe9ff,"openfl.display._internal.AbstractNoise.mixI","openfl/display/_internal/AbstractNoise.hx",124,0x7a192ae5)
HX_LOCAL_STACK_FRAME(_hx_pos_40b07ea52dd2579e_129_mix,"openfl.display._internal.AbstractNoise","mix",0x3d973f0a,"openfl.display._internal.AbstractNoise.mix","openfl/display/_internal/AbstractNoise.hx",129,0x7a192ae5)
HX_LOCAL_STACK_FRAME(_hx_pos_40b07ea52dd2579e_134_fastfloor,"openfl.display._internal.AbstractNoise","fastfloor",0x76cb0d9e,"openfl.display._internal.AbstractNoise.fastfloor","openfl/display/_internal/AbstractNoise.hx",134,0x7a192ae5)
HX_LOCAL_STACK_FRAME(_hx_pos_40b07ea52dd2579e_139_dot2d,"openfl.display._internal.AbstractNoise","dot2d",0x1685c7a9,"openfl.display._internal.AbstractNoise.dot2d","openfl/display/_internal/AbstractNoise.hx",139,0x7a192ae5)
HX_LOCAL_STACK_FRAME(_hx_pos_40b07ea52dd2579e_144_dot,"openfl.display._internal.AbstractNoise","dot",0x3d906ff7,"openfl.display._internal.AbstractNoise.dot","openfl/display/_internal/AbstractNoise.hx",144,0x7a192ae5)
HX_LOCAL_STACK_FRAME(_hx_pos_40b07ea52dd2579e_148_calculateOctaves,"openfl.display._internal.AbstractNoise","calculateOctaves",0x5e20468f,"openfl.display._internal.AbstractNoise.calculateOctaves","openfl/display/_internal/AbstractNoise.hx",148,0x7a192ae5)
HX_LOCAL_STACK_FRAME(_hx_pos_40b07ea52dd2579e_20_boot,"openfl.display._internal.AbstractNoise","boot",0x9f7f1704,"openfl.display._internal.AbstractNoise.boot","openfl/display/_internal/AbstractNoise.hx",20,0x7a192ae5)
namespace openfl{
namespace display{
namespace _internal{

void AbstractNoise_obj::__construct(int seed,int octaves,int channels,bool grayScale,Float falloff,::hx::Null< bool >  __o_stitch,::hx::Null< Float >  __o_stitch_threshold){
            		bool stitch = __o_stitch.Default(false);
            		Float stitch_threshold = __o_stitch_threshold.Default(((Float)0.05));
            	HX_STACKFRAME(&_hx_pos_40b07ea52dd2579e_32_new)
HXLINE(  33)		this->stitch = stitch;
HXLINE(  34)		this->stitch_threshold = stitch_threshold;
HXLINE(  36)		this->octaves = octaves;
HXLINE(  38)		this->channels = channels;
HXLINE(  39)		this->grayscale = grayScale;
HXLINE(  41)		this->calculateOctaves(falloff);
            	}

Dynamic AbstractNoise_obj::__CreateEmpty() { return new AbstractNoise_obj; }

void *AbstractNoise_obj::_hx_vtable = 0;

Dynamic AbstractNoise_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AbstractNoise_obj > _hx_result = new AbstractNoise_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool AbstractNoise_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5be429ce;
}

void AbstractNoise_obj::fill( ::openfl::display::BitmapData bitmap,Float _scale_x,Float _scale_y,Float _scale_z){
            	HX_STACKFRAME(&_hx_pos_40b07ea52dd2579e_45_fill)
            	}


HX_DEFINE_DYNAMIC_FUNC4(AbstractNoise_obj,fill,(void))

int AbstractNoise_obj::stitching( ::openfl::display::BitmapData bitmap,int color,int px,int py,int stitch_w,int stitch_h,int width,int height){
            	HX_STACKFRAME(&_hx_pos_40b07ea52dd2579e_50_stitching)
HXLINE(  51)		int r = ((color >> 16) & 255);
HXLINE(  52)		int g = ((color >> 8) & 255);
HXLINE(  53)		int b = (color & 255);
HXLINE(  55)		if (((width - stitch_w) < px)) {
HXLINE(  57)			int dest = bitmap->getPixel32((width - px),py);
HXLINE(  58)			int dest_r = ((dest >> 16) & 255);
HXLINE(  59)			int dest_g = ((dest >> 8) & 255);
HXLINE(  60)			int dest_b = (dest & 255);
HXLINE(  62)			Float u = (( (Float)((width - px)) ) / ( (Float)(stitch_w) ));
HXLINE(  63)			Float uu = (u * u);
HXLINE(  65)			r = this->mixI(dest_r,r,u);
HXLINE(  66)			g = this->mixI(dest_g,g,u);
HXLINE(  67)			b = this->mixI(dest_b,b,u);
            		}
HXLINE(  70)		if (((height - stitch_h) < py)) {
HXLINE(  72)			int dest = bitmap->getPixel32(px,(height - py));
HXLINE(  73)			int dest_r = ((dest >> 16) & 255);
HXLINE(  74)			int dest_g = ((dest >> 8) & 255);
HXLINE(  75)			int dest_b = (dest & 255);
HXLINE(  77)			Float u = (( (Float)((height - py)) ) / ( (Float)(stitch_h) ));
HXLINE(  78)			Float uu = (u * u);
HXLINE(  80)			r = this->mixI(dest_r,r,u);
HXLINE(  81)			g = this->mixI(dest_g,g,u);
HXLINE(  82)			b = this->mixI(dest_b,b,u);
            		}
HXLINE(  85)		return (((-16777216 | (r << 16)) | (g << 8)) | b);
            	}


HX_DEFINE_DYNAMIC_FUNC8(AbstractNoise_obj,stitching,return )

int AbstractNoise_obj::color( ::Dynamic r_noise, ::Dynamic g_noise, ::Dynamic b_noise){
            	HX_STACKFRAME(&_hx_pos_40b07ea52dd2579e_89_color)
HXLINE(  90)		int color_r = 0;
HXLINE(  91)		int color_g = 0;
HXLINE(  92)		int color_b = 0;
HXLINE(  94)		if (::hx::IsNotNull( r_noise )) {
HXLINE(  96)			color_r = this->noiseToColor(( (Float)(r_noise) ));
            		}
HXLINE(  99)		if (::hx::IsNotNull( g_noise )) {
HXLINE( 101)			color_g = this->noiseToColor(( (Float)(g_noise) ));
            		}
HXLINE( 104)		if (::hx::IsNotNull( b_noise )) {
HXLINE( 106)			color_b = this->noiseToColor(( (Float)(b_noise) ));
            		}
HXLINE( 109)		return (((-16777216 | (color_r << 16)) | (color_g << 8)) | color_b);
            	}


HX_DEFINE_DYNAMIC_FUNC3(AbstractNoise_obj,color,return )

int AbstractNoise_obj::noiseToColor(Float noise){
            	HX_STACKFRAME(&_hx_pos_40b07ea52dd2579e_114_noiseToColor)
HXDLIN( 114)		return ::Std_obj::_hx_int((((noise * this->persistence_max) + ((Float)1.0)) * ( (Float)(128) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(AbstractNoise_obj,noiseToColor,return )

Float AbstractNoise_obj::fade(Float t){
            	HX_STACKFRAME(&_hx_pos_40b07ea52dd2579e_119_fade)
HXDLIN( 119)		return (((t * t) * t) * ((t * ((t * ((Float)6.0)) - ((Float)15.0))) + ((Float)10.0)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(AbstractNoise_obj,fade,return )

int AbstractNoise_obj::mixI(int x,int y,Float t){
            	HX_STACKFRAME(&_hx_pos_40b07ea52dd2579e_124_mixI)
HXDLIN( 124)		return ::Std_obj::_hx_int((((((Float)1.0) - t) * ( (Float)(x) )) + (t * ( (Float)(y) ))));
            	}


HX_DEFINE_DYNAMIC_FUNC3(AbstractNoise_obj,mixI,return )

Float AbstractNoise_obj::mix(Float x,Float y,Float t){
            	HX_STACKFRAME(&_hx_pos_40b07ea52dd2579e_129_mix)
HXDLIN( 129)		return (((((Float)1.0) - t) * x) + (t * y));
            	}


HX_DEFINE_DYNAMIC_FUNC3(AbstractNoise_obj,mix,return )

int AbstractNoise_obj::fastfloor(Float x){
            	HX_STACKFRAME(&_hx_pos_40b07ea52dd2579e_134_fastfloor)
HXDLIN( 134)		if ((x > 0)) {
HXDLIN( 134)			return ::Std_obj::_hx_int(x);
            		}
            		else {
HXDLIN( 134)			return ::Std_obj::_hx_int((x - ( (Float)(1) )));
            		}
HXDLIN( 134)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AbstractNoise_obj,fastfloor,return )

Float AbstractNoise_obj::dot2d(::Array< int > grad,Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_40b07ea52dd2579e_139_dot2d)
HXDLIN( 139)		return ((( (Float)(grad->__get(0)) ) * x) + (( (Float)(grad->__get(1)) ) * y));
            	}


HX_DEFINE_DYNAMIC_FUNC3(AbstractNoise_obj,dot2d,return )

Float AbstractNoise_obj::dot(::Array< int > grad,Float x,Float y,Float z){
            	HX_STACKFRAME(&_hx_pos_40b07ea52dd2579e_144_dot)
HXDLIN( 144)		return (((( (Float)(grad->__get(0)) ) * x) + (( (Float)(grad->__get(1)) ) * y)) + (( (Float)(grad->__get(2)) ) * z));
            	}


HX_DEFINE_DYNAMIC_FUNC4(AbstractNoise_obj,dot,return )

void AbstractNoise_obj::calculateOctaves(Float fPersistence){
            	HX_STACKFRAME(&_hx_pos_40b07ea52dd2579e_148_calculateOctaves)
HXLINE( 149)		Float fFreq;
HXDLIN( 149)		Float fPers;
HXLINE( 151)		this->octaves_frequencies = ::Array_obj< Float >::__new(0);
HXLINE( 152)		this->octaves_persistences = ::Array_obj< Float >::__new(0);
HXLINE( 153)		this->persistence_max = ( (Float)(0) );
HXLINE( 155)		{
HXLINE( 155)			int _g = 0;
HXDLIN( 155)			int _g1 = this->octaves;
HXDLIN( 155)			while((_g < _g1)){
HXLINE( 155)				_g = (_g + 1);
HXDLIN( 155)				int i = (_g - 1);
HXLINE( 157)				fFreq = ::Math_obj::pow(((Float)2.0),( (Float)(i) ));
HXLINE( 158)				fPers = ::Math_obj::pow(fPersistence,( (Float)(i) ));
HXLINE( 160)				 ::openfl::display::_internal::AbstractNoise _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 160)				_hx_tmp->persistence_max = (_hx_tmp->persistence_max + fPers);
HXLINE( 161)				this->octaves_frequencies->push(fFreq);
HXLINE( 162)				this->octaves_persistences->push(fPers);
            			}
            		}
HXLINE( 165)		this->persistence_max = (((Float)1.0) / this->persistence_max);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AbstractNoise_obj,calculateOctaves,(void))


::hx::ObjectPtr< AbstractNoise_obj > AbstractNoise_obj::__new(int seed,int octaves,int channels,bool grayScale,Float falloff,::hx::Null< bool >  __o_stitch,::hx::Null< Float >  __o_stitch_threshold) {
	::hx::ObjectPtr< AbstractNoise_obj > __this = new AbstractNoise_obj();
	__this->__construct(seed,octaves,channels,grayScale,falloff,__o_stitch,__o_stitch_threshold);
	return __this;
}

::hx::ObjectPtr< AbstractNoise_obj > AbstractNoise_obj::__alloc(::hx::Ctx *_hx_ctx,int seed,int octaves,int channels,bool grayScale,Float falloff,::hx::Null< bool >  __o_stitch,::hx::Null< Float >  __o_stitch_threshold) {
	AbstractNoise_obj *__this = (AbstractNoise_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AbstractNoise_obj), true, "openfl.display._internal.AbstractNoise"));
	*(void **)__this = AbstractNoise_obj::_hx_vtable;
	__this->__construct(seed,octaves,channels,grayScale,falloff,__o_stitch,__o_stitch_threshold);
	return __this;
}

AbstractNoise_obj::AbstractNoise_obj()
{
}

void AbstractNoise_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AbstractNoise);
	HX_MARK_MEMBER_NAME(octaves,"octaves");
	HX_MARK_MEMBER_NAME(stitch,"stitch");
	HX_MARK_MEMBER_NAME(stitch_threshold,"stitch_threshold");
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(grayscale,"grayscale");
	HX_MARK_MEMBER_NAME(octaves_frequencies,"octaves_frequencies");
	HX_MARK_MEMBER_NAME(octaves_persistences,"octaves_persistences");
	HX_MARK_MEMBER_NAME(persistence_max,"persistence_max");
	HX_MARK_END_CLASS();
}

void AbstractNoise_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(octaves,"octaves");
	HX_VISIT_MEMBER_NAME(stitch,"stitch");
	HX_VISIT_MEMBER_NAME(stitch_threshold,"stitch_threshold");
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(grayscale,"grayscale");
	HX_VISIT_MEMBER_NAME(octaves_frequencies,"octaves_frequencies");
	HX_VISIT_MEMBER_NAME(octaves_persistences,"octaves_persistences");
	HX_VISIT_MEMBER_NAME(persistence_max,"persistence_max");
}

::hx::Val AbstractNoise_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mix") ) { return ::hx::Val( mix_dyn() ); }
		if (HX_FIELD_EQ(inName,"dot") ) { return ::hx::Val( dot_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return ::hx::Val( fill_dyn() ); }
		if (HX_FIELD_EQ(inName,"fade") ) { return ::hx::Val( fade_dyn() ); }
		if (HX_FIELD_EQ(inName,"mixI") ) { return ::hx::Val( mixI_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color_dyn() ); }
		if (HX_FIELD_EQ(inName,"dot2d") ) { return ::hx::Val( dot2d_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stitch") ) { return ::hx::Val( stitch ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"octaves") ) { return ::hx::Val( octaves ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return ::hx::Val( channels ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grayscale") ) { return ::hx::Val( grayscale ); }
		if (HX_FIELD_EQ(inName,"stitching") ) { return ::hx::Val( stitching_dyn() ); }
		if (HX_FIELD_EQ(inName,"fastfloor") ) { return ::hx::Val( fastfloor_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"noiseToColor") ) { return ::hx::Val( noiseToColor_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"persistence_max") ) { return ::hx::Val( persistence_max ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stitch_threshold") ) { return ::hx::Val( stitch_threshold ); }
		if (HX_FIELD_EQ(inName,"calculateOctaves") ) { return ::hx::Val( calculateOctaves_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"octaves_frequencies") ) { return ::hx::Val( octaves_frequencies ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"octaves_persistences") ) { return ::hx::Val( octaves_persistences ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AbstractNoise_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"stitch") ) { stitch=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"octaves") ) { octaves=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grayscale") ) { grayscale=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"persistence_max") ) { persistence_max=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stitch_threshold") ) { stitch_threshold=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"octaves_frequencies") ) { octaves_frequencies=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"octaves_persistences") ) { octaves_persistences=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AbstractNoise_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("octaves",83,15,16,a8));
	outFields->push(HX_("stitch",71,8c,45,0b));
	outFields->push(HX_("stitch_threshold",1d,23,a0,c8));
	outFields->push(HX_("channels",50,aa,ee,6a));
	outFields->push(HX_("grayscale",c7,87,37,f3));
	outFields->push(HX_("octaves_frequencies",fe,11,65,c0));
	outFields->push(HX_("octaves_persistences",b0,63,f1,2f));
	outFields->push(HX_("persistence_max",84,02,4b,d2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AbstractNoise_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(AbstractNoise_obj,octaves),HX_("octaves",83,15,16,a8)},
	{::hx::fsBool,(int)offsetof(AbstractNoise_obj,stitch),HX_("stitch",71,8c,45,0b)},
	{::hx::fsFloat,(int)offsetof(AbstractNoise_obj,stitch_threshold),HX_("stitch_threshold",1d,23,a0,c8)},
	{::hx::fsInt,(int)offsetof(AbstractNoise_obj,channels),HX_("channels",50,aa,ee,6a)},
	{::hx::fsBool,(int)offsetof(AbstractNoise_obj,grayscale),HX_("grayscale",c7,87,37,f3)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(AbstractNoise_obj,octaves_frequencies),HX_("octaves_frequencies",fe,11,65,c0)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(AbstractNoise_obj,octaves_persistences),HX_("octaves_persistences",b0,63,f1,2f)},
	{::hx::fsFloat,(int)offsetof(AbstractNoise_obj,persistence_max),HX_("persistence_max",84,02,4b,d2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AbstractNoise_obj_sStaticStorageInfo = 0;
#endif

static ::String AbstractNoise_obj_sMemberFields[] = {
	HX_("octaves",83,15,16,a8),
	HX_("stitch",71,8c,45,0b),
	HX_("stitch_threshold",1d,23,a0,c8),
	HX_("channels",50,aa,ee,6a),
	HX_("grayscale",c7,87,37,f3),
	HX_("octaves_frequencies",fe,11,65,c0),
	HX_("octaves_persistences",b0,63,f1,2f),
	HX_("persistence_max",84,02,4b,d2),
	HX_("fill",83,ce,bb,43),
	HX_("stitching",11,1d,bb,62),
	HX_("color",63,71,5c,4a),
	HX_("noiseToColor",6e,dd,c7,36),
	HX_("fade",7c,b5,b5,43),
	HX_("mixI",2d,57,5c,48),
	HX_("mix",9c,11,53,00),
	HX_("fastfloor",b0,19,6e,ca),
	HX_("dot2d",bb,e2,c8,dd),
	HX_("dot",89,42,4c,00),
	HX_("calculateOctaves",bd,c0,c2,77),
	::String(null()) };

::hx::Class AbstractNoise_obj::__mClass;

void AbstractNoise_obj::__register()
{
	AbstractNoise_obj _hx_dummy;
	AbstractNoise_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.AbstractNoise",dc,be,fd,0d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AbstractNoise_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AbstractNoise_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AbstractNoise_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AbstractNoise_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AbstractNoise_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_40b07ea52dd2579e_20_boot)
HXDLIN(  20)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
