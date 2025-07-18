﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Journey

#include "Basic.hpp"

#include "BPI_Journey_classes.hpp"
#include "BPI_Journey_parameters.hpp"


namespace SDK
{

// Function BPI_Journey.BPI_Journey_C.DisplayCaption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      CaptionText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// double                                  Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Journey_C::DisplayCaption(const class FText& CaptionText, double Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Journey_C", "DisplayCaption");

	Params::BPI_Journey_C_DisplayCaption Parms{};

	Parms.CaptionText = std::move(CaptionText);
	Parms.Duration = Duration;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_Journey.BPI_Journey_C.EndCombo
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_Journey_C::EndCombo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Journey_C", "EndCombo");

	AsUObject()->ProcessEvent(Func, nullptr);
}


// Function BPI_Journey.BPI_Journey_C.EndComboHUD
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_Journey_C::EndComboHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Journey_C", "EndComboHUD");

	AsUObject()->ProcessEvent(Func, nullptr);
}


// Function BPI_Journey.BPI_Journey_C.GetPoints
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32*                                  Points                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Journey_C::GetPoints(int32* Points)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Journey_C", "GetPoints");

	Params::BPI_Journey_C_GetPoints Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Points != nullptr)
		*Points = Parms.Points;
}


// Function BPI_Journey.BPI_Journey_C.PointsGained
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Points                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      Details                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void IBPI_Journey_C::PointsGained(int32 Points, const class FText& Details)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Journey_C", "PointsGained");

	Params::BPI_Journey_C_PointsGained Parms{};

	Parms.Points = Points;
	Parms.Details = std::move(Details);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_Journey.BPI_Journey_C.ResetPoints
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_Journey_C::ResetPoints()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Journey_C", "ResetPoints");

	AsUObject()->ProcessEvent(Func, nullptr);
}


// Function BPI_Journey.BPI_Journey_C.UpdatePointsHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PointsGained                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TotalPoints                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ComboCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  ComboDuration                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      Details                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void IBPI_Journey_C::UpdatePointsHUD(int32 PointsGained, int32 TotalPoints, int32 ComboCount, double ComboDuration, const class FText& Details)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Journey_C", "UpdatePointsHUD");

	Params::BPI_Journey_C_UpdatePointsHUD Parms{};

	Parms.PointsGained = PointsGained;
	Parms.TotalPoints = TotalPoints;
	Parms.ComboCount = ComboCount;
	Parms.ComboDuration = ComboDuration;
	Parms.Details = std::move(Details);

	AsUObject()->ProcessEvent(Func, &Parms);
}

}

