﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DisplayClusterLightCardExtender

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class DisplayClusterLightCardExtender.DisplayClusterStageActorTemplate
// 0x0008 (0x0030 - 0x0028)
class UDisplayClusterStageActorTemplate final : public UObject
{
public:
	bool                                          bIsFavorite;                                       // 0x0028(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DisplayClusterStageActorTemplate">();
	}
	static class UDisplayClusterStageActorTemplate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDisplayClusterStageActorTemplate>();
	}
};
static_assert(alignof(UDisplayClusterStageActorTemplate) == 0x000008, "Wrong alignment on UDisplayClusterStageActorTemplate");
static_assert(sizeof(UDisplayClusterStageActorTemplate) == 0x000030, "Wrong size on UDisplayClusterStageActorTemplate");
static_assert(offsetof(UDisplayClusterStageActorTemplate, bIsFavorite) == 0x000028, "Member 'UDisplayClusterStageActorTemplate::bIsFavorite' has a wrong offset!");

// Class DisplayClusterLightCardExtender.DisplayClusterStageActor
// 0x0000 (0x0000 - 0x0000)
class IDisplayClusterStageActor final
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DisplayClusterStageActor">();
	}
	static class IDisplayClusterStageActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<IDisplayClusterStageActor>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
static_assert(alignof(IDisplayClusterStageActor) == 0x000001, "Wrong alignment on IDisplayClusterStageActor");
static_assert(sizeof(IDisplayClusterStageActor) == 0x000001, "Wrong size on IDisplayClusterStageActor");

}

