﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_OrderTower_TargetBeam

#include "Basic.hpp"

#include "GE_NPC_Target_Beam_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_OrderTower_TargetBeam.GE_OrderTower_TargetBeam_C
// 0x0000 (0x0AB8 - 0x0AB8)
class UGE_OrderTower_TargetBeam_C final : public UGE_NPC_Target_Beam_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_OrderTower_TargetBeam_C">();
	}
	static class UGE_OrderTower_TargetBeam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_OrderTower_TargetBeam_C>();
	}
};
static_assert(alignof(UGE_OrderTower_TargetBeam_C) == 0x000008, "Wrong alignment on UGE_OrderTower_TargetBeam_C");
static_assert(sizeof(UGE_OrderTower_TargetBeam_C) == 0x000AB8, "Wrong size on UGE_OrderTower_TargetBeam_C");

}

