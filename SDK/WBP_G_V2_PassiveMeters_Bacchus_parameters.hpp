﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_PassiveMeters_Bacchus

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_G_V2_PassiveMeters_Bacchus.WBP_G_V2_PassiveMeters_Bacchus_C.HandleOnMeterFillChanged
// 0x0010 (0x0010 - 0x0000)
struct WBP_G_V2_PassiveMeters_Bacchus_C_HandleOnMeterFillChanged final
{
public:
	float                                         OldMeterFill;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewMeterFill;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_PassiveMeters_Bacchus_C_HandleOnMeterFillChanged) == 0x000008, "Wrong alignment on WBP_G_V2_PassiveMeters_Bacchus_C_HandleOnMeterFillChanged");
static_assert(sizeof(WBP_G_V2_PassiveMeters_Bacchus_C_HandleOnMeterFillChanged) == 0x000010, "Wrong size on WBP_G_V2_PassiveMeters_Bacchus_C_HandleOnMeterFillChanged");
static_assert(offsetof(WBP_G_V2_PassiveMeters_Bacchus_C_HandleOnMeterFillChanged, OldMeterFill) == 0x000000, "Member 'WBP_G_V2_PassiveMeters_Bacchus_C_HandleOnMeterFillChanged::OldMeterFill' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_PassiveMeters_Bacchus_C_HandleOnMeterFillChanged, NewMeterFill) == 0x000004, "Member 'WBP_G_V2_PassiveMeters_Bacchus_C_HandleOnMeterFillChanged::NewMeterFill' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_PassiveMeters_Bacchus_C_HandleOnMeterFillChanged, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_G_V2_PassiveMeters_Bacchus_C_HandleOnMeterFillChanged::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

}

