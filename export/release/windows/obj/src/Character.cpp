#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Song
#include <Song.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_TankmenBG
#include <TankmenBG.h>
#endif
#ifndef INCLUDED_animateatlas_AtlasFrameMaker
#include <animateatlas/AtlasFrameMaker.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ae240c01d039da8e_47_new,"Character","new",0x74bf54fb,"Character.new","Character.hx",47,0xf073a2d5)
static const int _hx_array_data_e3a4bb89_3[] = {
	(int)255,(int)0,(int)0,
};
static const Float _hx_array_data_e3a4bb89_4[] = {
	(Float)0,(Float)0,
};
static const Float _hx_array_data_e3a4bb89_5[] = {
	(Float)0,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_258_update,"Character","update",0x0e18944e,"Character.update","Character.hx",258,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_323_dance,"Character","dance",0xde4da48e,"Character.dance","Character.hx",323,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_341_playAnim,"Character","playAnim",0xed2bd3aa,"Character.playAnim","Character.hx",341,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_372_loadMappedAnims,"Character","loadMappedAnims",0xcdb92124,"Character.loadMappedAnims","Character.hx",372,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_385_sortAnims,"Character","sortAnims",0x80bd07df,"Character.sortAnims","Character.hx",385,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_390_recalculateDanceIdle,"Character","recalculateDanceIdle",0x9672c319,"Character.recalculateDanceIdle","Character.hx",390,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_413_addOffset,"Character","addOffset",0x6dc9376f,"Character.addOffset","Character.hx",413,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_418_quickAnimAdd,"Character","quickAnimAdd",0x85c31d28,"Character.quickAnimAdd","Character.hx",418,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_81_boot,"Character","boot",0xaac40737,"Character.boot","Character.hx",81,0xf073a2d5)

void Character_obj::__construct(Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer){
            		::String character = __o_character;
            		if (::hx::IsNull(__o_character)) character = HX_("bf",c4,55,00,00);
            		 ::Dynamic isPlayer = __o_isPlayer;
            		if (::hx::IsNull(__o_isPlayer)) isPlayer = false;
            	HX_GC_STACKFRAME(&_hx_pos_ae240c01d039da8e_47_new)
HXLINE( 389)		this->settingCharacterUp = true;
HXLINE( 388)		this->danceEveryNumBeats = 2;
HXLINE( 316)		this->danced = false;
HXLINE(  79)		this->healthColorArray = ::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_3,3);
HXLINE(  78)		this->originalFlipX = false;
HXLINE(  77)		this->noAntialiasing = false;
HXLINE(  76)		this->jsonScale = ((Float)1);
HXLINE(  75)		this->imageFile = HX_("",00,00,00,00);
HXLINE(  72)		this->hasMissAnimations = false;
HXLINE(  70)		this->cameraPosition = ::Array_obj< Float >::fromData( _hx_array_data_e3a4bb89_4,2);
HXLINE(  69)		this->positionArray = ::Array_obj< Float >::fromData( _hx_array_data_e3a4bb89_5,2);
HXLINE(  67)		this->animationsArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  66)		this->healthIcon = HX_("face",9d,b4,b5,43);
HXLINE(  64)		this->skipDance = false;
HXLINE(  63)		this->danceIdle = false;
HXLINE(  62)		this->idleSuffix = HX_("",00,00,00,00);
HXLINE(  61)		this->singDuration = ((Float)4);
HXLINE(  60)		this->stunned = false;
HXLINE(  59)		this->animationNotes = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  58)		this->specialAnim = false;
HXLINE(  57)		this->heyTimer = ((Float)0);
HXLINE(  56)		this->holdTimer = ((Float)0);
HXLINE(  53)		this->curCharacter = ::Character_obj::DEFAULT_CHARACTER;
HXLINE(  52)		this->isPlayer = false;
HXLINE(  50)		this->debugMode = false;
HXLINE(  84)		super::__construct(x,y,null());
HXLINE(  87)		this->animOffsets =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  91)		this->curCharacter = character;
HXLINE(  92)		this->isPlayer = ( (bool)(isPlayer) );
HXLINE(  93)		this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  94)		::String library = null();
HXLINE(  95)		{
HXLINE(  95)			::String _g = this->curCharacter;
HXLINE(  99)			{
HXLINE( 100)				::String characterPath = ((HX_("characters/",45,3c,bf,be) + this->curCharacter) + HX_(".json",56,f1,d6,c2));
HXLINE( 103)				::String path = ::Paths_obj::modFolders(characterPath);
HXLINE( 104)				if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE( 105)					::String file = characterPath;
HXDLIN( 105)					if (::hx::IsNull( file )) {
HXLINE( 105)						file = HX_("",00,00,00,00);
            					}
HXDLIN( 105)					path = (HX_("assets/",4c,2a,dc,36) + file);
            				}
HXLINE( 108)				if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE( 114)					::String file = ((HX_("characters/",45,3c,bf,be) + ::Character_obj::DEFAULT_CHARACTER) + HX_(".json",56,f1,d6,c2));
HXDLIN( 114)					if (::hx::IsNull( file )) {
HXLINE( 114)						file = HX_("",00,00,00,00);
            					}
HXDLIN( 114)					path = (HX_("assets/",4c,2a,dc,36) + file);
            				}
HXLINE( 118)				::String rawJson = ::sys::io::File_obj::getContent(path);
HXLINE( 123)				 ::Dynamic json =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,rawJson)->doParse();
HXLINE( 124)				::String spriteType = HX_("sparrow",0c,3c,ac,9b);
HXLINE( 129)				::String modTxtToFind = ::Paths_obj::modFolders(( (::String)(((HX_("images/",77,50,74,c1) + json->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic)) + HX_(".txt",02,3f,c0,1e))) ));
HXLINE( 130)				::String txtToFind = ::Paths_obj::getPath(( (::String)(((HX_("images/",77,50,74,c1) + json->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic)) + HX_(".txt",02,3f,c0,1e))) ),HX_("TEXT",ad,94,ba,37),null());
HXLINE( 135)				bool _hx_tmp;
HXDLIN( 135)				bool _hx_tmp1;
HXDLIN( 135)				if (!(::sys::FileSystem_obj::exists(modTxtToFind))) {
HXLINE( 135)					_hx_tmp1 = ::sys::FileSystem_obj::exists(txtToFind);
            				}
            				else {
HXLINE( 135)					_hx_tmp1 = true;
            				}
