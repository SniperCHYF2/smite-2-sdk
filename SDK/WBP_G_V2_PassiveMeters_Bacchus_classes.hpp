﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_PassiveMeters_Bacchus

#include "Basic.hpp"

#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_G_V2_PassiveMeters_Bacchus.WBP_G_V2_PassiveMeters_Bacchus_C
// 0x0008 (0x0670 - 0x0668)
class UWBP_G_V2_PassiveMeters_Bacchus_C final : public UHWPassiveMeterWidget
{
public:
	class UHWImage*                               Meter;                                             // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void HandleOnMeterFillChanged(float OldMeterFill, float NewMeterFill);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_G_V2_PassiveMeters_Bacchus_C">();
	}
	static class UWBP_G_V2_PassiveMeters_Bacchus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_G_V2_PassiveMeters_Bacchus_C>();
	}
};
static_assert(alignof(UWBP_G_V2_PassiveMeters_Bacchus_C) == 0x000008, "Wrong alignment on UWBP_G_V2_PassiveMeters_Bacchus_C");
static_assert(sizeof(UWBP_G_V2_PassiveMeters_Bacchus_C) == 0x000670, "Wrong size on UWBP_G_V2_PassiveMeters_Bacchus_C");
static_assert(offsetof(UWBP_G_V2_PassiveMeters_Bacchus_C, Meter) == 0x000668, "Member 'UWBP_G_V2_PassiveMeters_Bacchus_C::Meter' has a wrong offset!");

}

