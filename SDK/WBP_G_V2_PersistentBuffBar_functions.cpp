﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_PersistentBuffBar

#include "Basic.hpp"

#include "WBP_G_V2_PersistentBuffBar_classes.hpp"
#include "WBP_G_V2_PersistentBuffBar_parameters.hpp"


namespace SDK
{

// Function WBP_G_V2_PersistentBuffBar.WBP_G_V2_PersistentBuffBar_C.BndEvt__WBP_G_V2_PersistentBuffBar_BackgroundArea_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_G_V2_PersistentBuffBar_C::BndEvt__WBP_G_V2_PersistentBuffBar_BackgroundArea_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_PersistentBuffBar_C", "BndEvt__WBP_G_V2_PersistentBuffBar_BackgroundArea_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_PersistentBuffBar.WBP_G_V2_PersistentBuffBar_C.BndEvt__WBP_G_V2_PersistentBuffBar_BackgroundArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_G_V2_PersistentBuffBar_C::BndEvt__WBP_G_V2_PersistentBuffBar_BackgroundArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_PersistentBuffBar_C", "BndEvt__WBP_G_V2_PersistentBuffBar_BackgroundArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_PersistentBuffBar.WBP_G_V2_PersistentBuffBar_C.ExecuteUbergraph_WBP_G_V2_PersistentBuffBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_PersistentBuffBar_C::ExecuteUbergraph_WBP_G_V2_PersistentBuffBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_PersistentBuffBar_C", "ExecuteUbergraph_WBP_G_V2_PersistentBuffBar");

	Params::WBP_G_V2_PersistentBuffBar_C_ExecuteUbergraph_WBP_G_V2_PersistentBuffBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_PersistentBuffBar.WBP_G_V2_PersistentBuffBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_PersistentBuffBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_PersistentBuffBar_C", "PreConstruct");

	Params::WBP_G_V2_PersistentBuffBar_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_PersistentBuffBar.WBP_G_V2_PersistentBuffBar_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_G_V2_PersistentBuffBar_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_PersistentBuffBar_C", "BP_GetDesiredFocusTarget");

	Params::WBP_G_V2_PersistentBuffBar_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