HXDLIN( 135)				if (!(_hx_tmp1)) {
HXLINE( 135)					_hx_tmp = ::openfl::utils::Assets_obj::exists(txtToFind,null());
            				}
            				else {
HXLINE( 135)					_hx_tmp = true;
            				}
HXDLIN( 135)				if (_hx_tmp) {
HXLINE( 140)					spriteType = HX_("packer",86,57,98,e3);
            				}
HXLINE( 144)				::String modAnimToFind = ::Paths_obj::modFolders(( (::String)(((HX_("images/",77,50,74,c1) + json->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic)) + HX_("/Animation.json",61,fc,54,44))) ));
HXLINE( 145)				::String animToFind = ::Paths_obj::getPath(( (::String)(((HX_("images/",77,50,74,c1) + json->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic)) + HX_("/Animation.json",61,fc,54,44))) ),HX_("TEXT",ad,94,ba,37),null());
HXLINE( 150)				bool _hx_tmp2;
HXDLIN( 150)				bool _hx_tmp3;
HXDLIN( 150)				if (!(::sys::FileSystem_obj::exists(modAnimToFind))) {
HXLINE( 150)					_hx_tmp3 = ::sys::FileSystem_obj::exists(animToFind);
            				}
            				else {
HXLINE( 150)					_hx_tmp3 = true;
            				}
HXDLIN( 150)				if (!(_hx_tmp3)) {
HXLINE( 150)					_hx_tmp2 = ::openfl::utils::Assets_obj::exists(animToFind,null());
            				}
            				else {
HXLINE( 150)					_hx_tmp2 = true;
            				}
HXDLIN( 150)				if (_hx_tmp2) {
HXLINE( 155)					spriteType = HX_("texture",db,c8,e0,9e);
            				}
HXLINE( 158)				::String _hx_switch_0 = spriteType;
            				if (  (_hx_switch_0==HX_("packer",86,57,98,e3)) ){
HXLINE( 161)					::String key = ( (::String)(json->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic)) );
HXDLIN( 161)					::String library = null();
HXDLIN( 161)					 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(key,null());
HXDLIN( 161)					bool txtExists = false;
HXDLIN( 161)					if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e))))) {
HXLINE( 161)						txtExists = true;
            					}
HXDLIN( 161)					 ::Dynamic _hx_tmp;
HXDLIN( 161)					if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 161)						_hx_tmp = imageLoaded;
            					}
            					else {
HXLINE( 161)						 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(key,library);
HXDLIN( 161)						_hx_tmp = returnAsset;
            					}
HXDLIN( 161)					::String _hx_tmp1;
HXDLIN( 161)					if (txtExists) {
HXLINE( 161)						_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e))));
            					}
            					else {
HXLINE( 161)						_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library);
            					}
HXDLIN( 161)					this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(_hx_tmp,_hx_tmp1));
HXDLIN( 161)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==HX_("sparrow",0c,3c,ac,9b)) ){
HXLINE( 164)					::String key = ( (::String)(json->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic)) );
HXDLIN( 164)					::String library = null();
HXDLIN( 164)					 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(key,null());
HXDLIN( 164)					bool xmlExists = false;
HXDLIN( 164)					if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 164)						xmlExists = true;
            					}
HXDLIN( 164)					 ::Dynamic _hx_tmp;
HXDLIN( 164)					if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 164)						_hx_tmp = imageLoaded;
            					}
            					else {
HXLINE( 164)						 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(key,library);
HXDLIN( 164)						_hx_tmp = returnAsset;
            					}
HXDLIN( 164)					::String _hx_tmp1;
HXDLIN( 164)					if (xmlExists) {
HXLINE( 164)						_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))));
            					}
            					else {
HXLINE( 164)						_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            					}
HXDLIN( 164)					this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXDLIN( 164)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==HX_("texture",db,c8,e0,9e)) ){
HXLINE( 167)					this->set_frames(::animateatlas::AtlasFrameMaker_obj::construct(( (::String)(json->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic)) ),null(),null()));
HXDLIN( 167)					goto _hx_goto_0;
            				}
            				_hx_goto_0:;
HXLINE( 169)				this->imageFile = ( (::String)(json->__Field(HX_("image",5b,1f,69,bd),::hx::paccDynamic)) );
HXLINE( 171)				if (::hx::IsNotEq( json->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic),1 )) {
HXLINE( 172)					this->jsonScale = ( (Float)(json->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic)) );
HXLINE( 173)					Float _hx_tmp = this->get_width();
HXDLIN( 173)					this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * this->jsonScale)),null());
HXLINE( 174)					this->updateHitbox();
            				}
HXLINE( 177)				this->positionArray = ( (::Array< Float >)(json->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic)) );
HXLINE( 178)				this->cameraPosition = ( (::Array< Float >)(json->__Field(HX_("camera_position",c3,d4,4a,56),::hx::paccDynamic)) );
HXLINE( 180)				this->healthIcon = ( (::String)(json->__Field(HX_("healthicon",15,8e,6f,17),::hx::paccDynamic)) );
HXLINE( 181)				this->singDuration = ( (Float)(json->__Field(HX_("sing_duration",84,ae,a8,66),::hx::paccDynamic)) );
HXLINE( 182)				this->set_flipX(( (bool)(json->__Field(HX_("flip_x",26,2b,6a,3d),::hx::paccDynamic)) ));
HXLINE( 183)				if (( (bool)(json->__Field(HX_("no_antialiasing",f2,74,67,98),::hx::paccDynamic)) )) {
HXLINE( 184)					this->set_antialiasing(false);
HXLINE( 185)					this->noAntialiasing = true;
            				}
