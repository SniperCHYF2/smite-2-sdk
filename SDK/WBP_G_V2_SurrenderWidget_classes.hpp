﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_SurrenderWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "EnhancedInput_structs.hpp"
#include "Hemingway_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_G_V2_SurrenderWidget.WBP_G_V2_SurrenderWidget_C
// 0x0088 (0x0700 - 0x0678)
class UWBP_G_V2_SurrenderWidget_C final : public UHWSurrenderWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0678(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWWidgetSwitcher*                      ButtonSwitcher;                                    // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HWImage_156;                                       // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HWImage_556;                                       // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_MultiPromptWidget_C*             NoPrompt;                                          // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWHorizontalBox*                       PipContainer;                                      // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           ResultText;                                        // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWProgressBar*                         TimerBar;                                          // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWSizeBox*                             TimerGroup;                                        // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           TimerText;                                         // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               TopDeco;                                           // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_MultiPromptWidget_C*             YesPrompt;                                         // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bResolved;                                         // 0x06D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D9[0x3];                                      // 0x06D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                PipPadding;                                        // 0x06DC(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EC[0x4];                                      // 0x06EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             SFXSurrenderPopup;                                 // 0x06F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SFXSelect;                                         // 0x06F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void DisplayResult(const EHWVoteResult Result);
	void EvaluateSwitcherState();
	void ExecuteUbergraph_WBP_G_V2_SurrenderWidget(int32 EntryPoint);
	void ForceCloseWidget();
	void InitializeWidget();
	void OnLocalPlayerVoteStatusUpdated();
	void OnPipWidgetAdded(class UHWSurrenderPipWidget* PipWidget);
	void OnPipWidgetRemoved(class UHWSurrenderPipWidget* PipWidget);
	void OnSurrenderDisplayToggled(bool bDisplay);
	void OnVotesUpdated();
	void PlaySelectSFX();
	void PlaySurrenderPopupSFX();
	void PreConstruct(bool IsDesignTime);
	struct FEventReply ProcessViewInput(const struct FGameplayTag& InputTag, ETriggerEvent TriggerEvent);
	void UninitializeWidget();
	void UpdateTimerDisplay(float TimeRemaining, float TotalTime);
	void VoteNo();
	void VoteYes();

	class UInputMappingContext* GetCustomInputMappingContext(int32* MappingContextPriority) const;
	bool IsExclusive() const;
	bool ShouldOverrideAllowedInputCategories(EHWAllowedInputCategory* OutAllowedInputCategories) const;
	bool ShouldOverrideAnalogNavigationEnabled(bool* bOutAnalogNavigationEnabled) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_G_V2_SurrenderWidget_C">();
	}
	static class UWBP_G_V2_SurrenderWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_G_V2_SurrenderWidget_C>();
	}
};
static_assert(alignof(UWBP_G_V2_SurrenderWidget_C) == 0x000008, "Wrong alignment on UWBP_G_V2_SurrenderWidget_C");
static_assert(sizeof(UWBP_G_V2_SurrenderWidget_C) == 0x000700, "Wrong size on UWBP_G_V2_SurrenderWidget_C");
static_assert(offsetof(UWBP_G_V2_SurrenderWidget_C, UberGraphFrame) == 0x000678, "Member 'UWBP_G_V2_SurrenderWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_SurrenderWidget_C, ButtonSwitcher) == 0x000680, "Member 'UWBP_G_V2_SurrenderWidget_C::ButtonSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_SurrenderWidget_C, HWImage_156) == 0x000688, "Member 'UWBP_G_V2_SurrenderWidget_C::HWImage_156' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_SurrenderWidget_C, HWImage_556) == 0x000690, "Member 'UWBP_G_V2_SurrenderWidget_C::HWImage_556' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_SurrenderWidget_C, NoPrompt) == 0x000698, "Member 'UWBP_G_V2_SurrenderWidget_C::NoPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_SurrenderWidget_C, PipContainer) == 0x0006A0, "Member 'UWBP_G_V2_SurrenderWidget_C::PipContainer' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_SurrenderWidget_C, ResultText) == 0x0006A8, "Member 'UWBP_G_V2_SurrenderWidget_C::ResultText' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_SurrenderWidget_C, TimerBar) == 0x0006B0, "Member 'UWBP_G_V2_SurrenderWidget_C::TimerBar' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_SurrenderWidget_C, TimerGroup) == 0x0006B8, "Member 'UWBP_G_V2_SurrenderWidget_C::TimerGroup' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_SurrenderWidget_C, TimerText) == 0x0006C0, "Member 'UWBP_G_V2_SurrenderWidget_C::TimerText' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_SurrenderWidget_C, TopDeco) == 0x0006C8, "Member 'UWBP_G_V2_SurrenderWidget_C::TopDeco' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_SurrenderWidget_C, YesPrompt) == 0x0006D0, "Member 'UWBP_G_V2_SurrenderWidget_C::YesPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_SurrenderWidget_C, bResolved) == 0x0006D8, "Member 'UWBP_G_V2_SurrenderWidget_C::bResolved' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_SurrenderWidget_C, PipPadding) == 0x0006DC, "Member 'UWBP_G_V2_SurrenderWidget_C::PipPadding' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_SurrenderWidget_C, SFXSurrenderPopup) == 0x0006F0, "Member 'UWBP_G_V2_SurrenderWidget_C::SFXSurrenderPopup' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_SurrenderWidget_C, SFXSelect) == 0x0006F8, "Member 'UWBP_G_V2_SurrenderWidget_C::SFXSelect' has a wrong offset!");

}

