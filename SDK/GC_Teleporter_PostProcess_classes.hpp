﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Teleporter_PostProcess

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hemingway_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Teleporter_PostProcess.GC_Teleporter_PostProcess_C
// 0x0010 (0x03F8 - 0x03E8)
class AGC_Teleporter_PostProcess_C final : public AHWGameplayCueNotify_PostProcess
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GC_Teleporter_PostProcess(int32 EntryPoint);
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Teleporter_PostProcess_C">();
	}
	static class AGC_Teleporter_PostProcess_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Teleporter_PostProcess_C>();
	}
};
static_assert(alignof(AGC_Teleporter_PostProcess_C) == 0x000008, "Wrong alignment on AGC_Teleporter_PostProcess_C");
static_assert(sizeof(AGC_Teleporter_PostProcess_C) == 0x0003F8, "Wrong size on AGC_Teleporter_PostProcess_C");
static_assert(offsetof(AGC_Teleporter_PostProcess_C, UberGraphFrame) == 0x0003E8, "Member 'AGC_Teleporter_PostProcess_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGC_Teleporter_PostProcess_C, DefaultSceneRoot) == 0x0003F0, "Member 'AGC_Teleporter_PostProcess_C::DefaultSceneRoot' has a wrong offset!");

}

