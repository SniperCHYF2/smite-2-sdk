﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_SpawnDirector

#include "Basic.hpp"

#include "BPI_SpawnDirector_classes.hpp"
#include "BPI_SpawnDirector_parameters.hpp"


namespace SDK
{

// Function BPI_SpawnDirector.BPI_SpawnDirector_C.OnKillWaves
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_SpawnDirector_C::OnKillWaves()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_SpawnDirector_C", "OnKillWaves");

	AsUObject()->ProcessEvent(Func, nullptr);
}


// Function BPI_SpawnDirector.BPI_SpawnDirector_C.OnSpawnDirectorInitialized
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SpawnDirector_C*              SpawnDirector                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_SpawnDirector_C::OnSpawnDirectorInitialized(class ABP_SpawnDirector_C* SpawnDirector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_SpawnDirector_C", "OnSpawnDirectorInitialized");

	Params::BPI_SpawnDirector_C_OnSpawnDirectorInitialized Parms{};

	Parms.SpawnDirector = SpawnDirector;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_SpawnDirector.BPI_SpawnDirector_C.OnSpawnWave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   WaveIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_SpawnDirector_C::OnSpawnWave(int32 WaveIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_SpawnDirector_C", "OnSpawnWave");

	Params::BPI_SpawnDirector_C_OnSpawnWave Parms{};

	Parms.WaveIndex = WaveIndex;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_SpawnDirector.BPI_SpawnDirector_C.OnStoppedSpawns
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_SpawnDirector_C::OnStoppedSpawns()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_SpawnDirector_C", "OnStoppedSpawns");

	AsUObject()->ProcessEvent(Func, nullptr);
}

}

