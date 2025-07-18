﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_RankDisplay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_C_RankDisplay.WBP_C_RankDisplay_C
// 0x0058 (0x0650 - 0x05F8)
class UWBP_C_RankDisplay_C final : public UHWWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_S_PlayerAvatarDisplay_C*           AvatarDisplay;                                     // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWOverlay*                             AvatarIndicator;                                   // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               FinishedImage;                                     // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               RankImage;                                         // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           RankNameText;                                      // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_Master_Tile_C*                   SelectButton;                                      // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           SRReqText;                                         // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(int32 Index)>   OnSelected;                                        // 0x0638(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Index_0;                                           // 0x0648(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasInit;                                           // 0x064C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_C_RankDisplay_WBP_S_Master_Tile_K2Node_ComponentBoundEvent_0_OnHWButtonEvent__DelegateSignature();
	void BndEvt__WBP_C_RankDisplay_WBP_S_Master_Tile_K2Node_ComponentBoundEvent_1_RHWidgetGamepadHovered__DelegateSignature(class URHWidget* Widget, bool bHovered);
	void ExecuteUbergraph_WBP_C_RankDisplay(int32 EntryPoint);
	void PopulateRankData(const struct FHWSkillRatingRank& Data, bool Completed);
	void SetCurrentRank(bool Show);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_C_RankDisplay_C">();
	}
	static class UWBP_C_RankDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_C_RankDisplay_C>();
	}
};
static_assert(alignof(UWBP_C_RankDisplay_C) == 0x000008, "Wrong alignment on UWBP_C_RankDisplay_C");
static_assert(sizeof(UWBP_C_RankDisplay_C) == 0x000650, "Wrong size on UWBP_C_RankDisplay_C");
static_assert(offsetof(UWBP_C_RankDisplay_C, UberGraphFrame) == 0x0005F8, "Member 'UWBP_C_RankDisplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_C_RankDisplay_C, AvatarDisplay) == 0x000600, "Member 'UWBP_C_RankDisplay_C::AvatarDisplay' has a wrong offset!");
static_assert(offsetof(UWBP_C_RankDisplay_C, AvatarIndicator) == 0x000608, "Member 'UWBP_C_RankDisplay_C::AvatarIndicator' has a wrong offset!");
static_assert(offsetof(UWBP_C_RankDisplay_C, FinishedImage) == 0x000610, "Member 'UWBP_C_RankDisplay_C::FinishedImage' has a wrong offset!");
static_assert(offsetof(UWBP_C_RankDisplay_C, RankImage) == 0x000618, "Member 'UWBP_C_RankDisplay_C::RankImage' has a wrong offset!");
static_assert(offsetof(UWBP_C_RankDisplay_C, RankNameText) == 0x000620, "Member 'UWBP_C_RankDisplay_C::RankNameText' has a wrong offset!");
static_assert(offsetof(UWBP_C_RankDisplay_C, SelectButton) == 0x000628, "Member 'UWBP_C_RankDisplay_C::SelectButton' has a wrong offset!");
static_assert(offsetof(UWBP_C_RankDisplay_C, SRReqText) == 0x000630, "Member 'UWBP_C_RankDisplay_C::SRReqText' has a wrong offset!");
static_assert(offsetof(UWBP_C_RankDisplay_C, OnSelected) == 0x000638, "Member 'UWBP_C_RankDisplay_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UWBP_C_RankDisplay_C, Index_0) == 0x000648, "Member 'UWBP_C_RankDisplay_C::Index_0' has a wrong offset!");
static_assert(offsetof(UWBP_C_RankDisplay_C, HasInit) == 0x00064C, "Member 'UWBP_C_RankDisplay_C::HasInit' has a wrong offset!");

}

