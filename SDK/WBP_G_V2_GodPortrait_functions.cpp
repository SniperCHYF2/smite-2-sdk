﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_GodPortrait

#include "Basic.hpp"

#include "WBP_G_V2_GodPortrait_classes.hpp"
#include "WBP_G_V2_GodPortrait_parameters.hpp"


namespace SDK
{

// Function WBP_G_V2_GodPortrait.WBP_G_V2_GodPortrait_C.BndEvt__WBP_G_V2_GodPortrait_HitTest_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_G_V2_GodPortrait_C::BndEvt__WBP_G_V2_GodPortrait_HitTest_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodPortrait_C", "BndEvt__WBP_G_V2_GodPortrait_HitTest_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_GodPortrait.WBP_G_V2_GodPortrait_C.BndEvt__WBP_G_V2_GodPortrait_HitTest_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_G_V2_GodPortrait_C::BndEvt__WBP_G_V2_GodPortrait_HitTest_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodPortrait_C", "BndEvt__WBP_G_V2_GodPortrait_HitTest_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_GodPortrait.WBP_G_V2_GodPortrait_C.BndEvt__WBP_G_V2_GodPortrait_HitTest_K2Node_ComponentBoundEvent_2_OnButtonRightClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_G_V2_GodPortrait_C::BndEvt__WBP_G_V2_GodPortrait_HitTest_K2Node_ComponentBoundEvent_2_OnButtonRightClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodPortrait_C", "BndEvt__WBP_G_V2_GodPortrait_HitTest_K2Node_ComponentBoundEvent_2_OnButtonRightClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_GodPortrait.WBP_G_V2_GodPortrait_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)

void UWBP_G_V2_GodPortrait_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodPortrait_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_GodPortrait.WBP_G_V2_GodPortrait_C.CharacterItemChanged
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class UHWCharacterItem*           NewCharacterItem                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GodPortrait_C::CharacterItemChanged(const class UHWCharacterItem* NewCharacterItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodPortrait_C", "CharacterItemChanged");

	Params::WBP_G_V2_GodPortrait_C_CharacterItemChanged Parms{};

	Parms.NewCharacterItem = NewCharacterItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GodPortrait.WBP_G_V2_GodPortrait_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_G_V2_GodPortrait_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodPortrait_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_GodPortrait.WBP_G_V2_GodPortrait_C.DisplayCharacterRespawnState
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsAlive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RemainingRespawnTime                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GodPortrait_C::DisplayCharacterRespawnState(bool bIsAlive, float RemainingRespawnTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodPortrait_C", "DisplayCharacterRespawnState");

	Params::WBP_G_V2_GodPortrait_C_DisplayCharacterRespawnState Parms{};

	Parms.bIsAlive = bIsAlive;
	Parms.RemainingRespawnTime = RemainingRespawnTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GodPortrait.WBP_G_V2_GodPortrait_C.Do Custom Navigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_G_V2_GodPortrait_C::Do_Custom_Navigation(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodPortrait_C", "Do Custom Navigation");

	Params::WBP_G_V2_GodPortrait_C_Do_Custom_Navigation Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_G_V2_GodPortrait.WBP_G_V2_GodPortrait_C.ExecuteUbergraph_WBP_G_V2_GodPortrait
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GodPortrait_C::ExecuteUbergraph_WBP_G_V2_GodPortrait(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodPortrait_C", "ExecuteUbergraph_WBP_G_V2_GodPortrait");

	Params::WBP_G_V2_GodPortrait_C_ExecuteUbergraph_WBP_G_V2_GodPortrait Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GodPortrait.WBP_G_V2_GodPortrait_C.GetWidgetName
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText                       ReturnValue                                            (ConstParm, Parm, OutParm, ReturnParm)

const class FText UWBP_G_V2_GodPortrait_C::GetWidgetName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodPortrait_C", "GetWidgetName");

	Params::WBP_G_V2_GodPortrait_C_GetWidgetName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_G_V2_GodPortrait.WBP_G_V2_GodPortrait_C.UpdateCharacterRespawnTime
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   RemainingRespawnTime                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GodPortrait_C::UpdateCharacterRespawnTime(float RemainingRespawnTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodPortrait_C", "UpdateCharacterRespawnTime");

	Params::WBP_G_V2_GodPortrait_C_UpdateCharacterRespawnTime Parms{};

	Parms.RemainingRespawnTime = RemainingRespawnTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GodPortrait.WBP_G_V2_GodPortrait_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_G_V2_GodPortrait_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodPortrait_C", "BP_GetDesiredFocusTarget");

	Params::WBP_G_V2_GodPortrait_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_G_V2_GodPortrait.WBP_G_V2_GodPortrait_C.GetAttributeWidgets
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UHWGameplayAttributeWidget*>ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UHWGameplayAttributeWidget*> UWBP_G_V2_GodPortrait_C::GetAttributeWidgets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodPortrait_C", "GetAttributeWidgets");

	Params::WBP_G_V2_GodPortrait_C_GetAttributeWidgets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_G_V2_GodPortrait.WBP_G_V2_GodPortrait_C.GetCharacterWidgets
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UHWCharacterWidget*>       ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UHWCharacterWidget*> UWBP_G_V2_GodPortrait_C::GetCharacterWidgets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodPortrait_C", "GetCharacterWidgets");

	Params::WBP_G_V2_GodPortrait_C_GetCharacterWidgets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

