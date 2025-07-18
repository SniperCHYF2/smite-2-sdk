﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_GameScoreDisplay

#include "Basic.hpp"

#include "WBP_G_V2_GameScoreDisplay_classes.hpp"
#include "WBP_G_V2_GameScoreDisplay_parameters.hpp"


namespace SDK
{

// Function WBP_G_V2_GameScoreDisplay.WBP_G_V2_GameScoreDisplay_C.BndEvt__WBP_G_V2_ConquestScoreDisplay_HWButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_G_V2_GameScoreDisplay_C::BndEvt__WBP_G_V2_ConquestScoreDisplay_HWButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GameScoreDisplay_C", "BndEvt__WBP_G_V2_ConquestScoreDisplay_HWButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_GameScoreDisplay.WBP_G_V2_GameScoreDisplay_C.BndEvt__WBP_G_V2_ConquestScoreDisplay_HWButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_G_V2_GameScoreDisplay_C::BndEvt__WBP_G_V2_ConquestScoreDisplay_HWButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GameScoreDisplay_C", "BndEvt__WBP_G_V2_ConquestScoreDisplay_HWButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_GameScoreDisplay.WBP_G_V2_GameScoreDisplay_C.BndEvt__WBP_G_V2_ConquestScoreDisplay_PlayerTeamObjectiveButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_G_V2_GameScoreDisplay_C::BndEvt__WBP_G_V2_ConquestScoreDisplay_PlayerTeamObjectiveButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GameScoreDisplay_C", "BndEvt__WBP_G_V2_ConquestScoreDisplay_PlayerTeamObjectiveButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_GameScoreDisplay.WBP_G_V2_GameScoreDisplay_C.BndEvt__WBP_G_V2_ConquestScoreDisplay_PlayerTeamObjectiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_G_V2_GameScoreDisplay_C::BndEvt__WBP_G_V2_ConquestScoreDisplay_PlayerTeamObjectiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GameScoreDisplay_C", "BndEvt__WBP_G_V2_ConquestScoreDisplay_PlayerTeamObjectiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_GameScoreDisplay.WBP_G_V2_GameScoreDisplay_C.DisplayTeamGold
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGenericTeamId&            TeamId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                                   Gold                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GameScoreDisplay_C::DisplayTeamGold(const struct FGenericTeamId& TeamId, int32 Gold)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GameScoreDisplay_C", "DisplayTeamGold");

	Params::WBP_G_V2_GameScoreDisplay_C_DisplayTeamGold Parms{};

	Parms.TeamId = std::move(TeamId);
	Parms.Gold = Gold;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GameScoreDisplay.WBP_G_V2_GameScoreDisplay_C.DisplayTeamKills
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGenericTeamId&            TeamId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                                   Kills                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GameScoreDisplay_C::DisplayTeamKills(const struct FGenericTeamId& TeamId, int32 Kills)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GameScoreDisplay_C", "DisplayTeamKills");

	Params::WBP_G_V2_GameScoreDisplay_C_DisplayTeamKills Parms{};

	Parms.TeamId = std::move(TeamId);
	Parms.Kills = Kills;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GameScoreDisplay.WBP_G_V2_GameScoreDisplay_C.ExecuteUbergraph_WBP_G_V2_GameScoreDisplay
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GameScoreDisplay_C::ExecuteUbergraph_WBP_G_V2_GameScoreDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GameScoreDisplay_C", "ExecuteUbergraph_WBP_G_V2_GameScoreDisplay");

	Params::WBP_G_V2_GameScoreDisplay_C_ExecuteUbergraph_WBP_G_V2_GameScoreDisplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GameScoreDisplay.WBP_G_V2_GameScoreDisplay_C.GamePhaseChanged
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayTag&              NewPhaseTag                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GameScoreDisplay_C::GamePhaseChanged(const struct FGameplayTag& NewPhaseTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GameScoreDisplay_C", "GamePhaseChanged");

	Params::WBP_G_V2_GameScoreDisplay_C_GamePhaseChanged Parms{};

	Parms.NewPhaseTag = std::move(NewPhaseTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GameScoreDisplay.WBP_G_V2_GameScoreDisplay_C.GetWidgetName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText                       ReturnValue                                            (ConstParm, Parm, OutParm, ReturnParm)

const class FText UWBP_G_V2_GameScoreDisplay_C::GetWidgetName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GameScoreDisplay_C", "GetWidgetName");

	Params::WBP_G_V2_GameScoreDisplay_C_GetWidgetName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_G_V2_GameScoreDisplay.WBP_G_V2_GameScoreDisplay_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_G_V2_GameScoreDisplay_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GameScoreDisplay_C", "InitializeWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_GameScoreDisplay.WBP_G_V2_GameScoreDisplay_C.PopulateObjectiveTips
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_G_V2_GameScoreDisplay_C::PopulateObjectiveTips()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GameScoreDisplay_C", "PopulateObjectiveTips");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_GameScoreDisplay.WBP_G_V2_GameScoreDisplay_C.UpdateGameTime
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_G_V2_GameScoreDisplay_C::UpdateGameTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GameScoreDisplay_C", "UpdateGameTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_GameScoreDisplay.WBP_G_V2_GameScoreDisplay_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_G_V2_GameScoreDisplay_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GameScoreDisplay_C", "BP_GetDesiredFocusTarget");

	Params::WBP_G_V2_GameScoreDisplay_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

