﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_TeamDisplay_ResourceManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_G_V2_TeamDisplay_ResourceManager.WBP_G_V2_TeamDisplay_ResourceManager_C
// 0x0008 (0x06C0 - 0x06B8)
class UWBP_G_V2_TeamDisplay_ResourceManager_C final : public UHWResourceManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_WBP_G_V2_TeamDisplay_ResourceManager(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

	TArray<class UHWGameplayAttributeWidget*> GetAttributeWidgets() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_G_V2_TeamDisplay_ResourceManager_C">();
	}
	static class UWBP_G_V2_TeamDisplay_ResourceManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_G_V2_TeamDisplay_ResourceManager_C>();
	}
};
static_assert(alignof(UWBP_G_V2_TeamDisplay_ResourceManager_C) == 0x000008, "Wrong alignment on UWBP_G_V2_TeamDisplay_ResourceManager_C");
static_assert(sizeof(UWBP_G_V2_TeamDisplay_ResourceManager_C) == 0x0006C0, "Wrong size on UWBP_G_V2_TeamDisplay_ResourceManager_C");
static_assert(offsetof(UWBP_G_V2_TeamDisplay_ResourceManager_C, UberGraphFrame) == 0x0006B8, "Member 'UWBP_G_V2_TeamDisplay_ResourceManager_C::UberGraphFrame' has a wrong offset!");

}