HXLINE( 188)				bool _hx_tmp4;
HXDLIN( 188)				if (::hx::IsNotNull( json->__Field(HX_("healthbar_colors",78,d9,40,40),::hx::paccDynamic) )) {
HXLINE( 188)					_hx_tmp4 = (( (::Array< int >)(json->__Field(HX_("healthbar_colors",78,d9,40,40),::hx::paccDynamic)) )->length > 2);
            				}
            				else {
HXLINE( 188)					_hx_tmp4 = false;
            				}
HXDLIN( 188)				if (_hx_tmp4) {
HXLINE( 189)					this->healthColorArray = ( (::Array< int >)(json->__Field(HX_("healthbar_colors",78,d9,40,40),::hx::paccDynamic)) );
            				}
HXLINE( 191)				this->set_antialiasing(!(this->noAntialiasing));
HXLINE( 192)				if (!(::ClientPrefs_obj::globalAntialiasing)) {
HXLINE( 192)					this->set_antialiasing(false);
            				}
HXLINE( 194)				this->animationsArray = ( (::Array< ::Dynamic>)(json->__Field(HX_("animations",ef,34,1c,83),::hx::paccDynamic)) );
HXLINE( 195)				bool _hx_tmp5;
HXDLIN( 195)				if (::hx::IsNotNull( this->animationsArray )) {
HXLINE( 195)					_hx_tmp5 = (this->animationsArray->length > 0);
            				}
            				else {
HXLINE( 195)					_hx_tmp5 = false;
            				}
HXDLIN( 195)				if (_hx_tmp5) {
HXLINE( 196)					int _g = 0;
HXDLIN( 196)					::Array< ::Dynamic> _g1 = this->animationsArray;
HXDLIN( 196)					while((_g < _g1->length)){
HXLINE( 196)						 ::Dynamic anim = _g1->__get(_g);
HXDLIN( 196)						_g = (_g + 1);
HXLINE( 197)						::String animAnim = ( (::String)((HX_("",00,00,00,00) + anim->__Field(HX_("anim",11,86,71,40),::hx::paccDynamic))) );
HXLINE( 198)						::String animName = ( (::String)((HX_("",00,00,00,00) + anim->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic))) );
HXLINE( 199)						int animFps = ( (int)(anim->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic)) );
HXLINE( 200)						bool animLoop = ( (bool)(anim->__Field(HX_("loop",64,a6,b7,47),::hx::paccDynamic)) );
HXLINE( 201)						::Array< int > animIndices = ( (::Array< int >)(anim->__Field(HX_("indices",27,47,54,e3),::hx::paccDynamic)) );
HXLINE( 202)						bool _hx_tmp;
HXDLIN( 202)						if (::hx::IsNotNull( animIndices )) {
HXLINE( 202)							_hx_tmp = (animIndices->length > 0);
            						}
            						else {
HXLINE( 202)							_hx_tmp = false;
            						}
HXDLIN( 202)						if (_hx_tmp) {
HXLINE( 203)							this->animation->addByIndices(animAnim,animName,animIndices,HX_("",00,00,00,00),animFps,animLoop,null(),null());
            						}
            						else {
HXLINE( 205)							this->animation->addByPrefix(animAnim,animName,animFps,animLoop,null(),null());
            						}
HXLINE( 208)						bool _hx_tmp1;
HXDLIN( 208)						if (::hx::IsNotNull( anim->__Field(HX_("offsets",80,09,65,d7),::hx::paccDynamic) )) {
HXLINE( 208)							_hx_tmp1 = (( (::Array< int >)(anim->__Field(HX_("offsets",80,09,65,d7),::hx::paccDynamic)) )->length > 1);
            						}
            						else {
HXLINE( 208)							_hx_tmp1 = false;
            						}
HXDLIN( 208)						if (_hx_tmp1) {
HXLINE( 209)							this->addOffset(( (::String)(anim->__Field(HX_("anim",11,86,71,40),::hx::paccDynamic)) ), ::Dynamic(anim->__Field(HX_("offsets",80,09,65,d7),::hx::paccDynamic))->__GetItem(0), ::Dynamic(anim->__Field(HX_("offsets",80,09,65,d7),::hx::paccDynamic))->__GetItem(1));
            						}
            					}
            				}
            				else {
HXLINE( 213)					this->quickAnimAdd(HX_("idle",14,a7,b3,45),HX_("BF idle dance",03,fa,cc,7f));
            				}
            			}
            		}
HXLINE( 217)		this->originalFlipX = this->flipX;
HXLINE( 219)		bool _hx_tmp6;
HXDLIN( 219)		bool _hx_tmp7;
HXDLIN( 219)		bool _hx_tmp8;
HXDLIN( 219)		if (!(this->animOffsets->exists(HX_("singLEFTmiss",d2,2f,9c,b6)))) {
HXLINE( 219)			_hx_tmp8 = this->animOffsets->exists(HX_("singDOWNmiss",ad,e9,88,e4));
            		}
            		else {
HXLINE( 219)			_hx_tmp8 = true;
            		}
HXDLIN( 219)		if (!(_hx_tmp8)) {
HXLINE( 219)			_hx_tmp7 = this->animOffsets->exists(HX_("singUPmiss",66,22,08,8a));
            		}
            		else {
HXLINE( 219)			_hx_tmp7 = true;
            		}
HXDLIN( 219)		if (!(_hx_tmp7)) {
HXLINE( 219)			_hx_tmp6 = this->animOffsets->exists(HX_("singRIGHTmiss",89,cc,65,e3));
            		}
            		else {
HXLINE( 219)			_hx_tmp6 = true;
            		}
HXDLIN( 219)		if (_hx_tmp6) {
HXLINE( 219)			this->hasMissAnimations = true;
            		}
HXLINE( 220)		this->recalculateDanceIdle();
HXLINE( 221)		this->dance();
HXLINE( 223)		if (( (bool)(isPlayer) )) {
HXLINE( 225)			this->set_flipX(!(this->flipX));
            		}
HXLINE( 248)		if ((this->curCharacter == HX_("pico-speaker",57,7a,55,5e))) {
HXLINE( 251)			this->skipDance = true;
HXLINE( 252)			this->loadMappedAnims();
HXLINE( 253)			this->playAnim(HX_("shoot1",72,21,6a,26),null(),null(),null());
            		}
            	}

