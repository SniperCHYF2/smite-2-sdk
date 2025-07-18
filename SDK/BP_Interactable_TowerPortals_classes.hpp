﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Interactable_TowerPortals

#include "Basic.hpp"

#include "BP_Interactable_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Interactable_TowerPortals.BP_Interactable_TowerPortals_C
// 0x00D0 (0x0398 - 0x02C8)
class ABP_Interactable_TowerPortals_C final : public ABP_Interactable_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Interactable_TowerPortals_C;     // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWAIPlayComponent*                     HWAIPlay;                                          // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHWAudioComponent*                      SFXAmbience;                                       // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Tier2Spline;                                       // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Tier1Spline;                                       // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Splines;                                           // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHWNiagaraComponent*                    HWNiagara;                                         // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        arrow;                                             // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHWDisplayInfoComponent*                HWDisplayInfo;                                     // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        PadRadius;                                         // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class ABP_BotFactory_C>        LinkedTier1Factory;                                // 0x0318(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          ShouldApplyCooldown;                               // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanTeleport;                                       // 0x0341(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_342[0x6];                                      // 0x0342(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class ABP_BotFactory_C>        LinkedTier2Factory;                                // 0x0348(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class AActor*                                 TargetTeleportActor;                               // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         OwningTeam;                                        // 0x0378(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           TeleportTag;                                       // 0x037C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_384[0x4];                                      // 0x0384(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 InteractInstigator;                                // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTier1Destroyed;                                  // 0x0390(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyGameplayEffect(class AActor* InteractableInstigator);
	void BindToFactoryEvents();
	void BndEvt__BP_Interactable_PortalGate_BP_InteractableComponent_K2Node_ComponentBoundEvent_0_OnInteractionEventDel__DelegateSignature(class UHWInteractableComponent* Interactable, class AActor* InteractInstigator_0);
	void ExecuteUbergraph_BP_Interactable_TowerPortals(int32 EntryPoint);
	void Linked_Factory_Destroyed(class AHWBotFactory* BotFactory, class AActor* Causer);
	void Mirror_Teleport_Rotation(const struct FRotator& InRotation, struct FRotator* OutRotation);
	void OnRep_CanTeleport();
	void ReceiveBeginPlay();
	void Remove_Fountain_Effects(class AActor* Instigator_0);
	void RemoveGameplayEffect(class AActor* InteractableInstigator);
	void TweenPlayer();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Interactable_TowerPortals_C">();
	}
	static class ABP_Interactable_TowerPortals_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Interactable_TowerPortals_C>();
	}
};
static_assert(alignof(ABP_Interactable_TowerPortals_C) == 0x000008, "Wrong alignment on ABP_Interactable_TowerPortals_C");
static_assert(sizeof(ABP_Interactable_TowerPortals_C) == 0x000398, "Wrong size on ABP_Interactable_TowerPortals_C");
static_assert(offsetof(ABP_Interactable_TowerPortals_C, UberGraphFrame_BP_Interactable_TowerPortals_C) == 0x0002C8, "Member 'ABP_Interactable_TowerPortals_C::UberGraphFrame_BP_Interactable_TowerPortals_C' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TowerPortals_C, HWAIPlay) == 0x0002D0, "Member 'ABP_Interactable_TowerPortals_C::HWAIPlay' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TowerPortals_C, SFXAmbience) == 0x0002D8, "Member 'ABP_Interactable_TowerPortals_C::SFXAmbience' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TowerPortals_C, Tier2Spline) == 0x0002E0, "Member 'ABP_Interactable_TowerPortals_C::Tier2Spline' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TowerPortals_C, Tier1Spline) == 0x0002E8, "Member 'ABP_Interactable_TowerPortals_C::Tier1Spline' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TowerPortals_C, Splines) == 0x0002F0, "Member 'ABP_Interactable_TowerPortals_C::Splines' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TowerPortals_C, HWNiagara) == 0x0002F8, "Member 'ABP_Interactable_TowerPortals_C::HWNiagara' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TowerPortals_C, arrow) == 0x000300, "Member 'ABP_Interactable_TowerPortals_C::arrow' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TowerPortals_C, HWDisplayInfo) == 0x000308, "Member 'ABP_Interactable_TowerPortals_C::HWDisplayInfo' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TowerPortals_C, PadRadius) == 0x000310, "Member 'ABP_Interactable_TowerPortals_C::PadRadius' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TowerPortals_C, LinkedTier1Factory) == 0x000318, "Member 'ABP_Interactable_TowerPortals_C::LinkedTier1Factory' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TowerPortals_C, ShouldApplyCooldown) == 0x000340, "Member 'ABP_Interactable_TowerPortals_C::ShouldApplyCooldown' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TowerPortals_C, CanTeleport) == 0x000341, "Member 'ABP_Interactable_TowerPortals_C::CanTeleport' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TowerPortals_C, LinkedTier2Factory) == 0x000348, "Member 'ABP_Interactable_TowerPortals_C::LinkedTier2Factory' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TowerPortals_C, TargetTeleportActor) == 0x000370, "Member 'ABP_Interactable_TowerPortals_C::TargetTeleportActor' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TowerPortals_C, OwningTeam) == 0x000378, "Member 'ABP_Interactable_TowerPortals_C::OwningTeam' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TowerPortals_C, TeleportTag) == 0x00037C, "Member 'ABP_Interactable_TowerPortals_C::TeleportTag' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TowerPortals_C, InteractInstigator) == 0x000388, "Member 'ABP_Interactable_TowerPortals_C::InteractInstigator' has a wrong offset!");
static_assert(offsetof(ABP_Interactable_TowerPortals_C, IsTier1Destroyed) == 0x000390, "Member 'ABP_Interactable_TowerPortals_C::IsTier1Destroyed' has a wrong offset!");

}

