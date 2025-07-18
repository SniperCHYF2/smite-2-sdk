﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Reticle_Item_LifeBinder

#include "Basic.hpp"

#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Reticle_Item_LifeBinder.Reticle_Item_LifeBinder_C
// 0x0018 (0x0430 - 0x0418)
class AReticle_Item_LifeBinder_C final : public AHWReticle
{
public:
	class UStaticMeshComponent*                   Cube;                                              // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHWNiagaraComponent*                    HWNiagara;                                         // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Reticle_Item_LifeBinder_C">();
	}
	static class AReticle_Item_LifeBinder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AReticle_Item_LifeBinder_C>();
	}
};
static_assert(alignof(AReticle_Item_LifeBinder_C) == 0x000008, "Wrong alignment on AReticle_Item_LifeBinder_C");
static_assert(sizeof(AReticle_Item_LifeBinder_C) == 0x000430, "Wrong size on AReticle_Item_LifeBinder_C");
static_assert(offsetof(AReticle_Item_LifeBinder_C, Cube) == 0x000418, "Member 'AReticle_Item_LifeBinder_C::Cube' has a wrong offset!");
static_assert(offsetof(AReticle_Item_LifeBinder_C, HWNiagara) == 0x000420, "Member 'AReticle_Item_LifeBinder_C::HWNiagara' has a wrong offset!");
static_assert(offsetof(AReticle_Item_LifeBinder_C, DefaultSceneRoot) == 0x000428, "Member 'AReticle_Item_LifeBinder_C::DefaultSceneRoot' has a wrong offset!");

}

