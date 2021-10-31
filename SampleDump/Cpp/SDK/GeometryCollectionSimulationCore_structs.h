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

// Enum GeometryCollectionSimulationCore.EEmissionPatternTypeEnum
enum class GeometryCollectionSimulationCore_EEmissionPatternTypeEnum : uint8_t
{
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_First_Frame = 0,
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_On_Demand = 1,
	EEmissionPatternTypeEnum__Chaos_Max = 2,

};

// Enum GeometryCollectionSimulationCore.EInitialVelocityTypeEnum
enum class GeometryCollectionSimulationCore_EInitialVelocityTypeEnum : uint8_t
{
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_User_Defined = 0,
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_None = 1,
	EInitialVelocityTypeEnum__Chaos_Max = 2,

};

// Enum GeometryCollectionSimulationCore.EGeometryCollectionPhysicsTypeEnum
enum class GeometryCollectionSimulationCore_EGeometryCollectionPhysicsTypeEnum : uint8_t
{
	EGeometryCollectionPhysicsTypeEnum__Chaos_AngularVelocity = 0,
	EGeometryCollectionPhysicsTypeEnum__Chaos_DynamicState = 1,
	EGeometryCollectionPhysicsTypeEnum__Chaos_LinearVelocity = 2,
	EGeometryCollectionPhysicsTypeEnum__Chaos_InitialAngularVelocity = 3,
	EGeometryCollectionPhysicsTypeEnum__Chaos_InitialLinearVelocity = 4,
	EGeometryCollectionPhysicsTypeEnum__Chaos_CollisionGroup = 5,
	EGeometryCollectionPhysicsTypeEnum__Chaos_LinearForce = 6,
	EGeometryCollectionPhysicsTypeEnum__Chaos_AngularTorque = 7,
	EGeometryCollectionPhysicsTypeEnum__Chaos_Max = 8,

};

// Enum GeometryCollectionSimulationCore.EObjectStateTypeEnum
enum class GeometryCollectionSimulationCore_EObjectStateTypeEnum : uint8_t
{
	EObjectStateTypeEnum__Chaos_NONE = 0,
	EObjectStateTypeEnum__Chaos_Object_Sleeping = 1,
	EObjectStateTypeEnum__Chaos_Object_Kinematic = 2,
	EObjectStateTypeEnum__Chaos_Object_Static = 3,
	EObjectStateTypeEnum__Chaos_Object_Dynamic = 4,
	EObjectStateTypeEnum__Chaos_Object_UserDefined = 5,
	EObjectStateTypeEnum__Chaos_Max = 6,

};

// Enum GeometryCollectionSimulationCore.EImplicitTypeEnum
enum class GeometryCollectionSimulationCore_EImplicitTypeEnum : uint8_t
{
	EImplicitTypeEnum__Chaos_Implicit_Box = 0,
	EImplicitTypeEnum__Chaos_Implicit_Sphere = 1,
	EImplicitTypeEnum__Chaos_Implicit_Capsule = 2,
	EImplicitTypeEnum__Chaos_Implicit_LevelSet = 3,
	EImplicitTypeEnum__Chaos_Implicit_None = 4,
	EImplicitTypeEnum__Chaos_Max   = 5,

};

// Enum GeometryCollectionSimulationCore.ECollisionTypeEnum
enum class GeometryCollectionSimulationCore_ECollisionTypeEnum : uint8_t
{
	ECollisionTypeEnum__Chaos_Volumetric = 0,
	ECollisionTypeEnum__Chaos_Surface_Volumetric = 1,
	ECollisionTypeEnum__Chaos_Max  = 2,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
