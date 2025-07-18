﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_SeasonRankLeaderboardRenderer

#include "Basic.hpp"

#include "WBP_C_SeasonRankLeaderboardRenderer_classes.hpp"
#include "WBP_C_SeasonRankLeaderboardRenderer_parameters.hpp"


namespace SDK
{

// Function WBP_C_SeasonRankLeaderboardRenderer.WBP_C_SeasonRankLeaderboardRenderer_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UWBP_C_SeasonRankLeaderboardRenderer_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_SeasonRankLeaderboardRenderer_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_C_SeasonRankLeaderboardRenderer.WBP_C_SeasonRankLeaderboardRenderer_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_C_SeasonRankLeaderboardRenderer_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_SeasonRankLeaderboardRenderer_C", "BP_OnItemExpansionChanged");

	Params::WBP_C_SeasonRankLeaderboardRenderer_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_C_SeasonRankLeaderboardRenderer.WBP_C_SeasonRankLeaderboardRenderer_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_C_SeasonRankLeaderboardRenderer_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_SeasonRankLeaderboardRenderer_C", "BP_OnItemSelectionChanged");

	Params::WBP_C_SeasonRankLeaderboardRenderer_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_C_SeasonRankLeaderboardRenderer.WBP_C_SeasonRankLeaderboardRenderer_C.ExecuteUbergraph_WBP_C_SeasonRankLeaderboardRenderer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_C_SeasonRankLeaderboardRenderer_C::ExecuteUbergraph_WBP_C_SeasonRankLeaderboardRenderer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_SeasonRankLeaderboardRenderer_C", "ExecuteUbergraph_WBP_C_SeasonRankLeaderboardRenderer");

	Params::WBP_C_SeasonRankLeaderboardRenderer_C_ExecuteUbergraph_WBP_C_SeasonRankLeaderboardRenderer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_C_SeasonRankLeaderboardRenderer.WBP_C_SeasonRankLeaderboardRenderer_C.HandlePlayerNameUpdated
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_C_SeasonRankLeaderboardRenderer_C::HandlePlayerNameUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_SeasonRankLeaderboardRenderer_C", "HandlePlayerNameUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_C_SeasonRankLeaderboardRenderer.WBP_C_SeasonRankLeaderboardRenderer_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_C_SeasonRankLeaderboardRenderer_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_SeasonRankLeaderboardRenderer_C", "InitializeWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_C_SeasonRankLeaderboardRenderer.WBP_C_SeasonRankLeaderboardRenderer_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_C_SeasonRankLeaderboardRenderer_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_SeasonRankLeaderboardRenderer_C", "OnListItemObjectSet");

	Params::WBP_C_SeasonRankLeaderboardRenderer_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_C_SeasonRankLeaderboardRenderer.WBP_C_SeasonRankLeaderboardRenderer_C.PlayClickSFX
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_C_SeasonRankLeaderboardRenderer_C::PlayClickSFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_SeasonRankLeaderboardRenderer_C", "PlayClickSFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_C_SeasonRankLeaderboardRenderer.WBP_C_SeasonRankLeaderboardRenderer_C.UpdateEntryData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_C_SeasonRankLeaderboardRenderer_C::UpdateEntryData(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_SeasonRankLeaderboardRenderer_C", "UpdateEntryData");

	Params::WBP_C_SeasonRankLeaderboardRenderer_C_UpdateEntryData Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);
}

}

