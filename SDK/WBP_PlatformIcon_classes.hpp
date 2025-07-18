﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlatformIcon

#include "Basic.hpp"

#include "RallyHereStart_structs.hpp"
#include "RallyHereStart_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PlatformIcon.WBP_PlatformIcon_C
// 0x0010 (0x05C8 - 0x05B8)
class UWBP_PlatformIcon_C final : public URHWidget
{
public:
	class UImage*                                 Icon;                                              // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                         Platform;                                          // 0x05C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetPlatformByDisplayType(ERHPlatformDisplayType Platform_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PlatformIcon_C">();
	}
	static class UWBP_PlatformIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PlatformIcon_C>();
	}
};
static_assert(alignof(UWBP_PlatformIcon_C) == 0x000008, "Wrong alignment on UWBP_PlatformIcon_C");
static_assert(sizeof(UWBP_PlatformIcon_C) == 0x0005C8, "Wrong size on UWBP_PlatformIcon_C");
static_assert(offsetof(UWBP_PlatformIcon_C, Icon) == 0x0005B8, "Member 'UWBP_PlatformIcon_C::Icon' has a wrong offset!");
static_assert(offsetof(UWBP_PlatformIcon_C, Platform) == 0x0005C0, "Member 'UWBP_PlatformIcon_C::Platform' has a wrong offset!");

}

