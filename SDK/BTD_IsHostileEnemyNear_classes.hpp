﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_IsHostileEnemyNear

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTD_IsHostileEnemyNear.BTD_IsHostileEnemyNear_C
// 0x0018 (0x00B8 - 0x00A0)
class UBTD_IsHostileEnemyNear_C final : public UBTDecorator_BlueprintBase
{
public:
	double                                        Timeframe;                                         // 0x00A0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GodsOnly;                                          // 0x00A8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Range;                                             // 0x00B0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTD_IsHostileEnemyNear_C">();
	}
	static class UBTD_IsHostileEnemyNear_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTD_IsHostileEnemyNear_C>();
	}
};
static_assert(alignof(UBTD_IsHostileEnemyNear_C) == 0x000008, "Wrong alignment on UBTD_IsHostileEnemyNear_C");
static_assert(sizeof(UBTD_IsHostileEnemyNear_C) == 0x0000B8, "Wrong size on UBTD_IsHostileEnemyNear_C");
static_assert(offsetof(UBTD_IsHostileEnemyNear_C, Timeframe) == 0x0000A0, "Member 'UBTD_IsHostileEnemyNear_C::Timeframe' has a wrong offset!");
static_assert(offsetof(UBTD_IsHostileEnemyNear_C, GodsOnly) == 0x0000A8, "Member 'UBTD_IsHostileEnemyNear_C::GodsOnly' has a wrong offset!");
static_assert(offsetof(UBTD_IsHostileEnemyNear_C, Range) == 0x0000B0, "Member 'UBTD_IsHostileEnemyNear_C::Range' has a wrong offset!");

}

