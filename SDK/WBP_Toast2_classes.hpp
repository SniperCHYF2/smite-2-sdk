﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Toast2

#include "Basic.hpp"

#include "RallyHereStart_structs.hpp"
#include "RallyHereStart_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Toast2.WBP_Toast2_C
// 0x0130 (0x06E8 - 0x05B8)
class UWBP_Toast2_C final : public URHWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Waiting;                                           // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Outro;                                             // 0x05C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x05D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                               OnepxBar;                                          // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               OnepxBar_1;                                        // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             AchievementDetails;                                // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             AchievementName;                                   // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             AchievementType;                                   // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Back;                                              // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BottomBar;                                         // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EdgeGlowBottom;                                    // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EdgeGlowTop;                                       // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gradient;                                          // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeaderBar;                                         // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBack;                                          // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        IconSwitcher;                                      // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PlayerLevel;                                       // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayerLevelText;                                   // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AsyncIcon_C*                       ToastIcon;                                         // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TopBar;                                            // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(class URHWidget* ToastWidget)> OnRemoveToastNotification;          // 0x0660(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              FinishedOutroAnimation;                            // 0x0670(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FToastData                             ToastData;                                         // 0x0680(0x0050)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UWidgetAnimation*                       NewVar_0;                                          // 0x06D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        WaitDuration;                                      // 0x06D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DEFAULT_WAIT_DURATION;                             // 0x06E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetRarityTint(const struct FLinearColor& RarityBase, const struct FLinearColor& RarityHighlight);
	void PreConstruct(bool IsDesignTime);
	void OnWaitingFinished();
	void OnOutroFinished();
	void OnIntroFinished();
	void ExecuteUbergraph_WBP_Toast2(int32 EntryPoint);
	void DisplayPlayerLevelUp();
	void DisplayItemUnlock();
	void DisplayAwardUnlock();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Toast2_C">();
	}
	static class UWBP_Toast2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Toast2_C>();
	}
};
static_assert(alignof(UWBP_Toast2_C) == 0x000008, "Wrong alignment on UWBP_Toast2_C");
static_assert(sizeof(UWBP_Toast2_C) == 0x0006E8, "Wrong size on UWBP_Toast2_C");
static_assert(offsetof(UWBP_Toast2_C, UberGraphFrame) == 0x0005B8, "Member 'UWBP_Toast2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, Waiting) == 0x0005C0, "Member 'UWBP_Toast2_C::Waiting' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, Outro) == 0x0005C8, "Member 'UWBP_Toast2_C::Outro' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, Intro) == 0x0005D0, "Member 'UWBP_Toast2_C::Intro' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, OnepxBar) == 0x0005D8, "Member 'UWBP_Toast2_C::OnepxBar' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, OnepxBar_1) == 0x0005E0, "Member 'UWBP_Toast2_C::OnepxBar_1' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, AchievementDetails) == 0x0005E8, "Member 'UWBP_Toast2_C::AchievementDetails' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, AchievementName) == 0x0005F0, "Member 'UWBP_Toast2_C::AchievementName' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, AchievementType) == 0x0005F8, "Member 'UWBP_Toast2_C::AchievementType' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, Back) == 0x000600, "Member 'UWBP_Toast2_C::Back' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, BottomBar) == 0x000608, "Member 'UWBP_Toast2_C::BottomBar' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, EdgeGlowBottom) == 0x000610, "Member 'UWBP_Toast2_C::EdgeGlowBottom' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, EdgeGlowTop) == 0x000618, "Member 'UWBP_Toast2_C::EdgeGlowTop' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, Gradient) == 0x000620, "Member 'UWBP_Toast2_C::Gradient' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, HeaderBar) == 0x000628, "Member 'UWBP_Toast2_C::HeaderBar' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, IconBack) == 0x000630, "Member 'UWBP_Toast2_C::IconBack' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, IconSwitcher) == 0x000638, "Member 'UWBP_Toast2_C::IconSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, PlayerLevel) == 0x000640, "Member 'UWBP_Toast2_C::PlayerLevel' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, PlayerLevelText) == 0x000648, "Member 'UWBP_Toast2_C::PlayerLevelText' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, ToastIcon) == 0x000650, "Member 'UWBP_Toast2_C::ToastIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, TopBar) == 0x000658, "Member 'UWBP_Toast2_C::TopBar' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, OnRemoveToastNotification) == 0x000660, "Member 'UWBP_Toast2_C::OnRemoveToastNotification' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, FinishedOutroAnimation) == 0x000670, "Member 'UWBP_Toast2_C::FinishedOutroAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, ToastData) == 0x000680, "Member 'UWBP_Toast2_C::ToastData' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, NewVar_0) == 0x0006D0, "Member 'UWBP_Toast2_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, WaitDuration) == 0x0006D8, "Member 'UWBP_Toast2_C::WaitDuration' has a wrong offset!");
static_assert(offsetof(UWBP_Toast2_C, DEFAULT_WAIT_DURATION) == 0x0006E0, "Member 'UWBP_Toast2_C::DEFAULT_WAIT_DURATION' has a wrong offset!");

}

