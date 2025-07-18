﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V1_InteractPrompt

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_G_V1_InteractPrompt.WBP_G_V1_InteractPrompt_C
// 0x00B0 (0x06A8 - 0x05F8)
class UWBP_G_V1_InteractPrompt_C final : public UHWInteractionPromptWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                      CircularThrobber_103;                              // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWProgressBar*                         CooldownProgressBar;                               // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CooldownTimerText;                                 // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_MultiPromptWidget_C*             Hotkeys;                                           // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_MultiPromptWidget_C*             Hotkeys_1;                                         // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_MultiPromptWidget_C*             Hotkeys_2;                                         // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWProgressBar*                         HWProgressBar;                                     // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWProgressBar*                         HWProgressBar_57;                                  // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               Lockout;                                           // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWWidgetSwitcher*                      LockoutSwitch;                                     // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ProgressBarText;                                   // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SWITCH;                                            // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TargetObjectText;                                  // 0x0660(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        TotalInteractionTime;                              // 0x0668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           InteractionTimer;                                  // 0x0670(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   Prompt;                                            // 0x0678(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          AllowInteraction;                                  // 0x0690(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_691[0x7];                                      // 0x0691(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CooldownTimer;                                     // 0x0698(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Total_Cooldown_Duration;                           // 0x06A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EndCooldownTimer();
	void EndInteractionTimer();
	void ExecuteUbergraph_WBP_G_V1_InteractPrompt(int32 EntryPoint);
	void ForceInvalidation();
	ESlateVisibility Get_Icon_Visibility();
	ESlateVisibility Get_Lockout_Visibility();
	float GetCooldownPercent();
	class FText GetCooldownText();
	float GetInteractionPercent();
	class FText GetInteractionProgressText();
	void InitializeWidget();
	void OnShown();
	void StartInteractionTimer(double TotalInteractionTime_0);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UninitializeWidget();
	void UpdateCooldownSwitch(double CooldownDuration, double TotalCooldownDuration);
	void UpdateLockoutSwitch(int32 Index_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_G_V1_InteractPrompt_C">();
	}
	static class UWBP_G_V1_InteractPrompt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_G_V1_InteractPrompt_C>();
	}
};
static_assert(alignof(UWBP_G_V1_InteractPrompt_C) == 0x000008, "Wrong alignment on UWBP_G_V1_InteractPrompt_C");
static_assert(sizeof(UWBP_G_V1_InteractPrompt_C) == 0x0006A8, "Wrong size on UWBP_G_V1_InteractPrompt_C");
static_assert(offsetof(UWBP_G_V1_InteractPrompt_C, UberGraphFrame) == 0x0005F8, "Member 'UWBP_G_V1_InteractPrompt_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_G_V1_InteractPrompt_C, CircularThrobber_103) == 0x000600, "Member 'UWBP_G_V1_InteractPrompt_C::CircularThrobber_103' has a wrong offset!");
static_assert(offsetof(UWBP_G_V1_InteractPrompt_C, CooldownProgressBar) == 0x000608, "Member 'UWBP_G_V1_InteractPrompt_C::CooldownProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_G_V1_InteractPrompt_C, CooldownTimerText) == 0x000610, "Member 'UWBP_G_V1_InteractPrompt_C::CooldownTimerText' has a wrong offset!");
static_assert(offsetof(UWBP_G_V1_InteractPrompt_C, Hotkeys) == 0x000618, "Member 'UWBP_G_V1_InteractPrompt_C::Hotkeys' has a wrong offset!");
static_assert(offsetof(UWBP_G_V1_InteractPrompt_C, Hotkeys_1) == 0x000620, "Member 'UWBP_G_V1_InteractPrompt_C::Hotkeys_1' has a wrong offset!");
static_assert(offsetof(UWBP_G_V1_InteractPrompt_C, Hotkeys_2) == 0x000628, "Member 'UWBP_G_V1_InteractPrompt_C::Hotkeys_2' has a wrong offset!");
static_assert(offsetof(UWBP_G_V1_InteractPrompt_C, HWProgressBar) == 0x000630, "Member 'UWBP_G_V1_InteractPrompt_C::HWProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_G_V1_InteractPrompt_C, HWProgressBar_57) == 0x000638, "Member 'UWBP_G_V1_InteractPrompt_C::HWProgressBar_57' has a wrong offset!");
static_assert(offsetof(UWBP_G_V1_InteractPrompt_C, Lockout) == 0x000640, "Member 'UWBP_G_V1_InteractPrompt_C::Lockout' has a wrong offset!");
static_assert(offsetof(UWBP_G_V1_InteractPrompt_C, LockoutSwitch) == 0x000648, "Member 'UWBP_G_V1_InteractPrompt_C::LockoutSwitch' has a wrong offset!");
static_assert(offsetof(UWBP_G_V1_InteractPrompt_C, ProgressBarText) == 0x000650, "Member 'UWBP_G_V1_InteractPrompt_C::ProgressBarText' has a wrong offset!");
static_assert(offsetof(UWBP_G_V1_InteractPrompt_C, SWITCH) == 0x000658, "Member 'UWBP_G_V1_InteractPrompt_C::SWITCH' has a wrong offset!");
static_assert(offsetof(UWBP_G_V1_InteractPrompt_C, TargetObjectText) == 0x000660, "Member 'UWBP_G_V1_InteractPrompt_C::TargetObjectText' has a wrong offset!");
static_assert(offsetof(UWBP_G_V1_InteractPrompt_C, TotalInteractionTime) == 0x000668, "Member 'UWBP_G_V1_InteractPrompt_C::TotalInteractionTime' has a wrong offset!");
static_assert(offsetof(UWBP_G_V1_InteractPrompt_C, InteractionTimer) == 0x000670, "Member 'UWBP_G_V1_InteractPrompt_C::InteractionTimer' has a wrong offset!");
static_assert(offsetof(UWBP_G_V1_InteractPrompt_C, Prompt) == 0x000678, "Member 'UWBP_G_V1_InteractPrompt_C::Prompt' has a wrong offset!");
static_assert(offsetof(UWBP_G_V1_InteractPrompt_C, AllowInteraction) == 0x000690, "Member 'UWBP_G_V1_InteractPrompt_C::AllowInteraction' has a wrong offset!");
static_assert(offsetof(UWBP_G_V1_InteractPrompt_C, CooldownTimer) == 0x000698, "Member 'UWBP_G_V1_InteractPrompt_C::CooldownTimer' has a wrong offset!");
static_assert(offsetof(UWBP_G_V1_InteractPrompt_C, Total_Cooldown_Duration) == 0x0006A0, "Member 'UWBP_G_V1_InteractPrompt_C::Total_Cooldown_Duration' has a wrong offset!");

}

