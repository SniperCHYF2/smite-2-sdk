﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Context_Menu_Prompt

#include "Basic.hpp"

#include "RallyHereStart_structs.hpp"
#include "RallyHereStart_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C
// 0x00D8 (0x06A0 - 0x05C8)
class UWBP_Context_Menu_Prompt_C final : public URHContextBarPrompt
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             CycleActionText;                                   // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CycleContextAction;                                // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                      CycleNextCallout;                                  // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                      CyclePreviousCallout;                              // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                      GamepadCallout;                                    // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           GamepadContainer;                                  // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             GamepadContextText;                                // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StandardButton_02_C*               KBMButton;                                         // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             KBMButtonText;                                     // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                KBMButtonWrapper;                                  // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             KBMContextText;                                    // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StandardButton_02_C*               KBMWithKeyButton;                                  // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                KBMWithKeyWrapper;                                 // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             KeyText;                                           // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                KeyWrapper;                                        // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_TabNavButton_C*                  NextBtn;                                           // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_TabNavButton_C*                  PreviousBtn;                                       // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           StandardContextAction;                             // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ERH_INPUT_STATE                               CurrentInputState;                                 // 0x0660(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_661[0x7];                                      // 0x0661(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnPromptClicked;                                   // 0x0668(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UObject*                                IsBackBtnOverrideSFX;                              // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          KBMWithKey;                                        // 0x0680(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_681[0x7];                                      // 0x0681(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UContextActionData*                     Data;                                              // 0x0688(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SFXHover;                                          // 0x0690(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SFXClick;                                          // 0x0698(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void UninitializeWidget();
	void SFXPlayHover();
	void SFXPlayClick();
	void PopulateStandardButton();
	void PopulateCycleButton();
	void Populate();
	void OnInputStateChanged(ERH_INPUT_STATE InputState);
	void OnContextActionUpdated(class UContextActionData* InData);
	void InitializeWidget();
	void ExecuteUbergraph_WBP_Context_Menu_Prompt(int32 EntryPoint);
	void EvaluateInputStateStandard();
	void EvaluateInputStateCycle();
	void BndEvt__WBP_StandardButton_02_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWidget* Widget);
	void BndEvt__WBP_StandardButton_02_C_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWidget* Widget);
	void BndEvt__WBP_Context_Menu_Prompt_WBP_S_TabNavButton_K2Node_ComponentBoundEvent_8_OnTabNavBtnClicked__DelegateSignature(class UHWWidget* Button_Widget);
	void BndEvt__WBP_Context_Menu_Prompt_NextBtn_K2Node_ComponentBoundEvent_9_OnTabNavBtnClicked__DelegateSignature(class UHWWidget* Button_Widget);
	void BndEvt__KBMWithKeyButton_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature(class UWidget* Widget);
	void BndEvt__KBMWithKeyButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature(class UWidget* Widget);
	void BndEvt__KBMButton_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature(class UWidget* Widget);
	void BndEvt__KBMButton_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(class UWidget* Widget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Context_Menu_Prompt_C">();
	}
	static class UWBP_Context_Menu_Prompt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Context_Menu_Prompt_C>();
	}
};
static_assert(alignof(UWBP_Context_Menu_Prompt_C) == 0x000008, "Wrong alignment on UWBP_Context_Menu_Prompt_C");
static_assert(sizeof(UWBP_Context_Menu_Prompt_C) == 0x0006A0, "Wrong size on UWBP_Context_Menu_Prompt_C");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, UberGraphFrame) == 0x0005C8, "Member 'UWBP_Context_Menu_Prompt_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, CycleActionText) == 0x0005D0, "Member 'UWBP_Context_Menu_Prompt_C::CycleActionText' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, CycleContextAction) == 0x0005D8, "Member 'UWBP_Context_Menu_Prompt_C::CycleContextAction' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, CycleNextCallout) == 0x0005E0, "Member 'UWBP_Context_Menu_Prompt_C::CycleNextCallout' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, CyclePreviousCallout) == 0x0005E8, "Member 'UWBP_Context_Menu_Prompt_C::CyclePreviousCallout' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, GamepadCallout) == 0x0005F0, "Member 'UWBP_Context_Menu_Prompt_C::GamepadCallout' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, GamepadContainer) == 0x0005F8, "Member 'UWBP_Context_Menu_Prompt_C::GamepadContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, GamepadContextText) == 0x000600, "Member 'UWBP_Context_Menu_Prompt_C::GamepadContextText' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, KBMButton) == 0x000608, "Member 'UWBP_Context_Menu_Prompt_C::KBMButton' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, KBMButtonText) == 0x000610, "Member 'UWBP_Context_Menu_Prompt_C::KBMButtonText' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, KBMButtonWrapper) == 0x000618, "Member 'UWBP_Context_Menu_Prompt_C::KBMButtonWrapper' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, KBMContextText) == 0x000620, "Member 'UWBP_Context_Menu_Prompt_C::KBMContextText' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, KBMWithKeyButton) == 0x000628, "Member 'UWBP_Context_Menu_Prompt_C::KBMWithKeyButton' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, KBMWithKeyWrapper) == 0x000630, "Member 'UWBP_Context_Menu_Prompt_C::KBMWithKeyWrapper' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, KeyText) == 0x000638, "Member 'UWBP_Context_Menu_Prompt_C::KeyText' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, KeyWrapper) == 0x000640, "Member 'UWBP_Context_Menu_Prompt_C::KeyWrapper' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, NextBtn) == 0x000648, "Member 'UWBP_Context_Menu_Prompt_C::NextBtn' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, PreviousBtn) == 0x000650, "Member 'UWBP_Context_Menu_Prompt_C::PreviousBtn' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, StandardContextAction) == 0x000658, "Member 'UWBP_Context_Menu_Prompt_C::StandardContextAction' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, CurrentInputState) == 0x000660, "Member 'UWBP_Context_Menu_Prompt_C::CurrentInputState' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, OnPromptClicked) == 0x000668, "Member 'UWBP_Context_Menu_Prompt_C::OnPromptClicked' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, IsBackBtnOverrideSFX) == 0x000678, "Member 'UWBP_Context_Menu_Prompt_C::IsBackBtnOverrideSFX' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, KBMWithKey) == 0x000680, "Member 'UWBP_Context_Menu_Prompt_C::KBMWithKey' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, Data) == 0x000688, "Member 'UWBP_Context_Menu_Prompt_C::Data' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, SFXHover) == 0x000690, "Member 'UWBP_Context_Menu_Prompt_C::SFXHover' has a wrong offset!");
static_assert(offsetof(UWBP_Context_Menu_Prompt_C, SFXClick) == 0x000698, "Member 'UWBP_Context_Menu_Prompt_C::SFXClick' has a wrong offset!");

}

