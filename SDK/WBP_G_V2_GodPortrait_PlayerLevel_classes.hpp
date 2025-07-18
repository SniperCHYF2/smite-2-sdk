﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_GodPortrait_PlayerLevel

#include "Basic.hpp"

#include "HemingwayUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_G_V2_GodPortrait_PlayerLevel.WBP_G_V2_GodPortrait_PlayerLevel_C
// 0x0030 (0x0648 - 0x0618)
class UWBP_G_V2_GodPortrait_PlayerLevel_C final : public UHWGameplayAttributeLevelXPWidget
{
public:
	class UWBP_GS_V1_GAProgressBarListener_C*     EXPBarListener;                                    // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWProgressBar*                         LevelProgress;                                     // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWProgressBar*                         LevelProgress_Complete;                            // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           LevelText;                                         // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWSizeBox*                             ProgressBar_SizeBox;                               // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         MaxLevel;                                          // 0x0640(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateLevelDisplay(int32 Level);

	class UHWGameplayAttributeProgressBar* GetProgressBarAttributeWidget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_G_V2_GodPortrait_PlayerLevel_C">();
	}
	static class UWBP_G_V2_GodPortrait_PlayerLevel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_G_V2_GodPortrait_PlayerLevel_C>();
	}
};
static_assert(alignof(UWBP_G_V2_GodPortrait_PlayerLevel_C) == 0x000008, "Wrong alignment on UWBP_G_V2_GodPortrait_PlayerLevel_C");
static_assert(sizeof(UWBP_G_V2_GodPortrait_PlayerLevel_C) == 0x000648, "Wrong size on UWBP_G_V2_GodPortrait_PlayerLevel_C");
static_assert(offsetof(UWBP_G_V2_GodPortrait_PlayerLevel_C, EXPBarListener) == 0x000618, "Member 'UWBP_G_V2_GodPortrait_PlayerLevel_C::EXPBarListener' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_GodPortrait_PlayerLevel_C, LevelProgress) == 0x000620, "Member 'UWBP_G_V2_GodPortrait_PlayerLevel_C::LevelProgress' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_GodPortrait_PlayerLevel_C, LevelProgress_Complete) == 0x000628, "Member 'UWBP_G_V2_GodPortrait_PlayerLevel_C::LevelProgress_Complete' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_GodPortrait_PlayerLevel_C, LevelText) == 0x000630, "Member 'UWBP_G_V2_GodPortrait_PlayerLevel_C::LevelText' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_GodPortrait_PlayerLevel_C, ProgressBar_SizeBox) == 0x000638, "Member 'UWBP_G_V2_GodPortrait_PlayerLevel_C::ProgressBar_SizeBox' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_GodPortrait_PlayerLevel_C, MaxLevel) == 0x000640, "Member 'UWBP_G_V2_GodPortrait_PlayerLevel_C::MaxLevel' has a wrong offset!");

}

