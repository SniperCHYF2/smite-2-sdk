﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_GodAbilityLevelBar

#include "Basic.hpp"

#include "WBP_G_V2_GodAbilityLevelBar_classes.hpp"
#include "WBP_G_V2_GodAbilityLevelBar_parameters.hpp"


namespace SDK
{

// Function WBP_G_V2_GodAbilityLevelBar.WBP_G_V2_GodAbilityLevelBar_C.ExecuteUbergraph_WBP_G_V2_GodAbilityLevelBar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GodAbilityLevelBar_C::ExecuteUbergraph_WBP_G_V2_GodAbilityLevelBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodAbilityLevelBar_C", "ExecuteUbergraph_WBP_G_V2_GodAbilityLevelBar");

	Params::WBP_G_V2_GodAbilityLevelBar_C_ExecuteUbergraph_WBP_G_V2_GodAbilityLevelBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GodAbilityLevelBar.WBP_G_V2_GodAbilityLevelBar_C.LevelUpdated
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_G_V2_GodAbilityLevelBar_C::LevelUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodAbilityLevelBar_C", "LevelUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_GodAbilityLevelBar.WBP_G_V2_GodAbilityLevelBar_C.PipWidgetAdded
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHWImage*                         Pip                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GodAbilityLevelBar_C::PipWidgetAdded(class UHWImage* Pip, int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodAbilityLevelBar_C", "PipWidgetAdded");

	Params::WBP_G_V2_GodAbilityLevelBar_C_PipWidgetAdded Parms{};

	Parms.Pip = Pip;
	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GodAbilityLevelBar.WBP_G_V2_GodAbilityLevelBar_C.PipWidgetRemoved
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHWImage*                         Pip                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GodAbilityLevelBar_C::PipWidgetRemoved(class UHWImage* Pip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodAbilityLevelBar_C", "PipWidgetRemoved");

	Params::WBP_G_V2_GodAbilityLevelBar_C_PipWidgetRemoved Parms{};

	Parms.Pip = Pip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GodAbilityLevelBar.WBP_G_V2_GodAbilityLevelBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GodAbilityLevelBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodAbilityLevelBar_C", "PreConstruct");

	Params::WBP_G_V2_GodAbilityLevelBar_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

