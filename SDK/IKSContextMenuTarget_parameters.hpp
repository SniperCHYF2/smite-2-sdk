﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IKSContextMenuTarget

#include "Basic.hpp"

#include "RallyHereStart_structs.hpp"


namespace SDK::Params
{

// Function IKSContextMenuTarget.IKSContextMenuTarget_C.OnContextMenuOpen
// 0x0001 (0x0001 - 0x0000)
struct IKSContextMenuTarget_C_OnContextMenuOpen final
{
public:
	EViewSide                                     side;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IKSContextMenuTarget_C_OnContextMenuOpen) == 0x000001, "Wrong alignment on IKSContextMenuTarget_C_OnContextMenuOpen");
static_assert(sizeof(IKSContextMenuTarget_C_OnContextMenuOpen) == 0x000001, "Wrong size on IKSContextMenuTarget_C_OnContextMenuOpen");
static_assert(offsetof(IKSContextMenuTarget_C_OnContextMenuOpen, side) == 0x000000, "Member 'IKSContextMenuTarget_C_OnContextMenuOpen::side' has a wrong offset!");

}

