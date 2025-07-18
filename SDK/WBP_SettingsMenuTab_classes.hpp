﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SettingsMenuTab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SettingsMenuTab.WBP_SettingsMenuTab_C
// 0x0050 (0x06C8 - 0x0678)
class UWBP_SettingsMenuTab_C final : public UHWTabBarEntryWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0678(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SelectedAnim;                                      // 0x0680(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HoverAnim;                                         // 0x0688(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Backfill;                                          // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              HitArea;                                           // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               LeftLine;                                          // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               RightLine;                                         // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           Text;                                              // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoundBase*                             SFXClick;                                          // 0x06B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SFXHover;                                          // 0x06C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_G_SettingsMenuTab_HitArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_SettingsMenuTab_HitArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_SettingsMenuTab_HitArea_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void DisplayIsSelected();
	void DisplayTab();
	void ExecuteUbergraph_WBP_SettingsMenuTab(int32 EntryPoint);
	void PlayClickSFX();
	void PlayHoverSFX();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SettingsMenuTab_C">();
	}
	static class UWBP_SettingsMenuTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SettingsMenuTab_C>();
	}
};
static_assert(alignof(UWBP_SettingsMenuTab_C) == 0x000008, "Wrong alignment on UWBP_SettingsMenuTab_C");
static_assert(sizeof(UWBP_SettingsMenuTab_C) == 0x0006C8, "Wrong size on UWBP_SettingsMenuTab_C");
static_assert(offsetof(UWBP_SettingsMenuTab_C, UberGraphFrame) == 0x000678, "Member 'UWBP_SettingsMenuTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsMenuTab_C, SelectedAnim) == 0x000680, "Member 'UWBP_SettingsMenuTab_C::SelectedAnim' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsMenuTab_C, HoverAnim) == 0x000688, "Member 'UWBP_SettingsMenuTab_C::HoverAnim' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsMenuTab_C, Backfill) == 0x000690, "Member 'UWBP_SettingsMenuTab_C::Backfill' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsMenuTab_C, HitArea) == 0x000698, "Member 'UWBP_SettingsMenuTab_C::HitArea' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsMenuTab_C, LeftLine) == 0x0006A0, "Member 'UWBP_SettingsMenuTab_C::LeftLine' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsMenuTab_C, RightLine) == 0x0006A8, "Member 'UWBP_SettingsMenuTab_C::RightLine' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsMenuTab_C, Text) == 0x0006B0, "Member 'UWBP_SettingsMenuTab_C::Text' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsMenuTab_C, SFXClick) == 0x0006B8, "Member 'UWBP_SettingsMenuTab_C::SFXClick' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsMenuTab_C, SFXHover) == 0x0006C0, "Member 'UWBP_SettingsMenuTab_C::SFXHover' has a wrong offset!");

}

