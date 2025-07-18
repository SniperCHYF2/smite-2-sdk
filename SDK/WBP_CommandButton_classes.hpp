﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CommandButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CommandButton.WBP_CommandButton_C
// 0x0028 (0x0620 - 0x05F8)
class UWBP_CommandButton_C final : public UHWWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWButton*                              CommandButton;                                     // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           CommandName;                                       // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 Command;                                           // 0x0610(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Debug_General_PlayableGod_HitBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_CommandButton(int32 EntryPoint);
	void Initialize(const class FString& CommandName_0, const class FString& Command_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CommandButton_C">();
	}
	static class UWBP_CommandButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CommandButton_C>();
	}
};
static_assert(alignof(UWBP_CommandButton_C) == 0x000008, "Wrong alignment on UWBP_CommandButton_C");
static_assert(sizeof(UWBP_CommandButton_C) == 0x000620, "Wrong size on UWBP_CommandButton_C");
static_assert(offsetof(UWBP_CommandButton_C, UberGraphFrame) == 0x0005F8, "Member 'UWBP_CommandButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CommandButton_C, CommandButton) == 0x000600, "Member 'UWBP_CommandButton_C::CommandButton' has a wrong offset!");
static_assert(offsetof(UWBP_CommandButton_C, CommandName) == 0x000608, "Member 'UWBP_CommandButton_C::CommandName' has a wrong offset!");
static_assert(offsetof(UWBP_CommandButton_C, Command) == 0x000610, "Member 'UWBP_CommandButton_C::Command' has a wrong offset!");

}

