﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Joust_TItanDebuff

#include "Basic.hpp"

#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Joust_TItanDebuff.GE_Joust_TItanDebuff_C
// 0x0000 (0x0C98 - 0x0C98)
class UGE_Joust_TItanDebuff_C final : public UHWGameplayEffect_AttackSpeed
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Joust_TItanDebuff_C">();
	}
	static class UGE_Joust_TItanDebuff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Joust_TItanDebuff_C>();
	}
};
static_assert(alignof(UGE_Joust_TItanDebuff_C) == 0x000008, "Wrong alignment on UGE_Joust_TItanDebuff_C");
static_assert(sizeof(UGE_Joust_TItanDebuff_C) == 0x000C98, "Wrong size on UGE_Joust_TItanDebuff_C");

}

