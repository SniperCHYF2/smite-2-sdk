﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Debug_General

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "Hemingway_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Debug_General.WBP_Debug_General_C
// 0x0050 (0x0748 - 0x06F8)
class UWBP_Debug_General_C final : public UHWDebug_GeneralWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWUniformGridPanel*                    DevHudsGrid;                                       // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                        GodListBox;                                        // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              InstantCastButton;                                 // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              MaxLevelButton;                                    // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              NormalCastButton;                                  // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                        PantheonListBox;                                   // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              QuickCastButton;                                   // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              SetButton;                                         // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                        SkinNamesList;                                     // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Debug_General_GodListBox_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__WBP_Debug_General_InstantCastButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_Debug_General_MaxLevelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_Debug_General_NormalCastButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_Debug_General_PantheonListBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__WBP_Debug_General_QuickCastButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_Debug_General_SetButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_Debug_General(int32 EntryPoint);
	void InitializeDevHUDOptions();
	void InitializeQuickCast();
	void InitializeWidget();
	void OnAbilityCastStyleChanged(class AHWPlayerState* PlayerState, EAbilityCastStyle NewAbilityCastStyle);
	void UpdateGodListBox(const class FString& Pantheon);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Debug_General_C">();
	}
	static class UWBP_Debug_General_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Debug_General_C>();
	}
};
static_assert(alignof(UWBP_Debug_General_C) == 0x000008, "Wrong alignment on UWBP_Debug_General_C");
static_assert(sizeof(UWBP_Debug_General_C) == 0x000748, "Wrong size on UWBP_Debug_General_C");
static_assert(offsetof(UWBP_Debug_General_C, UberGraphFrame) == 0x0006F8, "Member 'UWBP_Debug_General_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_General_C, DevHudsGrid) == 0x000700, "Member 'UWBP_Debug_General_C::DevHudsGrid' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_General_C, GodListBox) == 0x000708, "Member 'UWBP_Debug_General_C::GodListBox' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_General_C, InstantCastButton) == 0x000710, "Member 'UWBP_Debug_General_C::InstantCastButton' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_General_C, MaxLevelButton) == 0x000718, "Member 'UWBP_Debug_General_C::MaxLevelButton' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_General_C, NormalCastButton) == 0x000720, "Member 'UWBP_Debug_General_C::NormalCastButton' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_General_C, PantheonListBox) == 0x000728, "Member 'UWBP_Debug_General_C::PantheonListBox' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_General_C, QuickCastButton) == 0x000730, "Member 'UWBP_Debug_General_C::QuickCastButton' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_General_C, SetButton) == 0x000738, "Member 'UWBP_Debug_General_C::SetButton' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_General_C, SkinNamesList) == 0x000740, "Member 'UWBP_Debug_General_C::SkinNamesList' has a wrong offset!");

}

