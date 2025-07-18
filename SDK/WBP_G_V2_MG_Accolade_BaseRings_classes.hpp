﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_MG_Accolade_BaseRings

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_G_V2_MG_Accolade_BaseRings.WBP_G_V2_MG_Accolade_BaseRings_C
// 0x0030 (0x0720 - 0x06F0)
class UWBP_G_V2_MG_Accolade_BaseRings_C final : public UHWAccoladeWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AccolateRingIntro;                                 // 0x06F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHWImage*                               DarkenUnder;                                       // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               InnerPattern;                                      // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               InnerRing;                                         // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               OuterRing;                                         // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_G_V2_MG_Accolade_BaseRings(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_G_V2_MG_Accolade_BaseRings_C">();
	}
	static class UWBP_G_V2_MG_Accolade_BaseRings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_G_V2_MG_Accolade_BaseRings_C>();
	}
};
static_assert(alignof(UWBP_G_V2_MG_Accolade_BaseRings_C) == 0x000008, "Wrong alignment on UWBP_G_V2_MG_Accolade_BaseRings_C");
static_assert(sizeof(UWBP_G_V2_MG_Accolade_BaseRings_C) == 0x000720, "Wrong size on UWBP_G_V2_MG_Accolade_BaseRings_C");
static_assert(offsetof(UWBP_G_V2_MG_Accolade_BaseRings_C, UberGraphFrame) == 0x0006F0, "Member 'UWBP_G_V2_MG_Accolade_BaseRings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_MG_Accolade_BaseRings_C, AccolateRingIntro) == 0x0006F8, "Member 'UWBP_G_V2_MG_Accolade_BaseRings_C::AccolateRingIntro' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_MG_Accolade_BaseRings_C, DarkenUnder) == 0x000700, "Member 'UWBP_G_V2_MG_Accolade_BaseRings_C::DarkenUnder' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_MG_Accolade_BaseRings_C, InnerPattern) == 0x000708, "Member 'UWBP_G_V2_MG_Accolade_BaseRings_C::InnerPattern' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_MG_Accolade_BaseRings_C, InnerRing) == 0x000710, "Member 'UWBP_G_V2_MG_Accolade_BaseRings_C::InnerRing' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_MG_Accolade_BaseRings_C, OuterRing) == 0x000718, "Member 'UWBP_G_V2_MG_Accolade_BaseRings_C::OuterRing' has a wrong offset!");

}

