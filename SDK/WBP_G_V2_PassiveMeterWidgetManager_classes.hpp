﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_PassiveMeterWidgetManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_G_V2_PassiveMeterWidgetManager.WBP_G_V2_PassiveMeterWidgetManager_C
// 0x0008 (0x0668 - 0x0660)
class UWBP_G_V2_PassiveMeterWidgetManager_C final : public UHWPassiveMeterWidgetManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0660(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_WBP_G_V2_PassiveMeterWidgetManager(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_G_V2_PassiveMeterWidgetManager_C">();
	}
	static class UWBP_G_V2_PassiveMeterWidgetManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_G_V2_PassiveMeterWidgetManager_C>();
	}
};
static_assert(alignof(UWBP_G_V2_PassiveMeterWidgetManager_C) == 0x000008, "Wrong alignment on UWBP_G_V2_PassiveMeterWidgetManager_C");
static_assert(sizeof(UWBP_G_V2_PassiveMeterWidgetManager_C) == 0x000668, "Wrong size on UWBP_G_V2_PassiveMeterWidgetManager_C");
static_assert(offsetof(UWBP_G_V2_PassiveMeterWidgetManager_C, UberGraphFrame) == 0x000660, "Member 'UWBP_G_V2_PassiveMeterWidgetManager_C::UberGraphFrame' has a wrong offset!");

}

