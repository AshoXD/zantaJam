#ifndef INCLUDED_flixel_addons_ui_ButtonLabelStyle
#define INCLUDED_flixel_addons_ui_ButtonLabelStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,BorderDef)
HX_DECLARE_CLASS3(flixel,addons,ui,ButtonLabelStyle)
HX_DECLARE_CLASS3(flixel,addons,ui,FontDef)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES ButtonLabelStyle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ButtonLabelStyle_obj OBJ_;
		ButtonLabelStyle_obj();

	public:
		enum { _hx_ClassId = 0x17433232 };

		void __construct( ::flixel::addons::ui::FontDef Font,::String Align, ::Dynamic Color, ::flixel::addons::ui::BorderDef Border);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.ButtonLabelStyle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.ButtonLabelStyle"); }
		static ::hx::ObjectPtr< ButtonLabelStyle_obj > __new( ::flixel::addons::ui::FontDef Font,::String Align, ::Dynamic Color, ::flixel::addons::ui::BorderDef Border);
		static ::hx::ObjectPtr< ButtonLabelStyle_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::ui::FontDef Font,::String Align, ::Dynamic Color, ::flixel::addons::ui::BorderDef Border);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ButtonLabelStyle_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ButtonLabelStyle",4f,d7,71,bb); }

		 ::flixel::addons::ui::FontDef font;
		 ::flixel::addons::ui::BorderDef border;
		 ::Dynamic color;
		::String align;
		void apply( ::flixel::text::FlxText f);
		::Dynamic apply_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_ButtonLabelStyle */ 
