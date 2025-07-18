﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_SurrenderPip

#include "Basic.hpp"

#include "WBP_G_V2_SurrenderPip_classes.hpp"
#include "WBP_G_V2_SurrenderPip_parameters.hpp"


namespace SDK
{

// Function WBP_G_V2_SurrenderPip.WBP_G_V2_SurrenderPip_C.DisplayVoteState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const EHWVoteState                      VoteState                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_SurrenderPip_C::DisplayVoteState(const EHWVoteState VoteState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_SurrenderPip_C", "DisplayVoteState");

	Params::WBP_G_V2_SurrenderPip_C_DisplayVoteState Parms{};

	Parms.VoteState = VoteState;

	UObject::ProcessEvent(Func, &Parms);
}

}

