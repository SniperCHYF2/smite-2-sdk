﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_GodAbilityOverviewWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_C_GodAbilityOverviewWidget.WBP_C_GodAbilityOverviewWidget_C
// 0x00C8 (0x0740 - 0x0678)
class UWBP_C_GodAbilityOverviewWidget_C final : public UHWTooltipWidget_AbilityOverview
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0678(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWImage*                               AbilityBackground;                                 // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StrokeBorder_C*                    AbilityBackground_Stroke;                          // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           AbilityCooldown;                                   // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               AbilityCooldownImage;                              // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           AbilityCost;                                       // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               AbilityCostImage;                                  // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_G_V2_GodAbilityLevelBarCustom_Grid_C* AbilityLevelBar;                                // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               AbilityLocked;                                     // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           AbilityTitle;                                      // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           AbilityType;                                       // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           AutoLevelPrompt;                                   // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWVerticalBox*                         DescriptionContainer;                              // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               Divider_1;                                         // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               FlashAnimation;                                    // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_HUD_MultiPromptWidget_C*         Hotkeys;                                           // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HWImage_46;                                        // 0x06F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               LevelUp_Plus;                                      // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               Lockout;                                           // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PromptText;                                        // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               RarityMaterial_1;                                  // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUpgradePopOut_C*                       UpgradePopOut;                                     // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StrokeBorder_C*                    WBP_StrokeBorder;                                  // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StrokeBorder_C*                    WBP_StrokeBorder_1;                                // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         NewVar;                                            // 0x0738(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddedDescriptionLine(class UHWTooltipWidget_AbilityDescription* AddedLine);
	void AddedDetailLine(class UHWTooltipWidget_AbilityDetail* AddedLine);
	void AddedDividerLine(class UHWWidget* AddedLine);
	void AddedUpgradeLine(class UHWTooltipWidget_AbilityDetail* AddedLine);
	void DisplayAsNextAutoSkillLevelUp(bool bShould);
	void DisplayCanLevelUpAndUse(bool bCanLevelUp, bool bCanUse);
	void DisplayCooldown(float Cooldown);
	void DisplayCost(float Cost);
	void DisplayCurrentLevel(int32 CurrentLevel);
	void DisplayIcon(const TSoftObjectPtr<class UTexture2D>& Icon);
	void DisplayLevelLock(int32 LevelLock, bool bIsAbilityUnlocked);
	void DisplayTitle(const class FText& Title);
	void DisplayType(const struct FGameplayTag& TypeTag);
	void ExecuteUbergraph_WBP_C_GodAbilityOverviewWidget(int32 EntryPoint);
	void InitializeWidget();
	void OnEquipmentInstanceAdded();
	void SetAbilityType(const class FText& AbilityTypeText);
	void UninitializeWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_C_GodAbilityOverviewWidget_C">();
	}
	static class UWBP_C_GodAbilityOverviewWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_C_GodAbilityOverviewWidget_C>();
	}
};
static_assert(alignof(UWBP_C_GodAbilityOverviewWidget_C) == 0x000008, "Wrong alignment on UWBP_C_GodAbilityOverviewWidget_C");
static_assert(sizeof(UWBP_C_GodAbilityOverviewWidget_C) == 0x000740, "Wrong size on UWBP_C_GodAbilityOverviewWidget_C");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, UberGraphFrame) == 0x000678, "Member 'UWBP_C_GodAbilityOverviewWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, AbilityBackground) == 0x000680, "Member 'UWBP_C_GodAbilityOverviewWidget_C::AbilityBackground' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, AbilityBackground_Stroke) == 0x000688, "Member 'UWBP_C_GodAbilityOverviewWidget_C::AbilityBackground_Stroke' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, AbilityCooldown) == 0x000690, "Member 'UWBP_C_GodAbilityOverviewWidget_C::AbilityCooldown' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, AbilityCooldownImage) == 0x000698, "Member 'UWBP_C_GodAbilityOverviewWidget_C::AbilityCooldownImage' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, AbilityCost) == 0x0006A0, "Member 'UWBP_C_GodAbilityOverviewWidget_C::AbilityCost' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, AbilityCostImage) == 0x0006A8, "Member 'UWBP_C_GodAbilityOverviewWidget_C::AbilityCostImage' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, AbilityLevelBar) == 0x0006B0, "Member 'UWBP_C_GodAbilityOverviewWidget_C::AbilityLevelBar' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, AbilityLocked) == 0x0006B8, "Member 'UWBP_C_GodAbilityOverviewWidget_C::AbilityLocked' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, AbilityTitle) == 0x0006C0, "Member 'UWBP_C_GodAbilityOverviewWidget_C::AbilityTitle' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, AbilityType) == 0x0006C8, "Member 'UWBP_C_GodAbilityOverviewWidget_C::AbilityType' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, AutoLevelPrompt) == 0x0006D0, "Member 'UWBP_C_GodAbilityOverviewWidget_C::AutoLevelPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, DescriptionContainer) == 0x0006D8, "Member 'UWBP_C_GodAbilityOverviewWidget_C::DescriptionContainer' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, Divider_1) == 0x0006E0, "Member 'UWBP_C_GodAbilityOverviewWidget_C::Divider_1' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, FlashAnimation) == 0x0006E8, "Member 'UWBP_C_GodAbilityOverviewWidget_C::FlashAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, Hotkeys) == 0x0006F0, "Member 'UWBP_C_GodAbilityOverviewWidget_C::Hotkeys' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, HWImage_46) == 0x0006F8, "Member 'UWBP_C_GodAbilityOverviewWidget_C::HWImage_46' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, LevelUp_Plus) == 0x000700, "Member 'UWBP_C_GodAbilityOverviewWidget_C::LevelUp_Plus' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, Lockout) == 0x000708, "Member 'UWBP_C_GodAbilityOverviewWidget_C::Lockout' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, PromptText) == 0x000710, "Member 'UWBP_C_GodAbilityOverviewWidget_C::PromptText' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, RarityMaterial_1) == 0x000718, "Member 'UWBP_C_GodAbilityOverviewWidget_C::RarityMaterial_1' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, UpgradePopOut) == 0x000720, "Member 'UWBP_C_GodAbilityOverviewWidget_C::UpgradePopOut' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, WBP_StrokeBorder) == 0x000728, "Member 'UWBP_C_GodAbilityOverviewWidget_C::WBP_StrokeBorder' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, WBP_StrokeBorder_1) == 0x000730, "Member 'UWBP_C_GodAbilityOverviewWidget_C::WBP_StrokeBorder_1' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAbilityOverviewWidget_C, NewVar) == 0x000738, "Member 'UWBP_C_GodAbilityOverviewWidget_C::NewVar' has a wrong offset!");

}

