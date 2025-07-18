﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_DeathRecapHudWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_G_V2_DeathRecapHudWidget.WBP_G_V2_DeathRecapHudWidget_C
// 0x0030 (0x0668 - 0x0638)
class UWBP_G_V2_DeathRecapHudWidget_C final : public UHWCharacterWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0638(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWOverlay*                             ContainerOverlay;                                  // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HWImage_314;                                       // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_G_V2_DeathRecapWidget_C*           WBP_G_V2_DeathRecapWidget;                         // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_MultiPromptWidget_C*             WBP_S_MultiPromptWidget;                           // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsHUD;                                             // 0x0660(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DisplayCharacterRespawnState(bool bIsAlive, float RemainingRespawnTime);
	void ExecuteUbergraph_WBP_G_V2_DeathRecapHudWidget(int32 EntryPoint);
	void InitializeWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_G_V2_DeathRecapHudWidget_C">();
	}
	static class UWBP_G_V2_DeathRecapHudWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_G_V2_DeathRecapHudWidget_C>();
	}
};
static_assert(alignof(UWBP_G_V2_DeathRecapHudWidget_C) == 0x000008, "Wrong alignment on UWBP_G_V2_DeathRecapHudWidget_C");
static_assert(sizeof(UWBP_G_V2_DeathRecapHudWidget_C) == 0x000668, "Wrong size on UWBP_G_V2_DeathRecapHudWidget_C");
static_assert(offsetof(UWBP_G_V2_DeathRecapHudWidget_C, UberGraphFrame) == 0x000638, "Member 'UWBP_G_V2_DeathRecapHudWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_DeathRecapHudWidget_C, ContainerOverlay) == 0x000640, "Member 'UWBP_G_V2_DeathRecapHudWidget_C::ContainerOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_DeathRecapHudWidget_C, HWImage_314) == 0x000648, "Member 'UWBP_G_V2_DeathRecapHudWidget_C::HWImage_314' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_DeathRecapHudWidget_C, WBP_G_V2_DeathRecapWidget) == 0x000650, "Member 'UWBP_G_V2_DeathRecapHudWidget_C::WBP_G_V2_DeathRecapWidget' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_DeathRecapHudWidget_C, WBP_S_MultiPromptWidget) == 0x000658, "Member 'UWBP_G_V2_DeathRecapHudWidget_C::WBP_S_MultiPromptWidget' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_DeathRecapHudWidget_C, IsHUD) == 0x000660, "Member 'UWBP_G_V2_DeathRecapHudWidget_C::IsHUD' has a wrong offset!");

}

