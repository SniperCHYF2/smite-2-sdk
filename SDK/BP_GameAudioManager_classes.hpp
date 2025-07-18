﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameAudioManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GameAudioManager.BP_GameAudioManager_C
// 0x0028 (0x00C8 - 0x00A0)
class UBP_GameAudioManager_C final : public UHWGameAudioManagerComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                           HighMusicTimer;                                    // 0x00A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Match_Climax_Music_Duration;                       // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsMusicEnabled;                                   // 0x00B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B5[0x3];                                       // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Aladdin_Ninja_Death_VOX;                           // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Death_Stinger_Delay;                               // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BindCharacterDiedEvent();
	void BindNPCDestroyedEvent();
	void EndClimaxMusic();
	void ExecuteUbergraph_BP_GameAudioManager(int32 EntryPoint);
	void Multicast_PlayClimaxMusic(const struct FGenericTeamId& Team_Id);
	void Multicast_PlayerKillStinger(class AController* KillerController);
	void Multicast_PlayTowerStinger(const struct FGenericTeamId& Team_Id);
	void OnDeathMusicStop();
	void OnGamePhaseChanged(const struct FGameplayTag& NewPhase);
	void OnIntroMusicStopped();
	void OnLocalCharacterDied(class AHWCharacterAbilitySystemActor* CharacterAbilitySystemActor, float RespawnTimerDuration);
	void OnLocalTeamLoss();
	void OnLocalTeamWon();
	void OnMatchEnded();
	void OnPlayerDied(const struct FDamageEventData& KillEventData);
	void OnPlayerKillMusicStop();
	void OnRecallMusicStop();
	void OnStructureDestroyed(class AHWBotFactory* BotFactory, class AActor* Causer);
	void OnTowerKillMusicStop();
	void Play_Death_Stinger();
	void Play_Match_Loop_Music();
	void PlayMatchIntroMusic();
	void PlayRecallStinger();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Setup_Listeners();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GameAudioManager_C">();
	}
	static class UBP_GameAudioManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GameAudioManager_C>();
	}
};
static_assert(alignof(UBP_GameAudioManager_C) == 0x000008, "Wrong alignment on UBP_GameAudioManager_C");
static_assert(sizeof(UBP_GameAudioManager_C) == 0x0000C8, "Wrong size on UBP_GameAudioManager_C");
static_assert(offsetof(UBP_GameAudioManager_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_GameAudioManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_GameAudioManager_C, HighMusicTimer) == 0x0000A8, "Member 'UBP_GameAudioManager_C::HighMusicTimer' has a wrong offset!");
static_assert(offsetof(UBP_GameAudioManager_C, Match_Climax_Music_Duration) == 0x0000B0, "Member 'UBP_GameAudioManager_C::Match_Climax_Music_Duration' has a wrong offset!");
static_assert(offsetof(UBP_GameAudioManager_C, bIsMusicEnabled) == 0x0000B4, "Member 'UBP_GameAudioManager_C::bIsMusicEnabled' has a wrong offset!");
static_assert(offsetof(UBP_GameAudioManager_C, Aladdin_Ninja_Death_VOX) == 0x0000B8, "Member 'UBP_GameAudioManager_C::Aladdin_Ninja_Death_VOX' has a wrong offset!");
static_assert(offsetof(UBP_GameAudioManager_C, Death_Stinger_Delay) == 0x0000C0, "Member 'UBP_GameAudioManager_C::Death_Stinger_Delay' has a wrong offset!");

}

