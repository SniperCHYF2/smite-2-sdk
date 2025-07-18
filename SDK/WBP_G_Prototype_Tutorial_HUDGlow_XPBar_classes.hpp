﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_Prototype_Tutorial_HUDGlow_XPBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_G_Prototype_Tutorial_HUDGlow_XPBar.WBP_G_Prototype_Tutorial_HUDGlow_XPBar_C
// 0x0018 (0x0610 - 0x05F8)
class UWBP_G_Prototype_Tutorial_HUDGlow_XPBar_C final : public UHWWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PulseAnim;                                         // 0x0600(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHWImage*                               Prototype_Tutorial_HUDHighlight_Glow;              // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_G_Prototype_Tutorial_HUDGlow_XPBar(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_G_Prototype_Tutorial_HUDGlow_XPBar_C">();
	}
	static class UWBP_G_Prototype_Tutorial_HUDGlow_XPBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_G_Prototype_Tutorial_HUDGlow_XPBar_C>();
	}
};
static_assert(alignof(UWBP_G_Prototype_Tutorial_HUDGlow_XPBar_C) == 0x000008, "Wrong alignment on UWBP_G_Prototype_Tutorial_HUDGlow_XPBar_C");
static_assert(sizeof(UWBP_G_Prototype_Tutorial_HUDGlow_XPBar_C) == 0x000610, "Wrong size on UWBP_G_Prototype_Tutorial_HUDGlow_XPBar_C");
static_assert(offsetof(UWBP_G_Prototype_Tutorial_HUDGlow_XPBar_C, UberGraphFrame) == 0x0005F8, "Member 'UWBP_G_Prototype_Tutorial_HUDGlow_XPBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Tutorial_HUDGlow_XPBar_C, PulseAnim) == 0x000600, "Member 'UWBP_G_Prototype_Tutorial_HUDGlow_XPBar_C::PulseAnim' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Tutorial_HUDGlow_XPBar_C, Prototype_Tutorial_HUDHighlight_Glow) == 0x000608, "Member 'UWBP_G_Prototype_Tutorial_HUDGlow_XPBar_C::Prototype_Tutorial_HUDHighlight_Glow' has a wrong offset!");

}

