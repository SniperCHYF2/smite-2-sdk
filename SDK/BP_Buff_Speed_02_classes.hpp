﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Buff_Speed_02

#include "Basic.hpp"

#include "BP_Deployable_JungleBuff_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Buff_Speed_02.BP_Buff_Speed_02_C
// 0x0000 (0x03B0 - 0x03B0)
class ABP_Buff_Speed_02_C final : public ABP_Deployable_JungleBuff_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Buff_Speed_02_C">();
	}
	static class ABP_Buff_Speed_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Buff_Speed_02_C>();
	}
};
static_assert(alignof(ABP_Buff_Speed_02_C) == 0x000008, "Wrong alignment on ABP_Buff_Speed_02_C");
static_assert(sizeof(ABP_Buff_Speed_02_C) == 0x0003B0, "Wrong size on ABP_Buff_Speed_02_C");

}

