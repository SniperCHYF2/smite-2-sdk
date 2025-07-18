﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Social_Accordian_Header

#include "Basic.hpp"

#include "RallyHereStart_structs.hpp"
#include "RallyHereStart_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C
// 0x00E0 (0x0698 - 0x05B8)
class UWBP_Social_Accordian_Header_C final : public URHWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       MobileLayout;                                      // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x05C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 arrow;                                             // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ArrowBg_Default;                                   // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ArrowBG_Over;                                      // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ArrowContainer;                                    // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Background_Default;                                // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Background_Over;                                   // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               CallToActionWrapper;                               // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CountLabel;                                        // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                HitArea;                                           // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label;                                             // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               MessageContainer;                                  // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MessageText;                                       // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ProcessingIndicator;                               // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ControllerPrompt_C*                Prompt;                                            // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PromptContainer;                                   // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ToggleActionGroup;                                 // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CallToAction_C*                    WBP_CallToAction;                                  // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ThrobberHorizontal_C*              WBP_ThrobberHorizontal;                            // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(class UUserWidget* Widget)> OnClicked;                             // 0x0668(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class URHDataSocialCategory*                  DataItem;                                          // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExpanded;                                        // 0x0680(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHoverState;                                      // 0x0681(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasPlayerData;                                     // 0x0682(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_683[0x5];                                      // 0x0683(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             SFXHover;                                          // 0x0688(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SFXClick;                                          // 0x0690(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BindCategoryEvents();
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void Construct();
	void ExecuteUbergraph_WBP_Social_Accordian_Header(int32 EntryPoint);
	void ForceUnhover();
	void GetData(class URHDataSocialCategory** NewParam);
	void GetIsExpanded(bool* Expanded);
	void GetOuterHud(class ARHHUDCommon** HUD);
	void HandleClicked();
	void InitializeWidget();
	void OnHeaderUpdated(class URHDataSocialCategory* Category, const class FText& Header);
	void OnHovered();
	void OnInputStateChange(ERH_INPUT_STATE InputState);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnPlayersUpdated(class URHDataSocialCategory* Category, const TArray<class URHDataSocialPlayer*>& Players);
	void OnUnhovered();
	void PlayClickSFX();
	void PlayHoverSFX();
	void PreConstruct(bool IsDesignTime);
	void SetExpanded(bool Expanded);
	void SetListItemObject(class UObject* Object);
	void UnbindCategoryEvents();
	void UninitializeWidget();
	void UpdateMessage(class URHDataSocialCategory* Category, bool Processing, const class FText& Message);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Social_Accordian_Header_C">();
	}
	static class UWBP_Social_Accordian_Header_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Social_Accordian_Header_C>();
	}
};
static_assert(alignof(UWBP_Social_Accordian_Header_C) == 0x000008, "Wrong alignment on UWBP_Social_Accordian_Header_C");
static_assert(sizeof(UWBP_Social_Accordian_Header_C) == 0x000698, "Wrong size on UWBP_Social_Accordian_Header_C");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, UberGraphFrame) == 0x0005B8, "Member 'UWBP_Social_Accordian_Header_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, MobileLayout) == 0x0005C0, "Member 'UWBP_Social_Accordian_Header_C::MobileLayout' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, Hover) == 0x0005C8, "Member 'UWBP_Social_Accordian_Header_C::Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, arrow) == 0x0005D0, "Member 'UWBP_Social_Accordian_Header_C::arrow' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, ArrowBg_Default) == 0x0005D8, "Member 'UWBP_Social_Accordian_Header_C::ArrowBg_Default' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, ArrowBG_Over) == 0x0005E0, "Member 'UWBP_Social_Accordian_Header_C::ArrowBG_Over' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, ArrowContainer) == 0x0005E8, "Member 'UWBP_Social_Accordian_Header_C::ArrowContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, Background_Default) == 0x0005F0, "Member 'UWBP_Social_Accordian_Header_C::Background_Default' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, Background_Over) == 0x0005F8, "Member 'UWBP_Social_Accordian_Header_C::Background_Over' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, CallToActionWrapper) == 0x000600, "Member 'UWBP_Social_Accordian_Header_C::CallToActionWrapper' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, CountLabel) == 0x000608, "Member 'UWBP_Social_Accordian_Header_C::CountLabel' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, HitArea) == 0x000610, "Member 'UWBP_Social_Accordian_Header_C::HitArea' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, Label) == 0x000618, "Member 'UWBP_Social_Accordian_Header_C::Label' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, MessageContainer) == 0x000620, "Member 'UWBP_Social_Accordian_Header_C::MessageContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, MessageText) == 0x000628, "Member 'UWBP_Social_Accordian_Header_C::MessageText' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, ProcessingIndicator) == 0x000630, "Member 'UWBP_Social_Accordian_Header_C::ProcessingIndicator' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, Prompt) == 0x000638, "Member 'UWBP_Social_Accordian_Header_C::Prompt' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, PromptContainer) == 0x000640, "Member 'UWBP_Social_Accordian_Header_C::PromptContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, ToggleActionGroup) == 0x000648, "Member 'UWBP_Social_Accordian_Header_C::ToggleActionGroup' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, WBP_CallToAction) == 0x000650, "Member 'UWBP_Social_Accordian_Header_C::WBP_CallToAction' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, WBP_ThrobberHorizontal) == 0x000658, "Member 'UWBP_Social_Accordian_Header_C::WBP_ThrobberHorizontal' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, WidgetSwitcher_0) == 0x000660, "Member 'UWBP_Social_Accordian_Header_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, OnClicked) == 0x000668, "Member 'UWBP_Social_Accordian_Header_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, DataItem) == 0x000678, "Member 'UWBP_Social_Accordian_Header_C::DataItem' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, IsExpanded) == 0x000680, "Member 'UWBP_Social_Accordian_Header_C::IsExpanded' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, IsHoverState) == 0x000681, "Member 'UWBP_Social_Accordian_Header_C::IsHoverState' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, HasPlayerData) == 0x000682, "Member 'UWBP_Social_Accordian_Header_C::HasPlayerData' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, SFXHover) == 0x000688, "Member 'UWBP_Social_Accordian_Header_C::SFXHover' has a wrong offset!");
static_assert(offsetof(UWBP_Social_Accordian_Header_C, SFXClick) == 0x000690, "Member 'UWBP_Social_Accordian_Header_C::SFXClick' has a wrong offset!");

}

