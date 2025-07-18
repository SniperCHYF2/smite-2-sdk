﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_Prototype_Journeys_Abilities_End

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_G_Prototype_Journeys_Abilities_End.WBP_G_Prototype_Journeys_Abilities_End_C
// 0x0060 (0x0658 - 0x05F8)
class UWBP_G_Prototype_Journeys_Abilities_End_C final : public UHWWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWButton*                              ExitButton;                                        // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HWImage_7;                                         // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HWImage_133;                                       // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              RestartButton;                                     // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               Star1;                                             // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               Star2;                                             // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               Star3;                                             // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               Star4;                                             // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CurrentPoints;                                     // 0x0640(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_644[0x4];                                      // 0x0644(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              RestartChallenge;                                  // 0x0648(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_G_Prototype_Journeys_Abilities_End_ExitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Journeys_Relics_HWButton_62_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void DisplayCaption(const class FText& CaptionText, double Duration);
	void EndCombo();
	void EndComboHUD();
	void ExecuteUbergraph_WBP_G_Prototype_Journeys_Abilities_End(int32 EntryPoint);
	void GetPoints(int32* Points);
	void PointsGained(int32 Points, const class FText& Details);
	void ResetPoints();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdatePointsHUD(int32 PointsGained_0, int32 TotalPoints, int32 ComboCount, double ComboDuration, const class FText& Details);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_G_Prototype_Journeys_Abilities_End_C">();
	}
	static class UWBP_G_Prototype_Journeys_Abilities_End_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_G_Prototype_Journeys_Abilities_End_C>();
	}
};
static_assert(alignof(UWBP_G_Prototype_Journeys_Abilities_End_C) == 0x000008, "Wrong alignment on UWBP_G_Prototype_Journeys_Abilities_End_C");
static_assert(sizeof(UWBP_G_Prototype_Journeys_Abilities_End_C) == 0x000658, "Wrong size on UWBP_G_Prototype_Journeys_Abilities_End_C");
static_assert(offsetof(UWBP_G_Prototype_Journeys_Abilities_End_C, UberGraphFrame) == 0x0005F8, "Member 'UWBP_G_Prototype_Journeys_Abilities_End_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Journeys_Abilities_End_C, ExitButton) == 0x000600, "Member 'UWBP_G_Prototype_Journeys_Abilities_End_C::ExitButton' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Journeys_Abilities_End_C, HWImage_7) == 0x000608, "Member 'UWBP_G_Prototype_Journeys_Abilities_End_C::HWImage_7' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Journeys_Abilities_End_C, HWImage_133) == 0x000610, "Member 'UWBP_G_Prototype_Journeys_Abilities_End_C::HWImage_133' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Journeys_Abilities_End_C, RestartButton) == 0x000618, "Member 'UWBP_G_Prototype_Journeys_Abilities_End_C::RestartButton' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Journeys_Abilities_End_C, Star1) == 0x000620, "Member 'UWBP_G_Prototype_Journeys_Abilities_End_C::Star1' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Journeys_Abilities_End_C, Star2) == 0x000628, "Member 'UWBP_G_Prototype_Journeys_Abilities_End_C::Star2' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Journeys_Abilities_End_C, Star3) == 0x000630, "Member 'UWBP_G_Prototype_Journeys_Abilities_End_C::Star3' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Journeys_Abilities_End_C, Star4) == 0x000638, "Member 'UWBP_G_Prototype_Journeys_Abilities_End_C::Star4' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Journeys_Abilities_End_C, CurrentPoints) == 0x000640, "Member 'UWBP_G_Prototype_Journeys_Abilities_End_C::CurrentPoints' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Journeys_Abilities_End_C, RestartChallenge) == 0x000648, "Member 'UWBP_G_Prototype_Journeys_Abilities_End_C::RestartChallenge' has a wrong offset!");

}