Dynamic Character_obj::__CreateEmpty() { return new Character_obj; }

void *Character_obj::_hx_vtable = 0;

Dynamic Character_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Character_obj > _hx_result = new Character_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Character_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x55af02e5) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x55af02e5;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Character_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_258_update)
HXLINE( 259)		bool _hx_tmp;
HXDLIN( 259)		if (!(this->debugMode)) {
HXLINE( 259)			_hx_tmp = ::hx::IsNotNull( this->animation->_curAnim );
            		}
            		else {
HXLINE( 259)			_hx_tmp = false;
            		}
HXDLIN( 259)		if (_hx_tmp) {
HXLINE( 261)			if ((this->heyTimer > 0)) {
HXLINE( 263)				 ::Character _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 263)				_hx_tmp->heyTimer = (_hx_tmp->heyTimer - elapsed);
HXLINE( 264)				if ((this->heyTimer <= 0)) {
HXLINE( 266)					bool _hx_tmp;
HXDLIN( 266)					bool _hx_tmp1;
HXDLIN( 266)					if (this->specialAnim) {
HXLINE( 266)						_hx_tmp1 = (this->animation->_curAnim->name == HX_("hey",dc,42,4f,00));
            					}
            					else {
HXLINE( 266)						_hx_tmp1 = false;
            					}
HXDLIN( 266)					if (!(_hx_tmp1)) {
HXLINE( 266)						_hx_tmp = (this->animation->_curAnim->name == HX_("cheer",8d,9a,b6,45));
            					}
            					else {
HXLINE( 266)						_hx_tmp = true;
            					}
HXDLIN( 266)					if (_hx_tmp) {
HXLINE( 268)						this->specialAnim = false;
HXLINE( 269)						this->dance();
            					}
HXLINE( 271)					this->heyTimer = ( (Float)(0) );
            				}
            			}
            			else {
HXLINE( 273)				bool _hx_tmp;
HXDLIN( 273)				if (this->specialAnim) {
HXLINE( 273)					_hx_tmp = this->animation->_curAnim->finished;
            				}
            				else {
HXLINE( 273)					_hx_tmp = false;
            				}
HXDLIN( 273)				if (_hx_tmp) {
HXLINE( 275)					this->specialAnim = false;
HXLINE( 276)					this->dance();
            				}
            			}
HXLINE( 279)			if ((this->curCharacter == HX_("pico-speaker",57,7a,55,5e))) {
HXLINE( 282)				bool _hx_tmp;
HXDLIN( 282)				if ((this->animationNotes->get_length() > 0)) {
HXLINE( 282)					_hx_tmp = ::hx::IsGreater( ::Conductor_obj::songPosition,this->animationNotes->__get(0)->__GetItem(0) );
            				}
            				else {
HXLINE( 282)					_hx_tmp = false;
            				}
HXDLIN( 282)				if (_hx_tmp) {
HXLINE( 284)					int noteData = 1;
HXLINE( 285)					if (::hx::IsGreater( this->animationNotes->__get(0)->__GetItem(1),2 )) {
HXLINE( 285)						noteData = 3;
            					}
HXLINE( 287)					noteData = (noteData + ::flixel::FlxG_obj::random->_hx_int(0,1,null()));
HXLINE( 288)					this->playAnim((HX_("shoot",df,81,27,7c) + noteData),true,null(),null());
HXLINE( 289)					this->animationNotes->shift();
            				}
HXLINE( 291)				if (this->animation->_curAnim->finished) {
HXLINE( 291)					this->playAnim(this->animation->_curAnim->name,false,false,(this->animation->_curAnim->frames->length - 3));
            				}
            			}
HXLINE( 294)			if (!(this->isPlayer)) {
HXLINE( 296)				if (::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("sing",4f,96,53,4c))) {
HXLINE( 298)					 ::Character _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 298)					_hx_tmp->holdTimer = (_hx_tmp->holdTimer + elapsed);
            				}
HXLINE( 301)				if ((this->holdTimer >= ((::Conductor_obj::stepCrochet * ((Float)0.0011)) * this->singDuration))) {
HXLINE( 303)					this->dance();
HXLINE( 304)					this->holdTimer = ( (Float)(0) );
            				}
            			}
HXLINE( 308)			bool _hx_tmp;
HXDLIN( 308)			if (this->animation->_curAnim->finished) {
HXLINE( 308)				_hx_tmp = ::hx::IsNotNull( this->animation->_animations->get((this->animation->_curAnim->name + HX_("-loop",11,c1,bf,30))) );
            			}
            			else {
HXLINE( 308)				_hx_tmp = false;
            			}
HXDLIN( 308)			if (_hx_tmp) {
HXLINE( 310)				this->playAnim((this->animation->_curAnim->name + HX_("-loop",11,c1,bf,30)),null(),null(),null());
            			}
            		}
HXLINE( 313)		this->super::update(elapsed);
            	}


void Character_obj::dance(){
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_323_dance)
HXDLIN( 323)		bool _hx_tmp;
HXDLIN( 323)		bool _hx_tmp1;
HXDLIN( 323)		if (!(this->debugMode)) {
HXDLIN( 323)			_hx_tmp1 = !(this->skipDance);
            		}
            		else {
HXDLIN( 323)			_hx_tmp1 = false;
            		}
HXDLIN( 323)		if (_hx_tmp1) {
HXDLIN( 323)			_hx_tmp = !(this->specialAnim);
            		}
            		else {
HXDLIN( 323)			_hx_tmp = false;
            		}
