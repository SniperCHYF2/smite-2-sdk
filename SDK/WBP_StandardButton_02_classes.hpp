﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_StandardButton_02

#include "Basic.hpp"

#include "RallyHereStart_classes.hpp"
#include "Engine_structs.hpp"
#include "E_ButtonFontStyle_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_StandardButton_02.WBP_StandardButton_02_C
// 0x00B0 (0x0668 - 0x05B8)
class UWBP_StandardButton_02_C final : public URHWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnClick;                                           // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Highlight;                                         // 0x05C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BackgroundImage;                                   // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ButtonText;                                        // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Click;                                             // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                LoadoutButton;                                     // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               TextSizeWrapper;                                   // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(class UWidget* Widget)> OnClicked;                                 // 0x0600(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UWidget* Widget)> OnHovered;                                 // 0x0610(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UWidget* Widget)> OnUnhovered;                               // 0x0620(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UObject*                                ClickStandardButton_02SFX;                         // 0x0630(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   DefaultButtonText;                                 // 0x0638(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	double                                        DefaultWidth;                                      // 0x0650(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UObject*                                HoverStandardButton_02SFX;                         // 0x0658(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	E_ButtonFontStyle                             ButtonFontStyle;                                   // 0x0660(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void Do_Hover();
	void Do_Unhover();
	void ExecuteUbergraph_WBP_StandardButton_02(int32 EntryPoint);
	void GamepadConfirm();
	void GamepadHover();
	void GamepadUnhover();
	bool NavigateConfirm();
	void PreConstruct(bool IsDesignTime);
	void SetButtonText(const class FText& ButtonText_0);
	void SetDefaultDisplay();
	void SetWidth(double InWidth);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StandardButton_02_C">();
	}
	static class UWBP_StandardButton_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StandardButton_02_C>();
	}
};
static_assert(alignof(UWBP_StandardButton_02_C) == 0x000008, "Wrong alignment on UWBP_StandardButton_02_C");
static_assert(sizeof(UWBP_StandardButton_02_C) == 0x000668, "Wrong size on UWBP_StandardButton_02_C");
static_assert(offsetof(UWBP_StandardButton_02_C, UberGraphFrame) == 0x0005B8, "Member 'UWBP_StandardButton_02_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_StandardButton_02_C, OnClick) == 0x0005C0, "Member 'UWBP_StandardButton_02_C::OnClick' has a wrong offset!");
static_assert(offsetof(UWBP_StandardButton_02_C, Highlight) == 0x0005C8, "Member 'UWBP_StandardButton_02_C::Highlight' has a wrong offset!");
static_assert(offsetof(UWBP_StandardButton_02_C, BackgroundImage) == 0x0005D0, "Member 'UWBP_StandardButton_02_C::BackgroundImage' has a wrong offset!");
static_assert(offsetof(UWBP_StandardButton_02_C, ButtonText) == 0x0005D8, "Member 'UWBP_StandardButton_02_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UWBP_StandardButton_02_C, Click) == 0x0005E0, "Member 'UWBP_StandardButton_02_C::Click' has a wrong offset!");
static_assert(offsetof(UWBP_StandardButton_02_C, Image_0) == 0x0005E8, "Member 'UWBP_StandardButton_02_C::Image_0' has a wrong offset!");
static_assert(offsetof(UWBP_StandardButton_02_C, LoadoutButton) == 0x0005F0, "Member 'UWBP_StandardButton_02_C::LoadoutButton' has a wrong offset!");
static_assert(offsetof(UWBP_StandardButton_02_C, TextSizeWrapper) == 0x0005F8, "Member 'UWBP_StandardButton_02_C::TextSizeWrapper' has a wrong offset!");
static_assert(offsetof(UWBP_StandardButton_02_C, OnClicked) == 0x000600, "Member 'UWBP_StandardButton_02_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_StandardButton_02_C, OnHovered) == 0x000610, "Member 'UWBP_StandardButton_02_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UWBP_StandardButton_02_C, OnUnhovered) == 0x000620, "Member 'UWBP_StandardButton_02_C::OnUnhovered' has a wrong offset!");
static_assert(offsetof(UWBP_StandardButton_02_C, ClickStandardButton_02SFX) == 0x000630, "Member 'UWBP_StandardButton_02_C::ClickStandardButton_02SFX' has a wrong offset!");
static_assert(offsetof(UWBP_StandardButton_02_C, DefaultButtonText) == 0x000638, "Member 'UWBP_StandardButton_02_C::DefaultButtonText' has a wrong offset!");
static_assert(offsetof(UWBP_StandardButton_02_C, DefaultWidth) == 0x000650, "Member 'UWBP_StandardButton_02_C::DefaultWidth' has a wrong offset!");
static_assert(offsetof(UWBP_StandardButton_02_C, HoverStandardButton_02SFX) == 0x000658, "Member 'UWBP_StandardButton_02_C::HoverStandardButton_02SFX' has a wrong offset!");
static_assert(offsetof(UWBP_StandardButton_02_C, ButtonFontStyle) == 0x000660, "Member 'UWBP_StandardButton_02_C::ButtonFontStyle' has a wrong offset!");

}

