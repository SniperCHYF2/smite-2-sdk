﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBP_Items_LernaeanBow

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PBP_Items_LernaeanBow.PBP_Items_LernaeanBow_C
// 0x0020 (0x06B0 - 0x0690)
class APBP_Items_LernaeanBow_C final : public AHWProjectile
{
public:
	class UHWAudioComponent*                      HWAudio;                                           // 0x0690(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHWNiagaraComponent*                    HWNiagara;                                         // 0x0698(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle              DamageEffectSpec;                                  // 0x06A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnProjectileHitTarget(const struct FGameplayAbilityTargetDataHandle& TargetData);
	void UpdateShieldHealth(TArray<class UHWShieldInstance*>& ShieldInstancesArray, double TrackedHealth);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBP_Items_LernaeanBow_C">();
	}
	static class APBP_Items_LernaeanBow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBP_Items_LernaeanBow_C>();
	}
};
static_assert(alignof(APBP_Items_LernaeanBow_C) == 0x000010, "Wrong alignment on APBP_Items_LernaeanBow_C");
static_assert(sizeof(APBP_Items_LernaeanBow_C) == 0x0006B0, "Wrong size on APBP_Items_LernaeanBow_C");
static_assert(offsetof(APBP_Items_LernaeanBow_C, HWAudio) == 0x000690, "Member 'APBP_Items_LernaeanBow_C::HWAudio' has a wrong offset!");
static_assert(offsetof(APBP_Items_LernaeanBow_C, HWNiagara) == 0x000698, "Member 'APBP_Items_LernaeanBow_C::HWNiagara' has a wrong offset!");
static_assert(offsetof(APBP_Items_LernaeanBow_C, DamageEffectSpec) == 0x0006A0, "Member 'APBP_Items_LernaeanBow_C::DamageEffectSpec' has a wrong offset!");

}

