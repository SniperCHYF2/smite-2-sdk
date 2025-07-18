﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Smite_PlayerController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Smite_PlayerController.BP_Smite_PlayerController_C
// 0x0010 (0x1178 - 0x1168)
class ABP_Smite_PlayerController_C final : public AHWPlayerController_Smite
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1168(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          BasicAttackVibration;                              // 0x1170(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Smite_PlayerController(int32 EntryPoint);
	void InpActEvt_J_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void OnSettingApplied(class FName SettingName);
	void ReceiveBeginPlay();
	void RemoveCallbacks(class AActor* Actor, EEndPlayReason EndPlayReason);
	void ServerChangeTargets();
	void SetBasicAttackVibrationCallback();
	void UpdateBasicAttackVibration();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Smite_PlayerController_C">();
	}
	static class ABP_Smite_PlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Smite_PlayerController_C>();
	}
};
static_assert(alignof(ABP_Smite_PlayerController_C) == 0x000008, "Wrong alignment on ABP_Smite_PlayerController_C");
static_assert(sizeof(ABP_Smite_PlayerController_C) == 0x001178, "Wrong size on ABP_Smite_PlayerController_C");
static_assert(offsetof(ABP_Smite_PlayerController_C, UberGraphFrame) == 0x001168, "Member 'ABP_Smite_PlayerController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Smite_PlayerController_C, BasicAttackVibration) == 0x001170, "Member 'ABP_Smite_PlayerController_C::BasicAttackVibration' has a wrong offset!");

}

