#ifndef INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformCursorDefault
#define INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformCursorDefault

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
HX_DECLARE_CLASS6(flixel,_hx_system,debug,interaction,tools,_Transform,GraphicTransformCursorDefault)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{
namespace _Transform{


class HXCPP_CLASS_ATTRIBUTES GraphicTransformCursorDefault_obj : public  ::openfl::display::BitmapData_obj
{
	public:
		typedef  ::openfl::display::BitmapData_obj super;
		typedef GraphicTransformCursorDefault_obj OBJ_;
		GraphicTransformCursorDefault_obj();

	public:
		enum { _hx_ClassId = 0x46b6448d };

		void __construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.interaction.tools._Transform.GraphicTransformCursorDefault")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.interaction.tools._Transform.GraphicTransformCursorDefault"); }
		static ::hx::ObjectPtr< GraphicTransformCursorDefault_obj > __new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static ::hx::ObjectPtr< GraphicTransformCursorDefault_obj > __alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GraphicTransformCursorDefault_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GraphicTransformCursorDefault",27,24,65,dc); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
} // end namespace _Transform

#endif /* INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformCursorDefault */ 
