﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Interactable_TowerPortals

#include "Basic.hpp"

#include "BP_Interactable_TowerPortals_classes.hpp"
#include "BP_Interactable_TowerPortals_parameters.hpp"


namespace SDK
{

// Function BP_Interactable_TowerPortals.BP_Interactable_TowerPortals_C.ApplyGameplayEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InteractableInstigator                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Interactable_TowerPortals_C::ApplyGameplayEffect(class AActor* InteractableInstigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_TowerPortals_C", "ApplyGameplayEffect");

	Params::BP_Interactable_TowerPortals_C_ApplyGameplayEffect Parms{};

	Parms.InteractableInstigator = InteractableInstigator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Interactable_TowerPortals.BP_Interactable_TowerPortals_C.BindToFactoryEvents
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Interactable_TowerPortals_C::BindToFactoryEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_TowerPortals_C", "BindToFactoryEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Interactable_TowerPortals.BP_Interactable_TowerPortals_C.BndEvt__BP_Interactable_PortalGate_BP_InteractableComponent_K2Node_ComponentBoundEvent_0_OnInteractionEventDel__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UHWInteractableComponent*         Interactable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           InteractInstigator_0                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Interactable_TowerPortals_C::BndEvt__BP_Interactable_PortalGate_BP_InteractableComponent_K2Node_ComponentBoundEvent_0_OnInteractionEventDel__DelegateSignature(class UHWInteractableComponent* Interactable, class AActor* InteractInstigator_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_TowerPortals_C", "BndEvt__BP_Interactable_PortalGate_BP_InteractableComponent_K2Node_ComponentBoundEvent_0_OnInteractionEventDel__DelegateSignature");

	Params::BP_Interactable_TowerPortals_C_BndEvt__BP_Interactable_PortalGate_BP_InteractableComponent_K2Node_ComponentBoundEvent_0_OnInteractionEventDel__DelegateSignature Parms{};

	Parms.Interactable = Interactable;
	Parms.InteractInstigator_0 = InteractInstigator_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Interactable_TowerPortals.BP_Interactable_TowerPortals_C.ExecuteUbergraph_BP_Interactable_TowerPortals
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Interactable_TowerPortals_C::ExecuteUbergraph_BP_Interactable_TowerPortals(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_TowerPortals_C", "ExecuteUbergraph_BP_Interactable_TowerPortals");

	Params::BP_Interactable_TowerPortals_C_ExecuteUbergraph_BP_Interactable_TowerPortals Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Interactable_TowerPortals.BP_Interactable_TowerPortals_C.Linked Factory Destroyed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHWBotFactory*                    BotFactory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Causer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Interactable_TowerPortals_C::Linked_Factory_Destroyed(class AHWBotFactory* BotFactory, class AActor* Causer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_TowerPortals_C", "Linked Factory Destroyed");

	Params::BP_Interactable_TowerPortals_C_Linked_Factory_Destroyed Parms{};

	Parms.BotFactory = BotFactory;
	Parms.Causer = Causer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Interactable_TowerPortals.BP_Interactable_TowerPortals_C.Mirror Teleport Rotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const struct FRotator&                  InRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator*                        OutRotation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Interactable_TowerPortals_C::Mirror_Teleport_Rotation(const struct FRotator& InRotation, struct FRotator* OutRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_TowerPortals_C", "Mirror Teleport Rotation");

	Params::BP_Interactable_TowerPortals_C_Mirror_Teleport_Rotation Parms{};

	Parms.InRotation = std::move(InRotation);

	UObject::ProcessEvent(Func, &Parms);

	if (OutRotation != nullptr)
		*OutRotation = std::move(Parms.OutRotation);
}


// Function BP_Interactable_TowerPortals.BP_Interactable_TowerPortals_C.OnRep_CanTeleport
// (BlueprintCallable, BlueprintEvent)

void ABP_Interactable_TowerPortals_C::OnRep_CanTeleport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_TowerPortals_C", "OnRep_CanTeleport");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Interactable_TowerPortals.BP_Interactable_TowerPortals_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Interactable_TowerPortals_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_TowerPortals_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Interactable_TowerPortals.BP_Interactable_TowerPortals_C.Remove Fountain Effects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Instigator_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Interactable_TowerPortals_C::Remove_Fountain_Effects(class AActor* Instigator_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_TowerPortals_C", "Remove Fountain Effects");

	Params::BP_Interactable_TowerPortals_C_Remove_Fountain_Effects Parms{};

	Parms.Instigator_0 = Instigator_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Interactable_TowerPortals.BP_Interactable_TowerPortals_C.RemoveGameplayEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InteractableInstigator                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Interactable_TowerPortals_C::RemoveGameplayEffect(class AActor* InteractableInstigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_TowerPortals_C", "RemoveGameplayEffect");

	Params::BP_Interactable_TowerPortals_C_RemoveGameplayEffect Parms{};

	Parms.InteractableInstigator = InteractableInstigator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Interactable_TowerPortals.BP_Interactable_TowerPortals_C.TweenPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Interactable_TowerPortals_C::TweenPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_TowerPortals_C", "TweenPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Interactable_TowerPortals.BP_Interactable_TowerPortals_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Interactable_TowerPortals_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_TowerPortals_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

