﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_Prototype_Courier

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_G_Prototype_Courier.WBP_G_Prototype_Courier_C
// 0x0030 (0x0668 - 0x0638)
class UWBP_G_Prototype_Courier_C final : public UHWCharacterWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0638(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWButton*                              Button_CallCourier;                                // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_G_Prototype_Courier_Listener_C*    CourierListener;                                   // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HWImage;                                           // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWWidgetSwitcher*                      HWWidgetSwitcher_0;                                // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bCourierAlive;                                     // 0x0660(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCourierOnCooldown;                                // 0x0661(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCourierRequested;                                 // 0x0662(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCourierArrived;                                   // 0x0663(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFloodProtection;                                  // 0x0664(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_G_Prototype_Courier_Button_CallCourier_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Courier_CourierListener_K2Node_ComponentBoundEvent_1_OnEffectTrackStarted__DelegateSignature(const struct FActiveGameplayEffect& ActiveEffect, const struct FHWTrackedEffectData& EffectData);
	void BndEvt__WBP_G_Prototype_Courier_CourierListener_K2Node_ComponentBoundEvent_2_OnEffectTrackEnded__DelegateSignature(const struct FActiveGameplayEffect& ActiveEffect, const struct FHWTrackedEffectData& EffectData);
	void ExecuteUbergraph_WBP_G_Prototype_Courier(int32 EntryPoint);
	void InitializeWidget();
	void OnLocalTeamUpdated(const struct FGenericTeamId& TeamId, ETeamAttitude AttitudeTowardsLocal);
	void ResetFloodProtection();
	void TrackedCharacterChanged(class AHWCharacter_Base* NewCharacter);
	void TrackedPlayerStateChanged(class AHWPlayerState* NewPlayerState);
	void UpdateButtonState();

	TArray<class UHWGameplayEffectWidget*> GetEffectWidgets() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_G_Prototype_Courier_C">();
	}
	static class UWBP_G_Prototype_Courier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_G_Prototype_Courier_C>();
	}
};
static_assert(alignof(UWBP_G_Prototype_Courier_C) == 0x000008, "Wrong alignment on UWBP_G_Prototype_Courier_C");
static_assert(sizeof(UWBP_G_Prototype_Courier_C) == 0x000668, "Wrong size on UWBP_G_Prototype_Courier_C");
static_assert(offsetof(UWBP_G_Prototype_Courier_C, UberGraphFrame) == 0x000638, "Member 'UWBP_G_Prototype_Courier_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Courier_C, Button_CallCourier) == 0x000640, "Member 'UWBP_G_Prototype_Courier_C::Button_CallCourier' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Courier_C, CourierListener) == 0x000648, "Member 'UWBP_G_Prototype_Courier_C::CourierListener' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Courier_C, HWImage) == 0x000650, "Member 'UWBP_G_Prototype_Courier_C::HWImage' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Courier_C, HWWidgetSwitcher_0) == 0x000658, "Member 'UWBP_G_Prototype_Courier_C::HWWidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Courier_C, bCourierAlive) == 0x000660, "Member 'UWBP_G_Prototype_Courier_C::bCourierAlive' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Courier_C, bCourierOnCooldown) == 0x000661, "Member 'UWBP_G_Prototype_Courier_C::bCourierOnCooldown' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Courier_C, bCourierRequested) == 0x000662, "Member 'UWBP_G_Prototype_Courier_C::bCourierRequested' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Courier_C, bCourierArrived) == 0x000663, "Member 'UWBP_G_Prototype_Courier_C::bCourierArrived' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Courier_C, bFloodProtection) == 0x000664, "Member 'UWBP_G_Prototype_Courier_C::bFloodProtection' has a wrong offset!");

}

