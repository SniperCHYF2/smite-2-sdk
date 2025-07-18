﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SceneComponentPools

#include "Basic.hpp"

#include "SceneComponentPools_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SceneComponentPools.ParticleSystemPoolComponentBase.OnPSCFinished
// 0x0008 (0x0008 - 0x0000)
struct ParticleSystemPoolComponentBase_OnPSCFinished final
{
public:
	class UParticleSystemComponent*               InPSC;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ParticleSystemPoolComponentBase_OnPSCFinished) == 0x000008, "Wrong alignment on ParticleSystemPoolComponentBase_OnPSCFinished");
static_assert(sizeof(ParticleSystemPoolComponentBase_OnPSCFinished) == 0x000008, "Wrong size on ParticleSystemPoolComponentBase_OnPSCFinished");
static_assert(offsetof(ParticleSystemPoolComponentBase_OnPSCFinished, InPSC) == 0x000000, "Member 'ParticleSystemPoolComponentBase_OnPSCFinished::InPSC' has a wrong offset!");

// Function SceneComponentPools.SceneComponentPoolStatics.GetComponentForSkeletalMesh
// 0x0028 (0x0028 - 0x0000)
struct SceneComponentPoolStatics_GetComponentForSkeletalMesh final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                          Mesh;                                              // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                        AttachToComponent;                                 // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AttachSocketName;                                  // 0x0018(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                 ReturnValue;                                       // 0x0020(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SceneComponentPoolStatics_GetComponentForSkeletalMesh) == 0x000008, "Wrong alignment on SceneComponentPoolStatics_GetComponentForSkeletalMesh");
static_assert(sizeof(SceneComponentPoolStatics_GetComponentForSkeletalMesh) == 0x000028, "Wrong size on SceneComponentPoolStatics_GetComponentForSkeletalMesh");
static_assert(offsetof(SceneComponentPoolStatics_GetComponentForSkeletalMesh, WorldContextObject) == 0x000000, "Member 'SceneComponentPoolStatics_GetComponentForSkeletalMesh::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_GetComponentForSkeletalMesh, Mesh) == 0x000008, "Member 'SceneComponentPoolStatics_GetComponentForSkeletalMesh::Mesh' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_GetComponentForSkeletalMesh, AttachToComponent) == 0x000010, "Member 'SceneComponentPoolStatics_GetComponentForSkeletalMesh::AttachToComponent' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_GetComponentForSkeletalMesh, AttachSocketName) == 0x000018, "Member 'SceneComponentPoolStatics_GetComponentForSkeletalMesh::AttachSocketName' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_GetComponentForSkeletalMesh, ReturnValue) == 0x000020, "Member 'SceneComponentPoolStatics_GetComponentForSkeletalMesh::ReturnValue' has a wrong offset!");

// Function SceneComponentPools.SceneComponentPoolStatics.GetComponentForStaticMesh
// 0x0028 (0x0028 - 0x0000)
struct SceneComponentPoolStatics_GetComponentForStaticMesh final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                            Mesh;                                              // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                        AttachToComponent;                                 // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AttachSocketName;                                  // 0x0018(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                   ReturnValue;                                       // 0x0020(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SceneComponentPoolStatics_GetComponentForStaticMesh) == 0x000008, "Wrong alignment on SceneComponentPoolStatics_GetComponentForStaticMesh");
static_assert(sizeof(SceneComponentPoolStatics_GetComponentForStaticMesh) == 0x000028, "Wrong size on SceneComponentPoolStatics_GetComponentForStaticMesh");
static_assert(offsetof(SceneComponentPoolStatics_GetComponentForStaticMesh, WorldContextObject) == 0x000000, "Member 'SceneComponentPoolStatics_GetComponentForStaticMesh::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_GetComponentForStaticMesh, Mesh) == 0x000008, "Member 'SceneComponentPoolStatics_GetComponentForStaticMesh::Mesh' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_GetComponentForStaticMesh, AttachToComponent) == 0x000010, "Member 'SceneComponentPoolStatics_GetComponentForStaticMesh::AttachToComponent' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_GetComponentForStaticMesh, AttachSocketName) == 0x000018, "Member 'SceneComponentPoolStatics_GetComponentForStaticMesh::AttachSocketName' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_GetComponentForStaticMesh, ReturnValue) == 0x000020, "Member 'SceneComponentPoolStatics_GetComponentForStaticMesh::ReturnValue' has a wrong offset!");

// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedDecals
// 0x0008 (0x0008 - 0x0000)
struct SceneComponentPoolStatics_ReleaseSpawnedDecals final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SceneComponentPoolStatics_ReleaseSpawnedDecals) == 0x000008, "Wrong alignment on SceneComponentPoolStatics_ReleaseSpawnedDecals");
static_assert(sizeof(SceneComponentPoolStatics_ReleaseSpawnedDecals) == 0x000008, "Wrong size on SceneComponentPoolStatics_ReleaseSpawnedDecals");
static_assert(offsetof(SceneComponentPoolStatics_ReleaseSpawnedDecals, WorldContextObject) == 0x000000, "Member 'SceneComponentPoolStatics_ReleaseSpawnedDecals::WorldContextObject' has a wrong offset!");

// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedEmitters
// 0x0008 (0x0008 - 0x0000)
struct SceneComponentPoolStatics_ReleaseSpawnedEmitters final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SceneComponentPoolStatics_ReleaseSpawnedEmitters) == 0x000008, "Wrong alignment on SceneComponentPoolStatics_ReleaseSpawnedEmitters");
static_assert(sizeof(SceneComponentPoolStatics_ReleaseSpawnedEmitters) == 0x000008, "Wrong size on SceneComponentPoolStatics_ReleaseSpawnedEmitters");
static_assert(offsetof(SceneComponentPoolStatics_ReleaseSpawnedEmitters, WorldContextObject) == 0x000000, "Member 'SceneComponentPoolStatics_ReleaseSpawnedEmitters::WorldContextObject' has a wrong offset!");

// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMesh
// 0x0070 (0x0070 - 0x0000)
struct SceneComponentPoolStatics_ReleaseSpawnedSkeletalMesh final
{
public:
	class USkeletalMesh*                          SkeletalMesh;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimInstance>              AnimClass;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                        AttachToComponent;                                 // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPoolAttachmentInfo                    AttachInfo;                                        // 0x0018(0x0058)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(SceneComponentPoolStatics_ReleaseSpawnedSkeletalMesh) == 0x000008, "Wrong alignment on SceneComponentPoolStatics_ReleaseSpawnedSkeletalMesh");
static_assert(sizeof(SceneComponentPoolStatics_ReleaseSpawnedSkeletalMesh) == 0x000070, "Wrong size on SceneComponentPoolStatics_ReleaseSpawnedSkeletalMesh");
static_assert(offsetof(SceneComponentPoolStatics_ReleaseSpawnedSkeletalMesh, SkeletalMesh) == 0x000000, "Member 'SceneComponentPoolStatics_ReleaseSpawnedSkeletalMesh::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_ReleaseSpawnedSkeletalMesh, AnimClass) == 0x000008, "Member 'SceneComponentPoolStatics_ReleaseSpawnedSkeletalMesh::AnimClass' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_ReleaseSpawnedSkeletalMesh, AttachToComponent) == 0x000010, "Member 'SceneComponentPoolStatics_ReleaseSpawnedSkeletalMesh::AttachToComponent' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_ReleaseSpawnedSkeletalMesh, AttachInfo) == 0x000018, "Member 'SceneComponentPoolStatics_ReleaseSpawnedSkeletalMesh::AttachInfo' has a wrong offset!");

// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMeshComponent
// 0x0008 (0x0008 - 0x0000)
struct SceneComponentPoolStatics_ReleaseSpawnedSkeletalMeshComponent final
{
public:
	class USkeletalMeshComponent*                 SkeletalMeshComponent;                             // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SceneComponentPoolStatics_ReleaseSpawnedSkeletalMeshComponent) == 0x000008, "Wrong alignment on SceneComponentPoolStatics_ReleaseSpawnedSkeletalMeshComponent");
static_assert(sizeof(SceneComponentPoolStatics_ReleaseSpawnedSkeletalMeshComponent) == 0x000008, "Wrong size on SceneComponentPoolStatics_ReleaseSpawnedSkeletalMeshComponent");
static_assert(offsetof(SceneComponentPoolStatics_ReleaseSpawnedSkeletalMeshComponent, SkeletalMeshComponent) == 0x000000, "Member 'SceneComponentPoolStatics_ReleaseSpawnedSkeletalMeshComponent::SkeletalMeshComponent' has a wrong offset!");

// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedSkeletalMeshes
// 0x0008 (0x0008 - 0x0000)
struct SceneComponentPoolStatics_ReleaseSpawnedSkeletalMeshes final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SceneComponentPoolStatics_ReleaseSpawnedSkeletalMeshes) == 0x000008, "Wrong alignment on SceneComponentPoolStatics_ReleaseSpawnedSkeletalMeshes");
static_assert(sizeof(SceneComponentPoolStatics_ReleaseSpawnedSkeletalMeshes) == 0x000008, "Wrong size on SceneComponentPoolStatics_ReleaseSpawnedSkeletalMeshes");
static_assert(offsetof(SceneComponentPoolStatics_ReleaseSpawnedSkeletalMeshes, WorldContextObject) == 0x000000, "Member 'SceneComponentPoolStatics_ReleaseSpawnedSkeletalMeshes::WorldContextObject' has a wrong offset!");

// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMesh
// 0x0068 (0x0068 - 0x0000)
struct SceneComponentPoolStatics_ReleaseSpawnedStaticMesh final
{
public:
	class UStaticMesh*                            StaticMeshComponent;                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                        AttachToComponent;                                 // 0x0008(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPoolAttachmentInfo                    AttachInfo;                                        // 0x0010(0x0058)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(SceneComponentPoolStatics_ReleaseSpawnedStaticMesh) == 0x000008, "Wrong alignment on SceneComponentPoolStatics_ReleaseSpawnedStaticMesh");
static_assert(sizeof(SceneComponentPoolStatics_ReleaseSpawnedStaticMesh) == 0x000068, "Wrong size on SceneComponentPoolStatics_ReleaseSpawnedStaticMesh");
static_assert(offsetof(SceneComponentPoolStatics_ReleaseSpawnedStaticMesh, StaticMeshComponent) == 0x000000, "Member 'SceneComponentPoolStatics_ReleaseSpawnedStaticMesh::StaticMeshComponent' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_ReleaseSpawnedStaticMesh, AttachToComponent) == 0x000008, "Member 'SceneComponentPoolStatics_ReleaseSpawnedStaticMesh::AttachToComponent' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_ReleaseSpawnedStaticMesh, AttachInfo) == 0x000010, "Member 'SceneComponentPoolStatics_ReleaseSpawnedStaticMesh::AttachInfo' has a wrong offset!");

// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMeshComponent
// 0x0008 (0x0008 - 0x0000)
struct SceneComponentPoolStatics_ReleaseSpawnedStaticMeshComponent final
{
public:
	class UStaticMeshComponent*                   StaticMeshComponent;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SceneComponentPoolStatics_ReleaseSpawnedStaticMeshComponent) == 0x000008, "Wrong alignment on SceneComponentPoolStatics_ReleaseSpawnedStaticMeshComponent");
static_assert(sizeof(SceneComponentPoolStatics_ReleaseSpawnedStaticMeshComponent) == 0x000008, "Wrong size on SceneComponentPoolStatics_ReleaseSpawnedStaticMeshComponent");
static_assert(offsetof(SceneComponentPoolStatics_ReleaseSpawnedStaticMeshComponent, StaticMeshComponent) == 0x000000, "Member 'SceneComponentPoolStatics_ReleaseSpawnedStaticMeshComponent::StaticMeshComponent' has a wrong offset!");

// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedStaticMeshes
// 0x0008 (0x0008 - 0x0000)
struct SceneComponentPoolStatics_ReleaseSpawnedStaticMeshes final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SceneComponentPoolStatics_ReleaseSpawnedStaticMeshes) == 0x000008, "Wrong alignment on SceneComponentPoolStatics_ReleaseSpawnedStaticMeshes");
static_assert(sizeof(SceneComponentPoolStatics_ReleaseSpawnedStaticMeshes) == 0x000008, "Wrong size on SceneComponentPoolStatics_ReleaseSpawnedStaticMeshes");
static_assert(offsetof(SceneComponentPoolStatics_ReleaseSpawnedStaticMeshes, WorldContextObject) == 0x000000, "Member 'SceneComponentPoolStatics_ReleaseSpawnedStaticMeshes::WorldContextObject' has a wrong offset!");

// Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAtLocation
// 0x0068 (0x0068 - 0x0000)
struct SceneComponentPoolStatics_SpawnDecalAtLocation final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     DecalMaterial;                                     // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                DecalSize;                                         // 0x0010(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0028(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x0040(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                         LifeSpan;                                          // 0x0058(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDecalComponentType                           DecalComponentType;                                // 0x005C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPoolableDecalComponent*                ReturnValue;                                       // 0x0060(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SceneComponentPoolStatics_SpawnDecalAtLocation) == 0x000008, "Wrong alignment on SceneComponentPoolStatics_SpawnDecalAtLocation");
static_assert(sizeof(SceneComponentPoolStatics_SpawnDecalAtLocation) == 0x000068, "Wrong size on SceneComponentPoolStatics_SpawnDecalAtLocation");
static_assert(offsetof(SceneComponentPoolStatics_SpawnDecalAtLocation, WorldContextObject) == 0x000000, "Member 'SceneComponentPoolStatics_SpawnDecalAtLocation::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnDecalAtLocation, DecalMaterial) == 0x000008, "Member 'SceneComponentPoolStatics_SpawnDecalAtLocation::DecalMaterial' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnDecalAtLocation, DecalSize) == 0x000010, "Member 'SceneComponentPoolStatics_SpawnDecalAtLocation::DecalSize' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnDecalAtLocation, Location) == 0x000028, "Member 'SceneComponentPoolStatics_SpawnDecalAtLocation::Location' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnDecalAtLocation, Rotation) == 0x000040, "Member 'SceneComponentPoolStatics_SpawnDecalAtLocation::Rotation' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnDecalAtLocation, LifeSpan) == 0x000058, "Member 'SceneComponentPoolStatics_SpawnDecalAtLocation::LifeSpan' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnDecalAtLocation, DecalComponentType) == 0x00005C, "Member 'SceneComponentPoolStatics_SpawnDecalAtLocation::DecalComponentType' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnDecalAtLocation, ReturnValue) == 0x000060, "Member 'SceneComponentPoolStatics_SpawnDecalAtLocation::ReturnValue' has a wrong offset!");

// Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAttached
// 0x0078 (0x0078 - 0x0000)
struct SceneComponentPoolStatics_SpawnDecalAttached final
{
public:
	class UMaterialInterface*                     DecalMaterial;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                DecalSize;                                         // 0x0008(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                        AttachToComponent;                                 // 0x0020(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AttachPointName;                                   // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0030(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x0048(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	EAttachLocation                               LocationType;                                      // 0x0060(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LifeSpan;                                          // 0x0064(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDecalComponentType                           DecalComponentType;                                // 0x0068(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPoolableDecalComponent*                ReturnValue;                                       // 0x0070(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SceneComponentPoolStatics_SpawnDecalAttached) == 0x000008, "Wrong alignment on SceneComponentPoolStatics_SpawnDecalAttached");
static_assert(sizeof(SceneComponentPoolStatics_SpawnDecalAttached) == 0x000078, "Wrong size on SceneComponentPoolStatics_SpawnDecalAttached");
static_assert(offsetof(SceneComponentPoolStatics_SpawnDecalAttached, DecalMaterial) == 0x000000, "Member 'SceneComponentPoolStatics_SpawnDecalAttached::DecalMaterial' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnDecalAttached, DecalSize) == 0x000008, "Member 'SceneComponentPoolStatics_SpawnDecalAttached::DecalSize' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnDecalAttached, AttachToComponent) == 0x000020, "Member 'SceneComponentPoolStatics_SpawnDecalAttached::AttachToComponent' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnDecalAttached, AttachPointName) == 0x000028, "Member 'SceneComponentPoolStatics_SpawnDecalAttached::AttachPointName' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnDecalAttached, Location) == 0x000030, "Member 'SceneComponentPoolStatics_SpawnDecalAttached::Location' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnDecalAttached, Rotation) == 0x000048, "Member 'SceneComponentPoolStatics_SpawnDecalAttached::Rotation' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnDecalAttached, LocationType) == 0x000060, "Member 'SceneComponentPoolStatics_SpawnDecalAttached::LocationType' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnDecalAttached, LifeSpan) == 0x000064, "Member 'SceneComponentPoolStatics_SpawnDecalAttached::LifeSpan' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnDecalAttached, DecalComponentType) == 0x000068, "Member 'SceneComponentPoolStatics_SpawnDecalAttached::DecalComponentType' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnDecalAttached, ReturnValue) == 0x000070, "Member 'SceneComponentPoolStatics_SpawnDecalAttached::ReturnValue' has a wrong offset!");

// Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAtLocation
// 0x0060 (0x0060 - 0x0000)
struct SceneComponentPoolStatics_SpawnEmitterAtLocation final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                        EmitterTemplate;                                   // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0010(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x0028(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Scale;                                             // 0x0040(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*               ReturnValue;                                       // 0x0058(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SceneComponentPoolStatics_SpawnEmitterAtLocation) == 0x000008, "Wrong alignment on SceneComponentPoolStatics_SpawnEmitterAtLocation");
static_assert(sizeof(SceneComponentPoolStatics_SpawnEmitterAtLocation) == 0x000060, "Wrong size on SceneComponentPoolStatics_SpawnEmitterAtLocation");
static_assert(offsetof(SceneComponentPoolStatics_SpawnEmitterAtLocation, WorldContextObject) == 0x000000, "Member 'SceneComponentPoolStatics_SpawnEmitterAtLocation::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnEmitterAtLocation, EmitterTemplate) == 0x000008, "Member 'SceneComponentPoolStatics_SpawnEmitterAtLocation::EmitterTemplate' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnEmitterAtLocation, Location) == 0x000010, "Member 'SceneComponentPoolStatics_SpawnEmitterAtLocation::Location' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnEmitterAtLocation, Rotation) == 0x000028, "Member 'SceneComponentPoolStatics_SpawnEmitterAtLocation::Rotation' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnEmitterAtLocation, Scale) == 0x000040, "Member 'SceneComponentPoolStatics_SpawnEmitterAtLocation::Scale' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnEmitterAtLocation, ReturnValue) == 0x000058, "Member 'SceneComponentPoolStatics_SpawnEmitterAtLocation::ReturnValue' has a wrong offset!");

// Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAttached
// 0x0070 (0x0070 - 0x0000)
struct SceneComponentPoolStatics_SpawnEmitterAttached final
{
public:
	class UParticleSystem*                        EmitterTemplate;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                        AttachToComponent;                                 // 0x0008(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AttachPointName;                                   // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0018(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x0030(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Scale;                                             // 0x0048(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAttachLocation                               LocationType;                                      // 0x0060(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               ReturnValue;                                       // 0x0068(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SceneComponentPoolStatics_SpawnEmitterAttached) == 0x000008, "Wrong alignment on SceneComponentPoolStatics_SpawnEmitterAttached");
static_assert(sizeof(SceneComponentPoolStatics_SpawnEmitterAttached) == 0x000070, "Wrong size on SceneComponentPoolStatics_SpawnEmitterAttached");
static_assert(offsetof(SceneComponentPoolStatics_SpawnEmitterAttached, EmitterTemplate) == 0x000000, "Member 'SceneComponentPoolStatics_SpawnEmitterAttached::EmitterTemplate' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnEmitterAttached, AttachToComponent) == 0x000008, "Member 'SceneComponentPoolStatics_SpawnEmitterAttached::AttachToComponent' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnEmitterAttached, AttachPointName) == 0x000010, "Member 'SceneComponentPoolStatics_SpawnEmitterAttached::AttachPointName' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnEmitterAttached, Location) == 0x000018, "Member 'SceneComponentPoolStatics_SpawnEmitterAttached::Location' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnEmitterAttached, Rotation) == 0x000030, "Member 'SceneComponentPoolStatics_SpawnEmitterAttached::Rotation' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnEmitterAttached, Scale) == 0x000048, "Member 'SceneComponentPoolStatics_SpawnEmitterAttached::Scale' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnEmitterAttached, LocationType) == 0x000060, "Member 'SceneComponentPoolStatics_SpawnEmitterAttached::LocationType' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnEmitterAttached, ReturnValue) == 0x000068, "Member 'SceneComponentPoolStatics_SpawnEmitterAttached::ReturnValue' has a wrong offset!");

