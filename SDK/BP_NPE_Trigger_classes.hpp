﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPE_Trigger

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NPE_Trigger.BP_NPE_Trigger_C
// 0x0068 (0x0300 - 0x0298)
class ABP_NPE_Trigger_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          FireOnce;                                          // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 TriggerActor;                                      // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnTriggered;                                       // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class AActor*>                         TriggerActors;                                     // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	double                                        TriggerThreshold;                                  // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(const struct FGameplayTag& CustomTag, class ABP_NPE_Trigger_C* InstigatorTrigger, int32 ID)> OnTriggeredCustom; // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGameplayTag                           CustomTriggerTag;                                  // 0x02F0(0x0008)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         TriggerID;                                         // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          HasFired;                                          // 0x02FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CheckTriggerCondition(bool* ConditionMet);
	void ExecuteUbergraph_BP_NPE_Trigger(int32 EntryPoint);
	void GetCustomNPETriggerTag(struct FGameplayTag* CustomTag);
	void ListenForTrigger();
	void StartListeningForTrigger();
	void StopListeningForTrigger();
	void Trigger();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPE_Trigger_C">();
	}
	static class ABP_NPE_Trigger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NPE_Trigger_C>();
	}
};
static_assert(alignof(ABP_NPE_Trigger_C) == 0x000008, "Wrong alignment on ABP_NPE_Trigger_C");
static_assert(sizeof(ABP_NPE_Trigger_C) == 0x000300, "Wrong size on ABP_NPE_Trigger_C");
static_assert(offsetof(ABP_NPE_Trigger_C, UberGraphFrame) == 0x000298, "Member 'ABP_NPE_Trigger_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_NPE_Trigger_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_NPE_Trigger_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_NPE_Trigger_C, FireOnce) == 0x0002A8, "Member 'ABP_NPE_Trigger_C::FireOnce' has a wrong offset!");
static_assert(offsetof(ABP_NPE_Trigger_C, TriggerActor) == 0x0002B0, "Member 'ABP_NPE_Trigger_C::TriggerActor' has a wrong offset!");
static_assert(offsetof(ABP_NPE_Trigger_C, OnTriggered) == 0x0002B8, "Member 'ABP_NPE_Trigger_C::OnTriggered' has a wrong offset!");
static_assert(offsetof(ABP_NPE_Trigger_C, TriggerActors) == 0x0002C8, "Member 'ABP_NPE_Trigger_C::TriggerActors' has a wrong offset!");
static_assert(offsetof(ABP_NPE_Trigger_C, TriggerThreshold) == 0x0002D8, "Member 'ABP_NPE_Trigger_C::TriggerThreshold' has a wrong offset!");
static_assert(offsetof(ABP_NPE_Trigger_C, OnTriggeredCustom) == 0x0002E0, "Member 'ABP_NPE_Trigger_C::OnTriggeredCustom' has a wrong offset!");
static_assert(offsetof(ABP_NPE_Trigger_C, CustomTriggerTag) == 0x0002F0, "Member 'ABP_NPE_Trigger_C::CustomTriggerTag' has a wrong offset!");
static_assert(offsetof(ABP_NPE_Trigger_C, TriggerID) == 0x0002F8, "Member 'ABP_NPE_Trigger_C::TriggerID' has a wrong offset!");
static_assert(offsetof(ABP_NPE_Trigger_C, HasFired) == 0x0002FC, "Member 'ABP_NPE_Trigger_C::HasFired' has a wrong offset!");

}

