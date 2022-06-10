#ifndef INCLUDED_lime_graphics_opengl_ext_OES_texture_npot
#define INCLUDED_lime_graphics_opengl_ext_OES_texture_npot

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_578f4a5a87663fe9_5_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_texture_npot)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES OES_texture_npot_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OES_texture_npot_obj OBJ_;
		OES_texture_npot_obj();

	public:
		enum { _hx_ClassId = 0x10b0bbaf };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_texture_npot")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.OES_texture_npot"); }

		inline static ::hx::ObjectPtr< OES_texture_npot_obj > __new() {
			::hx::ObjectPtr< OES_texture_npot_obj > __this = new OES_texture_npot_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OES_texture_npot_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OES_texture_npot_obj *__this = (OES_texture_npot_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OES_texture_npot_obj), false, "lime.graphics.opengl.ext.OES_texture_npot"));
			*(void **)__this = OES_texture_npot_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_578f4a5a87663fe9_5_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OES_texture_npot_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OES_texture_npot",4d,89,dd,01); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_texture_npot */ 
