﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ButtonStacked

#include "Basic.hpp"

#include "RallyHereStart_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ButtonStacked.WBP_ButtonStacked_C
// 0x00C0 (0x0678 - 0x05B8)
class UWBP_ButtonStacked_C final : public URHWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnClickAnim;                                       // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HoverAnim_Red;                                     // 0x05C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HoverAnim;                                         // 0x05D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 background;                                        // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             ButtonContent;                                     // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Click;                                             // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EndCap;                                            // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Highlight;                                         // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                HitTarget;                                         // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Selected;                                          // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnBtnStackedClicked;                               // 0x0610(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(bool IsGamepad)> OnBtnStackedHovered;                              // 0x0620(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnBtnStackedUnhovered;                             // 0x0630(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsDisable;                                        // 0x0640(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_641[0x7];                                      // 0x0641(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnBtnStackedReleased;                              // 0x0648(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsRedButton;                                       // 0x0658(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_659[0x7];                                      // 0x0659(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                ClickBtnStackedSFX;                                // 0x0660(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UObject*                                HoverBtnStackedSFX;                                // 0x0668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          BP_IsActive;                                       // 0x0670(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
	void CallButtonHover();
	void CallButtonUnhover();
	void Construct();
	void DisableButton(bool bShouldDisable);
	void ExecuteUbergraph_WBP_ButtonStacked(int32 EntryPoint);
	void GamepadHover();
	void GamepadUnhover();
	bool NavigateConfirm();
	void OnGamepadConfirmed();
	void OnHoveredLogic(bool IsGamepad);
	void PreConstruct(bool IsDesignTime);
	void SetInitialDisplay();
	void SetIsActiveState(bool bIsActive_0);
	void SetVisuallyDisabled(bool ShouldDisable);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ButtonStacked_C">();
	}
	static class UWBP_ButtonStacked_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ButtonStacked_C>();
	}
};
static_assert(alignof(UWBP_ButtonStacked_C) == 0x000008, "Wrong alignment on UWBP_ButtonStacked_C");
static_assert(sizeof(UWBP_ButtonStacked_C) == 0x000678, "Wrong size on UWBP_ButtonStacked_C");
static_assert(offsetof(UWBP_ButtonStacked_C, UberGraphFrame) == 0x0005B8, "Member 'UWBP_ButtonStacked_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonStacked_C, OnClickAnim) == 0x0005C0, "Member 'UWBP_ButtonStacked_C::OnClickAnim' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonStacked_C, HoverAnim_Red) == 0x0005C8, "Member 'UWBP_ButtonStacked_C::HoverAnim_Red' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonStacked_C, HoverAnim) == 0x0005D0, "Member 'UWBP_ButtonStacked_C::HoverAnim' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonStacked_C, background) == 0x0005D8, "Member 'UWBP_ButtonStacked_C::background' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonStacked_C, ButtonContent) == 0x0005E0, "Member 'UWBP_ButtonStacked_C::ButtonContent' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonStacked_C, Click) == 0x0005E8, "Member 'UWBP_ButtonStacked_C::Click' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonStacked_C, EndCap) == 0x0005F0, "Member 'UWBP_ButtonStacked_C::EndCap' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonStacked_C, Highlight) == 0x0005F8, "Member 'UWBP_ButtonStacked_C::Highlight' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonStacked_C, HitTarget) == 0x000600, "Member 'UWBP_ButtonStacked_C::HitTarget' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonStacked_C, Selected) == 0x000608, "Member 'UWBP_ButtonStacked_C::Selected' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonStacked_C, OnBtnStackedClicked) == 0x000610, "Member 'UWBP_ButtonStacked_C::OnBtnStackedClicked' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonStacked_C, OnBtnStackedHovered) == 0x000620, "Member 'UWBP_ButtonStacked_C::OnBtnStackedHovered' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonStacked_C, OnBtnStackedUnhovered) == 0x000630, "Member 'UWBP_ButtonStacked_C::OnBtnStackedUnhovered' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonStacked_C, bIsDisable) == 0x000640, "Member 'UWBP_ButtonStacked_C::bIsDisable' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonStacked_C, OnBtnStackedReleased) == 0x000648, "Member 'UWBP_ButtonStacked_C::OnBtnStackedReleased' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonStacked_C, IsRedButton) == 0x000658, "Member 'UWBP_ButtonStacked_C::IsRedButton' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonStacked_C, ClickBtnStackedSFX) == 0x000660, "Member 'UWBP_ButtonStacked_C::ClickBtnStackedSFX' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonStacked_C, HoverBtnStackedSFX) == 0x000668, "Member 'UWBP_ButtonStacked_C::HoverBtnStackedSFX' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonStacked_C, BP_IsActive) == 0x000670, "Member 'UWBP_ButtonStacked_C::BP_IsActive' has a wrong offset!");

}