HXDLIN( 323)		if (_hx_tmp) {
HXLINE( 325)			if (this->danceIdle) {
HXLINE( 327)				this->danced = !(this->danced);
HXLINE( 329)				if (this->danced) {
HXLINE( 330)					this->playAnim((HX_("danceRight",a9,7f,a6,91) + this->idleSuffix),null(),null(),null());
            				}
            				else {
HXLINE( 332)					this->playAnim((HX_("danceLeft",da,cc,f9,df) + this->idleSuffix),null(),null(),null());
            				}
            			}
            			else {
HXLINE( 334)				if (::hx::IsNotNull( this->animation->_animations->get((HX_("idle",14,a7,b3,45) + this->idleSuffix)) )) {
HXLINE( 335)					this->playAnim((HX_("idle",14,a7,b3,45) + this->idleSuffix),null(),null(),null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Character_obj,dance,(void))

void Character_obj::playAnim(::String AnimName,::hx::Null< bool >  __o_Force,::hx::Null< bool >  __o_Reversed,::hx::Null< int >  __o_Frame){
            		bool Force = __o_Force.Default(false);
            		bool Reversed = __o_Reversed.Default(false);
            		int Frame = __o_Frame.Default(0);
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_341_playAnim)
HXLINE( 342)		this->specialAnim = false;
HXLINE( 343)		this->animation->play(AnimName,Force,Reversed,Frame);
HXLINE( 345)		::cpp::VirtualArray daOffset = ( (::cpp::VirtualArray)(this->animOffsets->get(AnimName)) );
HXLINE( 346)		if (this->animOffsets->exists(AnimName)) {
HXLINE( 348)			this->offset->set(daOffset->__get(0),daOffset->__get(1));
            		}
            		else {
HXLINE( 351)			this->offset->set(0,0);
            		}
HXLINE( 353)		if (::StringTools_obj::startsWith(this->curCharacter,HX_("gf",1f,5a,00,00))) {
HXLINE( 355)			if ((AnimName == HX_("singLEFT",d6,39,ef,3b))) {
HXLINE( 357)				this->danced = true;
            			}
            			else {
HXLINE( 359)				if ((AnimName == HX_("singRIGHT",0d,6f,70,ac))) {
HXLINE( 361)					this->danced = false;
            				}
            			}
HXLINE( 364)			bool _hx_tmp;
HXDLIN( 364)			if ((AnimName != HX_("singUP",6a,52,21,b9))) {
HXLINE( 364)				_hx_tmp = (AnimName == HX_("singDOWN",31,2a,ad,36));
            			}
            			else {
HXLINE( 364)				_hx_tmp = true;
            			}
HXDLIN( 364)			if (_hx_tmp) {
HXLINE( 366)				this->danced = !(this->danced);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Character_obj,playAnim,(void))

void Character_obj::loadMappedAnims(){
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_372_loadMappedAnims)
HXLINE( 373)		::Array< ::Dynamic> noteData = ( (::Array< ::Dynamic>)(::Song_obj::loadFromJson(HX_("picospeaker",ba,c2,19,7e),::StringTools_obj::replace(( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic)) );
HXLINE( 374)		{
HXLINE( 374)			int _g = 0;
HXDLIN( 374)			while((_g < noteData->length)){
HXLINE( 374)				 ::Dynamic section = noteData->__get(_g);
HXDLIN( 374)				_g = (_g + 1);
HXLINE( 375)				{
HXLINE( 375)					int _g1 = 0;
HXDLIN( 375)					::cpp::VirtualArray _g2 = ( (::cpp::VirtualArray)(section->__Field(HX_("sectionNotes",1c,c8,a7,fe),::hx::paccDynamic)) );
HXDLIN( 375)					while((_g1 < _g2->get_length())){
HXLINE( 375)						 ::Dynamic songNotes = _g2->__get(_g1);
HXDLIN( 375)						_g1 = (_g1 + 1);
HXLINE( 376)						this->animationNotes->push(songNotes);
            					}
            				}
            			}
            		}
HXLINE( 379)		::TankmenBG_obj::animationNotes = this->animationNotes;
HXLINE( 380)		this->animationNotes->sort(this->sortAnims_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Character_obj,loadMappedAnims,(void))

int Character_obj::sortAnims(::cpp::VirtualArray Obj1,::cpp::VirtualArray Obj2){
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_385_sortAnims)
HXDLIN( 385)		Float Value1 = ( (Float)(Obj1->__get(0)) );
HXDLIN( 385)		Float Value2 = ( (Float)(Obj2->__get(0)) );
HXDLIN( 385)		int result = 0;
HXDLIN( 385)		if ((Value1 < Value2)) {
HXDLIN( 385)			result = -1;
            		}
            		else {
HXDLIN( 385)			if ((Value1 > Value2)) {
HXDLIN( 385)				result = 1;
            			}
            		}
HXDLIN( 385)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Character_obj,sortAnims,return )

void Character_obj::recalculateDanceIdle(){
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_390_recalculateDanceIdle)
HXLINE( 391)		bool lastDanceIdle = this->danceIdle;
HXLINE( 392)		bool _hx_tmp;
HXDLIN( 392)		if (::hx::IsNotNull( this->animation->_animations->get((HX_("danceLeft",da,cc,f9,df) + this->idleSuffix)) )) {
HXLINE( 392)			_hx_tmp = ::hx::IsNotNull( this->animation->_animations->get((HX_("danceRight",a9,7f,a6,91) + this->idleSuffix)) );
            		}
            		else {
HXLINE( 392)			_hx_tmp = false;
            		}
HXDLIN( 392)		this->danceIdle = _hx_tmp;
HXLINE( 394)		if (this->settingCharacterUp) {
HXLINE( 396)			int _hx_tmp;
HXDLIN( 396)			if (this->danceIdle) {
HXLINE( 396)				_hx_tmp = 1;
            			}
            			else {
HXLINE( 396)				_hx_tmp = 2;
            			}
HXDLIN( 396)			this->danceEveryNumBeats = _hx_tmp;
            		}
            		else {
HXLINE( 398)			if ((lastDanceIdle != this->danceIdle)) {
HXLINE( 400)				Float calc = ( (Float)(this->danceEveryNumBeats) );
HXLINE( 401)				if (this->danceIdle) {
HXLINE( 402)					calc = (calc / ( (Float)(2) ));
            				}
            				else {
HXLINE( 404)					calc = (calc * ( (Float)(2) ));
            				}
HXLINE( 406)				this->danceEveryNumBeats = ::Math_obj::round(::Math_obj::max(calc,( (Float)(1) )));
            			}
            		}
HXLINE( 408)		this->settingCharacterUp = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Character_obj,recalculateDanceIdle,(void))

void Character_obj::addOffset(::String name,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_413_addOffset)
HXDLIN( 413)		::cpp::VirtualArray v = ::Array_obj< Float >::__new(2)->init(0,x)->init(1,y);
HXDLIN( 413)		this->animOffsets->set(name,v);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Character_obj,addOffset,(void))

void Character_obj::quickAnimAdd(::String name,::String anim){
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_418_quickAnimAdd)
HXDLIN( 418)		this->animation->addByPrefix(name,anim,24,false,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Character_obj,quickAnimAdd,(void))

::String Character_obj::DEFAULT_CHARACTER;


::hx::ObjectPtr< Character_obj > Character_obj::__new(Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer) {
	::hx::ObjectPtr< Character_obj > __this = new Character_obj();
	__this->__construct(x,y,__o_character,__o_isPlayer);
	return __this;
}

::hx::ObjectPtr< Character_obj > Character_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer) {
	Character_obj *__this = (Character_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Character_obj), true, "Character"));
	*(void **)__this = Character_obj::_hx_vtable;
	__this->__construct(x,y,__o_character,__o_isPlayer);
	return __this;
}

