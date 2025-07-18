﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_ChatEntry

#include "Basic.hpp"

#include "WBP_G_V2_ChatEntry_classes.hpp"
#include "WBP_G_V2_ChatEntry_parameters.hpp"


namespace SDK
{

// Function WBP_G_V2_ChatEntry.WBP_G_V2_ChatEntry_C.ExecuteUbergraph_WBP_G_V2_ChatEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_ChatEntry_C::ExecuteUbergraph_WBP_G_V2_ChatEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_ChatEntry_C", "ExecuteUbergraph_WBP_G_V2_ChatEntry");

	Params::WBP_G_V2_ChatEntry_C_ExecuteUbergraph_WBP_G_V2_ChatEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_ChatEntry.WBP_G_V2_ChatEntry_C.SetChatData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FHWChatEntry&              InChatData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_G_V2_ChatEntry_C::SetChatData(const struct FHWChatEntry& InChatData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_ChatEntry_C", "SetChatData");

	Params::WBP_G_V2_ChatEntry_C_SetChatData Parms{};

	Parms.InChatData = std::move(InChatData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_ChatEntry.WBP_G_V2_ChatEntry_C.SetPlayerNameColorTag
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FGameplayTag&              PlayerNameColorTag                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_ChatEntry_C::SetPlayerNameColorTag(const struct FGameplayTag& PlayerNameColorTag) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_ChatEntry_C", "SetPlayerNameColorTag");

	Params::WBP_G_V2_ChatEntry_C_SetPlayerNameColorTag Parms{};

	Parms.PlayerNameColorTag = std::move(PlayerNameColorTag);

	UObject::ProcessEvent(Func, &Parms);
}

}

