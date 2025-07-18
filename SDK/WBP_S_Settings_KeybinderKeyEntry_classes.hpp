﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_Settings_KeybinderKeyEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_S_Settings_KeybinderKeyEntry.WBP_S_Settings_KeybinderKeyEntry_C
// 0x0048 (0x0668 - 0x0620)
class UWBP_S_Settings_KeybinderKeyEntry_C final : public UHWKeyBinderEntryWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0620(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWScaleBox*                            ClearContainer;                                    // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                CloseButton;                                       // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Container;                                         // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           KeyLabelText;                                      // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_MultiPromptWidget_TypeOverride_C* KeyPrompts;                                       // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWOverlay*                             LeftBindingContainer;                              // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_MultiPromptWidget_TypeOverride_C* PadPrompts;                                       // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWOverlay*                             RightBindingContainer;                             // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__WBP_S_Settings_KeybinderKeyEntry_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void DisplayGamepadKeys(const TArray<struct FKey>& Keys);
	void DisplayKeyboardKeys(const TArray<struct FKey>& Keys);
	void DisplayKeySelectorEnabled(bool bIsKeyboard, bool bSelectorIsEnabled);
	void DisplayLabelText(const class FText& LabelText);
	void ExecuteUbergraph_WBP_S_Settings_KeybinderKeyEntry(int32 EntryPoint);
	void InitializeWidget();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_S_Settings_KeybinderKeyEntry_C">();
	}
	static class UWBP_S_Settings_KeybinderKeyEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_S_Settings_KeybinderKeyEntry_C>();
	}
};
static_assert(alignof(UWBP_S_Settings_KeybinderKeyEntry_C) == 0x000008, "Wrong alignment on UWBP_S_Settings_KeybinderKeyEntry_C");
static_assert(sizeof(UWBP_S_Settings_KeybinderKeyEntry_C) == 0x000668, "Wrong size on UWBP_S_Settings_KeybinderKeyEntry_C");
static_assert(offsetof(UWBP_S_Settings_KeybinderKeyEntry_C, UberGraphFrame) == 0x000620, "Member 'UWBP_S_Settings_KeybinderKeyEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_S_Settings_KeybinderKeyEntry_C, ClearContainer) == 0x000628, "Member 'UWBP_S_Settings_KeybinderKeyEntry_C::ClearContainer' has a wrong offset!");
static_assert(offsetof(UWBP_S_Settings_KeybinderKeyEntry_C, CloseButton) == 0x000630, "Member 'UWBP_S_Settings_KeybinderKeyEntry_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UWBP_S_Settings_KeybinderKeyEntry_C, Container) == 0x000638, "Member 'UWBP_S_Settings_KeybinderKeyEntry_C::Container' has a wrong offset!");
static_assert(offsetof(UWBP_S_Settings_KeybinderKeyEntry_C, KeyLabelText) == 0x000640, "Member 'UWBP_S_Settings_KeybinderKeyEntry_C::KeyLabelText' has a wrong offset!");
static_assert(offsetof(UWBP_S_Settings_KeybinderKeyEntry_C, KeyPrompts) == 0x000648, "Member 'UWBP_S_Settings_KeybinderKeyEntry_C::KeyPrompts' has a wrong offset!");
static_assert(offsetof(UWBP_S_Settings_KeybinderKeyEntry_C, LeftBindingContainer) == 0x000650, "Member 'UWBP_S_Settings_KeybinderKeyEntry_C::LeftBindingContainer' has a wrong offset!");
static_assert(offsetof(UWBP_S_Settings_KeybinderKeyEntry_C, PadPrompts) == 0x000658, "Member 'UWBP_S_Settings_KeybinderKeyEntry_C::PadPrompts' has a wrong offset!");
static_assert(offsetof(UWBP_S_Settings_KeybinderKeyEntry_C, RightBindingContainer) == 0x000660, "Member 'UWBP_S_Settings_KeybinderKeyEntry_C::RightBindingContainer' has a wrong offset!");

}

