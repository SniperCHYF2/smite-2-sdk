﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AQ_Quest_HealGods

#include "Basic.hpp"

#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AQ_Quest_HealGods.AQ_Quest_HealGods_C
// 0x0000 (0x00F0 - 0x00F0)
class UAQ_Quest_HealGods_C final : public UHWQuest_AttributeByModifierReason
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AQ_Quest_HealGods_C">();
	}
	static class UAQ_Quest_HealGods_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAQ_Quest_HealGods_C>();
	}
};
static_assert(alignof(UAQ_Quest_HealGods_C) == 0x000008, "Wrong alignment on UAQ_Quest_HealGods_C");
static_assert(sizeof(UAQ_Quest_HealGods_C) == 0x0000F0, "Wrong size on UAQ_Quest_HealGods_C");

}

