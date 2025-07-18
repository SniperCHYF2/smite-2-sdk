﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ConquestPhaseLogic_EndOfMatch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ConquestPhaseLogic_EndOfMatch.BP_ConquestPhaseLogic_EndOfMatch_C
// 0x0040 (0x0070 - 0x0030)
class UBP_ConquestPhaseLogic_EndOfMatch_C final : public UHWPhaseLogic_EndOfMatch
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 WinEffect;                                         // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 LoseEffect;                                        // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bRemoveOnPhaseEnd;                                 // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  ValidNPCBotFactoryAssetTags;                       // 0x0050(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ApplyEOMEffect();
	void ApplyWinLoseEffectToNPCs(class AHWBotFactory* BotFactory, bool bWin);
	void ApplyWinLoseEffectToPlayers(class AHWTeamState* TeamState, bool bWin);
	void EndLogicBP();
	void ExecuteUbergraph_BP_ConquestPhaseLogic_EndOfMatch(int32 EntryPoint);
	void RemoveEOMEffectsFromPlayers();
	void StartLogicBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ConquestPhaseLogic_EndOfMatch_C">();
	}
	static class UBP_ConquestPhaseLogic_EndOfMatch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ConquestPhaseLogic_EndOfMatch_C>();
	}
};
static_assert(alignof(UBP_ConquestPhaseLogic_EndOfMatch_C) == 0x000008, "Wrong alignment on UBP_ConquestPhaseLogic_EndOfMatch_C");
static_assert(sizeof(UBP_ConquestPhaseLogic_EndOfMatch_C) == 0x000070, "Wrong size on UBP_ConquestPhaseLogic_EndOfMatch_C");
static_assert(offsetof(UBP_ConquestPhaseLogic_EndOfMatch_C, UberGraphFrame) == 0x000030, "Member 'UBP_ConquestPhaseLogic_EndOfMatch_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ConquestPhaseLogic_EndOfMatch_C, WinEffect) == 0x000038, "Member 'UBP_ConquestPhaseLogic_EndOfMatch_C::WinEffect' has a wrong offset!");
static_assert(offsetof(UBP_ConquestPhaseLogic_EndOfMatch_C, LoseEffect) == 0x000040, "Member 'UBP_ConquestPhaseLogic_EndOfMatch_C::LoseEffect' has a wrong offset!");
static_assert(offsetof(UBP_ConquestPhaseLogic_EndOfMatch_C, bRemoveOnPhaseEnd) == 0x000048, "Member 'UBP_ConquestPhaseLogic_EndOfMatch_C::bRemoveOnPhaseEnd' has a wrong offset!");
static_assert(offsetof(UBP_ConquestPhaseLogic_EndOfMatch_C, ValidNPCBotFactoryAssetTags) == 0x000050, "Member 'UBP_ConquestPhaseLogic_EndOfMatch_C::ValidNPCBotFactoryAssetTags' has a wrong offset!");

}

