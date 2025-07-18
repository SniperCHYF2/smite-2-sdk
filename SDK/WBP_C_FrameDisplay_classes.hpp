﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_FrameDisplay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_C_FrameDisplay.WBP_C_FrameDisplay_C
// 0x0028 (0x0620 - 0x05F8)
class UWBP_C_FrameDisplay_C final : public UHWWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWImage*                               Add;                                               // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           Display;                                           // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               Main;                                              // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWCollectionItem*                      Item;                                              // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_C_FrameDisplay(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_C_FrameDisplay_C">();
	}
	static class UWBP_C_FrameDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_C_FrameDisplay_C>();
	}
};
static_assert(alignof(UWBP_C_FrameDisplay_C) == 0x000008, "Wrong alignment on UWBP_C_FrameDisplay_C");
static_assert(sizeof(UWBP_C_FrameDisplay_C) == 0x000620, "Wrong size on UWBP_C_FrameDisplay_C");
static_assert(offsetof(UWBP_C_FrameDisplay_C, UberGraphFrame) == 0x0005F8, "Member 'UWBP_C_FrameDisplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_C_FrameDisplay_C, Add) == 0x000600, "Member 'UWBP_C_FrameDisplay_C::Add' has a wrong offset!");
static_assert(offsetof(UWBP_C_FrameDisplay_C, Display) == 0x000608, "Member 'UWBP_C_FrameDisplay_C::Display' has a wrong offset!");
static_assert(offsetof(UWBP_C_FrameDisplay_C, Main) == 0x000610, "Member 'UWBP_C_FrameDisplay_C::Main' has a wrong offset!");
static_assert(offsetof(UWBP_C_FrameDisplay_C, Item) == 0x000618, "Member 'UWBP_C_FrameDisplay_C::Item' has a wrong offset!");

}