Character_obj::Character_obj()
{
}

void Character_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Character);
	HX_MARK_MEMBER_NAME(animOffsets,"animOffsets");
	HX_MARK_MEMBER_NAME(debugMode,"debugMode");
	HX_MARK_MEMBER_NAME(isPlayer,"isPlayer");
	HX_MARK_MEMBER_NAME(curCharacter,"curCharacter");
	HX_MARK_MEMBER_NAME(colorTween,"colorTween");
	HX_MARK_MEMBER_NAME(holdTimer,"holdTimer");
	HX_MARK_MEMBER_NAME(heyTimer,"heyTimer");
	HX_MARK_MEMBER_NAME(specialAnim,"specialAnim");
	HX_MARK_MEMBER_NAME(animationNotes,"animationNotes");
	HX_MARK_MEMBER_NAME(stunned,"stunned");
	HX_MARK_MEMBER_NAME(singDuration,"singDuration");
	HX_MARK_MEMBER_NAME(idleSuffix,"idleSuffix");
	HX_MARK_MEMBER_NAME(danceIdle,"danceIdle");
	HX_MARK_MEMBER_NAME(skipDance,"skipDance");
	HX_MARK_MEMBER_NAME(healthIcon,"healthIcon");
	HX_MARK_MEMBER_NAME(animationsArray,"animationsArray");
	HX_MARK_MEMBER_NAME(positionArray,"positionArray");
	HX_MARK_MEMBER_NAME(cameraPosition,"cameraPosition");
	HX_MARK_MEMBER_NAME(hasMissAnimations,"hasMissAnimations");
	HX_MARK_MEMBER_NAME(imageFile,"imageFile");
	HX_MARK_MEMBER_NAME(jsonScale,"jsonScale");
	HX_MARK_MEMBER_NAME(noAntialiasing,"noAntialiasing");
	HX_MARK_MEMBER_NAME(originalFlipX,"originalFlipX");
	HX_MARK_MEMBER_NAME(healthColorArray,"healthColorArray");
	HX_MARK_MEMBER_NAME(danced,"danced");
	HX_MARK_MEMBER_NAME(danceEveryNumBeats,"danceEveryNumBeats");
	HX_MARK_MEMBER_NAME(settingCharacterUp,"settingCharacterUp");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Character_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animOffsets,"animOffsets");
	HX_VISIT_MEMBER_NAME(debugMode,"debugMode");
	HX_VISIT_MEMBER_NAME(isPlayer,"isPlayer");
	HX_VISIT_MEMBER_NAME(curCharacter,"curCharacter");
	HX_VISIT_MEMBER_NAME(colorTween,"colorTween");
	HX_VISIT_MEMBER_NAME(holdTimer,"holdTimer");
	HX_VISIT_MEMBER_NAME(heyTimer,"heyTimer");
	HX_VISIT_MEMBER_NAME(specialAnim,"specialAnim");
	HX_VISIT_MEMBER_NAME(animationNotes,"animationNotes");
	HX_VISIT_MEMBER_NAME(stunned,"stunned");
	HX_VISIT_MEMBER_NAME(singDuration,"singDuration");
	HX_VISIT_MEMBER_NAME(idleSuffix,"idleSuffix");
	HX_VISIT_MEMBER_NAME(danceIdle,"danceIdle");
	HX_VISIT_MEMBER_NAME(skipDance,"skipDance");
	HX_VISIT_MEMBER_NAME(healthIcon,"healthIcon");
	HX_VISIT_MEMBER_NAME(animationsArray,"animationsArray");
	HX_VISIT_MEMBER_NAME(positionArray,"positionArray");
	HX_VISIT_MEMBER_NAME(cameraPosition,"cameraPosition");
	HX_VISIT_MEMBER_NAME(hasMissAnimations,"hasMissAnimations");
	HX_VISIT_MEMBER_NAME(imageFile,"imageFile");
	HX_VISIT_MEMBER_NAME(jsonScale,"jsonScale");
	HX_VISIT_MEMBER_NAME(noAntialiasing,"noAntialiasing");
	HX_VISIT_MEMBER_NAME(originalFlipX,"originalFlipX");
	HX_VISIT_MEMBER_NAME(healthColorArray,"healthColorArray");
	HX_VISIT_MEMBER_NAME(danced,"danced");
	HX_VISIT_MEMBER_NAME(danceEveryNumBeats,"danceEveryNumBeats");
	HX_VISIT_MEMBER_NAME(settingCharacterUp,"settingCharacterUp");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Character_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dance") ) { return ::hx::Val( dance_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"danced") ) { return ::hx::Val( danced ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stunned") ) { return ::hx::Val( stunned ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { return ::hx::Val( isPlayer ); }
		if (HX_FIELD_EQ(inName,"heyTimer") ) { return ::hx::Val( heyTimer ); }
		if (HX_FIELD_EQ(inName,"playAnim") ) { return ::hx::Val( playAnim_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugMode") ) { return ::hx::Val( debugMode ); }
		if (HX_FIELD_EQ(inName,"holdTimer") ) { return ::hx::Val( holdTimer ); }
		if (HX_FIELD_EQ(inName,"danceIdle") ) { return ::hx::Val( danceIdle ); }
		if (HX_FIELD_EQ(inName,"skipDance") ) { return ::hx::Val( skipDance ); }
		if (HX_FIELD_EQ(inName,"imageFile") ) { return ::hx::Val( imageFile ); }
		if (HX_FIELD_EQ(inName,"jsonScale") ) { return ::hx::Val( jsonScale ); }
		if (HX_FIELD_EQ(inName,"sortAnims") ) { return ::hx::Val( sortAnims_dyn() ); }
		if (HX_FIELD_EQ(inName,"addOffset") ) { return ::hx::Val( addOffset_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colorTween") ) { return ::hx::Val( colorTween ); }
		if (HX_FIELD_EQ(inName,"idleSuffix") ) { return ::hx::Val( idleSuffix ); }
		if (HX_FIELD_EQ(inName,"healthIcon") ) { return ::hx::Val( healthIcon ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { return ::hx::Val( animOffsets ); }
		if (HX_FIELD_EQ(inName,"specialAnim") ) { return ::hx::Val( specialAnim ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { return ::hx::Val( curCharacter ); }
		if (HX_FIELD_EQ(inName,"singDuration") ) { return ::hx::Val( singDuration ); }
		if (HX_FIELD_EQ(inName,"quickAnimAdd") ) { return ::hx::Val( quickAnimAdd_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"positionArray") ) { return ::hx::Val( positionArray ); }
		if (HX_FIELD_EQ(inName,"originalFlipX") ) { return ::hx::Val( originalFlipX ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"animationNotes") ) { return ::hx::Val( animationNotes ); }
		if (HX_FIELD_EQ(inName,"cameraPosition") ) { return ::hx::Val( cameraPosition ); }
		if (HX_FIELD_EQ(inName,"noAntialiasing") ) { return ::hx::Val( noAntialiasing ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"animationsArray") ) { return ::hx::Val( animationsArray ); }
		if (HX_FIELD_EQ(inName,"loadMappedAnims") ) { return ::hx::Val( loadMappedAnims_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"healthColorArray") ) { return ::hx::Val( healthColorArray ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hasMissAnimations") ) { return ::hx::Val( hasMissAnimations ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"danceEveryNumBeats") ) { return ::hx::Val( danceEveryNumBeats ); }
		if (HX_FIELD_EQ(inName,"settingCharacterUp") ) { return ::hx::Val( settingCharacterUp ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"recalculateDanceIdle") ) { return ::hx::Val( recalculateDanceIdle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Character_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHARACTER") ) { outValue = ( DEFAULT_CHARACTER ); return true; }
	}
	return false;
}

::hx::Val Character_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"danced") ) { danced=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stunned") ) { stunned=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { isPlayer=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"heyTimer") ) { heyTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugMode") ) { debugMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTimer") ) { holdTimer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"danceIdle") ) { danceIdle=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipDance") ) { skipDance=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imageFile") ) { imageFile=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jsonScale") ) { jsonScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colorTween") ) { colorTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		if (HX_FIELD_EQ(inName,"idleSuffix") ) { idleSuffix=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"healthIcon") ) { healthIcon=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { animOffsets=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specialAnim") ) { specialAnim=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { curCharacter=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"singDuration") ) { singDuration=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"positionArray") ) { positionArray=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originalFlipX") ) { originalFlipX=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"animationNotes") ) { animationNotes=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraPosition") ) { cameraPosition=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noAntialiasing") ) { noAntialiasing=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"animationsArray") ) { animationsArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"healthColorArray") ) { healthColorArray=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hasMissAnimations") ) { hasMissAnimations=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"danceEveryNumBeats") ) { danceEveryNumBeats=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"settingCharacterUp") ) { settingCharacterUp=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Character_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHARACTER") ) { DEFAULT_CHARACTER=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void Character_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("animOffsets",6f,ff,7a,f8));
	outFields->push(HX_("debugMode",56,77,ac,2b));
	outFields->push(HX_("isPlayer",eb,86,22,90));
	outFields->push(HX_("curCharacter",09,86,7c,d7));
	outFields->push(HX_("colorTween",08,c2,dc,3d));
	outFields->push(HX_("holdTimer",06,82,13,a9));
	outFields->push(HX_("heyTimer",49,0f,08,a9));
	outFields->push(HX_("specialAnim",ea,3c,bc,8d));
	outFields->push(HX_("animationNotes",9d,6e,ee,af));
	outFields->push(HX_("stunned",53,5b,75,b6));
	outFields->push(HX_("singDuration",c3,c8,98,d1));
	outFields->push(HX_("idleSuffix",05,85,52,9f));
	outFields->push(HX_("danceIdle",e7,6b,fd,dd));
	outFields->push(HX_("skipDance",34,f0,7e,e8));
	outFields->push(HX_("healthIcon",35,ba,48,02));
	outFields->push(HX_("animationsArray",2a,66,2f,8e));
	outFields->push(HX_("positionArray",30,38,8e,8f));
	outFields->push(HX_("cameraPosition",6e,50,87,c0));
	outFields->push(HX_("hasMissAnimations",05,dc,20,aa));
	outFields->push(HX_("imageFile",77,63,f0,25));
	outFields->push(HX_("jsonScale",42,2b,ab,18));
	outFields->push(HX_("noAntialiasing",d5,a0,b5,f5));
	outFields->push(HX_("originalFlipX",fa,3a,83,5d));
	outFields->push(HX_("healthColorArray",f2,0c,7e,49));
	outFields->push(HX_("danced",d1,49,8f,1e));
	outFields->push(HX_("danceEveryNumBeats",9f,1d,04,5f));
	outFields->push(HX_("settingCharacterUp",b4,22,b1,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Character_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Character_obj,animOffsets),HX_("animOffsets",6f,ff,7a,f8)},
	{::hx::fsBool,(int)offsetof(Character_obj,debugMode),HX_("debugMode",56,77,ac,2b)},
	{::hx::fsBool,(int)offsetof(Character_obj,isPlayer),HX_("isPlayer",eb,86,22,90)},
	{::hx::fsString,(int)offsetof(Character_obj,curCharacter),HX_("curCharacter",09,86,7c,d7)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(Character_obj,colorTween),HX_("colorTween",08,c2,dc,3d)},
	{::hx::fsFloat,(int)offsetof(Character_obj,holdTimer),HX_("holdTimer",06,82,13,a9)},
	{::hx::fsFloat,(int)offsetof(Character_obj,heyTimer),HX_("heyTimer",49,0f,08,a9)},
	{::hx::fsBool,(int)offsetof(Character_obj,specialAnim),HX_("specialAnim",ea,3c,bc,8d)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(Character_obj,animationNotes),HX_("animationNotes",9d,6e,ee,af)},
	{::hx::fsBool,(int)offsetof(Character_obj,stunned),HX_("stunned",53,5b,75,b6)},
	{::hx::fsFloat,(int)offsetof(Character_obj,singDuration),HX_("singDuration",c3,c8,98,d1)},
	{::hx::fsString,(int)offsetof(Character_obj,idleSuffix),HX_("idleSuffix",05,85,52,9f)},
	{::hx::fsBool,(int)offsetof(Character_obj,danceIdle),HX_("danceIdle",e7,6b,fd,dd)},
	{::hx::fsBool,(int)offsetof(Character_obj,skipDance),HX_("skipDance",34,f0,7e,e8)},
	{::hx::fsString,(int)offsetof(Character_obj,healthIcon),HX_("healthIcon",35,ba,48,02)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Character_obj,animationsArray),HX_("animationsArray",2a,66,2f,8e)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Character_obj,positionArray),HX_("positionArray",30,38,8e,8f)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Character_obj,cameraPosition),HX_("cameraPosition",6e,50,87,c0)},
	{::hx::fsBool,(int)offsetof(Character_obj,hasMissAnimations),HX_("hasMissAnimations",05,dc,20,aa)},
	{::hx::fsString,(int)offsetof(Character_obj,imageFile),HX_("imageFile",77,63,f0,25)},
	{::hx::fsFloat,(int)offsetof(Character_obj,jsonScale),HX_("jsonScale",42,2b,ab,18)},
	{::hx::fsBool,(int)offsetof(Character_obj,noAntialiasing),HX_("noAntialiasing",d5,a0,b5,f5)},
	{::hx::fsBool,(int)offsetof(Character_obj,originalFlipX),HX_("originalFlipX",fa,3a,83,5d)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Character_obj,healthColorArray),HX_("healthColorArray",f2,0c,7e,49)},
	{::hx::fsBool,(int)offsetof(Character_obj,danced),HX_("danced",d1,49,8f,1e)},
	{::hx::fsInt,(int)offsetof(Character_obj,danceEveryNumBeats),HX_("danceEveryNumBeats",9f,1d,04,5f)},
	{::hx::fsBool,(int)offsetof(Character_obj,settingCharacterUp),HX_("settingCharacterUp",b4,22,b1,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Character_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Character_obj::DEFAULT_CHARACTER,HX_("DEFAULT_CHARACTER",2b,e7,14,33)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Character_obj_sMemberFields[] = {
	HX_("animOffsets",6f,ff,7a,f8),
	HX_("debugMode",56,77,ac,2b),
	HX_("isPlayer",eb,86,22,90),
	HX_("curCharacter",09,86,7c,d7),
	HX_("colorTween",08,c2,dc,3d),
	HX_("holdTimer",06,82,13,a9),
	HX_("heyTimer",49,0f,08,a9),
	HX_("specialAnim",ea,3c,bc,8d),
	HX_("animationNotes",9d,6e,ee,af),
	HX_("stunned",53,5b,75,b6),
	HX_("singDuration",c3,c8,98,d1),
	HX_("idleSuffix",05,85,52,9f),
	HX_("danceIdle",e7,6b,fd,dd),
	HX_("skipDance",34,f0,7e,e8),
	HX_("healthIcon",35,ba,48,02),
	HX_("animationsArray",2a,66,2f,8e),
	HX_("positionArray",30,38,8e,8f),
	HX_("cameraPosition",6e,50,87,c0),
	HX_("hasMissAnimations",05,dc,20,aa),
	HX_("imageFile",77,63,f0,25),
	HX_("jsonScale",42,2b,ab,18),
	HX_("noAntialiasing",d5,a0,b5,f5),
	HX_("originalFlipX",fa,3a,83,5d),
	HX_("healthColorArray",f2,0c,7e,49),
	HX_("update",09,86,05,87),
	HX_("danced",d1,49,8f,1e),
	HX_("dance",33,83,83,d4),
	HX_("playAnim",25,ea,84,30),
	HX_("loadMappedAnims",09,a0,8b,68),
	HX_("sortAnims",04,9d,57,2b),
	HX_("danceEveryNumBeats",9f,1d,04,5f),
	HX_("settingCharacterUp",b4,22,b1,99),
	HX_("recalculateDanceIdle",14,26,91,09),
	HX_("addOffset",94,cc,63,18),
	HX_("quickAnimAdd",23,8d,a8,8c),
	::String(null()) };

static void Character_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Character_obj::DEFAULT_CHARACTER,"DEFAULT_CHARACTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Character_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Character_obj::DEFAULT_CHARACTER,"DEFAULT_CHARACTER");
};

#endif

::hx::Class Character_obj::__mClass;

static ::String Character_obj_sStaticFields[] = {
	HX_("DEFAULT_CHARACTER",2b,e7,14,33),
	::String(null())
};

void Character_obj::__register()
{
	Character_obj _hx_dummy;
	Character_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Character",89,bb,a4,e3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Character_obj::__GetStatic;
	__mClass->mSetStaticField = &Character_obj::__SetStatic;
	__mClass->mMarkFunc = Character_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Character_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Character_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Character_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Character_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Character_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Character_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Character_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_81_boot)
HXDLIN(  81)		DEFAULT_CHARACTER = HX_("bf",c4,55,00,00);
            	}
}

