﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KantanChartsDatasource

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct KantanChartsDatasource.KantanCartesianDatapoint
// 0x0010 (0x0010 - 0x0000)
struct FKantanCartesianDatapoint final
{
public:
	struct FVector2D                              Coords;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKantanCartesianDatapoint) == 0x000008, "Wrong alignment on FKantanCartesianDatapoint");
static_assert(sizeof(FKantanCartesianDatapoint) == 0x000010, "Wrong size on FKantanCartesianDatapoint");
static_assert(offsetof(FKantanCartesianDatapoint, Coords) == 0x000000, "Member 'FKantanCartesianDatapoint::Coords' has a wrong offset!");

}

