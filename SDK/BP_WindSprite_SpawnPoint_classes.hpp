﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WindSprite_SpawnPoint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WindSprite_SpawnPoint.BP_WindSprite_SpawnPoint_C
// 0x0058 (0x02F0 - 0x0298)
class ABP_WindSprite_SpawnPoint_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USplineComponent*                       Spline;                                            // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        arrow;                                             // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                   GroupName;                                         // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInitialSpawn;                                    // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PreviewJumpDistance;                               // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldSpawnImmediately;                            // 0x02D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D3[0x5];                                      // 0x02D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MinSpawnTime;                                      // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxSpawnTime;                                      // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LeapRange;                                         // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_WindSprite_SpawnPoint(int32 EntryPoint);
	void ReceiveBeginPlay();
	void SpawnWindSprite();
	void StartSpawnProcess();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WindSprite_SpawnPoint_C">();
	}
	static class ABP_WindSprite_SpawnPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WindSprite_SpawnPoint_C>();
	}
};
static_assert(alignof(ABP_WindSprite_SpawnPoint_C) == 0x000008, "Wrong alignment on ABP_WindSprite_SpawnPoint_C");
static_assert(sizeof(ABP_WindSprite_SpawnPoint_C) == 0x0002F0, "Wrong size on ABP_WindSprite_SpawnPoint_C");
static_assert(offsetof(ABP_WindSprite_SpawnPoint_C, UberGraphFrame) == 0x000298, "Member 'ABP_WindSprite_SpawnPoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_WindSprite_SpawnPoint_C, Spline) == 0x0002A0, "Member 'ABP_WindSprite_SpawnPoint_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_WindSprite_SpawnPoint_C, Scene) == 0x0002A8, "Member 'ABP_WindSprite_SpawnPoint_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_WindSprite_SpawnPoint_C, arrow) == 0x0002B0, "Member 'ABP_WindSprite_SpawnPoint_C::arrow' has a wrong offset!");
static_assert(offsetof(ABP_WindSprite_SpawnPoint_C, Billboard) == 0x0002B8, "Member 'ABP_WindSprite_SpawnPoint_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_WindSprite_SpawnPoint_C, Capsule) == 0x0002C0, "Member 'ABP_WindSprite_SpawnPoint_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_WindSprite_SpawnPoint_C, GroupName) == 0x0002C8, "Member 'ABP_WindSprite_SpawnPoint_C::GroupName' has a wrong offset!");
static_assert(offsetof(ABP_WindSprite_SpawnPoint_C, IsInitialSpawn) == 0x0002D0, "Member 'ABP_WindSprite_SpawnPoint_C::IsInitialSpawn' has a wrong offset!");
static_assert(offsetof(ABP_WindSprite_SpawnPoint_C, PreviewJumpDistance) == 0x0002D1, "Member 'ABP_WindSprite_SpawnPoint_C::PreviewJumpDistance' has a wrong offset!");
static_assert(offsetof(ABP_WindSprite_SpawnPoint_C, ShouldSpawnImmediately) == 0x0002D2, "Member 'ABP_WindSprite_SpawnPoint_C::ShouldSpawnImmediately' has a wrong offset!");
static_assert(offsetof(ABP_WindSprite_SpawnPoint_C, MinSpawnTime) == 0x0002D8, "Member 'ABP_WindSprite_SpawnPoint_C::MinSpawnTime' has a wrong offset!");
static_assert(offsetof(ABP_WindSprite_SpawnPoint_C, MaxSpawnTime) == 0x0002E0, "Member 'ABP_WindSprite_SpawnPoint_C::MaxSpawnTime' has a wrong offset!");
static_assert(offsetof(ABP_WindSprite_SpawnPoint_C, LeapRange) == 0x0002E8, "Member 'ABP_WindSprite_SpawnPoint_C::LeapRange' has a wrong offset!");

}

