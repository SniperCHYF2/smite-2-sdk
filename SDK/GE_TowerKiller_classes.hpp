﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_TowerKiller

#include "Basic.hpp"

#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_TowerKiller.GE_TowerKiller_C
// 0x0000 (0x0AB8 - 0x0AB8)
class UGE_TowerKiller_C final : public UHWGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_TowerKiller_C">();
	}
	static class UGE_TowerKiller_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_TowerKiller_C>();
	}
};
static_assert(alignof(UGE_TowerKiller_C) == 0x000008, "Wrong alignment on UGE_TowerKiller_C");
static_assert(sizeof(UGE_TowerKiller_C) == 0x000AB8, "Wrong size on UGE_TowerKiller_C");

}

