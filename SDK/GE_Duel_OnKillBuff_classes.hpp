﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Duel_OnKillBuff

#include "Basic.hpp"

#include "GE_Buff_LeavingFountain_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Duel_OnKillBuff.GE_Duel_OnKillBuff_C
// 0x0000 (0x0B08 - 0x0B08)
class UGE_Duel_OnKillBuff_C final : public UGE_Buff_LeavingFountain_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Duel_OnKillBuff_C">();
	}
	static class UGE_Duel_OnKillBuff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Duel_OnKillBuff_C>();
	}
};
static_assert(alignof(UGE_Duel_OnKillBuff_C) == 0x000008, "Wrong alignment on UGE_Duel_OnKillBuff_C");
static_assert(sizeof(UGE_Duel_OnKillBuff_C) == 0x000B08, "Wrong size on UGE_Duel_OnKillBuff_C");

}

