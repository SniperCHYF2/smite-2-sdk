﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_DoomOrb

#include "Basic.hpp"

#include "GA_Items_DoomOrb_classes.hpp"
#include "GA_Items_DoomOrb_parameters.hpp"


namespace SDK
{

// Function GA_Items_DoomOrb.GA_Items_DoomOrb_C.ExecuteUbergraph_GA_Items_DoomOrb
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Items_DoomOrb_C::ExecuteUbergraph_GA_Items_DoomOrb(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_DoomOrb_C", "ExecuteUbergraph_GA_Items_DoomOrb");

	Params::GA_Items_DoomOrb_C_ExecuteUbergraph_GA_Items_DoomOrb Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Items_DoomOrb.GA_Items_DoomOrb_C.FixStackCount
// (BlueprintCallable, BlueprintEvent)

void UGA_Items_DoomOrb_C::FixStackCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_DoomOrb_C", "FixStackCount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Items_DoomOrb.GA_Items_DoomOrb_C.Provide Assist Buff Minion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHWTeamState*                     Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHWPlayerState*                   TeamMember                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FAssistEventData&          AssistEventData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UGA_Items_DoomOrb_C::Provide_Assist_Buff_Minion(class AHWTeamState* Team, class AHWPlayerState* TeamMember, const struct FAssistEventData& AssistEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_DoomOrb_C", "Provide Assist Buff Minion");

	Params::GA_Items_DoomOrb_C_Provide_Assist_Buff_Minion Parms{};

	Parms.Team = Team;
	Parms.TeamMember = TeamMember;
	Parms.AssistEventData = std::move(AssistEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Items_DoomOrb.GA_Items_DoomOrb_C.Provide Kill Buff Minion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHWTeamState*                     Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHWPlayerState*                   TeamMember                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FDamageEventData&          KillEventData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Items_DoomOrb_C::Provide_Kill_Buff_Minion(class AHWTeamState* Team, class AHWPlayerState* TeamMember, const struct FDamageEventData& KillEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_DoomOrb_C", "Provide Kill Buff Minion");

	Params::GA_Items_DoomOrb_C_Provide_Kill_Buff_Minion Parms{};

	Parms.Team = Team;
	Parms.TeamMember = TeamMember;
	Parms.KillEventData = std::move(KillEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Items_DoomOrb.GA_Items_DoomOrb_C.ProvideAssistBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHWTeamState*                     Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHWPlayerState*                   TeamMember                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FAssistEventData&          AssistEventData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UGA_Items_DoomOrb_C::ProvideAssistBuff(class AHWTeamState* Team, class AHWPlayerState* TeamMember, const struct FAssistEventData& AssistEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_DoomOrb_C", "ProvideAssistBuff");

	Params::GA_Items_DoomOrb_C_ProvideAssistBuff Parms{};

	Parms.Team = Team;
	Parms.TeamMember = TeamMember;
	Parms.AssistEventData = std::move(AssistEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Items_DoomOrb.GA_Items_DoomOrb_C.ProvideKillBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHWTeamState*                     Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHWPlayerState*                   TeamMember                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FDamageEventData&          KillEventData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Items_DoomOrb_C::ProvideKillBuff(class AHWTeamState* Team, class AHWPlayerState* TeamMember, const struct FDamageEventData& KillEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_DoomOrb_C", "ProvideKillBuff");

	Params::GA_Items_DoomOrb_C_ProvideKillBuff Parms{};

	Parms.Team = Team;
	Parms.TeamMember = TeamMember;
	Parms.KillEventData = std::move(KillEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Items_DoomOrb.GA_Items_DoomOrb_C.SetupListeners
// (Event, Protected, BlueprintEvent)

void UGA_Items_DoomOrb_C::SetupListeners()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_DoomOrb_C", "SetupListeners");

	UObject::ProcessEvent(Func, nullptr);
}

}

