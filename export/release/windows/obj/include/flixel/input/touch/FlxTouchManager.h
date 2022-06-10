#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#define INCLUDED_flixel_input_touch_FlxTouchManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouchManager)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,TouchEvent)

namespace flixel{
namespace input{
namespace touch{


class HXCPP_CLASS_ATTRIBUTES FlxTouchManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxTouchManager_obj OBJ_;
		FlxTouchManager_obj();

	public:
		enum { _hx_ClassId = 0x3f93d6ef };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.touch.FlxTouchManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.touch.FlxTouchManager"); }
		static ::hx::ObjectPtr< FlxTouchManager_obj > __new();
		static ::hx::ObjectPtr< FlxTouchManager_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTouchManager_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxTouchManager",e0,a3,5d,96); }

		static void __boot();
		static int maxTouchPoints;
		::Array< ::Dynamic> list;
		::Array< ::Dynamic> _inactiveTouches;
		 ::haxe::ds::IntMap _touchesCache;
		 ::flixel::input::touch::FlxTouch getByID(int TouchPointID);
		::Dynamic getByID_dyn();

		 ::flixel::input::touch::FlxTouch getFirst();
		::Dynamic getFirst_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		::Array< ::Dynamic> justStarted(::Array< ::Dynamic> TouchArray);
		::Dynamic justStarted_dyn();

		::Array< ::Dynamic> justReleased(::Array< ::Dynamic> TouchArray);
		::Dynamic justReleased_dyn();

		void reset();
		::Dynamic reset_dyn();

		void handleTouchBegin( ::openfl::events::TouchEvent FlashEvent);
		::Dynamic handleTouchBegin_dyn();

		void handleTouchEnd( ::openfl::events::TouchEvent FlashEvent);
		::Dynamic handleTouchEnd_dyn();

		void handleTouchMove( ::openfl::events::TouchEvent FlashEvent);
		::Dynamic handleTouchMove_dyn();

		 ::flixel::input::touch::FlxTouch add( ::flixel::input::touch::FlxTouch Touch);
		::Dynamic add_dyn();

		 ::flixel::input::touch::FlxTouch recycle(int X,int Y,int PointID);
		::Dynamic recycle_dyn();

		void update();
		::Dynamic update_dyn();

		void onFocus();
		::Dynamic onFocus_dyn();

		void onFocusLost();
		::Dynamic onFocusLost_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace touch

#endif /* INCLUDED_flixel_input_touch_FlxTouchManager */ 
