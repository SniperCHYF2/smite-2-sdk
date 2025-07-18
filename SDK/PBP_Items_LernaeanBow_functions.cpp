﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBP_Items_LernaeanBow

#include "Basic.hpp"

#include "PBP_Items_LernaeanBow_classes.hpp"
#include "PBP_Items_LernaeanBow_parameters.hpp"


namespace SDK
{

// Function PBP_Items_LernaeanBow.PBP_Items_LernaeanBow_C.OnProjectileHitTarget
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APBP_Items_LernaeanBow_C::OnProjectileHitTarget(const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PBP_Items_LernaeanBow_C", "OnProjectileHitTarget");

	Params::PBP_Items_LernaeanBow_C_OnProjectileHitTarget Parms{};

	Parms.TargetData = std::move(TargetData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PBP_Items_LernaeanBow.PBP_Items_LernaeanBow_C.UpdateShieldHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UHWShieldInstance*>&       ShieldInstancesArray                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// double                                  TrackedHealth                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APBP_Items_LernaeanBow_C::UpdateShieldHealth(TArray<class UHWShieldInstance*>& ShieldInstancesArray, double TrackedHealth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PBP_Items_LernaeanBow_C", "UpdateShieldHealth");

	Params::PBP_Items_LernaeanBow_C_UpdateShieldHealth Parms{};

	Parms.ShieldInstancesArray = std::move(ShieldInstancesArray);
	Parms.TrackedHealth = TrackedHealth;

	UObject::ProcessEvent(Func, &Parms);

	ShieldInstancesArray = std::move(Parms.ShieldInstancesArray);
}

}

