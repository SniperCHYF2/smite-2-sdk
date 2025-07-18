﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Aladdin_ArenaManagerSingleton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hemingway_structs.hpp"
#include "Hemingway_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "STRUCT_AladdinArenaManager_ActorVariables_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Aladdin_ArenaManagerSingleton.BP_Aladdin_ArenaManagerSingleton_C
// 0x02F0 (0x0608 - 0x0318)
class ABP_Aladdin_ArenaManagerSingleton_C final : public AHWAladdinArenaManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWDisplayInfoComponent*                HWDisplayInfo;                                     // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHWAudioComponent_Deployable*           SFX_LampAppear;                                    // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHWAudioComponent_Deployable*           BackgroundLoop;                                    // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableComponent_C*            BP_InteractableComponent;                          // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ArenaFloorVisuals;                                 // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHWNiagaraComponent*                    FXWall;                                            // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHWNiagaraComponent*                    ActivationBurst;                                   // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHWAudioComponent*                      Escape_Notification;                               // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHWAudioComponent*                      Fight_Start_Notification;                          // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        AudioComponents;                                   // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHWNiagaraComponent*                    Lamp_Ground;                                       // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHWNiagaraComponent*                    Lamp_Visuals;                                      // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHWStaticMeshComponent*                 HWStaticMesh;                                      // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      InteractionField;                                  // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHWAbilitySystemComponent*              HWAbilitySystem;                                   // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        ArenaFightTimer;                                   // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CurrentAladdin;                                    // 0x03A8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CurrentFightTarget;                                // 0x03B0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              FightHasEnded;                                     // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector                                AladdinLevelLocation;                              // 0x03C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           EndTheFightTimer;                                  // 0x03E0(0x0008)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          isEscapeActive;                                    // 0x03E8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E9[0x7];                                      // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 ActorWhoDied;                                      // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AHWTeamState*                           CurrentTeamState;                                  // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         FightDuration;                                     // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_404[0x4];                                      // 0x0404(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TriggerEscapeTimer;                                // 0x0408(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CurrentActorToReapplyTimer;                        // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CurrentFightTimerDebuffEffect;                     // 0x0418(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              FightHasStarted;                                   // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         FightIndex;                                        // 0x0430(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_434[0x4];                                      // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSTRUCT_AladdinArenaManager_ActorVariables> ActorInfoStructArray;                  // 0x0438(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FVector                                AladdinTargetFighterLampSpawnLocation;             // 0x0448(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AladdinLampSpawnLocation;                          // 0x0460(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Interact_Instigator;                               // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSTRUCT_AladdinArenaManager_ActorVariables CurrentTeleportTarget;                         // 0x0480(0x0088)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FSTRUCT_AladdinArenaManager_ActorVariables ActorInfoForVFX;                               // 0x0508(0x0088)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Attached_Character_Dissolve;                       // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NewVar;                                            // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NewVar_0;                                          // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class AHWDeployable*>                  DeployableInArena;                                 // 0x05A8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FHWActiveFamiliarInfo>          FamiliarsInArena;                                  // 0x05B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                        ArenaSize;                                         // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkeletalMeshActor*                     GenieSkeletalMesh;                                 // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           RemoveAllRemainingActorsTimer;                     // 0x05D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SendLampLocation;                                  // 0x05E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FailSafeRemovalTime;                               // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFailsafeTriggered;                                // 0x0600(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddNewActorToBeTracked(class AActor* ActorToAdd, const struct FVector& ArenaLocation, const struct FVector& ReturnLocation, const struct FRotator& LampRotation, const struct FRotator& ReturnRotation, const struct FVector& SendLampPosition);
	void ApplyDebuffThatTracksRemainingFightTime();
	void AreEitherFightersValid(bool* bBothValid);
	void BindDeathEventOfActor(class AActor* Actor);
	void BndEvt__BP_Aladdin_ArenaManagerSingleton_BP_InteractableComponent_K2Node_ComponentBoundEvent_2_OnInteractionEventDel__DelegateSignature(class UHWInteractableComponent* Interactable, class AActor* InteractInstigator);
	void CacheSendLampLocation(const struct FVector& SendLampLocation_0);
	void CleanupOldFightOnNewFightStart();
	void DeathOccured(const struct FDamageEventData& DeathEventData);
	void DisableEscape();
	void EnableEscape();
	void EndTheFight();
	void Escape_Audio();
	void ExecuteUbergraph_BP_Aladdin_ArenaManagerSingleton(int32 EntryPoint);
	void Fight_Start_Audio_and_Timer();
	void GetFamiliarInfo(class AActor* Actor, bool* Is_Familiar_, bool* Is_Possessed_, class AHWCharacter_Base** Character_Owner);
	void GetRemainingTime(double* NewParam);
	void IsActorInStructArray_(class AActor* ActorToCheck, bool Check_familiar_ownership_, bool* bFound, int32* Index_Found);
	void IsFightActive(bool* NewParam);
	void Multicast_SpawnVisualEffects(const struct FSTRUCT_AladdinArenaManager_ActorVariables& ActorInfoForVFX_0);
	void New_Fight_Visuals_and_Audio();
	void OnDeployableDestroyed(class AHWDeployable* DeployableDestroyed);
	void OnDeployableSpawned(class AHWDeployable* DeployableSpawned);
	void OnFamiliarDestroyed(const struct FHWActiveFamiliarInfo& FamiliarDestroyed);
	void OnFamiliarSpawned(const struct FHWActiveFamiliarInfo& FamiliarSpawned);
	void OnRep_ActorInfoStructArray();
	void OnRep_CurrentAladdin();
	void OnRep_CurrentFightTarget();
	void OnRep_CurrentTeleportTarget();
	void OnRep_FightIndex();
	void OnRep_isEscapeActive();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Remove_Actor_and_Clean_Them_Up_From_Death(class AActor* ActorBeingCleanedUp);
	void RemoveActorFromTracking(class AActor* ActorToRemove, bool Remove_familiar_owner);
	void RemoveAllRemainingActors();
	void StartAFight(class AActor* Aladdin_Who_Started_a_Fight, class AActor* Actor_Aladdin_Pulled_Into_Fight);
	void StartFightEndOrEscapeIfConditionsMet(class AActor* Actor_Triggering_Check);
	void StartFightTimers();
	void TeleportActor(class AActor* Actor_To_Teleport, bool Sending_);
	void Test_Character_Equality(class AActor* Char_A, class AActor* Char_B, bool* Equality);
	void TriggerEscape();
	void TriggerPlayerTeleportWarningFX(int32 IndexInStructForInfo, bool bSending);
	void UnbindDeathEventOfActor(class AActor* Actor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Aladdin_ArenaManagerSingleton_C">();
	}
	static class ABP_Aladdin_ArenaManagerSingleton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Aladdin_ArenaManagerSingleton_C>();
	}
};
static_assert(alignof(ABP_Aladdin_ArenaManagerSingleton_C) == 0x000008, "Wrong alignment on ABP_Aladdin_ArenaManagerSingleton_C");
static_assert(sizeof(ABP_Aladdin_ArenaManagerSingleton_C) == 0x000608, "Wrong size on ABP_Aladdin_ArenaManagerSingleton_C");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, UberGraphFrame) == 0x000318, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, HWDisplayInfo) == 0x000320, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::HWDisplayInfo' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, SFX_LampAppear) == 0x000328, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::SFX_LampAppear' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, BackgroundLoop) == 0x000330, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::BackgroundLoop' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, BP_InteractableComponent) == 0x000338, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::BP_InteractableComponent' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, ArenaFloorVisuals) == 0x000340, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::ArenaFloorVisuals' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, FXWall) == 0x000348, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::FXWall' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, ActivationBurst) == 0x000350, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::ActivationBurst' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, Escape_Notification) == 0x000358, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::Escape_Notification' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, Fight_Start_Notification) == 0x000360, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::Fight_Start_Notification' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, AudioComponents) == 0x000368, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::AudioComponents' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, Lamp_Ground) == 0x000370, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::Lamp_Ground' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, Lamp_Visuals) == 0x000378, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::Lamp_Visuals' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, HWStaticMesh) == 0x000380, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::HWStaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, InteractionField) == 0x000388, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::InteractionField' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, HWAbilitySystem) == 0x000390, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::HWAbilitySystem' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, DefaultSceneRoot) == 0x000398, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, ArenaFightTimer) == 0x0003A0, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::ArenaFightTimer' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, CurrentAladdin) == 0x0003A8, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::CurrentAladdin' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, CurrentFightTarget) == 0x0003B0, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::CurrentFightTarget' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, FightHasEnded) == 0x0003B8, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::FightHasEnded' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, AladdinLevelLocation) == 0x0003C8, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::AladdinLevelLocation' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, EndTheFightTimer) == 0x0003E0, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::EndTheFightTimer' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, isEscapeActive) == 0x0003E8, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::isEscapeActive' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, ActorWhoDied) == 0x0003F0, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::ActorWhoDied' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, CurrentTeamState) == 0x0003F8, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::CurrentTeamState' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, FightDuration) == 0x000400, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::FightDuration' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, TriggerEscapeTimer) == 0x000408, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::TriggerEscapeTimer' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, CurrentActorToReapplyTimer) == 0x000410, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::CurrentActorToReapplyTimer' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, CurrentFightTimerDebuffEffect) == 0x000418, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::CurrentFightTimerDebuffEffect' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, FightHasStarted) == 0x000420, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::FightHasStarted' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, FightIndex) == 0x000430, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::FightIndex' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, ActorInfoStructArray) == 0x000438, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::ActorInfoStructArray' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, AladdinTargetFighterLampSpawnLocation) == 0x000448, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::AladdinTargetFighterLampSpawnLocation' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, AladdinLampSpawnLocation) == 0x000460, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::AladdinLampSpawnLocation' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, Interact_Instigator) == 0x000478, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::Interact_Instigator' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, CurrentTeleportTarget) == 0x000480, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::CurrentTeleportTarget' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, ActorInfoForVFX) == 0x000508, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::ActorInfoForVFX' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, Attached_Character_Dissolve) == 0x000590, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::Attached_Character_Dissolve' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, NewVar) == 0x000598, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::NewVar' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, NewVar_0) == 0x0005A0, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, DeployableInArena) == 0x0005A8, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::DeployableInArena' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, FamiliarsInArena) == 0x0005B8, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::FamiliarsInArena' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, ArenaSize) == 0x0005C8, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::ArenaSize' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, GenieSkeletalMesh) == 0x0005D0, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::GenieSkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, RemoveAllRemainingActorsTimer) == 0x0005D8, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::RemoveAllRemainingActorsTimer' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, SendLampLocation) == 0x0005E0, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::SendLampLocation' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, FailSafeRemovalTime) == 0x0005F8, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::FailSafeRemovalTime' has a wrong offset!");
static_assert(offsetof(ABP_Aladdin_ArenaManagerSingleton_C, bFailsafeTriggered) == 0x000600, "Member 'ABP_Aladdin_ArenaManagerSingleton_C::bFailsafeTriggered' has a wrong offset!");

}

