﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_GodOmiBar_Sections

#include "Basic.hpp"

#include "WBP_G_V2_GodOmiBar_Sections_classes.hpp"
#include "WBP_G_V2_GodOmiBar_Sections_parameters.hpp"


namespace SDK
{

// Function WBP_G_V2_GodOmiBar_Sections.WBP_G_V2_GodOmiBar_Sections_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_G_V2_GodOmiBar_Sections_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodOmiBar_Sections_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_GodOmiBar_Sections.WBP_G_V2_GodOmiBar_Sections_C.ExecuteUbergraph_WBP_G_V2_GodOmiBar_Sections
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GodOmiBar_Sections_C::ExecuteUbergraph_WBP_G_V2_GodOmiBar_Sections(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodOmiBar_Sections_C", "ExecuteUbergraph_WBP_G_V2_GodOmiBar_Sections");

	Params::WBP_G_V2_GodOmiBar_Sections_C_ExecuteUbergraph_WBP_G_V2_GodOmiBar_Sections Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GodOmiBar_Sections.WBP_G_V2_GodOmiBar_Sections_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GodOmiBar_Sections_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodOmiBar_Sections_C", "Tick");

	Params::WBP_G_V2_GodOmiBar_Sections_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GodOmiBar_Sections.WBP_G_V2_GodOmiBar_Sections_C.UpdateSegmentCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SegmentCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GodOmiBar_Sections_C::UpdateSegmentCount(int32 SegmentCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodOmiBar_Sections_C", "UpdateSegmentCount");

	Params::WBP_G_V2_GodOmiBar_Sections_C_UpdateSegmentCount Parms{};

	Parms.SegmentCount = SegmentCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GodOmiBar_Sections.WBP_G_V2_GodOmiBar_Sections_C.UpdateSegmentScaling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void UWBP_G_V2_GodOmiBar_Sections_C::UpdateSegmentScaling(const struct FGeometry& MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodOmiBar_Sections_C", "UpdateSegmentScaling");

	Params::WBP_G_V2_GodOmiBar_Sections_C_UpdateSegmentScaling Parms{};

	Parms.MyGeometry = std::move(MyGeometry);

	UObject::ProcessEvent(Func, &Parms);
}

}

