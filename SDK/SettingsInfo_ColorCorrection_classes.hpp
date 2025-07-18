﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingsInfo_ColorCorrection

#include "Basic.hpp"

#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SettingsInfo_ColorCorrection.SettingsInfo_ColorCorrection_C
// 0x0000 (0x0190 - 0x0190)
class USettingsInfo_ColorCorrection_C final : public UHWSettingsInfo_Generic
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SettingsInfo_ColorCorrection_C">();
	}
	static class USettingsInfo_ColorCorrection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USettingsInfo_ColorCorrection_C>();
	}
};
static_assert(alignof(USettingsInfo_ColorCorrection_C) == 0x000008, "Wrong alignment on USettingsInfo_ColorCorrection_C");
static_assert(sizeof(USettingsInfo_ColorCorrection_C) == 0x000190, "Wrong size on USettingsInfo_ColorCorrection_C");

}

