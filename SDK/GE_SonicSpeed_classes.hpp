﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_SonicSpeed

#include "Basic.hpp"

#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_SonicSpeed.GE_SonicSpeed_C
// 0x0000 (0x0B08 - 0x0B08)
class UGE_SonicSpeed_C final : public UHWGameplayEffect_MovementSpeed
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_SonicSpeed_C">();
	}
	static class UGE_SonicSpeed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_SonicSpeed_C>();
	}
};
static_assert(alignof(UGE_SonicSpeed_C) == 0x000008, "Wrong alignment on UGE_SonicSpeed_C");
static_assert(sizeof(UGE_SonicSpeed_C) == 0x000B08, "Wrong size on UGE_SonicSpeed_C");

}