// Function SceneComponentPools.SceneComponentPoolStatics.SpawnSkeletalMeshAttached
// 0x0078 (0x0078 - 0x0000)
struct SceneComponentPoolStatics_SpawnSkeletalMeshAttached final
{
public:
	class USkeletalMesh*                          Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimInstance>              AnimClass;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                        AttachToComponent;                                 // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPoolAttachmentInfo                    AttachInfo;                                        // 0x0018(0x0058)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                 ReturnValue;                                       // 0x0070(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SceneComponentPoolStatics_SpawnSkeletalMeshAttached) == 0x000008, "Wrong alignment on SceneComponentPoolStatics_SpawnSkeletalMeshAttached");
static_assert(sizeof(SceneComponentPoolStatics_SpawnSkeletalMeshAttached) == 0x000078, "Wrong size on SceneComponentPoolStatics_SpawnSkeletalMeshAttached");
static_assert(offsetof(SceneComponentPoolStatics_SpawnSkeletalMeshAttached, Mesh) == 0x000000, "Member 'SceneComponentPoolStatics_SpawnSkeletalMeshAttached::Mesh' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnSkeletalMeshAttached, AnimClass) == 0x000008, "Member 'SceneComponentPoolStatics_SpawnSkeletalMeshAttached::AnimClass' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnSkeletalMeshAttached, AttachToComponent) == 0x000010, "Member 'SceneComponentPoolStatics_SpawnSkeletalMeshAttached::AttachToComponent' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnSkeletalMeshAttached, AttachInfo) == 0x000018, "Member 'SceneComponentPoolStatics_SpawnSkeletalMeshAttached::AttachInfo' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnSkeletalMeshAttached, ReturnValue) == 0x000070, "Member 'SceneComponentPoolStatics_SpawnSkeletalMeshAttached::ReturnValue' has a wrong offset!");

// Function SceneComponentPools.SceneComponentPoolStatics.SpawnStaticMeshAttached
// 0x0070 (0x0070 - 0x0000)
struct SceneComponentPoolStatics_SpawnStaticMeshAttached final
{
public:
	class UStaticMesh*                            Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                        AttachToComponent;                                 // 0x0008(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPoolAttachmentInfo                    AttachInfo;                                        // 0x0010(0x0058)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                   ReturnValue;                                       // 0x0068(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SceneComponentPoolStatics_SpawnStaticMeshAttached) == 0x000008, "Wrong alignment on SceneComponentPoolStatics_SpawnStaticMeshAttached");
static_assert(sizeof(SceneComponentPoolStatics_SpawnStaticMeshAttached) == 0x000070, "Wrong size on SceneComponentPoolStatics_SpawnStaticMeshAttached");
static_assert(offsetof(SceneComponentPoolStatics_SpawnStaticMeshAttached, Mesh) == 0x000000, "Member 'SceneComponentPoolStatics_SpawnStaticMeshAttached::Mesh' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnStaticMeshAttached, AttachToComponent) == 0x000008, "Member 'SceneComponentPoolStatics_SpawnStaticMeshAttached::AttachToComponent' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnStaticMeshAttached, AttachInfo) == 0x000010, "Member 'SceneComponentPoolStatics_SpawnStaticMeshAttached::AttachInfo' has a wrong offset!");
static_assert(offsetof(SceneComponentPoolStatics_SpawnStaticMeshAttached, ReturnValue) == 0x000068, "Member 'SceneComponentPoolStatics_SpawnStaticMeshAttached::ReturnValue' has a wrong offset!");

}

