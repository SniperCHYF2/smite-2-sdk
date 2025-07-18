﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_HomeQuestDisplayEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_C_HomeQuestDisplayEntry.WBP_C_HomeQuestDisplayEntry_C
// 0x0098 (0x06C0 - 0x0628)
class UWBP_C_HomeQuestDisplayEntry_C final : public UHWPlayerQuestDisplayWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0628(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       CompletionAnimationSwipe;                          // 0x0630(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHWScaleBox*                            CompletedRewardLootDisplay;                        // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWSizeBox*                             CompleteQuestDisplay;                              // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWSizeBox*                             CurrentQuestDisplay;                               // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWRichTextBlock*                       DescriptionText;                                   // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWRichTextBlock*                       DescriptionText_1;                                 // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HWImage_133;                                       // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HWImage_344;                                       // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWWidgetSwitcher*                      HWWidgetSwitcher_0;                                // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           RewardAmount;                                      // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHAsyncImage*                          RewardGiven;                                       // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHAsyncImage*                          RewardImage;                                       // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWScaleBox*                            RewardLootDisplay;                                 // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWRichTextBlock*                       TitleText;                                         // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWRichTextBlock*                       TitleText_1;                                       // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               WipeImage;                                         // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlatformInventoryItem*                 Target;                                            // 0x06B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          QuestLoadFailed;                                   // 0x06B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_WBP_C_HomeQuestDisplayEntry(int32 EntryPoint);
	void OnDisplayFailedInfo();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnQuestClaimed();
	void OnQuestInfoFail(bool bShouldSelfRemove);
	void OnUpdateQuestData(const class UHWQuest* QuestData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_C_HomeQuestDisplayEntry_C">();
	}
	static class UWBP_C_HomeQuestDisplayEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_C_HomeQuestDisplayEntry_C>();
	}
};
static_assert(alignof(UWBP_C_HomeQuestDisplayEntry_C) == 0x000008, "Wrong alignment on UWBP_C_HomeQuestDisplayEntry_C");
static_assert(sizeof(UWBP_C_HomeQuestDisplayEntry_C) == 0x0006C0, "Wrong size on UWBP_C_HomeQuestDisplayEntry_C");
static_assert(offsetof(UWBP_C_HomeQuestDisplayEntry_C, UberGraphFrame) == 0x000628, "Member 'UWBP_C_HomeQuestDisplayEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_C_HomeQuestDisplayEntry_C, CompletionAnimationSwipe) == 0x000630, "Member 'UWBP_C_HomeQuestDisplayEntry_C::CompletionAnimationSwipe' has a wrong offset!");
static_assert(offsetof(UWBP_C_HomeQuestDisplayEntry_C, CompletedRewardLootDisplay) == 0x000638, "Member 'UWBP_C_HomeQuestDisplayEntry_C::CompletedRewardLootDisplay' has a wrong offset!");
static_assert(offsetof(UWBP_C_HomeQuestDisplayEntry_C, CompleteQuestDisplay) == 0x000640, "Member 'UWBP_C_HomeQuestDisplayEntry_C::CompleteQuestDisplay' has a wrong offset!");
static_assert(offsetof(UWBP_C_HomeQuestDisplayEntry_C, CurrentQuestDisplay) == 0x000648, "Member 'UWBP_C_HomeQuestDisplayEntry_C::CurrentQuestDisplay' has a wrong offset!");
static_assert(offsetof(UWBP_C_HomeQuestDisplayEntry_C, DescriptionText) == 0x000650, "Member 'UWBP_C_HomeQuestDisplayEntry_C::DescriptionText' has a wrong offset!");
static_assert(offsetof(UWBP_C_HomeQuestDisplayEntry_C, DescriptionText_1) == 0x000658, "Member 'UWBP_C_HomeQuestDisplayEntry_C::DescriptionText_1' has a wrong offset!");
static_assert(offsetof(UWBP_C_HomeQuestDisplayEntry_C, HWImage_133) == 0x000660, "Member 'UWBP_C_HomeQuestDisplayEntry_C::HWImage_133' has a wrong offset!");
static_assert(offsetof(UWBP_C_HomeQuestDisplayEntry_C, HWImage_344) == 0x000668, "Member 'UWBP_C_HomeQuestDisplayEntry_C::HWImage_344' has a wrong offset!");
static_assert(offsetof(UWBP_C_HomeQuestDisplayEntry_C, HWWidgetSwitcher_0) == 0x000670, "Member 'UWBP_C_HomeQuestDisplayEntry_C::HWWidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UWBP_C_HomeQuestDisplayEntry_C, RewardAmount) == 0x000678, "Member 'UWBP_C_HomeQuestDisplayEntry_C::RewardAmount' has a wrong offset!");
static_assert(offsetof(UWBP_C_HomeQuestDisplayEntry_C, RewardGiven) == 0x000680, "Member 'UWBP_C_HomeQuestDisplayEntry_C::RewardGiven' has a wrong offset!");
static_assert(offsetof(UWBP_C_HomeQuestDisplayEntry_C, RewardImage) == 0x000688, "Member 'UWBP_C_HomeQuestDisplayEntry_C::RewardImage' has a wrong offset!");
static_assert(offsetof(UWBP_C_HomeQuestDisplayEntry_C, RewardLootDisplay) == 0x000690, "Member 'UWBP_C_HomeQuestDisplayEntry_C::RewardLootDisplay' has a wrong offset!");
static_assert(offsetof(UWBP_C_HomeQuestDisplayEntry_C, TitleText) == 0x000698, "Member 'UWBP_C_HomeQuestDisplayEntry_C::TitleText' has a wrong offset!");
static_assert(offsetof(UWBP_C_HomeQuestDisplayEntry_C, TitleText_1) == 0x0006A0, "Member 'UWBP_C_HomeQuestDisplayEntry_C::TitleText_1' has a wrong offset!");
static_assert(offsetof(UWBP_C_HomeQuestDisplayEntry_C, WipeImage) == 0x0006A8, "Member 'UWBP_C_HomeQuestDisplayEntry_C::WipeImage' has a wrong offset!");
static_assert(offsetof(UWBP_C_HomeQuestDisplayEntry_C, Target) == 0x0006B0, "Member 'UWBP_C_HomeQuestDisplayEntry_C::Target' has a wrong offset!");
static_assert(offsetof(UWBP_C_HomeQuestDisplayEntry_C, QuestLoadFailed) == 0x0006B8, "Member 'UWBP_C_HomeQuestDisplayEntry_C::QuestLoadFailed' has a wrong offset!");

}

