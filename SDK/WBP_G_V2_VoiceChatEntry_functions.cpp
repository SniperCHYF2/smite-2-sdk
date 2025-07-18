﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_VoiceChatEntry

#include "Basic.hpp"

#include "WBP_G_V2_VoiceChatEntry_classes.hpp"
#include "WBP_G_V2_VoiceChatEntry_parameters.hpp"


namespace SDK
{

// Function WBP_G_V2_VoiceChatEntry.WBP_G_V2_VoiceChatEntry_C.ClearTalkingPlayerDisplay
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_G_V2_VoiceChatEntry_C::ClearTalkingPlayerDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_VoiceChatEntry_C", "ClearTalkingPlayerDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_VoiceChatEntry.WBP_G_V2_VoiceChatEntry_C.ExecuteUbergraph_WBP_G_V2_VoiceChatEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_VoiceChatEntry_C::ExecuteUbergraph_WBP_G_V2_VoiceChatEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_VoiceChatEntry_C", "ExecuteUbergraph_WBP_G_V2_VoiceChatEntry");

	Params::WBP_G_V2_VoiceChatEntry_C_ExecuteUbergraph_WBP_G_V2_VoiceChatEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_VoiceChatEntry.WBP_G_V2_VoiceChatEntry_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_G_V2_VoiceChatEntry_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_VoiceChatEntry_C", "InitializeWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_VoiceChatEntry.WBP_G_V2_VoiceChatEntry_C.OnFadeOutAnimFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_G_V2_VoiceChatEntry_C::OnFadeOutAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_VoiceChatEntry_C", "OnFadeOutAnimFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_VoiceChatEntry.WBP_G_V2_VoiceChatEntry_C.UpdateTalkingPlayerName
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_PlayerInfo*                   PlayerInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_VoiceChatEntry_C::UpdateTalkingPlayerName(class URH_PlayerInfo* PlayerInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_VoiceChatEntry_C", "UpdateTalkingPlayerName");

	Params::WBP_G_V2_VoiceChatEntry_C_UpdateTalkingPlayerName Parms{};

	Parms.PlayerInfo = PlayerInfo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_VoiceChatEntry.WBP_G_V2_VoiceChatEntry_C.UpdateTalkingPlayerPlatformIcon
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERHPlatformDisplayType                  PlatformDisplayType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_VoiceChatEntry_C::UpdateTalkingPlayerPlatformIcon(ERHPlatformDisplayType PlatformDisplayType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_VoiceChatEntry_C", "UpdateTalkingPlayerPlatformIcon");

	Params::WBP_G_V2_VoiceChatEntry_C_UpdateTalkingPlayerPlatformIcon Parms{};

	Parms.PlatformDisplayType = PlatformDisplayType;

	UObject::ProcessEvent(Func, &Parms);
}

}

