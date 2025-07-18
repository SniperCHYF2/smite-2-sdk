﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_GodAscension_SingleItem_Purchase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_C_GodAscension_SingleItem_Purchase.WBP_C_GodAscension_SingleItem_Purchase_C
// 0x0088 (0x0740 - 0x06B8)
class UWBP_C_GodAscension_SingleItem_Purchase_C final : public UHWGodAscensionTrackItemDisplay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AscensionUnlockable;                               // 0x06C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BaseLockUnlockable;                                // 0x06C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHWImage*                               AscensionFrame;                                    // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               background;                                        // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               ClaimableDisplay;                                  // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWOverlay*                             ClaimOverlay;                                      // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWWidgetSwitcher*                      FrameSwitcher;                                     // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HighlightImage;                                    // 0x06F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHAsyncImage*                          IsLockedIcon;                                      // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoadingThrobber_C*                 LoadingThrobber;                                   // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHAsyncImage*                          RewardIcon;                                        // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               SelectedPreviewImage;                              // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               Wings;                                             // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoundBase*                             SFXHover;                                          // 0x0728(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SFXClick;                                          // 0x0730(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Progress_Made;                                     // 0x0738(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ascension;                                         // 0x0739(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Owns_Pass;                                         // 0x073A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCurrentlySelected;                               // 0x073B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_C_GodAscension_SingleItemDisplay_HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_C_GodAscension_SingleItemDisplay_HitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_C_GodAscension_SingleItemDisplay_HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BP_HandleSetDisplayOwnershipIcons();
	void ExecuteUbergraph_WBP_C_GodAscension_SingleItem_Purchase(int32 EntryPoint);
	void FrameSwitch(bool Ascension_0);
	void HandleEntryButtonHovered();
	void HandleEntryButtonUnhovered();
	void LockIcon(bool OwnsPass);
	void OnDisplayPlatformItemSet();
	void SelectItem(bool bSelected);
	void SetButtonEnabled(bool bEnable);
	void SetClaimable(bool bIsClaimable);
	void SetDisplayAsPremium(bool bIsPremium);
	void SetDisplayOwnershipIcons(bool bInDisplayOwnershipIcons);
	void SetIsSelected(bool bInIsSelected);
	void SFXPlayClick();
	void SFXPlayHover();
	void UpdateSelectedHighlight();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_C_GodAscension_SingleItem_Purchase_C">();
	}
	static class UWBP_C_GodAscension_SingleItem_Purchase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_C_GodAscension_SingleItem_Purchase_C>();
	}
};
static_assert(alignof(UWBP_C_GodAscension_SingleItem_Purchase_C) == 0x000008, "Wrong alignment on UWBP_C_GodAscension_SingleItem_Purchase_C");
static_assert(sizeof(UWBP_C_GodAscension_SingleItem_Purchase_C) == 0x000740, "Wrong size on UWBP_C_GodAscension_SingleItem_Purchase_C");
static_assert(offsetof(UWBP_C_GodAscension_SingleItem_Purchase_C, UberGraphFrame) == 0x0006B8, "Member 'UWBP_C_GodAscension_SingleItem_Purchase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAscension_SingleItem_Purchase_C, AscensionUnlockable) == 0x0006C0, "Member 'UWBP_C_GodAscension_SingleItem_Purchase_C::AscensionUnlockable' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAscension_SingleItem_Purchase_C, BaseLockUnlockable) == 0x0006C8, "Member 'UWBP_C_GodAscension_SingleItem_Purchase_C::BaseLockUnlockable' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAscension_SingleItem_Purchase_C, AscensionFrame) == 0x0006D0, "Member 'UWBP_C_GodAscension_SingleItem_Purchase_C::AscensionFrame' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAscension_SingleItem_Purchase_C, background) == 0x0006D8, "Member 'UWBP_C_GodAscension_SingleItem_Purchase_C::background' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAscension_SingleItem_Purchase_C, ClaimableDisplay) == 0x0006E0, "Member 'UWBP_C_GodAscension_SingleItem_Purchase_C::ClaimableDisplay' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAscension_SingleItem_Purchase_C, ClaimOverlay) == 0x0006E8, "Member 'UWBP_C_GodAscension_SingleItem_Purchase_C::ClaimOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAscension_SingleItem_Purchase_C, FrameSwitcher) == 0x0006F0, "Member 'UWBP_C_GodAscension_SingleItem_Purchase_C::FrameSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAscension_SingleItem_Purchase_C, HighlightImage) == 0x0006F8, "Member 'UWBP_C_GodAscension_SingleItem_Purchase_C::HighlightImage' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAscension_SingleItem_Purchase_C, IsLockedIcon) == 0x000700, "Member 'UWBP_C_GodAscension_SingleItem_Purchase_C::IsLockedIcon' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAscension_SingleItem_Purchase_C, LoadingThrobber) == 0x000708, "Member 'UWBP_C_GodAscension_SingleItem_Purchase_C::LoadingThrobber' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAscension_SingleItem_Purchase_C, RewardIcon) == 0x000710, "Member 'UWBP_C_GodAscension_SingleItem_Purchase_C::RewardIcon' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAscension_SingleItem_Purchase_C, SelectedPreviewImage) == 0x000718, "Member 'UWBP_C_GodAscension_SingleItem_Purchase_C::SelectedPreviewImage' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAscension_SingleItem_Purchase_C, Wings) == 0x000720, "Member 'UWBP_C_GodAscension_SingleItem_Purchase_C::Wings' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAscension_SingleItem_Purchase_C, SFXHover) == 0x000728, "Member 'UWBP_C_GodAscension_SingleItem_Purchase_C::SFXHover' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAscension_SingleItem_Purchase_C, SFXClick) == 0x000730, "Member 'UWBP_C_GodAscension_SingleItem_Purchase_C::SFXClick' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAscension_SingleItem_Purchase_C, Progress_Made) == 0x000738, "Member 'UWBP_C_GodAscension_SingleItem_Purchase_C::Progress_Made' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAscension_SingleItem_Purchase_C, Ascension) == 0x000739, "Member 'UWBP_C_GodAscension_SingleItem_Purchase_C::Ascension' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAscension_SingleItem_Purchase_C, Owns_Pass) == 0x00073A, "Member 'UWBP_C_GodAscension_SingleItem_Purchase_C::Owns_Pass' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodAscension_SingleItem_Purchase_C, IsCurrentlySelected) == 0x00073B, "Member 'UWBP_C_GodAscension_SingleItem_Purchase_C::IsCurrentlySelected' has a wrong offset!");

}

