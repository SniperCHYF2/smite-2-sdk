﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReportMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RallyHereStart_structs.hpp"
#include "RallyHereStart_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ReportMenu.ReportMenu_C
// 0x0140 (0x06F8 - 0x05B8)
class UReportMenu_C final : public URHWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_ButtonStacked_C*                   CheatingButton;                                    // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ReportMenuCommentField_C*          CommentField;                                      // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DarkBanner;                                        // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ButtonStacked_C*                   HarassmentButton;                                  // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ButtonStacked_C*                   IntentionalFeedingButton;                          // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ButtonStacked_C*                   LeavingButton;                                     // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MuteText;                                          // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MuteText_1;                                        // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MuteText_2;                                        // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MuteText_3;                                        // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MuteText_4;                                        // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MuteText_5;                                        // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ButtonStacked_C*                   OtherButton;                                       // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ReasonLabelSelected;                               // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ReasonLabelSwitcher;                               // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ButtonStacked_C*                   StreamSnipingButton;                               // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StandardButtonLarge_C*             SubmitNew;                                         // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Header1_C*                         WBP_Header1;                                       // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModalPopupContainer_C*             WBP_ModalPopupContainer;                           // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnClosed;                                          // 0x0658(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(const struct FGuid& PlayerId, bool Success)> OnPlayerReported;     // 0x0668(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FReportPlayerParams                    CachedReport;                                      // 0x0678(0x0068)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMulticastInlineDelegate<void()>              OnTabPressed;                                      // 0x06E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EReportPlayerReason                           LastSelectedReason;                                // 0x06F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature();
	void BndEvt__HarassmentButton_K2Node_ComponentBoundEvent_1_OnBtnStackedClicked__DelegateSignature();
	void BndEvt__IntentionalFeedingButton_K2Node_ComponentBoundEvent_5_OnBtnStackedClicked__DelegateSignature();
	void BndEvt__LeavingButton_K2Node_ComponentBoundEvent_12_OnBtnStackedClicked__DelegateSignature();
	void BndEvt__OtherButton_K2Node_ComponentBoundEvent_16_OnBtnStackedClicked__DelegateSignature();
	void BndEvt__ReportMenu_WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_2_CloseButtonClicked__DelegateSignature();
	void BndEvt__StreamSnipingButton_K2Node_ComponentBoundEvent_8_OnBtnStackedClicked__DelegateSignature();
	void BndEvt__SubmitNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget);
	bool BP_OnHandleBackAction();
	void ExecuteUbergraph_ReportMenu(int32 EntryPoint);
	void GetNavigationWidgets(TArray<class URHWidget*>* Return_Value);
	void InitializeWidget();
	void OnHide();
	void OnOpenReportScreen(const struct FReportPlayerParams& Report);
	void OnShown();
	void ReportPlayer(EReportPlayerReason ReportReason);
	void SelectReason(EReportPlayerReason ReportReason);
	void ShowReportPlayer(const struct FGuid& PlayerId);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ReportMenu_C">();
	}
	static class UReportMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReportMenu_C>();
	}
};
static_assert(alignof(UReportMenu_C) == 0x000008, "Wrong alignment on UReportMenu_C");
static_assert(sizeof(UReportMenu_C) == 0x0006F8, "Wrong size on UReportMenu_C");
static_assert(offsetof(UReportMenu_C, UberGraphFrame) == 0x0005B8, "Member 'UReportMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, CheatingButton) == 0x0005C0, "Member 'UReportMenu_C::CheatingButton' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, CommentField) == 0x0005C8, "Member 'UReportMenu_C::CommentField' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, DarkBanner) == 0x0005D0, "Member 'UReportMenu_C::DarkBanner' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, HarassmentButton) == 0x0005D8, "Member 'UReportMenu_C::HarassmentButton' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, IntentionalFeedingButton) == 0x0005E0, "Member 'UReportMenu_C::IntentionalFeedingButton' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, LeavingButton) == 0x0005E8, "Member 'UReportMenu_C::LeavingButton' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, MuteText) == 0x0005F0, "Member 'UReportMenu_C::MuteText' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, MuteText_1) == 0x0005F8, "Member 'UReportMenu_C::MuteText_1' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, MuteText_2) == 0x000600, "Member 'UReportMenu_C::MuteText_2' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, MuteText_3) == 0x000608, "Member 'UReportMenu_C::MuteText_3' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, MuteText_4) == 0x000610, "Member 'UReportMenu_C::MuteText_4' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, MuteText_5) == 0x000618, "Member 'UReportMenu_C::MuteText_5' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, OtherButton) == 0x000620, "Member 'UReportMenu_C::OtherButton' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, ReasonLabelSelected) == 0x000628, "Member 'UReportMenu_C::ReasonLabelSelected' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, ReasonLabelSwitcher) == 0x000630, "Member 'UReportMenu_C::ReasonLabelSwitcher' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, StreamSnipingButton) == 0x000638, "Member 'UReportMenu_C::StreamSnipingButton' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, SubmitNew) == 0x000640, "Member 'UReportMenu_C::SubmitNew' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, WBP_Header1) == 0x000648, "Member 'UReportMenu_C::WBP_Header1' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, WBP_ModalPopupContainer) == 0x000650, "Member 'UReportMenu_C::WBP_ModalPopupContainer' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, OnClosed) == 0x000658, "Member 'UReportMenu_C::OnClosed' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, OnPlayerReported) == 0x000668, "Member 'UReportMenu_C::OnPlayerReported' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, CachedReport) == 0x000678, "Member 'UReportMenu_C::CachedReport' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, OnTabPressed) == 0x0006E0, "Member 'UReportMenu_C::OnTabPressed' has a wrong offset!");
static_assert(offsetof(UReportMenu_C, LastSelectedReason) == 0x0006F0, "Member 'UReportMenu_C::LastSelectedReason' has a wrong offset!");

}

