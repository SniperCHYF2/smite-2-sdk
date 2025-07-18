﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingConditionAssessor_DLSS

#include "Basic.hpp"

#include "HemingwayUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SettingConditionAssessor_DLSS.SettingConditionAssessor_DLSS_C
// 0x0000 (0x0028 - 0x0028)
class USettingConditionAssessor_DLSS_C final : public UHWSettingConditionAssessor
{
public:
	bool IsDisplayConditionMet(const class UHWSettingsConfigAsset* SettingsConfigAsset, const class ARHHUDCommon* HUD) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SettingConditionAssessor_DLSS_C">();
	}
	static class USettingConditionAssessor_DLSS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USettingConditionAssessor_DLSS_C>();
	}
};
static_assert(alignof(USettingConditionAssessor_DLSS_C) == 0x000008, "Wrong alignment on USettingConditionAssessor_DLSS_C");
static_assert(sizeof(USettingConditionAssessor_DLSS_C) == 0x000028, "Wrong size on USettingConditionAssessor_DLSS_C");

}

