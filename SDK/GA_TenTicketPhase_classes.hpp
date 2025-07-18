﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TenTicketPhase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TenTicketPhase.GA_TenTicketPhase_C
// 0x0038 (0x09F8 - 0x09C0)
class UGA_TenTicketPhase_C final : public UHWGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x09C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         MinFavorSpawnInterval;                             // 0x09C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxFavorSpawnInterval;                             // 0x09CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FavorSpawnRadius;                                  // 0x09D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D4[0x4];                                      // 0x09D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         FavorSpawnPoints;                                  // 0x09D8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                           FavorTimer;                                        // 0x09E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ARecastNavMesh*                         NavData;                                           // 0x09F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_TenTicketPhase(int32 EntryPoint);
	void K2_ActivateAbility();
	void OwnerDied(const struct FDamageEventData& DeathEventData);
	void OwnerRespawned(class AActor* NewAvatar);
	void SpawnFavor();
	void StartFavorTimer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TenTicketPhase_C">();
	}
	static class UGA_TenTicketPhase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TenTicketPhase_C>();
	}
};
static_assert(alignof(UGA_TenTicketPhase_C) == 0x000008, "Wrong alignment on UGA_TenTicketPhase_C");
static_assert(sizeof(UGA_TenTicketPhase_C) == 0x0009F8, "Wrong size on UGA_TenTicketPhase_C");
static_assert(offsetof(UGA_TenTicketPhase_C, UberGraphFrame) == 0x0009C0, "Member 'UGA_TenTicketPhase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_TenTicketPhase_C, MinFavorSpawnInterval) == 0x0009C8, "Member 'UGA_TenTicketPhase_C::MinFavorSpawnInterval' has a wrong offset!");
static_assert(offsetof(UGA_TenTicketPhase_C, MaxFavorSpawnInterval) == 0x0009CC, "Member 'UGA_TenTicketPhase_C::MaxFavorSpawnInterval' has a wrong offset!");
static_assert(offsetof(UGA_TenTicketPhase_C, FavorSpawnRadius) == 0x0009D0, "Member 'UGA_TenTicketPhase_C::FavorSpawnRadius' has a wrong offset!");
static_assert(offsetof(UGA_TenTicketPhase_C, FavorSpawnPoints) == 0x0009D8, "Member 'UGA_TenTicketPhase_C::FavorSpawnPoints' has a wrong offset!");
static_assert(offsetof(UGA_TenTicketPhase_C, FavorTimer) == 0x0009E8, "Member 'UGA_TenTicketPhase_C::FavorTimer' has a wrong offset!");
static_assert(offsetof(UGA_TenTicketPhase_C, NavData) == 0x0009F0, "Member 'UGA_TenTicketPhase_C::NavData' has a wrong offset!");

}

