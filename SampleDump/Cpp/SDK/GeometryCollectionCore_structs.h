﻿#pragma once

// Name: Mordhau, Version: Patch23


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum GeometryCollectionCore.EGeometryCollectionCacheType
enum class GeometryCollectionCore_EGeometryCollectionCacheType : uint8_t
{
	EGeometryCollectionCacheType__None = 0,
	EGeometryCollectionCacheType__Record = 1,
	EGeometryCollectionCacheType__Play = 2,
	EGeometryCollectionCacheType__RecordAndPlay = 3,
	EGeometryCollectionCacheType__EGeometryCollectionCacheType_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCollectionCore.SolverBreakingData
// 0x0030
struct FSolverBreakingData
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Velocity;                                                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AngularVelocity;                                           // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Mass;                                                      // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ParticleIndex;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ParticleIndexMesh;                                         // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GeometryCollectionCore.SolverCollisionData
// 0x006C
struct FSolverCollisionData
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AccumulatedImpulse;                                        // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Normal;                                                    // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Velocity1;                                                 // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Velocity2;                                                 // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AngularVelocity1;                                          // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AngularVelocity2;                                          // 0x0048(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Mass1;                                                     // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Mass2;                                                     // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ParticleIndex;                                             // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelsetIndex;                                             // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ParticleIndexMesh;                                         // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelsetIndexMesh;                                         // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GeometryCollectionCore.RecordedFrame
// 0x00B8
struct FRecordedFrame
{
	TArray<struct FTransform>                          Transforms;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        TransformIndices;                                          // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        PreviousTransformIndices;                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                       DisabledFlags;                                             // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSolverCollisionData>                Collisions;                                                // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSolverBreakingData>                 Breakings;                                                 // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Trailings[0x50];                                           // 0x0060(0x0050) UNKNOWN PROPERTY: SetProperty
	float                                              Timestamp;                                                 // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ENMV[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GeometryCollectionCore.RecordedTransformTrack
// 0x0010
struct FRecordedTransformTrack
{
	TArray<struct FRecordedFrame>                      Records;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GeometryCollectionCore.SolverTrailingData
// 0x0030
struct FSolverTrailingData
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Velocity;                                                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AngularVelocity;                                           // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Mass;                                                      // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ParticleIndex;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ParticleIndexMesh;                                         // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
