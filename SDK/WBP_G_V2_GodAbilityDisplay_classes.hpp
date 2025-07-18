﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_GodAbilityDisplay

#include "Basic.hpp"

#include "RallyHereStart_structs.hpp"
#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_G_V2_GodAbilityDisplay.WBP_G_V2_GodAbilityDisplay_C
// 0x0030 (0x08D0 - 0x08A0)
class UWBP_G_V2_GodAbilityDisplay_C final : public UHWCharacterInventoryWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWUniformGridPanel*                    AbilityContainer;                                  // 0x08A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           AbilityReadyToRankUpText;                          // 0x08B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   WidgetName;                                        // 0x08B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void DisplayHasEquipmentToLevelUp(bool bCanLevelUp);
	void EquipmentWidgetAdded(class UHWInventoryEquipmentWidget* AddedEquipmentWidget);
	void EquipmentWidgetRemoved(class UHWInventoryEquipmentWidget* RemovedEquipmentWidget);
	void ExecuteUbergraph_WBP_G_V2_GodAbilityDisplay(int32 EntryPoint);
	void GetLevelUpInputWidget(class UHWMultiPromptWidget** InputWidget);
	const class FText GetWidgetName();
	void InitializeDesignDisplay();
	void OnAbilityLevelUpStateChanged();
	void PreConstruct(bool IsDesignTime);
	void SetLevelUpCallback(class UHWInventoryEquipmentWidget* EquipmentWidget);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_G_V2_GodAbilityDisplay_C">();
	}
	static class UWBP_G_V2_GodAbilityDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_G_V2_GodAbilityDisplay_C>();
	}
};
static_assert(alignof(UWBP_G_V2_GodAbilityDisplay_C) == 0x000008, "Wrong alignment on UWBP_G_V2_GodAbilityDisplay_C");
static_assert(sizeof(UWBP_G_V2_GodAbilityDisplay_C) == 0x0008D0, "Wrong size on UWBP_G_V2_GodAbilityDisplay_C");
static_assert(offsetof(UWBP_G_V2_GodAbilityDisplay_C, UberGraphFrame) == 0x0008A0, "Member 'UWBP_G_V2_GodAbilityDisplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_GodAbilityDisplay_C, AbilityContainer) == 0x0008A8, "Member 'UWBP_G_V2_GodAbilityDisplay_C::AbilityContainer' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_GodAbilityDisplay_C, AbilityReadyToRankUpText) == 0x0008B0, "Member 'UWBP_G_V2_GodAbilityDisplay_C::AbilityReadyToRankUpText' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_GodAbilityDisplay_C, WidgetName) == 0x0008B8, "Member 'UWBP_G_V2_GodAbilityDisplay_C::WidgetName' has a wrong offset!");

}

