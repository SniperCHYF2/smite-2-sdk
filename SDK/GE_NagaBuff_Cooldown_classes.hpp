﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_NagaBuff_Cooldown

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_NagaBuff_Cooldown.GE_NagaBuff_Cooldown_C
// 0x0000 (0x0AA0 - 0x0AA0)
class UGE_NagaBuff_Cooldown_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_NagaBuff_Cooldown_C">();
	}
	static class UGE_NagaBuff_Cooldown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_NagaBuff_Cooldown_C>();
	}
};
static_assert(alignof(UGE_NagaBuff_Cooldown_C) == 0x000008, "Wrong alignment on UGE_NagaBuff_Cooldown_C");
static_assert(sizeof(UGE_NagaBuff_Cooldown_C) == 0x000AA0, "Wrong size on UGE_NagaBuff_Cooldown_C");

}

