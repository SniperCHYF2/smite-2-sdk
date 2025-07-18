﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_TabNavButton

#include "Basic.hpp"

#include "RallyHereStart_structs.hpp"
#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_S_TabNavButton.WBP_S_TabNavButton_C
// 0x0048 (0x0640 - 0x05F8)
class UWBP_S_TabNavButton_C final : public UHWWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWImage*                               arrowicon;                                         // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_MultiPromptWidget_C*             GamepadPrompt;                                     // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              HitTarget;                                         // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWWidgetSwitcher*                      StateSwitcher;                                     // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputAction*                           DisplayedInputAction;                              // 0x0620(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bReverse;                                          // 0x0628(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_629[0x7];                                      // 0x0629(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(class UHWWidget* Button_Widget)> OnTabNavBtnClicked;               // 0x0630(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Set_Is_Enabled(bool bIsEnabled_0);
	void PreConstruct(bool IsDesignTime);
	void InitializeWidget();
	void HandleInputStateChanged(ERH_INPUT_STATE InputState);
	void ExecuteUbergraph_WBP_S_TabNavButton(int32 EntryPoint);
	void BndEvt__WBP_S_TabNavButton_HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_S_TabNavButton_HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_S_TabNavButton_HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_S_TabNavButton_C">();
	}
	static class UWBP_S_TabNavButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_S_TabNavButton_C>();
	}
};
static_assert(alignof(UWBP_S_TabNavButton_C) == 0x000008, "Wrong alignment on UWBP_S_TabNavButton_C");
static_assert(sizeof(UWBP_S_TabNavButton_C) == 0x000640, "Wrong size on UWBP_S_TabNavButton_C");
static_assert(offsetof(UWBP_S_TabNavButton_C, UberGraphFrame) == 0x0005F8, "Member 'UWBP_S_TabNavButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_S_TabNavButton_C, arrowicon) == 0x000600, "Member 'UWBP_S_TabNavButton_C::arrowicon' has a wrong offset!");
static_assert(offsetof(UWBP_S_TabNavButton_C, GamepadPrompt) == 0x000608, "Member 'UWBP_S_TabNavButton_C::GamepadPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_S_TabNavButton_C, HitTarget) == 0x000610, "Member 'UWBP_S_TabNavButton_C::HitTarget' has a wrong offset!");
static_assert(offsetof(UWBP_S_TabNavButton_C, StateSwitcher) == 0x000618, "Member 'UWBP_S_TabNavButton_C::StateSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_S_TabNavButton_C, DisplayedInputAction) == 0x000620, "Member 'UWBP_S_TabNavButton_C::DisplayedInputAction' has a wrong offset!");
static_assert(offsetof(UWBP_S_TabNavButton_C, bReverse) == 0x000628, "Member 'UWBP_S_TabNavButton_C::bReverse' has a wrong offset!");
static_assert(offsetof(UWBP_S_TabNavButton_C, OnTabNavBtnClicked) == 0x000630, "Member 'UWBP_S_TabNavButton_C::OnTabNavBtnClicked' has a wrong offset!");

}

