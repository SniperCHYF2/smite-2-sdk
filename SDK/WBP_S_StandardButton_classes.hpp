﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_StandardButton

#include "Basic.hpp"

#include "HemingwayUI_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_S_StandardButton.WBP_S_StandardButton_C
// 0x0108 (0x0700 - 0x05F8)
class UWBP_S_StandardButton_C final : public UHWWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hover;                                             // 0x0600(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHWImage*                               background;                                        // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           ButtonText;                                        // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              HitTarget;                                         // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWBorder*                              Stroke;                                            // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Default_Button_Text;                               // 0x0628(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly)
	TMulticastInlineDelegate<void(class UHWWidget* Button_Widget)> OnButtonClicked;                  // 0x0640(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bButtonHovered;                                    // 0x0650(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_651[0x3];                                      // 0x0651(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           ButtonTextFontStyleTag;                            // 0x0654(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ButtonTextColorStyleTag;                           // 0x065C(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ColorStyleTag;                                     // 0x0664(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           HoveredColorStyleTag;                              // 0x066C(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           DisabledColorStyleTag;                             // 0x0674(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           HoverStrokeColorStyleTag;                          // 0x067C(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowHoverStroke;                                  // 0x0684(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_685[0x3];                                      // 0x0685(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           ButtonColorOverride;                               // 0x0688(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ButtonHoveredColorOverride;                        // 0x0698(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ButtonDisabledColorOverride;                       // 0x06A8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SFXHover;                                          // 0x06B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SFXClick;                                          // 0x06C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(bool bHovered)> OnButtonHovered;                                   // 0x06C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLinearColor                           TextColorOverride;                                 // 0x06D8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ButtonTextHoveredColorStyleTag;                    // 0x06E8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TextHoveredColorOverride;                          // 0x06F0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_S_SmallGoldButton_HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_S_SmallGoldButton_HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_S_SmallGoldButton_HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void DoClick();
	void DoHover(bool bHovered);
	void ExecuteUbergraph_WBP_S_StandardButton(int32 EntryPoint);
	void GamepadHover();
	void GamepadUnhover();
	bool NavigateConfirm();
	void PreConstruct(bool IsDesignTime);
	void SetButtonText(const class FText& InText);
	void SetEnabled(bool bEnabled_0);
	void SFXPlayClick();
	void SFXPlayHover();
	void UpdateButtonColor();
	void UpdateTextColor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_S_StandardButton_C">();
	}
	static class UWBP_S_StandardButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_S_StandardButton_C>();
	}
};
static_assert(alignof(UWBP_S_StandardButton_C) == 0x000008, "Wrong alignment on UWBP_S_StandardButton_C");
static_assert(sizeof(UWBP_S_StandardButton_C) == 0x000700, "Wrong size on UWBP_S_StandardButton_C");
static_assert(offsetof(UWBP_S_StandardButton_C, UberGraphFrame) == 0x0005F8, "Member 'UWBP_S_StandardButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, Hover) == 0x000600, "Member 'UWBP_S_StandardButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, background) == 0x000608, "Member 'UWBP_S_StandardButton_C::background' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, ButtonText) == 0x000610, "Member 'UWBP_S_StandardButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, HitTarget) == 0x000618, "Member 'UWBP_S_StandardButton_C::HitTarget' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, Stroke) == 0x000620, "Member 'UWBP_S_StandardButton_C::Stroke' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, Default_Button_Text) == 0x000628, "Member 'UWBP_S_StandardButton_C::Default_Button_Text' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, OnButtonClicked) == 0x000640, "Member 'UWBP_S_StandardButton_C::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, bButtonHovered) == 0x000650, "Member 'UWBP_S_StandardButton_C::bButtonHovered' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, ButtonTextFontStyleTag) == 0x000654, "Member 'UWBP_S_StandardButton_C::ButtonTextFontStyleTag' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, ButtonTextColorStyleTag) == 0x00065C, "Member 'UWBP_S_StandardButton_C::ButtonTextColorStyleTag' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, ColorStyleTag) == 0x000664, "Member 'UWBP_S_StandardButton_C::ColorStyleTag' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, HoveredColorStyleTag) == 0x00066C, "Member 'UWBP_S_StandardButton_C::HoveredColorStyleTag' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, DisabledColorStyleTag) == 0x000674, "Member 'UWBP_S_StandardButton_C::DisabledColorStyleTag' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, HoverStrokeColorStyleTag) == 0x00067C, "Member 'UWBP_S_StandardButton_C::HoverStrokeColorStyleTag' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, bShowHoverStroke) == 0x000684, "Member 'UWBP_S_StandardButton_C::bShowHoverStroke' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, ButtonColorOverride) == 0x000688, "Member 'UWBP_S_StandardButton_C::ButtonColorOverride' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, ButtonHoveredColorOverride) == 0x000698, "Member 'UWBP_S_StandardButton_C::ButtonHoveredColorOverride' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, ButtonDisabledColorOverride) == 0x0006A8, "Member 'UWBP_S_StandardButton_C::ButtonDisabledColorOverride' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, SFXHover) == 0x0006B8, "Member 'UWBP_S_StandardButton_C::SFXHover' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, SFXClick) == 0x0006C0, "Member 'UWBP_S_StandardButton_C::SFXClick' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, OnButtonHovered) == 0x0006C8, "Member 'UWBP_S_StandardButton_C::OnButtonHovered' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, TextColorOverride) == 0x0006D8, "Member 'UWBP_S_StandardButton_C::TextColorOverride' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, ButtonTextHoveredColorStyleTag) == 0x0006E8, "Member 'UWBP_S_StandardButton_C::ButtonTextHoveredColorStyleTag' has a wrong offset!");
static_assert(offsetof(UWBP_S_StandardButton_C, TextHoveredColorOverride) == 0x0006F0, "Member 'UWBP_S_StandardButton_C::TextHoveredColorOverride' has a wrong offset!");

}

