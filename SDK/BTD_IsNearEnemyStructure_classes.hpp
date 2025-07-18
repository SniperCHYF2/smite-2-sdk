﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_IsNearEnemyStructure

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTD_IsNearEnemyStructure.BTD_IsNearEnemyStructure_C
// 0x0060 (0x0100 - 0x00A0)
class UBTD_IsNearEnemyStructure_C final : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                 ShouldDiveBlackboardKey;                           // 0x00A0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly)
	class FName                                   TowerCurrentTargetBlackboardKey;                   // 0x00C8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                 StructureStoreKey;                                 // 0x00D0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly)
	double                                        DistanceBuffer;                                    // 0x00F8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTD_IsNearEnemyStructure_C">();
	}
	static class UBTD_IsNearEnemyStructure_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTD_IsNearEnemyStructure_C>();
	}
};
static_assert(alignof(UBTD_IsNearEnemyStructure_C) == 0x000008, "Wrong alignment on UBTD_IsNearEnemyStructure_C");
static_assert(sizeof(UBTD_IsNearEnemyStructure_C) == 0x000100, "Wrong size on UBTD_IsNearEnemyStructure_C");
static_assert(offsetof(UBTD_IsNearEnemyStructure_C, ShouldDiveBlackboardKey) == 0x0000A0, "Member 'UBTD_IsNearEnemyStructure_C::ShouldDiveBlackboardKey' has a wrong offset!");
static_assert(offsetof(UBTD_IsNearEnemyStructure_C, TowerCurrentTargetBlackboardKey) == 0x0000C8, "Member 'UBTD_IsNearEnemyStructure_C::TowerCurrentTargetBlackboardKey' has a wrong offset!");
static_assert(offsetof(UBTD_IsNearEnemyStructure_C, StructureStoreKey) == 0x0000D0, "Member 'UBTD_IsNearEnemyStructure_C::StructureStoreKey' has a wrong offset!");
static_assert(offsetof(UBTD_IsNearEnemyStructure_C, DistanceBuffer) == 0x0000F8, "Member 'UBTD_IsNearEnemyStructure_C::DistanceBuffer' has a wrong offset!");

}

