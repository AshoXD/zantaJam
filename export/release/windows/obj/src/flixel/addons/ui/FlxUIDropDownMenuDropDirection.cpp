#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_FlxUIDropDownMenuDropDirection
#include <flixel/addons/ui/FlxUIDropDownMenuDropDirection.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

::flixel::addons::ui::FlxUIDropDownMenuDropDirection FlxUIDropDownMenuDropDirection_obj::Automatic;

::flixel::addons::ui::FlxUIDropDownMenuDropDirection FlxUIDropDownMenuDropDirection_obj::Down;

::flixel::addons::ui::FlxUIDropDownMenuDropDirection FlxUIDropDownMenuDropDirection_obj::Up;

bool FlxUIDropDownMenuDropDirection_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Automatic",8b,fc,d3,ef)) { outValue = FlxUIDropDownMenuDropDirection_obj::Automatic; return true; }
	if (inName==HX_("Down",82,24,47,2d)) { outValue = FlxUIDropDownMenuDropDirection_obj::Down; return true; }
	if (inName==HX_("Up",7b,4a,00,00)) { outValue = FlxUIDropDownMenuDropDirection_obj::Up; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxUIDropDownMenuDropDirection_obj)

int FlxUIDropDownMenuDropDirection_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Automatic",8b,fc,d3,ef)) return 0;
	if (inName==HX_("Down",82,24,47,2d)) return 1;
	if (inName==HX_("Up",7b,4a,00,00)) return 2;
	return super::__FindIndex(inName);
}

int FlxUIDropDownMenuDropDirection_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Automatic",8b,fc,d3,ef)) return 0;
	if (inName==HX_("Down",82,24,47,2d)) return 0;
	if (inName==HX_("Up",7b,4a,00,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxUIDropDownMenuDropDirection_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Automatic",8b,fc,d3,ef)) return Automatic;
	if (inName==HX_("Down",82,24,47,2d)) return Down;
	if (inName==HX_("Up",7b,4a,00,00)) return Up;
	return super::__Field(inName,inCallProp);
}

static ::String FlxUIDropDownMenuDropDirection_obj_sStaticFields[] = {
	HX_("Automatic",8b,fc,d3,ef),
	HX_("Down",82,24,47,2d),
	HX_("Up",7b,4a,00,00),
	::String(null())
};

::hx::Class FlxUIDropDownMenuDropDirection_obj::__mClass;

Dynamic __Create_FlxUIDropDownMenuDropDirection_obj() { return new FlxUIDropDownMenuDropDirection_obj; }

void FlxUIDropDownMenuDropDirection_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.addons.ui.FlxUIDropDownMenuDropDirection",6b,02,fd,78), ::hx::TCanCast< FlxUIDropDownMenuDropDirection_obj >,FlxUIDropDownMenuDropDirection_obj_sStaticFields,0,
	&__Create_FlxUIDropDownMenuDropDirection_obj, &__Create,
	&super::__SGetClass(), &CreateFlxUIDropDownMenuDropDirection_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxUIDropDownMenuDropDirection_obj::__GetStatic;
}

void FlxUIDropDownMenuDropDirection_obj::__boot()
{
Automatic = ::hx::CreateConstEnum< FlxUIDropDownMenuDropDirection_obj >(HX_("Automatic",8b,fc,d3,ef),0);
Down = ::hx::CreateConstEnum< FlxUIDropDownMenuDropDirection_obj >(HX_("Down",82,24,47,2d),1);
Up = ::hx::CreateConstEnum< FlxUIDropDownMenuDropDirection_obj >(HX_("Up",7b,4a,00,00),2);
}


} // end namespace flixel
} // end namespace addons
} // end namespace ui
