﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_SoundEmote

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_SoundEmote.GC_SoundEmote_C
// 0x0020 (0x03D0 - 0x03B0)
class UGC_SoundEmote_C : public UHWGameplayCueNotify_Burst
{
public:
	struct FRotator                               LocalOwnerRotation;                                // 0x03B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         EmoteSlotId;                                       // 0x03C8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetSoundEmoteFromLoadout(class AHWCharacter_Base* TargetCharacter, class USoundBase** EmoteSoundBase) const;
	void OnBurst(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_SoundEmote_C">();
	}
	static class UGC_SoundEmote_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_SoundEmote_C>();
	}
};
static_assert(alignof(UGC_SoundEmote_C) == 0x000008, "Wrong alignment on UGC_SoundEmote_C");
static_assert(sizeof(UGC_SoundEmote_C) == 0x0003D0, "Wrong size on UGC_SoundEmote_C");
static_assert(offsetof(UGC_SoundEmote_C, LocalOwnerRotation) == 0x0003B0, "Member 'UGC_SoundEmote_C::LocalOwnerRotation' has a wrong offset!");
static_assert(offsetof(UGC_SoundEmote_C, EmoteSlotId) == 0x0003C8, "Member 'UGC_SoundEmote_C::EmoteSlotId' has a wrong offset!");

}

