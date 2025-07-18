﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Throbber

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Throbber.WBP_Throbber_C
// 0x0030 (0x02F0 - 0x02C0)
class UWBP_Throbber_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Cycle;                                             // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 One;                                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Two;                                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Three;                                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Four;                                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ResetThrobberAnim();
	void PlayThrobberAnim();
	void ExecuteUbergraph_WBP_Throbber(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Throbber_C">();
	}
	static class UWBP_Throbber_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Throbber_C>();
	}
};
static_assert(alignof(UWBP_Throbber_C) == 0x000008, "Wrong alignment on UWBP_Throbber_C");
static_assert(sizeof(UWBP_Throbber_C) == 0x0002F0, "Wrong size on UWBP_Throbber_C");
static_assert(offsetof(UWBP_Throbber_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_Throbber_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Throbber_C, Cycle) == 0x0002C8, "Member 'UWBP_Throbber_C::Cycle' has a wrong offset!");
static_assert(offsetof(UWBP_Throbber_C, One) == 0x0002D0, "Member 'UWBP_Throbber_C::One' has a wrong offset!");
static_assert(offsetof(UWBP_Throbber_C, Two) == 0x0002D8, "Member 'UWBP_Throbber_C::Two' has a wrong offset!");
static_assert(offsetof(UWBP_Throbber_C, Three) == 0x0002E0, "Member 'UWBP_Throbber_C::Three' has a wrong offset!");
static_assert(offsetof(UWBP_Throbber_C, Four) == 0x0002E8, "Member 'UWBP_Throbber_C::Four' has a wrong offset!");

}

