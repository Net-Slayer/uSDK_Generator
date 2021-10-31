#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function Mordhau.RconCommand.SendResponse
struct URconCommand_SendResponse_Params
{
	class UPlayFabJsonObject*                          ResponseObject;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClientId;                                                  // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PacketId;                                                  // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.RconCommand.RequestInfo
struct URconCommand_RequestInfo_Params
{
	int                                                ClientId;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PacketId;                                                  // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.RconCommand.ExecuteCommand
struct URconCommand_ExecuteCommand_Params
{
	struct FString                                     CommandType;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InCommand;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClientId;                                                  // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PacketId;                                                  // 0x001C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.RconCommand.CanExecuteCommand
struct URconCommand_CanExecuteCommand_Params
{
	struct FString                                     CommandType;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InCommand;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClientId;                                                  // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PacketId;                                                  // 0x001C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.TurnNotAbsolute
struct AAdvancedCharacter_TurnNotAbsolute_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.TurnAtRate
struct AAdvancedCharacter_TurnAtRate_Params
{
	float                                              Val;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.Turn
struct AAdvancedCharacter_Turn_Params
{
	float                                              Val;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAbsolute;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.Trip
struct AAdvancedCharacter_Trip_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.TraceSphericalLimbs
struct AAdvancedCharacter_TraceSphericalLimbs_Params
{
	struct FVector                                     TraceStart;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TraceEnd;                                                  // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  OutResult;                                                 // 0x0018(0x0088)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.Suicide
struct AAdvancedCharacter_Suicide_Params
{
};

// Function Mordhau.AdvancedCharacter.StopRegen
struct AAdvancedCharacter_StopRegen_Params
{
	float                                              ExtraTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.StopMontage
struct AAdvancedCharacter_StopMontage_Params
{
	class UAnimMontage*                                Montage;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOut;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.StopHealthRegen
struct AAdvancedCharacter_StopHealthRegen_Params
{
	float                                              ExtraTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.StopAnim
struct AAdvancedCharacter_StopAnim_Params
{
	float                                              FadeOut;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.StartRagdollWithBlend
struct AAdvancedCharacter_StartRagdollWithBlend_Params
{
	float                                              BlendDuration;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.StartRagdoll
struct AAdvancedCharacter_StartRagdoll_Params
{
};

// Function Mordhau.AdvancedCharacter.SpawnParticlesAttached
struct AAdvancedCharacter_SpawnParticlesAttached_Params
{
	class UParticleSystem*                             Particle;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0014(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttachLocation>                AttachType;                                                // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Socket;                                                    // 0x0024(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    ReturnValue;                                               // 0x0030(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.SetOnSmoke
struct AAdvancedCharacter_SetOnSmoke_Params
{
	class AMasterField*                                SmokeField;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.SetMaxAnimBlendWeight
struct AAdvancedCharacter_SetMaxAnimBlendWeight_Params
{
	class UAnimMontage*                                Montage;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAmount;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.SetLookLagInductionTarget
struct AAdvancedCharacter_SetLookLagInductionTarget_Params
{
	float                                              Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChangeSpeed;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.SetLocationLagInductionTarget
struct AAdvancedCharacter_SetLocationLagInductionTarget_Params
{
	float                                              Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChangeSpeed;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.SetIsRagdollFalling
struct AAdvancedCharacter_SetIsRagdollFalling_Params
{
	bool                                               bInIsRagdollFalling;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.SetAnimRate
struct AAdvancedCharacter_SetAnimRate_Params
{
	class UAnimMontage*                                Montage;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewRate;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.SetAnimPosition
struct AAdvancedCharacter_SetAnimPosition_Params
{
	class UAnimMontage*                                Montage;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewPosition;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.SetAdditiveOverrideType
struct AAdvancedCharacter_SetAdditiveOverrideType_Params
{
	struct FName                                       NewType;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.ServerTrip
struct AAdvancedCharacter_ServerTrip_Params
{
};

// Function Mordhau.AdvancedCharacter.ServerSuicide
struct AAdvancedCharacter_ServerSuicide_Params
{
};

// Function Mordhau.AdvancedCharacter.ServerLookUp
struct AAdvancedCharacter_ServerLookUp_Params
{
	float                                              NewLookUp;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.ResetLookLagInductionTarget
struct AAdvancedCharacter_ResetLookLagInductionTarget_Params
{
};

// Function Mordhau.AdvancedCharacter.ResetLocationLagInductionTarget
struct AAdvancedCharacter_ResetLocationLagInductionTarget_Params
{
};

// Function Mordhau.AdvancedCharacter.ResetLagInductionTargets
struct AAdvancedCharacter_ResetLagInductionTargets_Params
{
};

// Function Mordhau.AdvancedCharacter.ResetAdditiveOverrideType
struct AAdvancedCharacter_ResetAdditiveOverrideType_Params
{
};

// Function Mordhau.AdvancedCharacter.RequestTrip
struct AAdvancedCharacter_RequestTrip_Params
{
};

// Function Mordhau.AdvancedCharacter.RequestSuicide
struct AAdvancedCharacter_RequestSuicide_Params
{
};

// Function Mordhau.AdvancedCharacter.RequestMeshEnablePhysics
struct AAdvancedCharacter_RequestMeshEnablePhysics_Params
{
	float                                              Duration;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.RegisterMaterialToDissolve
struct AAdvancedCharacter_RegisterMaterialToDissolve_Params
{
	class UMaterialInstanceDynamic*                    Mat;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.ReceiveMordhauDamage
struct AAdvancedCharacter_ReceiveMordhauDamage_Params
{
	float                                              Damage;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  HitResult;                                                 // 0x0004(0x0088)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	Mordhau_EMordhauDamageType                         DamageType;                                                // 0x008C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SubDamageType;                                             // 0x008D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Source;                                                    // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Agent;                                                     // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 EventInstigator;                                           // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.PlayHitEffectParticle
struct AAdvancedCharacter_PlayHitEffectParticle_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       bone;                                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFindOptimalSpot;                                          // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.PlayCharacterSound
struct AAdvancedCharacter_PlayCharacterSound_Params
{
	class USoundBase*                                  Sound;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bone;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InLocation;                                                // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttachLocation>                AttachLocation;                                            // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttach;                                                   // 0x001D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                           Override;                                                  // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumeMultiplier;                                          // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchMultiplier;                                           // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                             ReturnValue;                                               // 0x0030(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.PlayAnim
struct AAdvancedCharacter_PlayAnim_Params
{
	class UAnimMontage*                                Montage;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopExistingMontages;                                     // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.OnTookDamage
struct AAdvancedCharacter_OnTookDamage_Params
{
	bool                                               bWillKill;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SubType;                                                   // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bone;                                                      // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Point;                                                     // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Source;                                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Agent;                                                     // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.OnRep_Team
struct AAdvancedCharacter_OnRep_Team_Params
{
};

// Function Mordhau.AdvancedCharacter.OnRep_SpawnTurnValue
struct AAdvancedCharacter_OnRep_SpawnTurnValue_Params
{
};

// Function Mordhau.AdvancedCharacter.OnRep_ReplicatedLookUpValue
struct AAdvancedCharacter_OnRep_ReplicatedLookUpValue_Params
{
};

// Function Mordhau.AdvancedCharacter.OnRep_ReplicatedHealth
struct AAdvancedCharacter_OnRep_ReplicatedHealth_Params
{
};

// Function Mordhau.AdvancedCharacter.OnRep_ReplicatedCharacterFlags
struct AAdvancedCharacter_OnRep_ReplicatedCharacterFlags_Params
{
	unsigned char                                      OldValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.OnRep_NetDamage
struct AAdvancedCharacter_OnRep_NetDamage_Params
{
};

// Function Mordhau.AdvancedCharacter.OnKilled
struct AAdvancedCharacter_OnKilled_Params
{
	class AController*                                 EventInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.OnHit
struct AAdvancedCharacter_OnHit_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bone;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldLocation;                                             // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Tier;                                                      // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SurfaceType;                                               // 0x001D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.OnHealthChanged
struct AAdvancedCharacter_OnHealthChanged_Params
{
};

// Function Mordhau.AdvancedCharacter.OnDied
struct AAdvancedCharacter_OnDied_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SubType;                                                   // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bone;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Point;                                                     // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Source;                                                    // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Agent;                                                     // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.OnCosmeticHit
struct AAdvancedCharacter_OnCosmeticHit_Params
{
	Mordhau_EMordhauDamageType                         DamageType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SubType;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // 0x0004(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                      Agent;                                                     // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.OnAfterDied
struct AAdvancedCharacter_OnAfterDied_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SubType;                                                   // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bone;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Point;                                                     // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Source;                                                    // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Agent;                                                     // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.OffsetHealth
struct AAdvancedCharacter_OffsetHealth_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReplicate;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.MoveRight
struct AAdvancedCharacter_MoveRight_Params
{
	float                                              Val;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.MoveForward
struct AAdvancedCharacter_MoveForward_Params
{
	float                                              Val;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.MordhauTakeDamage
struct AAdvancedCharacter_MordhauTakeDamage_Params
{
	float                                              DamageAmount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // 0x0004(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	Mordhau_EMordhauDamageType                         DamageType;                                                // 0x008C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DamageSubType;                                             // 0x008D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Source;                                                    // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Agent;                                                     // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 EventInstigator;                                           // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x00A8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.ModifyDamage
struct AAdvancedCharacter_ModifyDamage_Params
{
	float                                              DamageAmount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMordhauDamageInfo                          DamageInfo;                                                // 0x0008(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AController*                                 EventInstigator;                                           // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x00B8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.LookUpNotAbsolute
struct AAdvancedCharacter_LookUpNotAbsolute_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.LookUpAtRate
struct AAdvancedCharacter_LookUpAtRate_Params
{
	float                                              Val;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.LookUp
struct AAdvancedCharacter_LookUp_Params
{
	float                                              Val;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAbsolute;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.Knockback
struct AAdvancedCharacter_Knockback_Params
{
	struct FVector                                     Amount;                                                    // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.IsViewTarget
struct AAdvancedCharacter_IsViewTarget_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.IsPlayerControlledIncludingVehicle
struct AAdvancedCharacter_IsPlayerControlledIncludingVehicle_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.IsLocallyPlayerControlledIncludingVehicle
struct AAdvancedCharacter_IsLocallyPlayerControlledIncludingVehicle_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.IsLocallyPlayerControlled
struct AAdvancedCharacter_IsLocallyPlayerControlled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.IsLocallyControlledOrUncontrolled
struct AAdvancedCharacter_IsLocallyControlledOrUncontrolled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.IsLocallyControlledIncludingVehicle
struct AAdvancedCharacter_IsLocallyControlledIncludingVehicle_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.IsLastDismemberedBonePartial
struct AAdvancedCharacter_IsLastDismemberedBonePartial_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.IsLastDismemberedBoneBluntForce
struct AAdvancedCharacter_IsLastDismemberedBoneBluntForce_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.IsAnimActive
struct AAdvancedCharacter_IsAnimActive_Params
{
	class UAnimMontage*                                Montage;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.IsAirborne
struct AAdvancedCharacter_IsAirborne_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.GetRawLookUpValue
struct AAdvancedCharacter_GetRawLookUpValue_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.GetMotion
struct AAdvancedCharacter_GetMotion_Params
{
	class UMordhauMotion*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.GetLookUpValue
struct AAdvancedCharacter_GetLookUpValue_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.GetLastNetDamageType
struct AAdvancedCharacter_GetLastNetDamageType_Params
{
	Mordhau_EMordhauDamageType                         ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.GetLastNetDamageSource
struct AAdvancedCharacter_GetLastNetDamageSource_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.GetLastDismemberedBoneForceDir
struct AAdvancedCharacter_GetLastDismemberedBoneForceDir_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.GetIsDead
struct AAdvancedCharacter_GetIsDead_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.GetDistanceIntoSmokeFieldSmoothed
struct AAdvancedCharacter_GetDistanceIntoSmokeFieldSmoothed_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.GetDistanceIntoSmokeField
struct AAdvancedCharacter_GetDistanceIntoSmokeField_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.GetControllerIncludingVehicle
struct AAdvancedCharacter_GetControllerIncludingVehicle_Params
{
	class AController*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.GetBestStickyLocation
struct AAdvancedCharacter_GetBestStickyLocation_Params
{
	struct FVector                                     InLocation;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutLocation;                                               // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutNormal;                                                 // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       OutBone;                                                   // 0x0024(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.GetArmorTierForBone
struct AAdvancedCharacter_GetArmorTierForBone_Params
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.GetAnimWeight
struct AAdvancedCharacter_GetAnimWeight_Params
{
	class UAnimMontage*                                Montage;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.GetAdditiveOverrideTypeNormalizedTime
struct AAdvancedCharacter_GetAdditiveOverrideTypeNormalizedTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.GetAdditiveOverrideType
struct AAdvancedCharacter_GetAdditiveOverrideType_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.CanBleedOutFromHit
struct AAdvancedCharacter_CanBleedOutFromHit_Params
{
	struct FHitResult                                  HitResult;                                                 // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0088(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SubType;                                                   // 0x0089(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Source;                                                    // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Agent;                                                     // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 EventInstigator;                                           // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00A8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.BPLODTick
struct AAdvancedCharacter_BPLODTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.BP_PlayCharacterSound
struct AAdvancedCharacter_BP_PlayCharacterSound_Params
{
	class USoundBase*                                  Sound;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bone;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttachLocation>                AttachLocation;                                            // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttach;                                                   // 0x001D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                             ReturnValue;                                               // 0x0020(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.BoostAnimBlendWeight
struct AAdvancedCharacter_BoostAnimBlendWeight_Params
{
	class UAnimMontage*                                Montage;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BoostAmount;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.BeginFlinchAdditiveOverride
struct AAdvancedCharacter_BeginFlinchAdditiveOverride_Params
{
	struct FName                                       FlinchOverrideName;                                        // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AltFlinchOverrideName;                                     // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Degree;                                                    // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsHead;                                                   // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SnapDegreeToSteps;                                         // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.ApplyRagdollForce
struct AAdvancedCharacter_ApplyRagdollForce_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SubType;                                                   // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bone;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Point;                                                     // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Source;                                                    // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Agent;                                                     // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.AddWound
struct AAdvancedCharacter_AddWound_Params
{
	struct FVector                                     ImpactPoint;                                               // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ImpactNormal;                                              // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bone;                                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Agent;                                                     // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EMordhauDamageType                         DamageType;                                                // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DamageSubType;                                             // 0x0029(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AdvancedCharacter.AddTurnDegrees
struct AAdvancedCharacter_AddTurnDegrees_Params
{
	float                                              Delta;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventoryItem.MarkSeen
struct UMordhauInventoryItem_MarkSeen_Params
{
};

// Function Mordhau.MordhauInventoryItem.GetWasSeen
struct UMordhauInventoryItem_GetWasSeen_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ArmsWearable.GetHandsWearablesNum
struct UArmsWearable_GetHandsWearablesNum_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ArmsWearable.GetHandsWearable
struct UArmsWearable_GetHandsWearable_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMotion.ProcessFeint
struct UMordhauMotion_ProcessFeint_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMotion.ProcessBlock
struct UMordhauMotion_ProcessBlock_Params
{
	Mordhau_EBlockType                                 Type;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMotion.ProcessAttack
struct UMordhauMotion_ProcessAttack_Params
{
	Mordhau_EAttackMove                                Move;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Angle;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMotion.OnTick
struct UMordhauMotion_OnTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMotion.OnLeave
struct UMordhauMotion_OnLeave_Params
{
	bool                                               Interrupted;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMotion.OnLateTick
struct UMordhauMotion_OnLateTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMotion.OnEnded
struct UMordhauMotion_OnEnded_Params
{
};

// Function Mordhau.MordhauMotion.OnDynamicParamChanged
struct UMordhauMotion_OnDynamicParamChanged_Params
{
	unsigned char                                      OldValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NewValue;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMotion.OnBegin
struct UMordhauMotion_OnBegin_Params
{
};

// Function Mordhau.MordhauMotion.HasAuthority
struct UMordhauMotion_HasAuthority_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMotion.GetWorld
struct UMordhauMotion_GetWorld_Params
{
	class UWorld*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMotion.GetOwnerMordhauCharacter
struct UMordhauMotion_GetOwnerMordhauCharacter_Params
{
	class AMordhauCharacter*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMotion.GetOwnerAdvancedCharacter
struct UMordhauMotion_GetOwnerAdvancedCharacter_Params
{
	class AAdvancedCharacter*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMotion.GetOwnerActor
struct UMordhauMotion_GetOwnerActor_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMotion.GetOwner
struct UMordhauMotion_GetOwner_Params
{
	class UMotionSystemComponent*                      ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMotion.GetIsFirstPerson
struct UMordhauMotion_GetIsFirstPerson_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMotion.CanInitiateMotion
struct UMordhauMotion_CanInitiateMotion_Params
{
	class UClass*                                      NewMotionType;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AttackMotion.ShouldStunOnHit
struct UAttackMotion_ShouldStunOnHit_Params
{
	class UMotionSystemComponent*                      OtherComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AttackMotion.SetHasHitIncludingCosmeticHit
struct UAttackMotion_SetHasHitIncludingCosmeticHit_Params
{
	bool                                               bPlayHitShake;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AttackMotion.PrepareAnimationData
struct UAttackMotion_PrepareAnimationData_Params
{
};

// Function Mordhau.AttackMotion.OverrideTrace
struct UAttackMotion_OverrideTrace_Params
{
	struct FVector                                     OutStart;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutEnd;                                                    // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AttackMotion.OverrideIsUsingAdditionalTracers
struct UAttackMotion_OverrideIsUsingAdditionalTracers_Params
{
	bool                                               OutResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AttackMotion.OverrideAdditionalTrace
struct UAttackMotion_OverrideAdditionalTrace_Params
{
	struct FVector                                     OutStart;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutEnd;                                                    // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AttackMotion.ModifyAttackInfo
struct UAttackMotion_ModifyAttackInfo_Params
{
};

// Function Mordhau.AttackMotion.FindWeapon
struct UAttackMotion_FindWeapon_Params
{
	class AMordhauWeapon*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.AttackMotion.ComputeWindup
struct UAttackMotion_ComputeWindup_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.BotProfile.AssignToController
struct UBotProfile_AssignToController_Params
{
	class AMordhauAIController*                        Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Bounds.OnExceededTimeOutOfBounds
struct UBounds_OnExceededTimeOutOfBounds_Params
{
};

// Function Mordhau.Bounds.LeftOutOfBoundsArea
struct UBounds_LeftOutOfBoundsArea_Params
{
};

// Function Mordhau.Bounds.IsOutOfBounds
struct UBounds_IsOutOfBounds_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Bounds.IsAllowedOutOfBounds
struct UBounds_IsAllowedOutOfBounds_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Bounds.GetOutOfBoundsTimeUntilDeath
struct UBounds_GetOutOfBoundsTimeUntilDeath_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Bounds.EnteredOutOfBoundsArea
struct UBounds_EnteredOutOfBoundsArea_Params
{
	class UObject*                                     WCO;                                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.BuildablePlaneTrace.GetPlacementAngleAndRotation
struct UBuildablePlaneTrace_GetPlacementAngleAndRotation_Params
{
	struct FSpawnablePlaneTraceResult                  OutTraceResult;                                            // 0x0000(0x0270)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSpawnableObjectInfo                        ObjectInfo;                                                // 0x0270(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              OutAngle;                                                  // 0x0308(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    OutRotation;                                               // 0x030C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.BuildablePlaneTrace.DrawDebugPlane
struct UBuildablePlaneTrace_DrawDebugPlane_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Forward;                                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Back;                                                      // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Right;                                                     // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Left;                                                      // 0x002C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InTraceAmount;                                             // 0x0038(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EDrawDebugTrace>                DrawDebugType;                                             // 0x0044(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.BuildingSystemComponent.ValidateSpot
struct UBuildingSystemComponent_ValidateSpot_Params
{
	struct FVector                                     Offset;                                                    // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutLocation;                                               // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    OutRotation;                                               // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class USceneComponent*                             AttachToComponent;                                         // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBuildableTraceBase*                         BuildableTraceHit;                                         // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpawnableObjectIndex;                                      // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawObjectPreview;                                        // 0x003C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceFail;                                                // 0x003D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x003E(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.BuildingSystemComponent.SetupMeshPreview
struct UBuildingSystemComponent_SetupMeshPreview_Params
{
};

// Function Mordhau.BuildingSystemComponent.GetEquipmentPlaceableMaxLimit
struct UBuildingSystemComponent_GetEquipmentPlaceableMaxLimit_Params
{
	int                                                SpawnableObjectIndex;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.BuildingSystemComponent.GetEquipmentPlaceableLimitName
struct UBuildingSystemComponent_GetEquipmentPlaceableLimitName_Params
{
	int                                                SpawnableObjectIndex;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.BuildingSystemComponent.GetEquipmentInfo
struct UBuildingSystemComponent_GetEquipmentInfo_Params
{
	int                                                SpawnableObjectIndex;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSpawnableObjectInfo                        ReturnValue;                                               // 0x0008(0x0098)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.BuildingSystemComponent.GetEquipmentDisplayName
struct UBuildingSystemComponent_GetEquipmentDisplayName_Params
{
	int                                                SpawnableObjectIndex;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.BuildingSystemComponent.GetEquipmentAmmoCost
struct UBuildingSystemComponent_GetEquipmentAmmoCost_Params
{
	int                                                SpawnableObjectIndex;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.BuildingSystemComponent.DisplayPreview
struct UBuildingSystemComponent_DisplayPreview_Params
{
	bool                                               bDrawObjectPreview;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsValid;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSpawnableObjectInfo                        ObjectInfo;                                                // 0x0008(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  ObjectTransform;                                           // 0x00A0(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                SpawnableObjectIndex;                                      // 0x00D0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.BuildingSystemComponent.DestroyMeshPreview
struct UBuildingSystemComponent_DestroyMeshPreview_Params
{
};

// Function Mordhau.BuildingSystemComponent.AddStaticMeshPreviewIfNone
struct UBuildingSystemComponent_AddStaticMeshPreviewIfNone_Params
{
	class UStaticMesh*                                 StaticMesh;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.BuildingSystemComponent.AddSkeletalMeshPreviewIfNone
struct UBuildingSystemComponent_AddSkeletalMeshPreviewIfNone_Params
{
	class USkeletalMesh*                               SkeletalMesh;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.BurnableComponent.StopBurningCosmetic
struct UBurnableComponent_StopBurningCosmetic_Params
{
};

// Function Mordhau.BurnableComponent.StartBurningCosmetic
struct UBurnableComponent_StartBurningCosmetic_Params
{
};

// Function Mordhau.BurnableComponent.StartBurning
struct UBurnableComponent_StartBurning_Params
{
	float                                              Duration;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Tick;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageAgent;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 InstigatorController;                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.BurnableComponent.SetOnFire
struct UBurnableComponent_SetOnFire_Params
{
	class AMasterField*                                FireField;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.BurnableComponent.GetIsBurning
struct UBurnableComponent_GetIsBurning_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.BurnableComponent.DouseFire
struct UBurnableComponent_DouseFire_Params
{
};

// Function Mordhau.VehicleBase.SpawnParticlesAttached
struct AVehicleBase_SpawnParticlesAttached_Params
{
	class UParticleSystem*                             Particle;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0014(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttachLocation>                AttachType;                                                // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Socket;                                                    // 0x0024(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    ReturnValue;                                               // 0x0030(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.VehicleBase.Server_Unreliable_LookUp
struct AVehicleBase_Server_Unreliable_LookUp_Params
{
	float                                              NewLookUp;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.VehicleBase.Server_SetRight
struct AVehicleBase_Server_SetRight_Params
{
	float                                              InRight;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.VehicleBase.Server_SetForward
struct AVehicleBase_Server_SetForward_Params
{
	float                                              InForward;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.VehicleBase.Server_Reliable_RequestUse
struct AVehicleBase_Server_Reliable_RequestUse_Params
{
};

// Function Mordhau.VehicleBase.PostInteractionWidgetCreated
struct AVehicleBase_PostInteractionWidgetCreated_Params
{
};

// Function Mordhau.VehicleBase.PlaySound
struct AVehicleBase_PlaySound_Params
{
	class USoundBase*                                  Sound;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bone;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InLocation;                                                // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttachLocation>                AttachLocation;                                            // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttach;                                                   // 0x001D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                           Override;                                                  // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumeMultiplier;                                          // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchMultiplier;                                           // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                             ReturnValue;                                               // 0x0030(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.VehicleBase.OnTookDamage
struct AVehicleBase_OnTookDamage_Params
{
	bool                                               bWillKill;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SubType;                                                   // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bone;                                                      // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Point;                                                     // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Source;                                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Agent;                                                     // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.VehicleBase.OnRep_ReplicatedVehicleFlags
struct AVehicleBase_OnRep_ReplicatedVehicleFlags_Params
{
};

// Function Mordhau.VehicleBase.OnRep_ReplicatedLookUpValue
struct AVehicleBase_OnRep_ReplicatedLookUpValue_Params
{
};

// Function Mordhau.VehicleBase.OnRep_LatestState
struct AVehicleBase_OnRep_LatestState_Params
{
};

// Function Mordhau.VehicleBase.OnDied
struct AVehicleBase_OnDied_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SubType;                                                   // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bone;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Point;                                                     // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Source;                                                    // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Agent;                                                     // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.VehicleBase.OnDeath
struct AVehicleBase_OnDeath_Params
{
};

// Function Mordhau.VehicleBase.NetStateSend
struct AVehicleBase_NetStateSend_Params
{
};

// Function Mordhau.VehicleBase.LookUpNotAbsolute
struct AVehicleBase_LookUpNotAbsolute_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.VehicleBase.LookUpAtRate
struct AVehicleBase_LookUpAtRate_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.VehicleBase.LookUp
struct AVehicleBase_LookUp_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAbsolute;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.VehicleBase.GetRawLookUpValue
struct AVehicleBase_GetRawLookUpValue_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.VehicleBase.GetLookUpValue
struct AVehicleBase_GetLookUpValue_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.VehicleBase.GetDriver
struct AVehicleBase_GetDriver_Params
{
	class AMordhauCharacter*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CapturePointBanner.UpdateVisuals
struct ACapturePointBanner_UpdateVisuals_Params
{
};

// Function Mordhau.CapturePointBanner.InitializeBanner
struct ACapturePointBanner_InitializeBanner_Params
{
	class AControlPoint*                               OwningPoint;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterMeshComponent.OnCharacterStoppedRagdollFalling
struct UCharacterMeshComponent_OnCharacterStoppedRagdollFalling_Params
{
};

// Function Mordhau.CharacterMeshComponent.OnCharacterStartedRagdollFalling
struct UCharacterMeshComponent_OnCharacterStartedRagdollFalling_Params
{
};

// Function Mordhau.CharacterMeshComponent.OnCharacterLODTick
struct UCharacterMeshComponent_OnCharacterLODTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterMeshComponent.OnCharacterDied
struct UCharacterMeshComponent_OnCharacterDied_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.TogglePerk
struct UCharacterProfileBPWrapper_TogglePerk_Params
{
	unsigned char                                      Perk;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetWearablePattern
struct UCharacterProfileBPWrapper_SetWearablePattern_Params
{
	unsigned char                                      Slot;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NewPattern;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetWearableId
struct UCharacterProfileBPWrapper_SetWearableId_Params
{
	unsigned char                                      Slot;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NewId;                                                     // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetWearableColor
struct UCharacterProfileBPWrapper_SetWearableColor_Params
{
	unsigned char                                      Slot;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ColorIdx;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NewColor;                                                  // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetVoicePitch
struct UCharacterProfileBPWrapper_SetVoicePitch_Params
{
	unsigned char                                      NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetVoice
struct UCharacterProfileBPWrapper_SetVoice_Params
{
	unsigned char                                      NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetStrong
struct UCharacterProfileBPWrapper_SetStrong_Params
{
	unsigned char                                      NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetSkinny
struct UCharacterProfileBPWrapper_SetSkinny_Params
{
	unsigned char                                      NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetSkinColor
struct UCharacterProfileBPWrapper_SetSkinColor_Params
{
	unsigned char                                      NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetProfileName
struct UCharacterProfileBPWrapper_SetProfileName_Params
{
	struct FText                                       NewName;                                                   // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetProfileCategory
struct UCharacterProfileBPWrapper_SetProfileCategory_Params
{
	struct FString                                     NewCategory;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetMetalTint
struct UCharacterProfileBPWrapper_SetMetalTint_Params
{
	unsigned char                                      NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetMetalRoughnessScale
struct UCharacterProfileBPWrapper_SetMetalRoughnessScale_Params
{
	unsigned char                                      NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetIsFemale
struct UCharacterProfileBPWrapper_SetIsFemale_Params
{
	bool                                               bNewValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetHairColor
struct UCharacterProfileBPWrapper_SetHairColor_Params
{
	unsigned char                                      NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetHair
struct UCharacterProfileBPWrapper_SetHair_Params
{
	unsigned char                                      NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetFat
struct UCharacterProfileBPWrapper_SetFat_Params
{
	unsigned char                                      NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetFacialHair
struct UCharacterProfileBPWrapper_SetFacialHair_Params
{
	unsigned char                                      NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetFace
struct UCharacterProfileBPWrapper_SetFace_Params
{
	unsigned char                                      NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetEyeColor
struct UCharacterProfileBPWrapper_SetEyeColor_Params
{
	unsigned char                                      NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetEyebrows
struct UCharacterProfileBPWrapper_SetEyebrows_Params
{
	unsigned char                                      NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetEquipmentSkin
struct UCharacterProfileBPWrapper_SetEquipmentSkin_Params
{
	unsigned char                                      Slot;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NewSkin;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetEquipmentPattern
struct UCharacterProfileBPWrapper_SetEquipmentPattern_Params
{
	unsigned char                                      Slot;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NewPattern;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetEquipmentPartId
struct UCharacterProfileBPWrapper_SetEquipmentPartId_Params
{
	unsigned char                                      Slot;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PartIdx;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NewPartId;                                                 // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetEquipmentId
struct UCharacterProfileBPWrapper_SetEquipmentId_Params
{
	unsigned char                                      Slot;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NewId;                                                     // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetEquipmentCustomizationDirect
struct UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect_Params
{
	unsigned char                                      Slot;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEquipmentCustomization                     NewCustomization;                                          // 0x0008(0x0030)  (Parm, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetEquipmentColor
struct UCharacterProfileBPWrapper_SetEquipmentColor_Params
{
	unsigned char                                      Slot;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ColorIdx;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NewColor;                                                  // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetEmblemColor
struct UCharacterProfileBPWrapper_SetEmblemColor_Params
{
	unsigned char                                      ColorIdx;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NewValue;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetEmblem
struct UCharacterProfileBPWrapper_SetEmblem_Params
{
	unsigned char                                      NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.SetAge
struct UCharacterProfileBPWrapper_SetAge_Params
{
	unsigned char                                      NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.RemoveAllEquipment
struct UCharacterProfileBPWrapper_RemoveAllEquipment_Params
{
};

// Function Mordhau.CharacterProfileBPWrapper.HasPerk
struct UCharacterProfileBPWrapper_HasPerk_Params
{
	unsigned char                                      Perk;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterProfileBPWrapper.ForceValidate
struct UCharacterProfileBPWrapper_ForceValidate_Params
{
};

// Function Mordhau.CharacterVoiceComponent.UpdateVoiceDataFromCharacter
struct UCharacterVoiceComponent_UpdateVoiceDataFromCharacter_Params
{
};

// Function Mordhau.CharacterVoiceComponent.OnVoiceCommandReplicated
struct UCharacterVoiceComponent_OnVoiceCommandReplicated_Params
{
};

// Function Mordhau.CharacterVoiceComponent.OnTakeDamage
struct UCharacterVoiceComponent_OnTakeDamage_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMordhauDamageInfo                          DamageInfo;                                                // 0x0008(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AController*                                 EventInstigator;                                           // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // 0x00B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterVoiceComponent.OnLODTick
struct UCharacterVoiceComponent_OnLODTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterVoiceComponent.OnCharacterDied
struct UCharacterVoiceComponent_OnCharacterDied_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CharacterVoiceComponent.OnCharacterBuilt
struct UCharacterVoiceComponent_OnCharacterBuilt_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ComboBoxText.SetSelectedOption
struct UComboBoxText_SetSelectedOption_Params
{
	struct FText                                       Option;                                                    // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
};

// Function Mordhau.ComboBoxText.RemoveOption
struct UComboBoxText_RemoveOption_Params
{
	struct FText                                       Option;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ComboBoxText.RefreshOptions
struct UComboBoxText_RefreshOptions_Params
{
};

// DelegateFunction Mordhau.ComboBoxText.OnSelectionChangedEvent__DelegateSignature
struct UComboBoxText_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FText                                       SelectedItem;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Mordhau.ComboBoxText.OnOpeningEvent__DelegateSignature
struct UComboBoxText_OnOpeningEvent__DelegateSignature_Params
{
};

// Function Mordhau.ComboBoxText.GetSelectedOption
struct UComboBoxText_GetSelectedOption_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.ComboBoxText.GetOptionCount
struct UComboBoxText_GetOptionCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ComboBoxText.GetOptionAtIndex
struct UComboBoxText_GetOptionAtIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.ComboBoxText.FindOptionIndex
struct UComboBoxText_FindOptionIndex_Params
{
	struct FText                                       Option;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ComboBoxText.ClearSelection
struct UComboBoxText_ClearSelection_Params
{
};

// Function Mordhau.ComboBoxText.ClearOptions
struct UComboBoxText_ClearOptions_Params
{
};

// Function Mordhau.ComboBoxText.AddOption
struct UComboBoxText_AddOption_Params
{
	struct FText                                       Option;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.ControlPoint.UpdateVisuals
struct AControlPoint_UpdateVisuals_Params
{
};

// Function Mordhau.ControlPoint.UpdateUIWidgets
struct AControlPoint_UpdateUIWidgets_Params
{
};

// Function Mordhau.ControlPoint.UpdateUIMaterialInstance
struct AControlPoint_UpdateUIMaterialInstance_Params
{
};

// Function Mordhau.ControlPoint.UpdatePresenceNumbers
struct AControlPoint_UpdatePresenceNumbers_Params
{
};

// Function Mordhau.ControlPoint.UpdateCaptureProgress
struct AControlPoint_UpdateCaptureProgress_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ControlPoint.SetOwningTeam
struct AControlPoint_SetOwningTeam_Params
{
	unsigned char                                      NewTeam;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ControlPoint.SetCapturingTeam
struct AControlPoint_SetCapturingTeam_Params
{
	unsigned char                                      NewTeam;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ControlPoint.SetCaptureProgress
struct AControlPoint_SetCaptureProgress_Params
{
	float                                              NewProgress;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NewCaptor;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAwardScore;                                               // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ControlPoint.OnStoppedFlashing
struct AControlPoint_OnStoppedFlashing_Params
{
};

// Function Mordhau.ControlPoint.OnStartedFlashing
struct AControlPoint_OnStartedFlashing_Params
{
};

// Function Mordhau.ControlPoint.OnRep_ReplicatedCaptureProgress
struct AControlPoint_OnRep_ReplicatedCaptureProgress_Params
{
};

// Function Mordhau.ControlPoint.OnRep_OwningTeam
struct AControlPoint_OnRep_OwningTeam_Params
{
};

// Function Mordhau.ControlPoint.OnRep_CapturingTeam
struct AControlPoint_OnRep_CapturingTeam_Params
{
};

// Function Mordhau.ControlPoint.OnOwningTeamChanged
struct AControlPoint_OnOwningTeamChanged_Params
{
};

// Function Mordhau.ControlPoint.OnCapturingTeamChanged
struct AControlPoint_OnCapturingTeamChanged_Params
{
};

// Function Mordhau.ControlPoint.OnCaptureAreaEndOverlap
struct AControlPoint_OnCaptureAreaEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Other;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ControlPoint.OnCaptureAreaBeginOverlap
struct AControlPoint_OnCaptureAreaBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Other;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Mordhau.ControlPoint.EnemyLostPrerequisites
struct AControlPoint_EnemyLostPrerequisites_Params
{
};

// Function Mordhau.ControlPoint.EnemyGainedPrerequisites
struct AControlPoint_EnemyGainedPrerequisites_Params
{
};

// Function Mordhau.ControlPoint.CanCapture
struct AControlPoint_CanCapture_Params
{
	unsigned char                                      Team;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CreatureAnimInstance.DoFootstep
struct UCreatureAnimInstance_DoFootstep_Params
{
	int                                                Limb;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CrowdObstacleComponent.UnregisterObstacle
struct UCrowdObstacleComponent_UnregisterObstacle_Params
{
};

// Function Mordhau.CrowdObstacleComponent.RegisterObstacle
struct UCrowdObstacleComponent_RegisterObstacle_Params
{
};

// Function Mordhau.CustomizationReplicationActor.UpdateCharacterProfile
struct ACustomizationReplicationActor_UpdateCharacterProfile_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CustomizationReplicationActor.UnregisterCharacter
struct ACustomizationReplicationActor_UnregisterCharacter_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CustomizationReplicationActor.TriggerUpdateIfUpToDate
struct ACustomizationReplicationActor_TriggerUpdateIfUpToDate_Params
{
};

// Function Mordhau.CustomizationReplicationActor.RegisterCharacter
struct ACustomizationReplicationActor_RegisterCharacter_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CustomizationReplicationActor.OnRep_ReplicatedWearablePattern
struct ACustomizationReplicationActor_OnRep_ReplicatedWearablePattern_Params
{
};

// Function Mordhau.CustomizationReplicationActor.OnRep_ReplicatedWearableId
struct ACustomizationReplicationActor_OnRep_ReplicatedWearableId_Params
{
};

// Function Mordhau.CustomizationReplicationActor.OnRep_ReplicatedWearableColor2
struct ACustomizationReplicationActor_OnRep_ReplicatedWearableColor2_Params
{
};

// Function Mordhau.CustomizationReplicationActor.OnRep_ReplicatedWearableColor1
struct ACustomizationReplicationActor_OnRep_ReplicatedWearableColor1_Params
{
};

// Function Mordhau.CustomizationReplicationActor.OnRep_ReplicatedSkillsCustomization
struct ACustomizationReplicationActor_OnRep_ReplicatedSkillsCustomization_Params
{
};

// Function Mordhau.CustomizationReplicationActor.OnRep_ReplicatedFaceBonesTranslate
struct ACustomizationReplicationActor_OnRep_ReplicatedFaceBonesTranslate_Params
{
};

// Function Mordhau.CustomizationReplicationActor.OnRep_ReplicatedFaceBonesScale
struct ACustomizationReplicationActor_OnRep_ReplicatedFaceBonesScale_Params
{
};

// Function Mordhau.CustomizationReplicationActor.OnRep_ReplicatedFaceBonesRotate
struct ACustomizationReplicationActor_OnRep_ReplicatedFaceBonesRotate_Params
{
};

// Function Mordhau.CustomizationReplicationActor.OnRep_ReplicatedDefaultEquipmentId
struct ACustomizationReplicationActor_OnRep_ReplicatedDefaultEquipmentId_Params
{
};

// Function Mordhau.CustomizationReplicationActor.OnRep_ReplicatedAppearanceCustomization
struct ACustomizationReplicationActor_OnRep_ReplicatedAppearanceCustomization_Params
{
};

// Function Mordhau.CustomizationReplicationActor.IsUpToDate
struct ACustomizationReplicationActor_IsUpToDate_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CustomizationReplicationActor.AssignDataFromProfile
struct ACustomizationReplicationActor_AssignDataFromProfile_Params
{
	struct FCharacterProfile                           Profile;                                                   // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.DamageableComponent.OnTookDamage
struct UDamageableComponent_OnTookDamage_Params
{
	bool                                               bWillKill;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SubType;                                                   // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bone;                                                      // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Point;                                                     // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Source;                                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Agent;                                                     // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.DamageableComponent.OnTakeDamage
struct UDamageableComponent_OnTakeDamage_Params
{
	float                                              DamageAmount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMordhauDamageInfo                          DamageInfo;                                                // 0x0008(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AController*                                 EventInstigator;                                           // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // 0x00B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x00C0(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.DamageableComponent.OnRep_NetDamage
struct UDamageableComponent_OnRep_NetDamage_Params
{
};

// Function Mordhau.DamageableComponent.OnPostTakeDamage
struct UDamageableComponent_OnPostTakeDamage_Params
{
	float                                              DamageAmount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMordhauDamageInfo                          DamageInfo;                                                // 0x0008(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AController*                                 EventInstigator;                                           // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // 0x00B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.DamageableComponent.OnKilled
struct UDamageableComponent_OnKilled_Params
{
};

// Function Mordhau.DamageableComponent.ModifyDamage
struct UDamageableComponent_ModifyDamage_Params
{
	float                                              DamageAmount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMordhauDamageInfo                          DamageInfo;                                                // 0x0008(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AController*                                 EventInstigator;                                           // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // 0x00B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x00C0(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.DismemberableComponent.TryDismember
struct UDismemberableComponent_TryDismember_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Point;                                                     // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauWeapon*                              Weapon;                                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EAttackMove                                Move;                                                      // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsRagdollDismember;                                       // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.DismemberableComponent.QueueDismember
struct UDismemberableComponent_QueueDismember_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDismemberPartial;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsBluntForce;                                             // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Force;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Agent;                                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.DismemberableComponent.ProcessQueuedDismemberment
struct UDismemberableComponent_ProcessQueuedDismemberment_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.DismemberableComponent.OnCharacterCameraStyleChanged
struct UDismemberableComponent_OnCharacterCameraStyleChanged_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.DismemberableComponent.IsBoneDismembered
struct UDismemberableComponent_IsBoneDismembered_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.DismemberableComponent.Dismember
struct UDismemberableComponent_Dismember_Params
{
	struct FDismemberedBoneData                        InDismemberedBoneData;                                     // 0x0000(0x0020)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	class ASeparatedBodyPart*                          ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.DismemberableComponent.CanDismember
struct UDismemberableComponent_CanDismember_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.DriverComponent.OnLateTick
struct UDriverComponent_OnLateTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ECSActor.AddManagedCharacter
struct AECSActor_AddManagedCharacter_Params
{
	class ACharacter*                                  Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.EmoteMotion.DoDrop
struct UEmoteMotion_DoDrop_Params
{
	class AMordhauEquipment*                           Equipment;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Force;                                                     // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.EnvironmentMovable.InitializeMovable
struct AEnvironmentMovable_InitializeMovable_Params
{
	class USceneComponent*                             InSwayingComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InRollPitchYawFrequency;                                   // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InRollPitchYawMagnitude;                                   // 0x0014(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InRollPitchYawSpeed;                                       // 0x0020(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.EquipmentSwitchMotion.GetSwitchingTo
struct UEquipmentSwitchMotion_GetSwitchingTo_Params
{
	class AMordhauEquipment*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.EquipmentSystemComponent.OnUnPossessed
struct UEquipmentSystemComponent_OnUnPossessed_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.EquipmentSystemComponent.OnPreBeginPlay
struct UEquipmentSystemComponent_OnPreBeginPlay_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.EquipmentSystemComponent.OnLODTick
struct UEquipmentSystemComponent_OnLODTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.EquipmentSystemComponent.OnLateTick
struct UEquipmentSystemComponent_OnLateTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.EquipmentSystemComponent.OnCharacterVehicleChanged
struct UEquipmentSystemComponent_OnCharacterVehicleChanged_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.EquipmentSystemComponent.OnCharacterCameraStyleChanged
struct UEquipmentSystemComponent_OnCharacterCameraStyleChanged_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.EquipmentSystemComponent.OnAnyEquipmentStateChanged
struct UEquipmentSystemComponent_OnAnyEquipmentStateChanged_Params
{
};

// Function Mordhau.FaceCustomizationComponent.OnCharacterBuilt
struct UFaceCustomizationComponent_OnCharacterBuilt_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauActor.UpdateThudVelocity
struct AMordhauActor_UpdateThudVelocity_Params
{
	float                                              NewThudVelocity;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauActor.PostInteractionWidgetCreated
struct AMordhauActor_PostInteractionWidgetCreated_Params
{
};

// Function Mordhau.MordhauActor.OnUsedToKillOther
struct AMordhauActor_OnUsedToKillOther_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SubType;                                                   // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bone;                                                      // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Point;                                                     // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Source;                                                    // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauActor.OnThud
struct AMordhauActor_OnThud_Params
{
};

// Function Mordhau.MordhauActor.OnRep_ReplicatedThud
struct AMordhauActor_OnRep_ReplicatedThud_Params
{
};

// Function Mordhau.MordhauActor.OnReceiveCosmeticHit
struct AMordhauActor_OnReceiveCosmeticHit_Params
{
	class AActor*                                      Source;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Agent;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EAttackMove                                Move;                                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // 0x0014(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauActor.OnPostDismemberedOther
struct AMordhauActor_OnPostDismemberedOther_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASeparatedBodyPart*                          Part;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauActor.OnLocalPlayerUsedToKillOther
struct AMordhauActor_OnLocalPlayerUsedToKillOther_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SubType;                                                   // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bone;                                                      // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Point;                                                     // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Source;                                                    // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauActor.IsAnyInstanceOwner
struct AMordhauActor_IsAnyInstanceOwner_Params
{
	TArray<class AMordhauPlayerController*>            ControllerArray;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.UpdateMaterial
struct AMordhauEquipment_UpdateMaterial_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.UpdateInteractionCollision
struct AMordhauEquipment_UpdateInteractionCollision_Params
{
};

// Function Mordhau.MordhauEquipment.UpdateEquipmentVisualState
struct AMordhauEquipment_UpdateEquipmentVisualState_Params
{
};

// Function Mordhau.MordhauEquipment.UpdateEquipmentState
struct AMordhauEquipment_UpdateEquipmentState_Params
{
};

// Function Mordhau.MordhauEquipment.UpdateCapsuleShadowStatus
struct AMordhauEquipment_UpdateCapsuleShadowStatus_Params
{
};

// Function Mordhau.MordhauEquipment.SwitchMode
struct AMordhauEquipment_SwitchMode_Params
{
};

// Function Mordhau.MordhauEquipment.ShouldShine
struct AMordhauEquipment_ShouldShine_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.SetPartsUseAuxiliaryMesh
struct AMordhauEquipment_SetPartsUseAuxiliaryMesh_Params
{
	bool                                               bNewValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.SetParts
struct AMordhauEquipment_SetParts_Params
{
	TArray<unsigned char>                              NewPartsId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRebuild;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.SetLoaded
struct AMordhauEquipment_SetLoaded_Params
{
	bool                                               bNewLoaded;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.SetColors
struct AMordhauEquipment_SetColors_Params
{
	TArray<unsigned char>                              NewColors;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.SetAmmo
struct AMordhauEquipment_SetAmmo_Params
{
	unsigned char                                      NewAmmo;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.RestockOtherEquipmentOnCharacter
struct AMordhauEquipment_RestockOtherEquipmentOnCharacter_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.ResetMeshRelativeTransform
struct AMordhauEquipment_ResetMeshRelativeTransform_Params
{
};

// Function Mordhau.MordhauEquipment.RequestAttack
struct AMordhauEquipment_RequestAttack_Params
{
	Mordhau_EAttackMove                                Move;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Angle;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.RebuildIfAllReplicated
struct AMordhauEquipment_RebuildIfAllReplicated_Params
{
};

// Function Mordhau.MordhauEquipment.RebuildEquipment
struct AMordhauEquipment_RebuildEquipment_Params
{
	bool                                               bDoOnlyQuickJob;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.OnRequestModeSwitch
struct AMordhauEquipment_OnRequestModeSwitch_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.OnRequestFire
struct AMordhauEquipment_OnRequestFire_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.OnRep_ReplicatedSkin
struct AMordhauEquipment_OnRep_ReplicatedSkin_Params
{
};

// Function Mordhau.MordhauEquipment.OnRep_ReplicatedPattern
struct AMordhauEquipment_OnRep_ReplicatedPattern_Params
{
};

// Function Mordhau.MordhauEquipment.OnRep_ReplicatedPartsId
struct AMordhauEquipment_OnRep_ReplicatedPartsId_Params
{
};

// Function Mordhau.MordhauEquipment.OnRep_ReplicatedEmblemColors
struct AMordhauEquipment_OnRep_ReplicatedEmblemColors_Params
{
};

// Function Mordhau.MordhauEquipment.OnRep_ReplicatedEmblem
struct AMordhauEquipment_OnRep_ReplicatedEmblem_Params
{
};

// Function Mordhau.MordhauEquipment.OnRep_ReplicatedColors
struct AMordhauEquipment_OnRep_ReplicatedColors_Params
{
};

// Function Mordhau.MordhauEquipment.OnRep_IsUsingAlternateMode
struct AMordhauEquipment_OnRep_IsUsingAlternateMode_Params
{
};

// Function Mordhau.MordhauEquipment.OnRep_IsLoaded
struct AMordhauEquipment_OnRep_IsLoaded_Params
{
};

// Function Mordhau.MordhauEquipment.OnRep_Ammo
struct AMordhauEquipment_OnRep_Ammo_Params
{
};

// Function Mordhau.MordhauEquipment.OnPickedUp
struct AMordhauEquipment_OnPickedUp_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.OnPartsChanged
struct AMordhauEquipment_OnPartsChanged_Params
{
};

// Function Mordhau.MordhauEquipment.OnLoadedChanged
struct AMordhauEquipment_OnLoadedChanged_Params
{
};

// Function Mordhau.MordhauEquipment.OnHolsteredOrDropped
struct AMordhauEquipment_OnHolsteredOrDropped_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.OnHolstered
struct AMordhauEquipment_OnHolstered_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.OnEquipped
struct AMordhauEquipment_OnEquipped_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.OnDropped
struct AMordhauEquipment_OnDropped_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.OnAmmoChanged
struct AMordhauEquipment_OnAmmoChanged_Params
{
};

// Function Mordhau.MordhauEquipment.MarkSkinSeen
struct AMordhauEquipment_MarkSkinSeen_Params
{
	int                                                SkinIdx;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.MarkSeen
struct AMordhauEquipment_MarkSeen_Params
{
};

// Function Mordhau.MordhauEquipment.LocalPlayerTick
struct AMordhauEquipment_LocalPlayerTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.LocalPlayerLateTick
struct AMordhauEquipment_LocalPlayerLateTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.LateTick
struct AMordhauEquipment_LateTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.GetWasSkinSeen
struct AMordhauEquipment_GetWasSkinSeen_Params
{
	int                                                SkinIdx;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.GetWasSeen
struct AMordhauEquipment_GetWasSeen_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.GetRandomCustomization
struct AMordhauEquipment_GetRandomCustomization_Params
{
	bool                                               bOnlyColors;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEquipmentCustomization                     ReturnValue;                                               // 0x0008(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.GetParentCharacter
struct AMordhauEquipment_GetParentCharacter_Params
{
	class AMordhauCharacter*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.GetCurrentMaxAmmo
struct AMordhauEquipment_GetCurrentMaxAmmo_Params
{
	unsigned char                                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.GetAmmo
struct AMordhauEquipment_GetAmmo_Params
{
	unsigned char                                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.FireProjectile_Internal
struct AMordhauEquipment_FireProjectile_Internal_Params
{
	struct FVector                                     InOrigin;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    InOrientation;                                             // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AController*                                 Controller;                                                // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExpectedDelay;                                             // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLocal;                                                  // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauProjectile*                          ReturnValue;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.FireProjectile
struct AMordhauEquipment_FireProjectile_Params
{
	struct FVector                                     Origin;                                                    // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Orientation;                                               // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AController*                                 OwningController;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExpectedDelay;                                             // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.FindCurrentHolsterInfo
struct AMordhauEquipment_FindCurrentHolsterInfo_Params
{
	struct FEquipmentHolsterInfo                       ReturnValue;                                               // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.EquipmentCommand
struct AMordhauEquipment_EquipmentCommand_Params
{
	int                                                Command;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.DestroyPhysicsProxy
struct AMordhauEquipment_DestroyPhysicsProxy_Params
{
};

// Function Mordhau.MordhauEquipment.ComputeAccurateBounds
struct AMordhauEquipment_ComputeAccurateBounds_Params
{
	struct FBoxSphereBounds                            ReturnValue;                                               // 0x0000(0x001C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.CanPerformAttack
struct AMordhauEquipment_CanPerformAttack_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EAttackMove                                Move;                                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.BelongsToCharacter
struct AMordhauEquipment_BelongsToCharacter_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.AssignCustomizationToProjectile
struct AMordhauEquipment_AssignCustomizationToProjectile_Params
{
	class AMordhauProjectile*                          Projectile;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauEquipment.AssignCustomization
struct AMordhauEquipment_AssignCustomization_Params
{
	struct FEquipmentCustomization                     Customization;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	unsigned char                                      CustomizationEmblem;                                       // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CustomizationEmblemColor1;                                 // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CustomizationEmblemColor2;                                 // 0x0032(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauWeapon.UpdateTrail
struct AMordhauWeapon_UpdateTrail_Params
{
	float                                              Weight;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauWeapon.SetIsAllowedToAddForce
struct AMordhauWeapon_SetIsAllowedToAddForce_Params
{
	bool                                               bIsAllowed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauWeapon.RequestBlock
struct AMordhauWeapon_RequestBlock_Params
{
	Mordhau_EBlockType                                 BlockType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowFTP;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauWeapon.OnWasBlocked
struct AMordhauWeapon_OnWasBlocked_Params
{
	struct FBlockResult                                Result;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	Mordhau_EAttackMove                                Move;                                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauWeapon.OnHit
struct AMordhauWeapon_OnHit_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EAttackMove                                Move;                                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bone;                                                      // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldLocation;                                             // 0x0014(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Tier;                                                      // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SurfaceType;                                               // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauWeapon.OnCosmeticHit
struct AMordhauWeapon_OnCosmeticHit_Params
{
	Mordhau_EAttackMove                                Move;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // 0x0004(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauWeapon.OnBlockStarted
struct AMordhauWeapon_OnBlockStarted_Params
{
	Mordhau_EBlockType                                 Type;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauWeapon.OnBlocked
struct AMordhauWeapon_OnBlocked_Params
{
	struct FBlockResult                                Result;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	Mordhau_EAttackMove                                Move;                                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauWeapon.OnAttackStopped
struct AMordhauWeapon_OnAttackStopped_Params
{
};

// Function Mordhau.MordhauWeapon.OnAttackStarted
struct AMordhauWeapon_OnAttackStarted_Params
{
	Mordhau_EAttackMove                                Move;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Angle;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauWeapon.IsAllowedToAddForce
struct AMordhauWeapon_IsAllowedToAddForce_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauWeapon.IncreaseBloodLevel
struct AMordhauWeapon_IncreaseBloodLevel_Params
{
	float                                              Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauWeapon.GetTrace
struct AMordhauWeapon_GetTrace_Params
{
	struct FVector                                     TraceStart;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TraceEnd;                                                  // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauWeapon.GetBaseAttackInfo
struct AMordhauWeapon_GetBaseAttackInfo_Params
{
	Mordhau_EAttackMove                                Move;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttackInfo                                 ReturnValue;                                               // 0x0008(0x0128)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauWeapon.GetAdditionalTrace
struct AMordhauWeapon_GetAdditionalTrace_Params
{
	struct FVector                                     TraceStart;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TraceEnd;                                                  // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauWeapon.AddTraceEntryData
struct AMordhauWeapon_AddTraceEntryData_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bone;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.VirtualWeapon.InitializeVirtualWeapon
struct AVirtualWeapon_InitializeVirtualWeapon_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.GameModeMetadata.GetPlayerCount
struct UGameModeMetadata_GetPlayerCount_Params
{
	MordhauOnlineSubsystem_EServerRegion               ServerRegion;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.GameModeMetadata.GetDefaultObject
struct UGameModeMetadata_GetDefaultObject_Params
{
	class UClass*                                      MetadataClass;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameModeMetadata*                           ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.HeadWearable.GetCoifWearablesNum
struct UHeadWearable_GetCoifWearablesNum_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.HeadWearable.GetCoifWearable
struct UHeadWearable_GetCoifWearable_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.HeadWearable.AddCoifWearable
struct UHeadWearable_AddCoifWearable_Params
{
};

// Function Mordhau.StatComponent.TickStat
struct UStatComponent_TickStat_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.StatComponent.OnRep_StatValue
struct UStatComponent_OnRep_StatValue_Params
{
	int                                                OldStatValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.StatComponent.GetStatValue
struct UStatComponent_GetStatValue_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.HealthStatComponent.OnCharacterDied
struct UHealthStatComponent_OnCharacterDied_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicle.RequestUse
struct AMordhauVehicle_RequestUse_Params
{
};

// Function Mordhau.MordhauVehicle.KnockOffDriver
struct AMordhauVehicle_KnockOffDriver_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicle.GetDriver
struct AMordhauVehicle_GetDriver_Params
{
	class AMordhauCharacter*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Horse.SpawnTurd
struct AHorse_SpawnTurd_Params
{
};

// Function Mordhau.Horse.ServerRequestRearing
struct AHorse_ServerRequestRearing_Params
{
};

// Function Mordhau.Horse.SecondaryTurnNotAbsolute
struct AHorse_SecondaryTurnNotAbsolute_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Horse.RequestRearing
struct AHorse_RequestRearing_Params
{
};

// Function Mordhau.Horse.OnRep_ReplicatedRearing
struct AHorse_OnRep_ReplicatedRearing_Params
{
};

// Function Mordhau.Horse.OnBumpCapsuleOverlapped
struct AHorse_OnBumpCapsuleOverlapped_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Other;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Mordhau.Horse.GetIsInRearingMode
struct AHorse_GetIsInRearingMode_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Horse.CalculateBumpDamage
struct AHorse_CalculateBumpDamage_Params
{
	struct FVector                                     OurWorldVelocity;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.UpdateFPCameraFor
struct UMordhauVehicleComponent_UpdateFPCameraFor_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaSeconds;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRotationOnly;                                             // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.UpdateAnimationFor
struct UMordhauVehicleComponent_UpdateAnimationFor_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMordhauAnimInstance*                        AnimInst;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.Suicide
struct UMordhauVehicleComponent_Suicide_Params
{
};

// Function Mordhau.MordhauVehicleComponent.StopDriving
struct UMordhauVehicleComponent_StopDriving_Params
{
};

// Function Mordhau.MordhauVehicleComponent.StartDriving
struct UMordhauVehicleComponent_StartDriving_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.SetDriver
struct UMordhauVehicleComponent_SetDriver_Params
{
	class AMordhauCharacter*                           NewDriver;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.ServerSecondaryTurn
struct UMordhauVehicleComponent_ServerSecondaryTurn_Params
{
	float                                              NewTurn;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.SecondaryTurnAtRate
struct UMordhauVehicleComponent_SecondaryTurnAtRate_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.SecondaryTurn
struct UMordhauVehicleComponent_SecondaryTurn_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAbsolute;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.RequestMeshEnablePhysics
struct UMordhauVehicleComponent_RequestMeshEnablePhysics_Params
{
	float                                              Duration;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.PostProcessCameraPOV
struct UMordhauVehicleComponent_PostProcessCameraPOV_Params
{
	struct FPOV                                        InPOV;                                                     // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class AMordhauCharacter*                           Character;                                                 // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPOV                                        ReturnValue;                                               // 0x0028(0x001C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.OverrideAttackAngle
struct UMordhauVehicleComponent_OverrideAttackAngle_Params
{
	class UAttackMotion*                               Motion;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.OnStoppedDriving
struct UMordhauVehicleComponent_OnStoppedDriving_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.OnStartedDriving
struct UMordhauVehicleComponent_OnStartedDriving_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.OnRep_ReplicatedSecondaryTurnValue
struct UMordhauVehicleComponent_OnRep_ReplicatedSecondaryTurnValue_Params
{
};

// Function Mordhau.MordhauVehicleComponent.OnDriverChanged
struct UMordhauVehicleComponent_OnDriverChanged_Params
{
};

// Function Mordhau.MordhauVehicleComponent.GetVehicleLeaveInfo
struct UMordhauVehicleComponent_GetVehicleLeaveInfo_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  FromTransform;                                             // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVehicleTransitionInfo                      ReturnValue;                                               // 0x0040(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.GetVehicleEnterInfo
struct UMordhauVehicleComponent_GetVehicleEnterInfo_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  FromTransform;                                             // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVehicleTransitionInfo                      ReturnValue;                                               // 0x0040(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.GetPawnOwner
struct UMordhauVehicleComponent_GetPawnOwner_Params
{
	class APawn*                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.GetMesh
struct UMordhauVehicleComponent_GetMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.GetLookUpValue
struct UMordhauVehicleComponent_GetLookUpValue_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.GetExitTransform
struct UMordhauVehicleComponent_GetExitTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.GetDriver
struct UMordhauVehicleComponent_GetDriver_Params
{
	class AMordhauCharacter*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.DriverLateTick
struct UMordhauVehicleComponent_DriverLateTick_Params
{
	class AMordhauCharacter*                           FromDriver;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauVehicleComponent.CanDrive
struct UMordhauVehicleComponent_CanDrive_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.HumanMeshComponent.UpdateSkeletalMeshComponentMaterials
struct UHumanMeshComponent_UpdateSkeletalMeshComponentMaterials_Params
{
	class USkeletalMeshComponent*                      USMC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.HumanMeshComponent.UpdateAllSkeletalMeshComponentMaterials
struct UHumanMeshComponent_UpdateAllSkeletalMeshComponentMaterials_Params
{
};

// Function Mordhau.HumanMeshComponent.SetMaterialParamsForMergedSlot
struct UHumanMeshComponent_SetMaterialParamsForMergedSlot_Params
{
	struct FString                                     Prefix;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMordhauWearable*                            Wearable;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    Mid;                                                       // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LowQuality;                                                // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.HumanMeshComponent.SetMaterialParamsForLODMasterSlot
struct UHumanMeshComponent_SetMaterialParamsForLODMasterSlot_Params
{
	struct FString                                     Slot;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMordhauWearable*                            Wearable;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    Mid;                                                       // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.HumanMeshComponent.OnCharacterTornOff
struct UHumanMeshComponent_OnCharacterTornOff_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.HumanMeshComponent.OnCharacterChangedTeam
struct UHumanMeshComponent_OnCharacterChangedTeam_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.HumanMeshComponent.OnCharacterCameraStyleChanged
struct UHumanMeshComponent_OnCharacterCameraStyleChanged_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.HumanMeshComponent.OnCharacterBuilt
struct UHumanMeshComponent_OnCharacterBuilt_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.HumanMeshComponent.ModifyBodyColors
struct UHumanMeshComponent_ModifyBodyColors_Params
{
	struct FLinearColor                                InSkinColor;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                InHairColor;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                InEyeColor;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                OutSkinColor;                                              // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                OutHairColor;                                              // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                OutEyeColor;                                               // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.HumanMeshComponent.CreateUnifiedMeshIfNone
struct UHumanMeshComponent_CreateUnifiedMeshIfNone_Params
{
	bool                                               bRequireHeavyDutyCheck;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.HumanMeshComponent.CreateFPMeshIfNone
struct UHumanMeshComponent_CreateFPMeshIfNone_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.HumanMeshComponent.CreateFPDeadMeshIfNone
struct UHumanMeshComponent_CreateFPDeadMeshIfNone_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Interactable.UnHighlight
struct UInteractable_UnHighlight_Params
{
};

// Function Mordhau.Interactable.OnInteractPassively
struct UInteractable_OnInteractPassively_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Interactable.OnInteractionStart
struct UInteractable_OnInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Interactable.OnInteractionMaintained
struct UInteractable_OnInteractionMaintained_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Interactable.OnInteractionEnd
struct UInteractable_OnInteractionEnd_Params
{
};

// Function Mordhau.Interactable.OnHighlightStart
struct UInteractable_OnHighlightStart_Params
{
};

// Function Mordhau.Interactable.OnHighlightMaintained
struct UInteractable_OnHighlightMaintained_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Interactable.OnHighlightEnd
struct UInteractable_OnHighlightEnd_Params
{
};

// Function Mordhau.Interactable.OnHeldInteractionStart
struct UInteractable_OnHeldInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Interactable.InteractPassively
struct UInteractable_InteractPassively_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Interactable.InteractionStart
struct UInteractable_InteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Interactable.InteractionMaintained
struct UInteractable_InteractionMaintained_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Interactable.InteractionEnd
struct UInteractable_InteractionEnd_Params
{
};

// Function Mordhau.Interactable.Highlight
struct UInteractable_Highlight_Params
{
};

// Function Mordhau.Interactable.HeldInteractionStart
struct UInteractable_HeldInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Interactable.GetMaxInteractionHoldTime
struct UInteractable_GetMaxInteractionHoldTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Interactable.CanInteractPassively
struct UInteractable_CanInteractPassively_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Interactable.CanInteract
struct UInteractable_CanInteract_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Interactable.CanHeldInteract
struct UInteractable_CanHeldInteract_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.InteractionComponent.UnHighlight
struct UInteractionComponent_UnHighlight_Params
{
};

// Function Mordhau.InteractionComponent.OnInteractionStart
struct UInteractionComponent_OnInteractionStart_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.InteractionComponent.OnInteractionEnd
struct UInteractionComponent_OnInteractionEnd_Params
{
};

// Function Mordhau.InteractionComponent.OnHighlightStart
struct UInteractionComponent_OnHighlightStart_Params
{
};

// Function Mordhau.InteractionComponent.OnHighlightEnd
struct UInteractionComponent_OnHighlightEnd_Params
{
};

// Function Mordhau.InteractionComponent.InteractionStart
struct UInteractionComponent_InteractionStart_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.InteractionComponent.InteractionEnd
struct UInteractionComponent_InteractionEnd_Params
{
};

// Function Mordhau.InteractionComponent.Highlight
struct UInteractionComponent_Highlight_Params
{
};

// Function Mordhau.InteractionComponent.CanInteract
struct UInteractionComponent_CanInteract_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.InteractionSystemComponent.OnUnPossessed
struct UInteractionSystemComponent_OnUnPossessed_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.InteractionSystemComponent.OnLODTick
struct UInteractionSystemComponent_OnLODTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.InteractionSystemComponent.OnLateTick
struct UInteractionSystemComponent_OnLateTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.InteractionSystemComponent.OnCharacterDestroyed
struct UInteractionSystemComponent_OnCharacterDestroyed_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.LegsWearable.GetFeetWearablesNum
struct ULegsWearable_GetFeetWearablesNum_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.LegsWearable.GetFeetWearable
struct ULegsWearable_GetFeetWearable_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MasterField.UpdateField
struct AMasterField_UpdateField_Params
{
};

// Function Mordhau.MasterField.SetSubFieldsHidden
struct AMasterField_SetSubFieldsHidden_Params
{
	bool                                               bAreHidden;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MasterField.RecomputeCombinedBoundingBox
struct AMasterField_RecomputeCombinedBoundingBox_Params
{
};

// Function Mordhau.MasterField.GetSubFields
struct AMasterField_GetSubFields_Params
{
	TArray<class ASubField*>                           ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MasterField.GetFieldBoundsCenter
struct AMasterField_GetFieldBoundsCenter_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MasterField.DeactivateAndDestroyField
struct AMasterField_DeactivateAndDestroyField_Params
{
};

// Function Mordhau.MasterField.CreateField
struct AMasterField_CreateField_Params
{
};

// Function Mordhau.MasterField.ComputeDistanceIntoField
struct AMasterField_ComputeDistanceIntoField_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MasterField.BeginFieldDeactivation
struct AMasterField_BeginFieldDeactivation_Params
{
};

// Function Mordhau.CreateMatchmakingTicket.CreateMatchmakingTicket
struct UCreateMatchmakingTicket_CreateMatchmakingTicket_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabMatchmakingAttributes               Attributes;                                                // 0x0010(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Members;                                                   // 0x0070(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Timeout;                                                   // 0x0080(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCreateMatchmakingTicket*                    ReturnValue;                                               // 0x0088(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.JoinMatchmakingTicket.JoinMatchmakingTicket
struct UJoinMatchmakingTicket_JoinMatchmakingTicket_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TicketId;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabMatchmakingAttributes               Attributes;                                                // 0x0020(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UJoinMatchmakingTicket*                      ReturnValue;                                               // 0x0080(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CancelMatchmakingTicket.CancelMatchmakingTicket
struct UCancelMatchmakingTicket_CancelMatchmakingTicket_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCancelMatchmakingTicket*                    ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.GetMatchmakingTicket.GetMatchmakingTicket
struct UGetMatchmakingTicket_GetMatchmakingTicket_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TicketId;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetMatchmakingTicket*                       ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.GetMatchmakingMatch.GetMatchmakingMatch
struct UGetMatchmakingMatch_GetMatchmakingMatch_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetMatchmakingMatch*                        ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.GetGameServers.GetGameServers
struct UGetGameServers_GetGameServers_Params
{
	struct FGameServerFilter                           Filter;                                                    // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetGameServers*                             ReturnValue;                                               // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.GetGameServer.GetGameServer
struct UGetGameServer_GetGameServer_Params
{
	struct FString                                     ServerId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IPV4Address;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetGameServer*                              ReturnValue;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ReserveServerSlots.ReserveServerSlots
struct UReserveServerSlots_ReserveServerSlots_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabServerDetails                       ServerDetails;                                             // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FPlayFabMatchmakingPlayer>           Players;                                                   // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReserveServerSlots*                         ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.JoinMatchmakingMatch.JoinMatchmakingMatch
struct UJoinMatchmakingMatch_JoinMatchmakingMatch_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UJoinMatchmakingMatch*                       ReturnValue;                                               // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.LeaveMatchmakingMatch.LeaveMatchmakingMatch
struct ULeaveMatchmakingMatch_LeaveMatchmakingMatch_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class ULeaveMatchmakingMatch*                      ReturnValue;                                               // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.UpdateMatchmakingMatch.UpdateMatchmakingMatch
struct UUpdateMatchmakingMatch_UpdateMatchmakingMatch_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0008(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UUpdateMatchmakingMatch*                     ReturnValue;                                               // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.StartMatchmakingMatch.StartMatchmakingMatch
struct UStartMatchmakingMatch_StartMatchmakingMatch_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0008(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UStartMatchmakingMatch*                      ReturnValue;                                               // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.SetMatchmakingMatchServerDetails.SetMatchmakingMatchServerDetails
struct USetMatchmakingMatchServerDetails_SetMatchmakingMatchServerDetails_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FPlayFabServerDetails                       ServerDetails;                                             // 0x00A8(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class USetMatchmakingMatchServerDetails*           ReturnValue;                                               // 0x00D0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.GetMatchmakingPenalty.GetMatchmakingPenalty
struct UGetMatchmakingPenalty_GetMatchmakingPenalty_Params
{
	struct FPlayFabPlayerEntity                        PlayerEntity;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetMatchmakingPenalty*                      ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.PenalizeForLeavingActiveMatch.PenalizeForLeavingActiveMatch
struct UPenalizeForLeavingActiveMatch_PenalizeForLeavingActiveMatch_Params
{
	struct FPlayFabPlayerEntity                        PlayerEntity;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPenalizeForLeavingActiveMatch*              ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.PenalizeForLeavingActiveMatch.OnGetMatchmakingPenaltySuccess
struct UPenalizeForLeavingActiveMatch_OnGetMatchmakingPenaltySuccess_Params
{
	struct FPlayFabPlayerEntity                        InPlayerEntity;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InLeaveCount;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   InLeaveTime;                                               // 0x0028(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   InBanEndTime;                                              // 0x0030(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.PenalizeForLeavingActiveMatch.OnGetMatchmakingPenaltyFailure
struct UPenalizeForLeavingActiveMatch_OnGetMatchmakingPenaltyFailure_Params
{
	struct FPlayFabPlayerEntity                        InPlayerEntity;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InLeaveCount;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   InLeaveTime;                                               // 0x0028(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   InBanEndTime;                                              // 0x0030(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.RequestPartyStats.RequestPartyStats
struct URequestPartyStats_RequestPartyStats_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URequestPartyStats*                          ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Mods.UnmountMod
struct UMods_UnmountMod_Params
{
	int                                                ModId;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Mods.UninstallMod
struct UMods_UninstallMod_Params
{
	int                                                ModId;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Mods.Process
struct UMods_Process_Params
{
};

// Function Mordhau.Mods.MountMods
struct UMods_MountMods_Params
{
	TArray<int>                                        ModIds;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Mods.MountMod
struct UMods_MountMod_Params
{
	int                                                ModId;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Mods.MountAllPaksInCustomPakFolder
struct UMods_MountAllPaksInCustomPakFolder_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Mods.MountAllInstalledMods
struct UMods_MountAllInstalledMods_Params
{
};

// Function Mordhau.Mods.IsModMounted
struct UMods_IsModMounted_Params
{
	int                                                ModId;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Mods.GetModDownloadQueue
struct UMods_GetModDownloadQueue_Params
{
	TArray<struct FQueuedModDownload>                  ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Mods.GetInstalledMod
struct UMods_GetInstalledMod_Params
{
	int                                                ModId;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInstalledMod                               ReturnValue;                                               // 0x0008(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.Mods.GetAllInstalledMods
struct UMods_GetAllInstalledMods_Params
{
	TArray<struct FInstalledMod>                       ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Mods.CancelModDownload
struct UMods_CancelModDownload_Params
{
	int                                                ModId;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.GetMod.GetMod
struct UGetMod_GetMod_Params
{
	int                                                ModId;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetMod*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.DownloadModfilesById.DownloadModfilesById
struct UDownloadModfilesById_DownloadModfilesById_Params
{
	TArray<int>                                        ModIds;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDownloadModfilesById*                       ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Mordhau1DVehicle.OnStepChanged
struct AMordhau1DVehicle_OnStepChanged_Params
{
};

// Function Mordhau.MordhauAIController.UpdatePerceptionInfo
struct AMordhauAIController_UpdatePerceptionInfo_Params
{
	class AAdvancedCharacter*                          InCharacter;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerceptionInfo                             PerceptionInfo;                                            // 0x0008(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.StopInteract
struct AMordhauAIController_StopInteract_Params
{
};

// Function Mordhau.MordhauAIController.StartInteract
struct AMordhauAIController_StartInteract_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.StartFacingMovement
struct AMordhauAIController_StartFacingMovement_Params
{
	float                                              LocationUpOffset;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.StartFacingLocation
struct AMordhauAIController_StartFacingLocation_Params
{
	struct FVector                                     WorldLocation;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.StartFacingBone
struct AMordhauAIController_StartFacingBone_Params
{
	class USkeletalMeshComponent*                      SkelMesh;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneToFace;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LocationUpOffset;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   DegreeOffset;                                              // 0x0014(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.StartFacingActor2D
struct AMordhauAIController_StartFacingActor2D_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LocationUpOffset;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.StartFacingActor
struct AMordhauAIController_StartFacingActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LocationUpOffset;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   DegreeOffset;                                              // 0x000C(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.SetClosestEnemyOverride
struct AMordhauAIController_SetClosestEnemyOverride_Params
{
	class AMordhauCharacter*                           Override;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.ResumeLogic
struct AMordhauAIController_ResumeLogic_Params
{
	struct FString                                     Reason;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.RequestVoiceCommand
struct AMordhauAIController_RequestVoiceCommand_Params
{
	unsigned char                                      Command;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.RefreshCharacterProfile
struct AMordhauAIController_RefreshCharacterProfile_Params
{
};

// Function Mordhau.MordhauAIController.PerceivesEnemy
struct AMordhauAIController_PerceivesEnemy_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.PerceivesAlly
struct AMordhauAIController_PerceivesAlly_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.PauseLogic
struct AMordhauAIController_PauseLogic_Params
{
	struct FString                                     Reason;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.OnStoppedPerceivingCharacter
struct AMordhauAIController_OnStoppedPerceivingCharacter_Params
{
	class AAdvancedCharacter*                          PerceivedCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerceptionInfo                             PerceptionInfo;                                            // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.OnStartedPerceivingCharacter
struct AMordhauAIController_OnStartedPerceivingCharacter_Params
{
	class AAdvancedCharacter*                          PerceivedCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerceptionInfo                             PerceptionInfo;                                            // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.OnPerceptionUpdated
struct AMordhauAIController_OnPerceptionUpdated_Params
{
	TArray<class AActor*>                              InUpdatedActors;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.OnCharacterDiedOrDestroyed
struct AMordhauAIController_OnCharacterDiedOrDestroyed_Params
{
	class AAdvancedCharacter*                          AdvancedCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.OnAfterUnPossess
struct AMordhauAIController_OnAfterUnPossess_Params
{
};

// Function Mordhau.MordhauAIController.MoveToLocationWithRandomMidpoint
struct AMordhauAIController_MoveToLocationWithRandomMidpoint_Params
{
	struct FVector                                     Dest;                                                      // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AcceptanceRadius;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopOnOverlap;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsePathfinding;                                           // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bProjectDestinationToNavigation;                           // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanStrafe;                                                // 0x0013(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FilterClass;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowPartialPath;                                         // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EPathFollowingRequestResult>  ReturnValue;                                               // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.IsMovePending
struct AMordhauAIController_IsMovePending_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.GetTeam
struct AMordhauAIController_GetTeam_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.GetPerceivedEnemies
struct AMordhauAIController_GetPerceivedEnemies_Params
{
	TArray<class AMordhauCharacter*>                   ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.GetPerceivedAllies
struct AMordhauAIController_GetPerceivedAllies_Params
{
	TArray<class AMordhauCharacter*>                   ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.GetMoveMidpoint
struct AMordhauAIController_GetMoveMidpoint_Params
{
	struct FVector                                     Goal;                                                      // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANavigationData*                             NavData;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FilterClass;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.GetMotionBasedRandom
struct AMordhauAIController_GetMotionBasedRandom_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.GetKthClosestOfThree
struct AMordhauAIController_GetKthClosestOfThree_Params
{
	int                                                Idx;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauCharacter*                           ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.GetCurrentlyFacingActor
struct AMordhauAIController_GetCurrentlyFacingActor_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.GetCurrentFacingMode
struct AMordhauAIController_GetCurrentFacingMode_Params
{
	Mordhau_EAIFacingMode                              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.GetClosestEnemyOverride
struct AMordhauAIController_GetClosestEnemyOverride_Params
{
	class AMordhauCharacter*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.GetClosestEnemy
struct AMordhauAIController_GetClosestEnemy_Params
{
	class AMordhauCharacter*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.GetClosestAlly
struct AMordhauAIController_GetClosestAlly_Params
{
	class AMordhauCharacter*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.GetAllyClearanceSides
struct AMordhauAIController_GetAllyClearanceSides_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.DestroyController
struct AMordhauAIController_DestroyController_Params
{
};

// Function Mordhau.MordhauAIController.CanSee
struct AMordhauAIController_CanSee_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauAIController.CanInteract
struct AMordhauAIController_CanInteract_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauBeaconClient.ServerReserveSlots
struct AMordhauBeaconClient_ServerReserveSlots_Params
{
	TArray<struct FPlayFabPlayerEntity>                InPlayerEntities;                                          // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauBeaconClient.ServerPing
struct AMordhauBeaconClient_ServerPing_Params
{
};

// Function Mordhau.MordhauBeaconClient.ReserveSlots
struct AMordhauBeaconClient_ReserveSlots_Params
{
	struct FURL                                        ConnectURL;                                                // 0x0000(0x0068)  (Parm, OutParm, NativeAccessSpecifierPublic)
	TArray<struct FPlayFabPlayerEntity>                InPlayerEntites;                                           // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauBeaconClient.Ping
struct AMordhauBeaconClient_Ping_Params
{
	struct FURL                                        ConnectURL;                                                // 0x0000(0x0068)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauBeaconClient.ClientPong
struct AMordhauBeaconClient_ClientPong_Params
{
};

// Function Mordhau.MordhauBeaconClient.ClientNotifyReservationStatus
struct AMordhauBeaconClient_ClientNotifyReservationStatus_Params
{
	int                                                OpenSlots;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EReservationStatus                         ReservationStatus;                                         // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCameraComponent.UpdateCamera
struct UMordhauCameraComponent_UpdateCamera_Params
{
};

// Function Mordhau.MordhauCameraComponent.IsBlendingFromMapView
struct UMordhauCameraComponent_IsBlendingFromMapView_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCameraComponent.ComputeCameraPOV
struct UMordhauCameraComponent_ComputeCameraPOV_Params
{
	struct FPOV                                        ReturnValue;                                               // 0x0000(0x001C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCameraManager.SetViewTargetBP
struct AMordhauCameraManager_SetViewTargetBP_Params
{
	class AActor*                                      NewTarget;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCameraManager.SetCameraStyleBP
struct AMordhauCameraManager_SetCameraStyleBP_Params
{
	struct FName                                       NewCameraStyle;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCameraManager.OnHitFlash
struct AMordhauCameraManager_OnHitFlash_Params
{
	bool                                               bIsDirectional;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Source;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCameraManager.LeaveMapView
struct AMordhauCameraManager_LeaveMapView_Params
{
};

// Function Mordhau.MordhauCameraManager.LeaveCustomization
struct AMordhauCameraManager_LeaveCustomization_Params
{
};

// Function Mordhau.MordhauCameraManager.GetViewTargetBP
struct AMordhauCameraManager_GetViewTargetBP_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCameraManager.GetIsInMapView
struct AMordhauCameraManager_GetIsInMapView_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCameraManager.GetIsInCustomization
struct AMordhauCameraManager_GetIsInCustomization_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCameraManager.GetCameraStyleBP
struct AMordhauCameraManager_GetCameraStyleBP_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCameraManager.GetCameraCache
struct AMordhauCameraManager_GetCameraCache_Params
{
	struct FMinimalViewInfo                            ReturnValue;                                               // 0x0000(0x05D0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCameraManager.EnterMapView
struct AMordhauCameraManager_EnterMapView_Params
{
};

// Function Mordhau.MordhauCameraManager.EnterCustomization
struct AMordhauCameraManager_EnterCustomization_Params
{
	class AActor*                                      CustomizationTarget;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.ValidateInteractionTarget
struct AMordhauCharacter_ValidateInteractionTarget_Params
{
	class AActor*                                      TargetActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.UseReleased
struct AMordhauCharacter_UseReleased_Params
{
};

// Function Mordhau.MordhauCharacter.UsePressed
struct AMordhauCharacter_UsePressed_Params
{
};

// Function Mordhau.MordhauCharacter.UpdateWearableInstanceColorsAndPatterns
struct AMordhauCharacter_UpdateWearableInstanceColorsAndPatterns_Params
{
};

// Function Mordhau.MordhauCharacter.UpdateLOD
struct AMordhauCharacter_UpdateLOD_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.UpdateFPCamera
struct AMordhauCharacter_UpdateFPCamera_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InLookUpValue;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyUpdateRotation;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Offset;                                                    // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.UpdateAllSkeletalMeshComponentMaterials
struct AMordhauCharacter_UpdateAllSkeletalMeshComponentMaterials_Params
{
};

// Function Mordhau.MordhauCharacter.TryDismember
struct AMordhauCharacter_TryDismember_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Point;                                                     // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauWeapon*                              Weapon;                                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EAttackMove                                Move;                                                      // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsRagdollDismember;                                       // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.TryClimbing
struct AMordhauCharacter_TryClimbing_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.ToggleWeaponModeReleased
struct AMordhauCharacter_ToggleWeaponModeReleased_Params
{
};

// Function Mordhau.MordhauCharacter.ToggleWeaponModePressed
struct AMordhauCharacter_ToggleWeaponModePressed_Params
{
};

// Function Mordhau.MordhauCharacter.SwitchToFists
struct AMordhauCharacter_SwitchToFists_Params
{
};

// Function Mordhau.MordhauCharacter.SwitchModeAndReAttach
struct AMordhauCharacter_SwitchModeAndReAttach_Params
{
	class AMordhauEquipment*                           ToSwitch;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.SwitchEquipmentByIndex
struct AMordhauCharacter_SwitchEquipmentByIndex_Params
{
	unsigned char                                      Index;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.SwitchEquipment
struct AMordhauCharacter_SwitchEquipment_Params
{
	class AMordhauEquipment*                           ToSwitch;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.StopSupersprint
struct AMordhauCharacter_StopSupersprint_Params
{
};

// Function Mordhau.MordhauCharacter.StopStaminaRegen
struct AMordhauCharacter_StopStaminaRegen_Params
{
	float                                              ExtraTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.StopSprinting
struct AMordhauCharacter_StopSprinting_Params
{
};

// Function Mordhau.MordhauCharacter.StopScreaming
struct AMordhauCharacter_StopScreaming_Params
{
};

// Function Mordhau.MordhauCharacter.StopListenForStrike360
struct AMordhauCharacter_StopListenForStrike360_Params
{
};

// Function Mordhau.MordhauCharacter.StopListenForStab360
struct AMordhauCharacter_StopListenForStab360_Params
{
};

// Function Mordhau.MordhauCharacter.StopCurrentVoiceCommand
struct AMordhauCharacter_StopCurrentVoiceCommand_Params
{
};

// Function Mordhau.MordhauCharacter.StopCrouching
struct AMordhauCharacter_StopCrouching_Params
{
};

// Function Mordhau.MordhauCharacter.StopAttackYell
struct AMordhauCharacter_StopAttackYell_Params
{
};

// Function Mordhau.MordhauCharacter.StartSupersprint
struct AMordhauCharacter_StartSupersprint_Params
{
};

// Function Mordhau.MordhauCharacter.StartSprinting
struct AMordhauCharacter_StartSprinting_Params
{
};

// Function Mordhau.MordhauCharacter.StartScreaming
struct AMordhauCharacter_StartScreaming_Params
{
};

// Function Mordhau.MordhauCharacter.StartCrouching
struct AMordhauCharacter_StartCrouching_Params
{
};

// Function Mordhau.MordhauCharacter.SprintReleased
struct AMordhauCharacter_SprintReleased_Params
{
};

// Function Mordhau.MordhauCharacter.SprintPressed
struct AMordhauCharacter_SprintPressed_Params
{
};

// Function Mordhau.MordhauCharacter.SprintingMoveBlockedBy
struct AMordhauCharacter_SprintingMoveBlockedBy_Params
{
	class AActor*                                      BlockedBy;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.ShowEquipmentIfViewTarget
struct AMordhauCharacter_ShowEquipmentIfViewTarget_Params
{
};

// Function Mordhau.MordhauCharacter.SetQuiver
struct AMordhauCharacter_SetQuiver_Params
{
	class UClass*                                      NewQuiver;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.SetFaceCustomizationTranslate
struct AMordhauCharacter_SetFaceCustomizationTranslate_Params
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Vector;                                                    // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.SetFaceCustomizationScale
struct AMordhauCharacter_SetFaceCustomizationScale_Params
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Vector;                                                    // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.SetFaceCustomizationRotate
struct AMordhauCharacter_SetFaceCustomizationRotate_Params
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Vector;                                                    // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.SetCustomizationReplicationActor
struct AMordhauCharacter_SetCustomizationReplicationActor_Params
{
	class ACustomizationReplicationActor*              CRA;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.SetCurrentlyTracking
struct AMordhauCharacter_SetCurrentlyTracking_Params
{
	class AActor*                                      NewTrackingTarget;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.SetCameraStyle
struct AMordhauCharacter_SetCameraStyle_Params
{
	unsigned char                                      NewStyle;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlendCamera;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.ServerSuggestHitDetection
struct AMordhauCharacter_ServerSuggestHitDetection_Params
{
	class AAdvancedCharacter*                          OtherCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         HitLocation;                                               // 0x0008(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      BoneId;                                                    // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.ServerSetInteractionTarget
struct AMordhauCharacter_ServerSetInteractionTarget_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.ServerRequestVoiceCommand
struct AMordhauCharacter_ServerRequestVoiceCommand_Params
{
	unsigned char                                      VoiceRequest;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.ServerRequestPassiveInteraction
struct AMordhauCharacter_ServerRequestPassiveInteraction_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.ServerRequestDodge
struct AMordhauCharacter_ServerRequestDodge_Params
{
	unsigned char                                      PackedWorldYaw;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.ServerQueueAttack
struct AMordhauCharacter_ServerQueueAttack_Params
{
	Mordhau_EAttackMove                                Move;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Angle;                                                     // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MotionID;                                                  // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.ServerFinishInteraction
struct AMordhauCharacter_ServerFinishInteraction_Params
{
	unsigned char                                      Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.ServerDropParry
struct AMordhauCharacter_ServerDropParry_Params
{
	unsigned char                                      MotionID;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.ServerAssignNetMotion
struct AMordhauCharacter_ServerAssignNetMotion_Params
{
	struct FNetMotion                                  NewNetMotion;                                              // 0x0000(0x0006)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      LastAuthObserved;                                          // 0x0006(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.ServerAssignFireAim
struct AMordhauCharacter_ServerAssignFireAim_Params
{
	struct FVector                                     Orig;                                                      // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rot;                                                       // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.RestockEquipmentFromAmmoBox
struct AMordhauCharacter_RestockEquipmentFromAmmoBox_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.RestockDefaultEquipment
struct AMordhauCharacter_RestockDefaultEquipment_Params
{
	int                                                MaxSlotsToRestock;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AMordhauEquipment*>                   ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.RequestVoiceCommand
struct AMordhauCharacter_RequestVoiceCommand_Params
{
	unsigned char                                      CommandType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowQueue;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.RequestUse
struct AMordhauCharacter_RequestUse_Params
{
};

// Function Mordhau.MordhauCharacter.RequestToggleWeaponMode
struct AMordhauCharacter_RequestToggleWeaponMode_Params
{
};

// Function Mordhau.MordhauCharacter.RequestStrike360
struct AMordhauCharacter_RequestStrike360_Params
{
};

// Function Mordhau.MordhauCharacter.RequestStab360
struct AMordhauCharacter_RequestStab360_Params
{
};

// Function Mordhau.MordhauCharacter.RequestRightUpperStrike
struct AMordhauCharacter_RequestRightUpperStrike_Params
{
};

// Function Mordhau.MordhauCharacter.RequestRightStrike
struct AMordhauCharacter_RequestRightStrike_Params
{
};

// Function Mordhau.MordhauCharacter.RequestRightStab
struct AMordhauCharacter_RequestRightStab_Params
{
};

// Function Mordhau.MordhauCharacter.RequestRightLowerStrike
struct AMordhauCharacter_RequestRightLowerStrike_Params
{
};

// Function Mordhau.MordhauCharacter.RequestRangedCancel
struct AMordhauCharacter_RequestRangedCancel_Params
{
};

// Function Mordhau.MordhauCharacter.RequestParry
struct AMordhauCharacter_RequestParry_Params
{
	Mordhau_EBlockType                                 BlockType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowFTP;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.RequestLeftUpperStrike
struct AMordhauCharacter_RequestLeftUpperStrike_Params
{
};

// Function Mordhau.MordhauCharacter.RequestLeftStrike
struct AMordhauCharacter_RequestLeftStrike_Params
{
};

// Function Mordhau.MordhauCharacter.RequestLeftStab
struct AMordhauCharacter_RequestLeftStab_Params
{
};

// Function Mordhau.MordhauCharacter.RequestLeftLowerStrike
struct AMordhauCharacter_RequestLeftLowerStrike_Params
{
};

// Function Mordhau.MordhauCharacter.RequestKick
struct AMordhauCharacter_RequestKick_Params
{
};

// Function Mordhau.MordhauCharacter.RequestJump
struct AMordhauCharacter_RequestJump_Params
{
};

// Function Mordhau.MordhauCharacter.RequestHolster
struct AMordhauCharacter_RequestHolster_Params
{
	unsigned char                                      Mode;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.RequestFire
struct AMordhauCharacter_RequestFire_Params
{
};

// Function Mordhau.MordhauCharacter.RequestFeint
struct AMordhauCharacter_RequestFeint_Params
{
};

// Function Mordhau.MordhauCharacter.RequestEmote
struct AMordhauCharacter_RequestEmote_Params
{
	unsigned char                                      EmoteId;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.RequestDrop
struct AMordhauCharacter_RequestDrop_Params
{
};

// Function Mordhau.MordhauCharacter.RequestCouchedAttack
struct AMordhauCharacter_RequestCouchedAttack_Params
{
};

// Function Mordhau.MordhauCharacter.RequestClimb
struct AMordhauCharacter_RequestClimb_Params
{
	struct FVector                                     TargetLocation;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsSlowClimb;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.RequestBash
struct AMordhauCharacter_RequestBash_Params
{
};

// Function Mordhau.MordhauCharacter.RequestAttack
struct AMordhauCharacter_RequestAttack_Params
{
	Mordhau_EAttackMove                                Move;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Angle;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.QueueDismember
struct AMordhauCharacter_QueueDismember_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDismemberPartial;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsBluntForce;                                             // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Force;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Agent;                                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.PreviousShieldEquipment
struct AMordhauCharacter_PreviousShieldEquipment_Params
{
};

// Function Mordhau.MordhauCharacter.PreviousEquipmentReleased
struct AMordhauCharacter_PreviousEquipmentReleased_Params
{
};

// Function Mordhau.MordhauCharacter.PreviousEquipmentPressed
struct AMordhauCharacter_PreviousEquipmentPressed_Params
{
};

// Function Mordhau.MordhauCharacter.PreviousEquipment
struct AMordhauCharacter_PreviousEquipment_Params
{
};

// Function Mordhau.MordhauCharacter.PlaySnappyArmorFoley
struct AMordhauCharacter_PlaySnappyArmorFoley_Params
{
	class UAudioComponent*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.PlayNonSnappyArmorFoley
struct AMordhauCharacter_PlayNonSnappyArmorFoley_Params
{
	class UAudioComponent*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.PlayMouthSound
struct AMordhauCharacter_PlayMouthSound_Params
{
	class USoundBase*                                  Sound;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumeMultiplier;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                             ReturnValue;                                               // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.PlayHurtYell
struct AMordhauCharacter_PlayHurtYell_Params
{
};

// Function Mordhau.MordhauCharacter.PlayDeathYell
struct AMordhauCharacter_PlayDeathYell_Params
{
	bool                                               bIsLongYell;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.PlayAttackYell
struct AMordhauCharacter_PlayAttackYell_Params
{
};

// Function Mordhau.MordhauCharacter.PickUpToSlot
struct AMordhauCharacter_PickUpToSlot_Params
{
	class AMordhauEquipment*                           ToEquip;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Slot;                                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.PickUp
struct AMordhauCharacter_PickUp_Params
{
	class AMordhauEquipment*                           ToEquip;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreferredSlot;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.PerformVoiceCommand
struct AMordhauCharacter_PerformVoiceCommand_Params
{
	unsigned char                                      PackedVoiceCommand;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.OnRep_RightHandEquipment
struct AMordhauCharacter_OnRep_RightHandEquipment_Params
{
};

// Function Mordhau.MordhauCharacter.OnRep_ReplicatedVoiceCommand
struct AMordhauCharacter_OnRep_ReplicatedVoiceCommand_Params
{
};

// Function Mordhau.MordhauCharacter.OnRep_ReplicatedStamina
struct AMordhauCharacter_OnRep_ReplicatedStamina_Params
{
};

// Function Mordhau.MordhauCharacter.OnRep_ReplicatedNetMotion
struct AMordhauCharacter_OnRep_ReplicatedNetMotion_Params
{
};

// Function Mordhau.MordhauCharacter.OnRep_ReplicatedKnockback
struct AMordhauCharacter_OnRep_ReplicatedKnockback_Params
{
};

// Function Mordhau.MordhauCharacter.OnRep_ReplicatedDodge
struct AMordhauCharacter_OnRep_ReplicatedDodge_Params
{
};

// Function Mordhau.MordhauCharacter.OnRep_ReplicatedCustomizationReplicationActor
struct AMordhauCharacter_OnRep_ReplicatedCustomizationReplicationActor_Params
{
};

// Function Mordhau.MordhauCharacter.OnRep_Quiver
struct AMordhauCharacter_OnRep_Quiver_Params
{
};

// Function Mordhau.MordhauCharacter.OnRep_NetBlock
struct AMordhauCharacter_OnRep_NetBlock_Params
{
};

// Function Mordhau.MordhauCharacter.OnRep_LeftHandEquipment
struct AMordhauCharacter_OnRep_LeftHandEquipment_Params
{
};

// Function Mordhau.MordhauCharacter.OnRep_Equipment
struct AMordhauCharacter_OnRep_Equipment_Params
{
};

// Function Mordhau.MordhauCharacter.OnPostProfileAssigned
struct AMordhauCharacter_OnPostProfileAssigned_Params
{
};

// Function Mordhau.MordhauCharacter.OnPostDismember
struct AMordhauCharacter_OnPostDismember_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASeparatedBodyPart*                          SeparatedPart;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Agent;                                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.OnPickedUp
struct AMordhauCharacter_OnPickedUp_Params
{
	class AMordhauEquipment*                           Eq;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.OnDropped
struct AMordhauCharacter_OnDropped_Params
{
	class AMordhauEquipment*                           Eq;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.OnBlockedMelee
struct AMordhauCharacter_OnBlockedMelee_Params
{
	struct FHitResult                                  HitResult;                                                 // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AMordhauCharacter*                           Attacker;                                                  // 0x0088(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.OnAttackStarted
struct AMordhauCharacter_OnAttackStarted_Params
{
};

// Function Mordhau.MordhauCharacter.OnActionFailed
struct AMordhauCharacter_OnActionFailed_Params
{
	struct FName                                       Reason;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.OffsetStamina
struct AMordhauCharacter_OffsetStamina_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReplicate;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.NextShieldEquipment
struct AMordhauCharacter_NextShieldEquipment_Params
{
};

// Function Mordhau.MordhauCharacter.NextEquipmentReleased
struct AMordhauCharacter_NextEquipmentReleased_Params
{
};

// Function Mordhau.MordhauCharacter.NextEquipmentPressed
struct AMordhauCharacter_NextEquipmentPressed_Params
{
};

// Function Mordhau.MordhauCharacter.NextEquipment
struct AMordhauCharacter_NextEquipment_Params
{
};

// Function Mordhau.MordhauCharacter.MoveBlockedBySlow
struct AMordhauCharacter_MoveBlockedBySlow_Params
{
	struct FHitResult                                  Impact;                                                    // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.ModifyParryResult
struct AMordhauCharacter_ModifyParryResult_Params
{
	bool                                               InResult;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  HitResult;                                                 // 0x0004(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AMordhauCharacter*                           Attacker;                                                  // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.ListenForStrike360
struct AMordhauCharacter_ListenForStrike360_Params
{
};

// Function Mordhau.MordhauCharacter.ListenForStab360
struct AMordhauCharacter_ListenForStab360_Params
{
};

// Function Mordhau.MordhauCharacter.LeftTeamArea
struct AMordhauCharacter_LeftTeamArea_Params
{
	int                                                OwningTeam;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.JumpReleased
struct AMordhauCharacter_JumpReleased_Params
{
};

// Function Mordhau.MordhauCharacter.JumpPressed
struct AMordhauCharacter_JumpPressed_Params
{
};

// Function Mordhau.MordhauCharacter.IsRightLeg
struct AMordhauCharacter_IsRightLeg_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.IsRightArm
struct AMordhauCharacter_IsRightArm_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.IsLeg
struct AMordhauCharacter_IsLeg_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.IsLeftLeg
struct AMordhauCharacter_IsLeftLeg_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.IsLeftArm
struct AMordhauCharacter_IsLeftArm_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.IsInKnockback
struct AMordhauCharacter_IsInKnockback_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.IsInEnemyTeamArea
struct AMordhauCharacter_IsInEnemyTeamArea_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.IsInAnyTeamArea
struct AMordhauCharacter_IsInAnyTeamArea_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.IsHoldingBlock
struct AMordhauCharacter_IsHoldingBlock_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.IsHead
struct AMordhauCharacter_IsHead_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.IsBoneDismembered
struct AMordhauCharacter_IsBoneDismembered_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.IsBody
struct AMordhauCharacter_IsBody_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.IsArm
struct AMordhauCharacter_IsArm_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.Holster
struct AMordhauCharacter_Holster_Params
{
	class AMordhauEquipment*                           ToHolster;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.HasPerk
struct AMordhauCharacter_HasPerk_Params
{
	unsigned char                                      PerkId;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.HasEquipmentHeSpawnedWith
struct AMordhauCharacter_HasEquipmentHeSpawnedWith_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.GetMovementRestriction
struct AMordhauCharacter_GetMovementRestriction_Params
{
	Mordhau_EMovementRestriction                       ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.GetLastVoiceCommand
struct AMordhauCharacter_GetLastVoiceCommand_Params
{
	class UAudioComponent*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.GetLastVehicleTime
struct AMordhauCharacter_GetLastVehicleTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.GetLastUsedVehicle
struct AMordhauCharacter_GetLastUsedVehicle_Params
{
	float                                              MaximumTimeDiscrepancy;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMordhauVehicleComponent*                    ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.GetLastMovementFrontalHitActor
struct AMordhauCharacter_GetLastMovementFrontalHitActor_Params
{
	float                                              MaxAgeSeconds;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.GetFaceCustomizationTranslate
struct AMordhauCharacter_GetFaceCustomizationTranslate_Params
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.GetFaceCustomizationTransform
struct AMordhauCharacter_GetFaceCustomizationTransform_Params
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.GetFaceCustomizationScale
struct AMordhauCharacter_GetFaceCustomizationScale_Params
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.GetFaceCustomizationRotate
struct AMordhauCharacter_GetFaceCustomizationRotate_Params
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.GetFaceCustomizationBoneIdx
struct AMordhauCharacter_GetFaceCustomizationBoneIdx_Params
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.GetEquipmentIndex
struct AMordhauCharacter_GetEquipmentIndex_Params
{
	class AMordhauEquipment*                           Equip;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      OutIndex;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.GetCustomizationReplicationActor
struct AMordhauCharacter_GetCustomizationReplicationActor_Params
{
	class ACustomizationReplicationActor*              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.GetCurrentNetMotion
struct AMordhauCharacter_GetCurrentNetMotion_Params
{
	struct FNetMotion                                  ReturnValue;                                               // 0x0000(0x0006)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.GetClothMesh
struct AMordhauCharacter_GetClothMesh_Params
{
	class ULODSkeletalMeshComponent*                   ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.GetAllFaceSelectionChildBonesRecursive
struct AMordhauCharacter_GetAllFaceSelectionChildBonesRecursive_Params
{
	struct FName                                       ParentBone;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.FreeHandsForEquipment
struct AMordhauCharacter_FreeHandsForEquipment_Params
{
	class AMordhauEquipment*                           EquipmentInstigator;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.ForceUpdateMeshVisibility
struct AMordhauCharacter_ForceUpdateMeshVisibility_Params
{
};

// Function Mordhau.MordhauCharacter.FlipAttackSideReleased
struct AMordhauCharacter_FlipAttackSideReleased_Params
{
};

// Function Mordhau.MordhauCharacter.FlipAttackSidePressed
struct AMordhauCharacter_FlipAttackSidePressed_Params
{
};

// Function Mordhau.MordhauCharacter.FireReleased
struct AMordhauCharacter_FireReleased_Params
{
};

// Function Mordhau.MordhauCharacter.FirePressed
struct AMordhauCharacter_FirePressed_Params
{
};

// Function Mordhau.MordhauCharacter.FindEquipmentToRestock
struct AMordhauCharacter_FindEquipmentToRestock_Params
{
	TArray<class UClass*>                              ValidEquipment;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauEquipment*                           ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.FindBestKiller
struct AMordhauCharacter_FindBestKiller_Params
{
	float                                              CutOffTime;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.FeintOrBlockReleased
struct AMordhauCharacter_FeintOrBlockReleased_Params
{
};

// Function Mordhau.MordhauCharacter.FeintOrBlockPressed
struct AMordhauCharacter_FeintOrBlockPressed_Params
{
};

// Function Mordhau.MordhauCharacter.ExplodeLimbs
struct AMordhauCharacter_ExplodeLimbs_Params
{
	struct FVector                                     Force;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 InstigatedByController;                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.EquipSlot9
struct AMordhauCharacter_EquipSlot9_Params
{
};

// Function Mordhau.MordhauCharacter.EquipSlot8
struct AMordhauCharacter_EquipSlot8_Params
{
};

// Function Mordhau.MordhauCharacter.EquipSlot7
struct AMordhauCharacter_EquipSlot7_Params
{
};

// Function Mordhau.MordhauCharacter.EquipSlot6
struct AMordhauCharacter_EquipSlot6_Params
{
};

// Function Mordhau.MordhauCharacter.EquipSlot5
struct AMordhauCharacter_EquipSlot5_Params
{
};

// Function Mordhau.MordhauCharacter.EquipSlot4
struct AMordhauCharacter_EquipSlot4_Params
{
};

// Function Mordhau.MordhauCharacter.EquipSlot3
struct AMordhauCharacter_EquipSlot3_Params
{
};

// Function Mordhau.MordhauCharacter.EquipSlot2
struct AMordhauCharacter_EquipSlot2_Params
{
};

// Function Mordhau.MordhauCharacter.EquipSlot1
struct AMordhauCharacter_EquipSlot1_Params
{
};

// Function Mordhau.MordhauCharacter.EquipSlot
struct AMordhauCharacter_EquipSlot_Params
{
	unsigned char                                      Index;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisplayEquipmentList;                                     // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.EnteredTeamArea
struct AMordhauCharacter_EnteredTeamArea_Params
{
	int                                                OwningTeam;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.EnableBlockCollider
struct AMordhauCharacter_EnableBlockCollider_Params
{
};

// Function Mordhau.MordhauCharacter.EmptyHands
struct AMordhauCharacter_EmptyHands_Params
{
};

// Function Mordhau.MordhauCharacter.DropSlot
struct AMordhauCharacter_DropSlot_Params
{
	unsigned char                                      Index;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauEquipment*                           ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.DropEquipment
struct AMordhauCharacter_DropEquipment_Params
{
	class AMordhauEquipment*                           ToDrop;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauEquipment*                           ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.DoCameraShakeIfViewTarget
struct AMordhauCharacter_DoCameraShakeIfViewTarget_Params
{
	class UClass*                                      Shake;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECameraAnimPlaySpace>           PlaySpace;                                                 // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    UserPlaySpaceRot;                                          // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	Mordhau_ECameraShakeType                           ShakeType;                                                 // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.Dismember
struct AMordhauCharacter_Dismember_Params
{
	struct FDismemberedBoneData                        InDismemberedBoneData;                                     // 0x0000(0x0020)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	class ASeparatedBodyPart*                          ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.DisableLimb
struct AMordhauCharacter_DisableLimb_Params
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.DisableBlockCollider
struct AMordhauCharacter_DisableBlockCollider_Params
{
};

// Function Mordhau.MordhauCharacter.CycleCamera
struct AMordhauCharacter_CycleCamera_Params
{
};

// Function Mordhau.MordhauCharacter.CrouchReleased
struct AMordhauCharacter_CrouchReleased_Params
{
};

// Function Mordhau.MordhauCharacter.CrouchPressed
struct AMordhauCharacter_CrouchPressed_Params
{
};

// Function Mordhau.MordhauCharacter.ClientSetNetMotion
struct AMordhauCharacter_ClientSetNetMotion_Params
{
	struct FNetMotion                                  NewMotion;                                                 // 0x0000(0x0006)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ServerStartTime;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.CheckCanEquipAlt
struct AMordhauCharacter_CheckCanEquipAlt_Params
{
	class AMordhauEquipment*                           Equip;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.CheckCanEquip
struct AMordhauCharacter_CheckCanEquip_Params
{
	class AMordhauEquipment*                           Equip;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.CanPerformAttack
struct AMordhauCharacter_CanPerformAttack_Params
{
	Mordhau_EAttackMove                                Move;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.CanInitiateMotion
struct AMordhauCharacter_CanInitiateMotion_Params
{
	class UClass*                                      NewMotion;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttemptCancel;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.CanEmote
struct AMordhauCharacter_CanEmote_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.CanEasyParry
struct AMordhauCharacter_CanEasyParry_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.CanDismember
struct AMordhauCharacter_CanDismember_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.CanAccomodate
struct AMordhauCharacter_CanAccomodate_Params
{
	class UClass*                                      EquipmentToTest;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.CalculateLedgeOffsetAndNormal
struct AMordhauCharacter_CalculateLedgeOffsetAndNormal_Params
{
	class UClimbingMotion*                             ClimbingMotion;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutOffset;                                                 // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutNormal;                                                 // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.BlockReleased
struct AMordhauCharacter_BlockReleased_Params
{
};

// Function Mordhau.MordhauCharacter.BlockPressed
struct AMordhauCharacter_BlockPressed_Params
{
};

// Function Mordhau.MordhauCharacter.BakeFaceCustomizationTransforms
struct AMordhauCharacter_BakeFaceCustomizationTransforms_Params
{
	bool                                               bDeferBake;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.AssignProfile
struct AMordhauCharacter_AssignProfile_Params
{
	struct FCharacterProfile                           NewProfile;                                                // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.AssignNetMotionSimple
struct AMordhauCharacter_AssignNetMotionSimple_Params
{
	unsigned char                                      MotionType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Param0;                                                    // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Param1;                                                    // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Param2;                                                    // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.AssignNetBlock
struct AMordhauCharacter_AssignNetBlock_Params
{
	struct FBlockResult                                BlockResult;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	Mordhau_EAttackMove                                BlockedMove;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Weapon;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauCharacter.AppendRightLegSet
struct AMordhauCharacter_AppendRightLegSet_Params
{
};

// Function Mordhau.MordhauCharacter.AppendRightArmSet
struct AMordhauCharacter_AppendRightArmSet_Params
{
};

// Function Mordhau.MordhauCharacter.AppendLeftLegSet
struct AMordhauCharacter_AppendLeftLegSet_Params
{
};

// Function Mordhau.MordhauCharacter.AppendLeftArmSet
struct AMordhauCharacter_AppendLeftArmSet_Params
{
};

// Function Mordhau.MordhauCharacter.AppendHeadSet
struct AMordhauCharacter_AppendHeadSet_Params
{
};

// Function Mordhau.MordhauCharacter.AppendBodySet
struct AMordhauCharacter_AppendBodySet_Params
{
};

// Function Mordhau.MordhauDialog.Show
struct UMordhauDialog_Show_Params
{
};

// Function Mordhau.MordhauDialog.Hide
struct UMordhauDialog_Hide_Params
{
};

// Function Mordhau.MordhauGameInstance.UpdateParty
struct UMordhauGameInstance_UpdateParty_Params
{
	bool                                               bUpdateProfile;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.UnregisterMetadata
struct UMordhauGameInstance_UnregisterMetadata_Params
{
	int                                                ModId;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.StopLoadingScreen
struct UMordhauGameInstance_StopLoadingScreen_Params
{
};

// Function Mordhau.MordhauGameInstance.Shutdown
struct UMordhauGameInstance_Shutdown_Params
{
};

// Function Mordhau.MordhauGameInstance.ShowPasswordDialog
struct UMordhauGameInstance_ShowPasswordDialog_Params
{
	struct FServerSearchResult                         SearchResult;                                              // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.ShowNetworkErrorDialog
struct UMordhauGameInstance_ShowNetworkErrorDialog_Params
{
};

// Function Mordhau.MordhauGameInstance.ShowJoiningDialog
struct UMordhauGameInstance_ShowJoiningDialog_Params
{
	struct FServerSearchResult                         SearchResult;                                              // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.ShowInviteDialog
struct UMordhauGameInstance_ShowInviteDialog_Params
{
};

// Function Mordhau.MordhauGameInstance.SetPartyServerDetails
struct UMordhauGameInstance_SetPartyServerDetails_Params
{
	struct FPlayFabServerDetails                       InServerDetails;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.SetPartyMemberServerDetails
struct UMordhauGameInstance_SetPartyMemberServerDetails_Params
{
	struct FPlayFabServerDetails                       InServerDetails;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.SetPartyMemberProfile
struct UMordhauGameInstance_SetPartyMemberProfile_Params
{
	struct FPlayFabPlayer                              Player;                                                    // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerProfile                              Profile;                                                   // 0x0060(0x00C8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.SetPartyMatchmakingState
struct UMordhauGameInstance_SetPartyMatchmakingState_Params
{
	Mordhau_EMatchmakingState                          MatchmakingState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.SetPartyMatchmakingMembers
struct UMordhauGameInstance_SetPartyMatchmakingMembers_Params
{
	TArray<struct FString>                             Members;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.SetPartyMatch
struct UMordhauGameInstance_SetPartyMatch_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.SetPartyLeader
struct UMordhauGameInstance_SetPartyLeader_Params
{
	struct FPlayFabPlayer                              Player;                                                    // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.SetPartyGameServer
struct UMordhauGameInstance_SetPartyGameServer_Params
{
	struct FServerSearchResult                         SearchResult;                                              // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.SetNetworkError
struct UMordhauGameInstance_SetNetworkError_Params
{
	struct FText                                       ErrorText;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.SetMatchmakingMatchID
struct UMordhauGameInstance_SetMatchmakingMatchID_Params
{
	struct FString                                     MatchId;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.SetLastPlayerLeaveTime
struct UMordhauGameInstance_SetLastPlayerLeaveTime_Params
{
	double                                             InLastPlayerLeaveTime;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.SetIngameEvent
struct UMordhauGameInstance_SetIngameEvent_Params
{
	MordhauOnlineSubsystem_EIngameEvent                InIngameEvent;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.ServerTravel
struct UMordhauGameInstance_ServerTravel_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapName;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.SaveConfig
struct UMordhauGameInstance_SaveConfig_Params
{
};

// Function Mordhau.MordhauGameInstance.RespondControllerConnectionChange
struct UMordhauGameInstance_RespondControllerConnectionChange_Params
{
	bool                                               Status;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserId;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ControllerId;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.RequestPlayerInformation
struct UMordhauGameInstance_RequestPlayerInformation_Params
{
	struct FPlayFabPlayer                              Player;                                                    // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.RemovePartyMatchmakingTicket
struct UMordhauGameInstance_RemovePartyMatchmakingTicket_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.RegisterMetadata
struct UMordhauGameInstance_RegisterMetadata_Params
{
	int                                                ModId;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             AssetPaths;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.PerformPlatformLogin
struct UMordhauGameInstance_PerformPlatformLogin_Params
{
};

// Function Mordhau.MordhauGameInstance.OnStatsBecameAvailable
struct UMordhauGameInstance_OnStatsBecameAvailable_Params
{
};

// Function Mordhau.MordhauGameInstance.OnInventoryBecameAvailable
struct UMordhauGameInstance_OnInventoryBecameAvailable_Params
{
};

// Function Mordhau.MordhauGameInstance.OnFindMordhauServerSessionByAddressSuccess
struct UMordhauGameInstance_OnFindMordhauServerSessionByAddressSuccess_Params
{
	struct FServerSearchResult                         SearchResult;                                              // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.LogMatchmakingState
struct UMordhauGameInstance_LogMatchmakingState_Params
{
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.LeaveParty
struct UMordhauGameInstance_LeaveParty_Params
{
};

// Function Mordhau.MordhauGameInstance.KickPartyMember
struct UMordhauGameInstance_KickPartyMember_Params
{
	struct FPlayFabPlayer                              Player;                                                    // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.JoinSessionSearchResult
struct UMordhauGameInstance_JoinSessionSearchResult_Params
{
	struct FServerSearchResult                         SearchResult;                                              // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.JoinPartyGameServer
struct UMordhauGameInstance_JoinPartyGameServer_Params
{
};

// Function Mordhau.MordhauGameInstance.IsPartyReadyForMatchmaking
struct UMordhauGameInstance_IsPartyReadyForMatchmaking_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.IsPartyMember
struct UMordhauGameInstance_IsPartyMember_Params
{
	struct FPlayFabPlayer                              Player;                                                    // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.IsPartyLeader
struct UMordhauGameInstance_IsPartyLeader_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.IsOfficialServerMuted
struct UMordhauGameInstance_IsOfficialServerMuted_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.IsOfficialServerBanned
struct UMordhauGameInstance_IsOfficialServerBanned_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.IsLoggingIn
struct UMordhauGameInstance_IsLoggingIn_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.IsLoggedIn
struct UMordhauGameInstance_IsLoggedIn_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.IsLoadingScreenActive
struct UMordhauGameInstance_IsLoadingScreenActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.IsInventoryAvailable
struct UMordhauGameInstance_IsInventoryAvailable_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.IsGlobalServerMuted
struct UMordhauGameInstance_IsGlobalServerMuted_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.IsGlobalServerBanned
struct UMordhauGameInstance_IsGlobalServerBanned_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.Init
struct UMordhauGameInstance_Init_Params
{
};

// Function Mordhau.MordhauGameInstance.HasCompletedLogin
struct UMordhauGameInstance_HasCompletedLogin_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetServerRegionPings
struct UMordhauGameInstance_GetServerRegionPings_Params
{
	MordhauOnlineSubsystem_EServerRegion               Region;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<MordhauOnlineSubsystem_EServerLocation, int>  ReturnValue;                                               // 0x0008(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetServerLocationPreference
struct UMordhauGameInstance_GetServerLocationPreference_Params
{
	MordhauOnlineSubsystem_EServerRegion               Region;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<MordhauOnlineSubsystem_EServerLocation>     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetServerLocationPings
struct UMordhauGameInstance_GetServerLocationPings_Params
{
	TMap<MordhauOnlineSubsystem_EServerLocation, int>  ReturnValue;                                               // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetServerLocationPing
struct UMordhauGameInstance_GetServerLocationPing_Params
{
	MordhauOnlineSubsystem_EServerLocation             Location;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetProfaneWords
struct UMordhauGameInstance_GetProfaneWords_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetPlatform
struct UMordhauGameInstance_GetPlatform_Params
{
	MordhauOnlineSubsystem_EPlatform                   ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetPartySize
struct UMordhauGameInstance_GetPartySize_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetPartyServerDetails
struct UMordhauGameInstance_GetPartyServerDetails_Params
{
	struct FPlayFabServerDetails                       OutServerDetails;                                          // 0x0000(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetPartyMMR
struct UMordhauGameInstance_GetPartyMMR_Params
{
	struct FString                                     GameMode;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetPartyMemberStatus
struct UMordhauGameInstance_GetPartyMemberStatus_Params
{
	struct FPlayFabPlayer                              Player;                                                    // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0060(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetPartyMemberServerDetails
struct UMordhauGameInstance_GetPartyMemberServerDetails_Params
{
	struct FPlayFabPlayer                              Player;                                                    // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabServerDetails                       OutServerDetails;                                          // 0x0060(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetPartyMemberServerAddress
struct UMordhauGameInstance_GetPartyMemberServerAddress_Params
{
	struct FPlayFabPlayer                              Player;                                                    // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FServerAddress                              Address;                                                   // 0x0060(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetPartyMembers
struct UMordhauGameInstance_GetPartyMembers_Params
{
	TArray<struct FPlayFabPlayer>                      ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetPartyMemberProfile
struct UMordhauGameInstance_GetPartyMemberProfile_Params
{
	struct FPlayFabPlayer                              Player;                                                    // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerProfile                              Profile;                                                   // 0x0060(0x00C8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0128(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetPartyMemberEntities
struct UMordhauGameInstance_GetPartyMemberEntities_Params
{
	TArray<struct FPlayFabPlayerEntity>                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetPartyMatchmakingTickets
struct UMordhauGameInstance_GetPartyMatchmakingTickets_Params
{
	TArray<struct FMatchmakingTicket>                  ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetPartyMatchmakingState
struct UMordhauGameInstance_GetPartyMatchmakingState_Params
{
	Mordhau_EMatchmakingState                          ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetPartyMatchmakingMembers
struct UMordhauGameInstance_GetPartyMatchmakingMembers_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetPartyMatch
struct UMordhauGameInstance_GetPartyMatch_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetPartyLeader
struct UMordhauGameInstance_GetPartyLeader_Params
{
	struct FPlayFabPlayer                              ReturnValue;                                               // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetPartyID
struct UMordhauGameInstance_GetPartyID_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetPartyGroupID
struct UMordhauGameInstance_GetPartyGroupID_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetOtherPartyMembersEntityIDs
struct UMordhauGameInstance_GetOtherPartyMembersEntityIDs_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetOfficialServerMuteDuration
struct UMordhauGameInstance_GetOfficialServerMuteDuration_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetOfficialServerBanDuration
struct UMordhauGameInstance_GetOfficialServerBanDuration_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetNumReservedSlots
struct UMordhauGameInstance_GetNumReservedSlots_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetNextMatchID
struct UMordhauGameInstance_GetNextMatchID_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetMatchmakingMatchID
struct UMordhauGameInstance_GetMatchmakingMatchID_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetMatchmakingGroupID
struct UMordhauGameInstance_GetMatchmakingGroupID_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetMapInfo
struct UMordhauGameInstance_GetMapInfo_Params
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMapInfo                                    ReturnValue;                                               // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetLastPlayerLeaveTime
struct UMordhauGameInstance_GetLastPlayerLeaveTime_Params
{
	double                                             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetIngameEvent
struct UMordhauGameInstance_GetIngameEvent_Params
{
	MordhauOnlineSubsystem_EIngameEvent                ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetGlobalServerMuteDuration
struct UMordhauGameInstance_GetGlobalServerMuteDuration_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetGlobalServerBanDuration
struct UMordhauGameInstance_GetGlobalServerBanDuration_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.GetBlacklistedServers
struct UMordhauGameInstance_GetBlacklistedServers_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.FindMapMetadata
struct UMordhauGameInstance_FindMapMetadata_Params
{
	struct FString                                     GameModeMapName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMapMetadata*                                ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.FindGameModeMetadata
struct UMordhauGameInstance_FindGameModeMetadata_Params
{
	struct FString                                     GameModePrefix;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameModeMetadata*                           ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.FindBestServerRegion
struct UMordhauGameInstance_FindBestServerRegion_Params
{
	MordhauOnlineSubsystem_EServerRegion               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.FindBestServerLocation
struct UMordhauGameInstance_FindBestServerLocation_Params
{
	MordhauOnlineSubsystem_EServerLocation             ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.DetermineServerLocationPings
struct UMordhauGameInstance_DetermineServerLocationPings_Params
{
};

// Function Mordhau.MordhauGameInstance.ClientTravelSession
struct UMordhauGameInstance_ClientTravelSession_Params
{
	struct FServerSearchResult                         SearchResult;                                              // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0110(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0120(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.ClientTravelServerDetails
struct UMordhauGameInstance_ClientTravelServerDetails_Params
{
	struct FPlayFabServerDetails                       InServerDetails;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.ClientTravel
struct UMordhauGameInstance_ClientTravel_Params
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerCount;                                               // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.ClearPartyServerDetails
struct UMordhauGameInstance_ClearPartyServerDetails_Params
{
};

// Function Mordhau.MordhauGameInstance.ClearPartyMemberServerDetails
struct UMordhauGameInstance_ClearPartyMemberServerDetails_Params
{
};

// Function Mordhau.MordhauGameInstance.ClearPartyMemberProfile
struct UMordhauGameInstance_ClearPartyMemberProfile_Params
{
	struct FPlayFabPlayer                              Player;                                                    // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.ClearPartyMatchmakingTickets
struct UMordhauGameInstance_ClearPartyMatchmakingTickets_Params
{
};

// Function Mordhau.MordhauGameInstance.ClearPartyMatchmakingMembers
struct UMordhauGameInstance_ClearPartyMatchmakingMembers_Params
{
};

// Function Mordhau.MordhauGameInstance.ClearPartyMatch
struct UMordhauGameInstance_ClearPartyMatch_Params
{
};

// Function Mordhau.MordhauGameInstance.ClearPartyGameServer
struct UMordhauGameInstance_ClearPartyGameServer_Params
{
};

// Function Mordhau.MordhauGameInstance.CanLeaveParty
struct UMordhauGameInstance_CanLeaveParty_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.CanInviteToParty
struct UMordhauGameInstance_CanInviteToParty_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.BPStopRecordingReplay
struct UMordhauGameInstance_BPStopRecordingReplay_Params
{
};

// Function Mordhau.MordhauGameInstance.BPStopPlayingReplay
struct UMordhauGameInstance_BPStopPlayingReplay_Params
{
};

// Function Mordhau.MordhauGameInstance.BPStartRecordingReplay
struct UMordhauGameInstance_BPStartRecordingReplay_Params
{
	struct FString                                     InName;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FriendlyName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             AdditionalOptions;                                         // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.BPPlayReplay
struct UMordhauGameInstance_BPPlayReplay_Params
{
	struct FString                                     InName;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             AdditionalOptions;                                         // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.AreStatsAvailable
struct UMordhauGameInstance_AreStatsAvailable_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameInstance.AddPartyMatchmakingTicket
struct UMordhauGameInstance_AddPartyMatchmakingTicket_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TicketId;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.VoteLevel
struct AMordhauGameMode_VoteLevel_Params
{
	class APlayerController*                           Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LevelName;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.SetTeamScore
struct AMordhauGameMode_SetTeamScore_Params
{
	int                                                Team;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amount;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.SetRconEvent
struct AMordhauGameMode_SetRconEvent_Params
{
	struct FRconEventStruct                            InStruct;                                                  // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             InEvent;                                                   // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bOverrideExisting;                                         // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.RequestedAssignTeam
struct AMordhauGameMode_RequestedAssignTeam_Params
{
	class AController*                                 Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Team;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.RemoveBots
struct AMordhauGameMode_RemoveBots_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Team;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.OnTeamScoreChanged
struct AMordhauGameMode_OnTeamScoreChanged_Params
{
	int                                                Team;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OldValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.OnScoreChanged
struct AMordhauGameMode_OnScoreChanged_Params
{
	class APlayerState*                                State;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OldValue;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.OnMatchStateChanged
struct AMordhauGameMode_OnMatchStateChanged_Params
{
	struct FName                                       OldState;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewState;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.OnKillsChanged
struct AMordhauGameMode_OnKillsChanged_Params
{
	class APlayerState*                                State;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OldValue;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.OnKilled
struct AMordhauGameMode_OnKilled_Params
{
	class AController*                                 Killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 KilledPlayer;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       KilledPawn;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SubType;                                                   // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageSource;                                              // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageAgent;                                               // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.OnDeathsChanged
struct AMordhauGameMode_OnDeathsChanged_Params
{
	class APlayerState*                                State;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OldValue;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.OnAssistsChanged
struct AMordhauGameMode_OnAssistsChanged_Params
{
	class APlayerState*                                State;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OldValue;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.MatchTimeRanOut
struct AMordhauGameMode_MatchTimeRanOut_Params
{
};

// Function Mordhau.MordhauGameMode.IsSpawnpointAllowed
struct AMordhauGameMode_IsSpawnpointAllowed_Params
{
	class APlayerStart*                                PlayerStart;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 Player;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.GetSpawnpointPreference
struct AMordhauGameMode_GetSpawnpointPreference_Params
{
	class APlayerStart*                                PlayerStart;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 Player;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.GetNextMaps
struct AMordhauGameMode_GetNextMaps_Params
{
	int                                                Count;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.GetNextMap
struct AMordhauGameMode_GetNextMap_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.GetMapVoteMaps
struct AMordhauGameMode_GetMapVoteMaps_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.GetMapVoteCounts
struct AMordhauGameMode_GetMapVoteCounts_Params
{
	TArray<unsigned char>                              ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.GetDamageFactor
struct AMordhauGameMode_GetDamageFactor_Params
{
	class AActor*                                      DamageSource;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageTarget;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.ControllerCanRestart
struct AMordhauGameMode_ControllerCanRestart_Params
{
	class AController*                                 Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.ChangeLevel
struct AMordhauGameMode_ChangeLevel_Params
{
	struct FString                                     LevelName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.CanDealDamage
struct AMordhauGameMode_CanDealDamage_Params
{
	class AActor*                                      DamageSource;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageTarget;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.CanClash
struct AMordhauGameMode_CanClash_Params
{
	class APawn*                                       Source;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       Target;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.CanChamber
struct AMordhauGameMode_CanChamber_Params
{
	class APawn*                                       Source;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       Target;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.Broadcast
struct AMordhauGameMode_Broadcast_Params
{
	class AActor*                                      Sender;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Msg;                                                       // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Type;                                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.AddTeamScore
struct AMordhauGameMode_AddTeamScore_Params
{
	int                                                Team;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amount;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameMode.AddBots
struct AMordhauGameMode_AddBots_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Team;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameSession.UploadAdminActionDataToWebhook
struct AMordhauGameSession_UploadAdminActionDataToWebhook_Params
{
	struct FString                                     Command;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabPlayer                              Sender;                                                    // 0x0010(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Details;                                                   // 0x0070(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameSession.UnmutePlayer
struct AMordhauGameSession_UnmutePlayer_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExpired;                                                  // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameSession.UnbanPlayer
struct AMordhauGameSession_UnbanPlayer_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExpired;                                                  // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameSession.TriggerRewardDropForPlayer
struct AMordhauGameSession_TriggerRewardDropForPlayer_Params
{
	class APlayerController*                           Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameSession.TriggerRewardDrop
struct AMordhauGameSession_TriggerRewardDrop_Params
{
};

// Function Mordhau.MordhauGameSession.ReportTimeLeft
struct AMordhauGameSession_ReportTimeLeft_Params
{
	TArray<float>                                      TimeLeft;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameSession.ReportPlayer
struct AMordhauGameSession_ReportPlayer_Params
{
	struct FString                                     ReporteePlayFabID;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReporterPlayFabID;                                         // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReportType;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ScreenshotFilename;                                        // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameSession.RemoveAdmin
struct AMordhauGameSession_RemoveAdmin_Params
{
	class APlayerController*                           AdminPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameSession.MutePlayerWithDuration
struct AMordhauGameSession_MutePlayerWithDuration_Params
{
	class APlayerController*                           MutedPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MuteDuration;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameSession.MutePlayer
struct AMordhauGameSession_MutePlayer_Params
{
	class APlayerController*                           MutedPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameSession.KickPlayer
struct AMordhauGameSession_KickPlayer_Params
{
	class APlayerController*                           KickedPlayer;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       KickReason;                                                // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameSession.IsPlayerMuted
struct AMordhauGameSession_IsPlayerMuted_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameSession.IsPlayerBanned
struct AMordhauGameSession_IsPlayerBanned_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameSession.GetPlayerMuteDuration
struct AMordhauGameSession_GetPlayerMuteDuration_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameSession.GetPlayerBanDuration
struct AMordhauGameSession_GetPlayerBanDuration_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameSession.BanPlayerWithDuration
struct AMordhauGameSession_BanPlayerWithDuration_Params
{
	class APlayerController*                           BannedPlayer;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BanDuration;                                               // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       BanReason;                                                 // 0x0010(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameSession.BanPlayer
struct AMordhauGameSession_BanPlayer_Params
{
	class APlayerController*                           BannedPlayer;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       BanReason;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameSession.AllowsJoin
struct AMordhauGameSession_AllowsJoin_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameSession.AllowJoin
struct AMordhauGameSession_AllowJoin_Params
{
	bool                                               bInAllowJoin;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameSession.AddTieredAdmin
struct AMordhauGameSession_AddTieredAdmin_Params
{
	class APlayerController*                           AdminPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Tier;                                                      // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameSession.AddAdmin
struct AMordhauGameSession_AddAdmin_Params
{
	class APlayerController*                           AdminPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.UpdateSoundGroups
struct AMordhauGameState_UpdateSoundGroups_Params
{
};

// Function Mordhau.MordhauGameState.UpdateCapturePointData
struct AMordhauGameState_UpdateCapturePointData_Params
{
};

// Function Mordhau.MordhauGameState.UnregisterParticleSystemActor
struct AMordhauGameState_UnregisterParticleSystemActor_Params
{
	class AParticleSystemActor*                        ParticleActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.StoreEquipmentMeshInCache
struct AMordhauGameState_StoreEquipmentMeshInCache_Params
{
	class USkeletalMesh*                               Mesh;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ID;                                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Skin;                                                      // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Part1;                                                     // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Part2;                                                     // 0x000E(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Part3;                                                     // 0x000F(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAuxiliaryMesh;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.ShouldTickThisFrame
struct AMordhauGameState_ShouldTickThisFrame_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.ShouldTickAnimationThisFrame
struct AMordhauGameState_ShouldTickAnimationThisFrame_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.ShouldPaintGearWithTeamColors
struct AMordhauGameState_ShouldPaintGearWithTeamColors_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.ShouldBlockPawnInput
struct AMordhauGameState_ShouldBlockPawnInput_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.ReserveCharacterRagdoll
struct AMordhauGameState_ReserveCharacterRagdoll_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.RemoveCharacterFromDistanceArray
struct AMordhauGameState_RemoveCharacterFromDistanceArray_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.RegisterParticleSystemActor
struct AMordhauGameState_RegisterParticleSystemActor_Params
{
	class AParticleSystemActor*                        ParticleActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.PostPhysicsTick
struct AMordhauGameState_PostPhysicsTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.OnReplicatedMOTD
struct AMordhauGameState_OnReplicatedMOTD_Params
{
};

// Function Mordhau.MordhauGameState.OnRep_ReplicatedMatchDurationMax
struct AMordhauGameState_OnRep_ReplicatedMatchDurationMax_Params
{
};

// Function Mordhau.MordhauGameState.OnRep_MOTDURL
struct AMordhauGameState_OnRep_MOTDURL_Params
{
};

// Function Mordhau.MordhauGameState.LocalPlayerChangedTeam
struct AMordhauGameState_LocalPlayerChangedTeam_Params
{
};

// Function Mordhau.MordhauGameState.LineTraceCharacters
struct AMordhauGameState_LineTraceCharacters_Params
{
	struct FVector                                     LineStart;                                                 // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LineEnd;                                                   // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          Results;                                                   // 0x0068(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.LastDemotableTick
struct AMordhauGameState_LastDemotableTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.IsFriendly
struct AMordhauGameState_IsFriendly_Params
{
	class AActor*                                      ActorA;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ActorB;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsFriendlyIfSelf;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.GetTeamName
struct AMordhauGameState_GetTeamName_Params
{
	int                                                Team;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.GetTeamColor
struct AMordhauGameState_GetTeamColor_Params
{
	int                                                Team;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.GetSecondaryTeamColor
struct AMordhauGameState_GetSecondaryTeamColor_Params
{
	int                                                Team;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.GetPlayerCountsPerTeam
struct AMordhauGameState_GetPlayerCountsPerTeam_Params
{
	bool                                               bOnlyLiving;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyWithValidProfiles;                                    // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.GetEquipmentMeshFromCache
struct AMordhauGameState_GetEquipmentMeshFromCache_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Skin;                                                      // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Part1;                                                     // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Part2;                                                     // 0x0006(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Part3;                                                     // 0x0007(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAuxiliaryMesh;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.GetEquipmentCacheHash
struct AMordhauGameState_GetEquipmentCacheHash_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Skin;                                                      // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Part1;                                                     // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Part2;                                                     // 0x0006(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Part3;                                                     // 0x0007(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAuxiliaryMesh;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.GetCurrentFrame
struct AMordhauGameState_GetCurrentFrame_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.GetCharacterByDistanceRank
struct AMordhauGameState_GetCharacterByDistanceRank_Params
{
	int                                                DistanceRank;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAdvancedCharacter*                          ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.GetBindPoseTransform
struct AMordhauGameState_GetBindPoseTransform_Params
{
	class USkeletalMesh*                               Mesh;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.GetAppropriateMapCameraActor
struct AMordhauGameState_GetAppropriateMapCameraActor_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMapCameraActor*                             ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.CanPlayerJoinTeam
struct AMordhauGameState_CanPlayerJoinTeam_Params
{
	class AMordhauPlayerState*                         Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Team;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameState.CanImmediatelyChangeProfile
struct AMordhauGameState_CanImmediatelyChangeProfile_Params
{
	class AController*                                 Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowWatermark
struct UMordhauGameUserSettings_ShouldShowWatermark_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowTips
struct UMordhauGameUserSettings_ShouldShowTips_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowTargetInfo
struct UMordhauGameUserSettings_ShouldShowTargetInfo_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowStatusBar
struct UMordhauGameUserSettings_ShouldShowStatusBar_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowSpawnInfo
struct UMordhauGameUserSettings_ShouldShowSpawnInfo_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowServerInScoreboard
struct UMordhauGameUserSettings_ShouldShowServerInScoreboard_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowScoreFeed
struct UMordhauGameUserSettings_ShouldShowScoreFeed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowObservedDelay
struct UMordhauGameUserSettings_ShouldShowObservedDelay_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowObjectives
struct UMordhauGameUserSettings_ShouldShowObjectives_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowMatchmakingDebug
struct UMordhauGameUserSettings_ShouldShowMatchmakingDebug_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowKillFeed
struct UMordhauGameUserSettings_ShouldShowKillFeed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowKilledBy
struct UMordhauGameUserSettings_ShouldShowKilledBy_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowHUD
struct UMordhauGameUserSettings_ShouldShowHUD_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowHitMarker
struct UMordhauGameUserSettings_ShouldShowHitMarker_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowEquipment
struct UMordhauGameUserSettings_ShouldShowEquipment_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowEmotesMenu
struct UMordhauGameUserSettings_ShouldShowEmotesMenu_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowChatBox
struct UMordhauGameUserSettings_ShouldShowChatBox_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowBlood
struct UMordhauGameUserSettings_ShouldShowBlood_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowAnnouncements
struct UMordhauGameUserSettings_ShouldShowAnnouncements_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldShowAmmo
struct UMordhauGameUserSettings_ShouldShowAmmo_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldQuickSpawn
struct UMordhauGameUserSettings_ShouldQuickSpawn_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ShouldDrawTracers
struct UMordhauGameUserSettings_ShouldDrawTracers_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetVoiceVolume
struct UMordhauGameUserSettings_SetVoiceVolume_Params
{
	float                                              NewVolume;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetVideoVolume
struct UMordhauGameUserSettings_SetVideoVolume_Params
{
	float                                              NewVolume;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetTracersStayTime
struct UMordhauGameUserSettings_SetTracersStayTime_Params
{
	float                                              NewStayTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetThirdPersonDeathcamera
struct UMordhauGameUserSettings_SetThirdPersonDeathcamera_Params
{
	int                                                NewThirdPersonDeathCamera;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetShowTips
struct UMordhauGameUserSettings_SetShowTips_Params
{
	int                                                NewShowTips;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetShowTargetInfo
struct UMordhauGameUserSettings_SetShowTargetInfo_Params
{
	int                                                NewShowTargetInfo;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetShowStatusBar
struct UMordhauGameUserSettings_SetShowStatusBar_Params
{
	int                                                NewShowStatusBar;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetShowSpawnInfo
struct UMordhauGameUserSettings_SetShowSpawnInfo_Params
{
	int                                                NewShowSpawnInfo;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetShowServerInScoreboard
struct UMordhauGameUserSettings_SetShowServerInScoreboard_Params
{
	int                                                NewShowServerInScoreboard;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetShowScoreFeed
struct UMordhauGameUserSettings_SetShowScoreFeed_Params
{
	int                                                NewShowScoreFeed;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetShowObservedDelay
struct UMordhauGameUserSettings_SetShowObservedDelay_Params
{
	int                                                NewShowObservedDelay;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetShowObjectives
struct UMordhauGameUserSettings_SetShowObjectives_Params
{
	int                                                NewShowObjectives;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetShowMatchmakingDebug
struct UMordhauGameUserSettings_SetShowMatchmakingDebug_Params
{
	int                                                NewShowMatchmakingDebug;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetShowKillFeed
struct UMordhauGameUserSettings_SetShowKillFeed_Params
{
	int                                                NewShowKillFeed;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetShowKilledBy
struct UMordhauGameUserSettings_SetShowKilledBy_Params
{
	int                                                NewShowKilledBy;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetShowHitMarker
struct UMordhauGameUserSettings_SetShowHitMarker_Params
{
	int                                                NewShowHitMarker;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetShowEquipment
struct UMordhauGameUserSettings_SetShowEquipment_Params
{
	int                                                NewShowEquipment;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetShowEmotesMenu
struct UMordhauGameUserSettings_SetShowEmotesMenu_Params
{
	int                                                NewEmotesMenu;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetShowCombatHints
struct UMordhauGameUserSettings_SetShowCombatHints_Params
{
	int                                                NewShowCombatHints;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetShowChatBox
struct UMordhauGameUserSettings_SetShowChatBox_Params
{
	int                                                NewShowChatBox;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetShowAnnouncements
struct UMordhauGameUserSettings_SetShowAnnouncements_Params
{
	int                                                NewShowAnnouncements;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetShowAmmo
struct UMordhauGameUserSettings_SetShowAmmo_Params
{
	int                                                NewShowAmmo;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetServerFilter
struct UMordhauGameUserSettings_SetServerFilter_Params
{
	Mordhau_EServerFilterCategories                    FilterCategory;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Value;                                                     // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetServerBrowserSortType
struct UMordhauGameUserSettings_SetServerBrowserSortType_Params
{
	struct FString                                     NewSortType;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetServerBrowserServerName
struct UMordhauGameUserSettings_SetServerBrowserServerName_Params
{
	struct FString                                     NewServerName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetServerBrowserNotFull
struct UMordhauGameUserSettings_SetServerBrowserNotFull_Params
{
	bool                                               bNewNotFull;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetServerBrowserNoPassword
struct UMordhauGameUserSettings_SetServerBrowserNoPassword_Params
{
	bool                                               bNewNoPassword;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetServerBrowserMaxPing
struct UMordhauGameUserSettings_SetServerBrowserMaxPing_Params
{
	int                                                NewMaxPing;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetServerBrowserHasPlayers
struct UMordhauGameUserSettings_SetServerBrowserHasPlayers_Params
{
	bool                                               bNewHasPlayers;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetServerBrowserGameMode
struct UMordhauGameUserSettings_SetServerBrowserGameMode_Params
{
	struct FString                                     NewGameMode;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetSelectedGameModePlayerCounts
struct UMordhauGameUserSettings_SetSelectedGameModePlayerCounts_Params
{
	struct FString                                     GameMode;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        SelectedPlayerCounts;                                      // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetScreenSpaceReflections
struct UMordhauGameUserSettings_SetScreenSpaceReflections_Params
{
	int                                                NewScreenSpaceReflections;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetScreenPercentage
struct UMordhauGameUserSettings_SetScreenPercentage_Params
{
	float                                              NewScreenPercentage;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetRecentServers
struct UMordhauGameUserSettings_SetRecentServers_Params
{
	TArray<struct FString>                             NewRecentServers;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetRankedMatchmakingRegion
struct UMordhauGameUserSettings_SetRankedMatchmakingRegion_Params
{
	MordhauOnlineSubsystem_EServerRegion               NewRegion;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetRankedMatchmakingGameModes
struct UMordhauGameUserSettings_SetRankedMatchmakingGameModes_Params
{
	TArray<struct FString>                             NewGameModes;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetRangedSensitivity
struct UMordhauGameUserSettings_SetRangedSensitivity_Params
{
	float                                              NewRangedSensitivity;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetRagdollStayTime
struct UMordhauGameUserSettings_SetRagdollStayTime_Params
{
	float                                              NewTime;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetRagdollFidelity
struct UMordhauGameUserSettings_SetRagdollFidelity_Params
{
	int                                                NewFidelity;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetQuickSpawn
struct UMordhauGameUserSettings_SetQuickSpawn_Params
{
	int                                                NewQuickSpawn;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetProfanityFilter
struct UMordhauGameUserSettings_SetProfanityFilter_Params
{
	int                                                NewProfanityFilter;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetNvidiaReflex
struct UMordhauGameUserSettings_SetNvidiaReflex_Params
{
	int                                                NewNvidiaReflex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetNoTeamColorsOnGear
struct UMordhauGameUserSettings_SetNoTeamColorsOnGear_Params
{
	int                                                NewNoTeamColorsOnGear;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetMusicVolume
struct UMordhauGameUserSettings_SetMusicVolume_Params
{
	float                                              NewVolume;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetMovementHeadbob
struct UMordhauGameUserSettings_SetMovementHeadbob_Params
{
	float                                              NewMovementHeadbob;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetMouseSmoothing
struct UMordhauGameUserSettings_SetMouseSmoothing_Params
{
	float                                              NewSmoothing;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetMotionBlur
struct UMordhauGameUserSettings_SetMotionBlur_Params
{
	float                                              NewMotionBlur;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetMaxRagdolls
struct UMordhauGameUserSettings_SetMaxRagdolls_Params
{
	int                                                NewMax;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetMasterVolume
struct UMordhauGameUserSettings_SetMasterVolume_Params
{
	float                                              NewVolume;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetLensFlares
struct UMordhauGameUserSettings_SetLensFlares_Params
{
	int                                                NewLensFlares;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetLanguage
struct UMordhauGameUserSettings_SetLanguage_Params
{
	struct FString                                     NewLanguage;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetInstrumentsVolume
struct UMordhauGameUserSettings_SetInstrumentsVolume_Params
{
	float                                              NewVolume;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetIndirectCapsuleShadows
struct UMordhauGameUserSettings_SetIndirectCapsuleShadows_Params
{
	int                                                NewShadows;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetHideWatermark
struct UMordhauGameUserSettings_SetHideWatermark_Params
{
	int                                                NewHideWatermark;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetHideHUD
struct UMordhauGameUserSettings_SetHideHUD_Params
{
	int                                                NewHideHUD;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetHideDefaultLoadouts
struct UMordhauGameUserSettings_SetHideDefaultLoadouts_Params
{
	int                                                NewHideDefaultLoadouts;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetHeadbob
struct UMordhauGameUserSettings_SetHeadbob_Params
{
	float                                              NewHeadbob;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetGore
struct UMordhauGameUserSettings_SetGore_Params
{
	int                                                NewGore;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetGamma
struct UMordhauGameUserSettings_SetGamma_Params
{
	float                                              NewGamma;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetFriendlyMarkers
struct UMordhauGameUserSettings_SetFriendlyMarkers_Params
{
	int                                                NewFriendlyMarkers;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetForceFeedbackEnabled
struct UMordhauGameUserSettings_SetForceFeedbackEnabled_Params
{
	bool                                               Enabled;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetFieldOfView
struct UMordhauGameUserSettings_SetFieldOfView_Params
{
	float                                              NewFOV;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetFavoriteServers
struct UMordhauGameUserSettings_SetFavoriteServers_Params
{
	TArray<struct FString>                             NewFavoriteServers;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetEffectsVolume
struct UMordhauGameUserSettings_SetEffectsVolume_Params
{
	float                                              NewVolume;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetDrawTracers
struct UMordhauGameUserSettings_SetDrawTracers_Params
{
	int                                                NewDrawTracers;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetCrosshairType
struct UMordhauGameUserSettings_SetCrosshairType_Params
{
	int                                                NewCrosshairType;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetCombatHeadbob
struct UMordhauGameUserSettings_SetCombatHeadbob_Params
{
	float                                              NewCombatHeadbob;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetCharacterFidelity
struct UMordhauGameUserSettings_SetCharacterFidelity_Params
{
	int                                                NewFidelity;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetCharacterCloth
struct UMordhauGameUserSettings_SetCharacterCloth_Params
{
	int                                                NewCharacterCloth;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetCasualMatchmakingRegion
struct UMordhauGameUserSettings_SetCasualMatchmakingRegion_Params
{
	MordhauOnlineSubsystem_EServerRegion               NewRegion;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetCasualMatchmakingGameModes
struct UMordhauGameUserSettings_SetCasualMatchmakingGameModes_Params
{
	TArray<struct FString>                             NewGameModes;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetCameraDistance
struct UMordhauGameUserSettings_SetCameraDistance_Params
{
	float                                              NewCameraDistance;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetBloom
struct UMordhauGameUserSettings_SetBloom_Params
{
	float                                              NewBloom;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetAntiAliasing
struct UMordhauGameUserSettings_SetAntiAliasing_Params
{
	int                                                NewAntiAliasing;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.SetAmbientOcclusion
struct UMordhauGameUserSettings_SetAmbientOcclusion_Params
{
	int                                                NewAmbientOcclusion;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetVoiceVolume
struct UMordhauGameUserSettings_GetVoiceVolume_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetVideoVolume
struct UMordhauGameUserSettings_GetVideoVolume_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetTracersStayTimeLimits
struct UMordhauGameUserSettings_GetTracersStayTimeLimits_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetTracersStayTime
struct UMordhauGameUserSettings_GetTracersStayTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetThirdPersonDeathCamera
struct UMordhauGameUserSettings_GetThirdPersonDeathCamera_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetShowTips
struct UMordhauGameUserSettings_GetShowTips_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetShowTargetInfo
struct UMordhauGameUserSettings_GetShowTargetInfo_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetShowStatusBar
struct UMordhauGameUserSettings_GetShowStatusBar_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetShowSpawnInfo
struct UMordhauGameUserSettings_GetShowSpawnInfo_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetShowServerInScoreboard
struct UMordhauGameUserSettings_GetShowServerInScoreboard_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetShowScoreFeed
struct UMordhauGameUserSettings_GetShowScoreFeed_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetShowObservedDelay
struct UMordhauGameUserSettings_GetShowObservedDelay_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetShowObjectives
struct UMordhauGameUserSettings_GetShowObjectives_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetShowKillFeed
struct UMordhauGameUserSettings_GetShowKillFeed_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetShowKilledBy
struct UMordhauGameUserSettings_GetShowKilledBy_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetShowHitMarker
struct UMordhauGameUserSettings_GetShowHitMarker_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetShowEquipment
struct UMordhauGameUserSettings_GetShowEquipment_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetShowEmotesMenu
struct UMordhauGameUserSettings_GetShowEmotesMenu_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetShowCombatHints
struct UMordhauGameUserSettings_GetShowCombatHints_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetShowChatBox
struct UMordhauGameUserSettings_GetShowChatBox_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetShowAnnouncements
struct UMordhauGameUserSettings_GetShowAnnouncements_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetShowAmmo
struct UMordhauGameUserSettings_GetShowAmmo_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetServerFilterValue
struct UMordhauGameUserSettings_GetServerFilterValue_Params
{
	Mordhau_EServerFilterCategories                    FilterCategory;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetServerBrowserSortType
struct UMordhauGameUserSettings_GetServerBrowserSortType_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetServerBrowserServerName
struct UMordhauGameUserSettings_GetServerBrowserServerName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetServerBrowserNotFull
struct UMordhauGameUserSettings_GetServerBrowserNotFull_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetServerBrowserNoPassword
struct UMordhauGameUserSettings_GetServerBrowserNoPassword_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetServerBrowserMaxPing
struct UMordhauGameUserSettings_GetServerBrowserMaxPing_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetServerBrowserHasPlayers
struct UMordhauGameUserSettings_GetServerBrowserHasPlayers_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetServerBrowserGameMode
struct UMordhauGameUserSettings_GetServerBrowserGameMode_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetSelectedGameModePlayerCounts
struct UMordhauGameUserSettings_GetSelectedGameModePlayerCounts_Params
{
	struct FString                                     GameMode;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetScreenSpaceReflections
struct UMordhauGameUserSettings_GetScreenSpaceReflections_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetScreenPercentageLimits
struct UMordhauGameUserSettings_GetScreenPercentageLimits_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetScreenPercentage
struct UMordhauGameUserSettings_GetScreenPercentage_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetRecentServers
struct UMordhauGameUserSettings_GetRecentServers_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetRankedMatchmakingRegion
struct UMordhauGameUserSettings_GetRankedMatchmakingRegion_Params
{
	MordhauOnlineSubsystem_EServerRegion               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetRankedMatchmakingGameModes
struct UMordhauGameUserSettings_GetRankedMatchmakingGameModes_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetRangedSensitivityLimits
struct UMordhauGameUserSettings_GetRangedSensitivityLimits_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetRangedSensitivity
struct UMordhauGameUserSettings_GetRangedSensitivity_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetRagdollStayTimeLimit
struct UMordhauGameUserSettings_GetRagdollStayTimeLimit_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetRagdollStayTime
struct UMordhauGameUserSettings_GetRagdollStayTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetRagdollFidelity
struct UMordhauGameUserSettings_GetRagdollFidelity_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetQuickSpawn
struct UMordhauGameUserSettings_GetQuickSpawn_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetProfanityFilter
struct UMordhauGameUserSettings_GetProfanityFilter_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetNvidiaReflex
struct UMordhauGameUserSettings_GetNvidiaReflex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetNoTeamColorsOnGear
struct UMordhauGameUserSettings_GetNoTeamColorsOnGear_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetMusicVolume
struct UMordhauGameUserSettings_GetMusicVolume_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetMovementHeadbobLimits
struct UMordhauGameUserSettings_GetMovementHeadbobLimits_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetMovementHeadbob
struct UMordhauGameUserSettings_GetMovementHeadbob_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetMouseSmoothingLimits
struct UMordhauGameUserSettings_GetMouseSmoothingLimits_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetMouseSmoothing
struct UMordhauGameUserSettings_GetMouseSmoothing_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetMotionBlurLimits
struct UMordhauGameUserSettings_GetMotionBlurLimits_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetMotionBlur
struct UMordhauGameUserSettings_GetMotionBlur_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetMaxRagdollsLimit
struct UMordhauGameUserSettings_GetMaxRagdollsLimit_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetMaxRagdolls
struct UMordhauGameUserSettings_GetMaxRagdolls_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetMasterVolume
struct UMordhauGameUserSettings_GetMasterVolume_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetLensFlares
struct UMordhauGameUserSettings_GetLensFlares_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetLanguage
struct UMordhauGameUserSettings_GetLanguage_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetInstrumentsVolume
struct UMordhauGameUserSettings_GetInstrumentsVolume_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetIndirectCapsuleShadows
struct UMordhauGameUserSettings_GetIndirectCapsuleShadows_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetHideWatermark
struct UMordhauGameUserSettings_GetHideWatermark_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetHideHUD
struct UMordhauGameUserSettings_GetHideHUD_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetHideDefaultLoadouts
struct UMordhauGameUserSettings_GetHideDefaultLoadouts_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetHeadbobLimits
struct UMordhauGameUserSettings_GetHeadbobLimits_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetHeadbob
struct UMordhauGameUserSettings_GetHeadbob_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetGore
struct UMordhauGameUserSettings_GetGore_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetGammaLimits
struct UMordhauGameUserSettings_GetGammaLimits_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetGamma
struct UMordhauGameUserSettings_GetGamma_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetFriendlyMarkers
struct UMordhauGameUserSettings_GetFriendlyMarkers_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetFrameRateLimits
struct UMordhauGameUserSettings_GetFrameRateLimits_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetForceFeedbackEnabled
struct UMordhauGameUserSettings_GetForceFeedbackEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetFieldOfViewLimits
struct UMordhauGameUserSettings_GetFieldOfViewLimits_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetFieldOfView
struct UMordhauGameUserSettings_GetFieldOfView_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetFavoriteServers
struct UMordhauGameUserSettings_GetFavoriteServers_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetEffectsVolume
struct UMordhauGameUserSettings_GetEffectsVolume_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetDrawTracers
struct UMordhauGameUserSettings_GetDrawTracers_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetCurrentMotionBlur
struct UMordhauGameUserSettings_GetCurrentMotionBlur_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetCurrentGamma
struct UMordhauGameUserSettings_GetCurrentGamma_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetCurrentBloom
struct UMordhauGameUserSettings_GetCurrentBloom_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetCrosshairType
struct UMordhauGameUserSettings_GetCrosshairType_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetCombatHeadbobLimits
struct UMordhauGameUserSettings_GetCombatHeadbobLimits_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetCombatHeadbob
struct UMordhauGameUserSettings_GetCombatHeadbob_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetCharacterFidelity
struct UMordhauGameUserSettings_GetCharacterFidelity_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetCharacterCloth
struct UMordhauGameUserSettings_GetCharacterCloth_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetCasualMatchmakingRegion
struct UMordhauGameUserSettings_GetCasualMatchmakingRegion_Params
{
	MordhauOnlineSubsystem_EServerRegion               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetCasualMatchmakingGameModes
struct UMordhauGameUserSettings_GetCasualMatchmakingGameModes_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetCameraDistanceLimits
struct UMordhauGameUserSettings_GetCameraDistanceLimits_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetCameraDistance
struct UMordhauGameUserSettings_GetCameraDistance_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetBloomLimits
struct UMordhauGameUserSettings_GetBloomLimits_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetBloom
struct UMordhauGameUserSettings_GetBloom_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetAvailableLanguages
struct UMordhauGameUserSettings_GetAvailableLanguages_Params
{
	TArray<struct FString>                             AvailableLanguages;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetAntiAliasing
struct UMordhauGameUserSettings_GetAntiAliasing_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetAmbientOcclusion
struct UMordhauGameUserSettings_GetAmbientOcclusion_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.GetActualCrosshairType
struct UMordhauGameUserSettings_GetActualCrosshairType_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ApplyTextureQualityUsingTextureGroups
struct UMordhauGameUserSettings_ApplyTextureQualityUsingTextureGroups_Params
{
	int                                                Quality;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauGameUserSettings.ApplyAudioVolumes
struct UMordhauGameUserSettings_ApplyAudioVolumes_Params
{
};

// Function Mordhau.MordhauHttpRequest.MordhauHttpRequest
struct UMordhauHttpRequest_MordhauHttpRequest_Params
{
	class UObject*                                     WorldContext;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InUrl;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InVerb;                                                    // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               InHeaderMap;                                               // 0x0028(0x0050)  (Parm, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InPlayFabJsonObject;                                       // 0x0078(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMordhauHttpRequest*                         ReturnValue;                                               // 0x0080(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauHUD.OnGameStateReplicated
struct AMordhauHUD_OnGameStateReplicated_Params
{
};

// Function Mordhau.MordhauHUD.EnqueueMordhauDialog
struct AMordhauHUD_EnqueueMordhauDialog_Params
{
	class UMordhauDialog*                              Dialog;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauHUDWidgetComponent.ShowWidget
struct UMordhauHUDWidgetComponent_ShowWidget_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauHUDWidgetComponent.RemoveWidget
struct UMordhauHUDWidgetComponent_RemoveWidget_Params
{
};

// Function Mordhau.MordhauHUDWidgetComponent.OnCharacterOwnerEndViewTarget
struct UMordhauHUDWidgetComponent_OnCharacterOwnerEndViewTarget_Params
{
	class AAdvancedCharacter*                          CharacterOwner;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauHUDWidgetComponent.OnCharacterOwnerBecomeViewTarget
struct UMordhauHUDWidgetComponent_OnCharacterOwnerBecomeViewTarget_Params
{
	class AAdvancedCharacter*                          CharacterOwner;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauHUDWidgetComponent.InstantiateWidget
struct UMordhauHUDWidgetComponent_InstantiateWidget_Params
{
};

// Function Mordhau.MordhauHUDWidgetComponent.HideWidget
struct UMordhauHUDWidgetComponent_HideWidget_Params
{
};

// Function Mordhau.MordhauHUDWidgetComponent.GetHUDWidget
struct UMordhauHUDWidgetComponent_GetHUDWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetToggleSprint
struct UMordhauInput_SetToggleSprint_Params
{
	int                                                NewToggleSprint;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetMouseYSensitivity
struct UMordhauInput_SetMouseYSensitivity_Params
{
	float                                              NewSensitivity;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetMouseYInverted
struct UMordhauInput_SetMouseYInverted_Params
{
	bool                                               bNewInverted;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetMouseXSensitivity
struct UMordhauInput_SetMouseXSensitivity_Params
{
	float                                              NewSensitivity;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetMouseXIsFlipAttackSide
struct UMordhauInput_SetMouseXIsFlipAttackSide_Params
{
	int                                                NewIsFlipAttackSide;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetMouseXInverted
struct UMordhauInput_SetMouseXInverted_Params
{
	bool                                               bNewInverted;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetInverseAttackDirectionY
struct UMordhauInput_SetInverseAttackDirectionY_Params
{
	int                                                NewInverseAttackDirectionX;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetInverseAttackDirectionX
struct UMordhauInput_SetInverseAttackDirectionX_Params
{
	int                                                NewInverseAttackDirectionX;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetGamepadRightYSensitivity
struct UMordhauInput_SetGamepadRightYSensitivity_Params
{
	float                                              NewSensitivity;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetGamepadRightYInverted
struct UMordhauInput_SetGamepadRightYInverted_Params
{
	bool                                               bNewInverted;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetGamepadRightYDeadzone
struct UMordhauInput_SetGamepadRightYDeadzone_Params
{
	float                                              NewDeadzone;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetGamepadRightXSensitivity
struct UMordhauInput_SetGamepadRightXSensitivity_Params
{
	float                                              NewSensitivity;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetGamepadRightXInverted
struct UMordhauInput_SetGamepadRightXInverted_Params
{
	bool                                               bNewInverted;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetGamepadRightXDeadzone
struct UMordhauInput_SetGamepadRightXDeadzone_Params
{
	float                                              NewDeadzone;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetGamepadLeftYSensitivity
struct UMordhauInput_SetGamepadLeftYSensitivity_Params
{
	float                                              NewSensitivity;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetGamepadLeftYInverted
struct UMordhauInput_SetGamepadLeftYInverted_Params
{
	bool                                               bNewInverted;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetGamepadLeftYDeadzone
struct UMordhauInput_SetGamepadLeftYDeadzone_Params
{
	float                                              NewDeadzone;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetGamepadLeftXSensitivity
struct UMordhauInput_SetGamepadLeftXSensitivity_Params
{
	float                                              NewSensitivity;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetGamepadLeftXInverted
struct UMordhauInput_SetGamepadLeftXInverted_Params
{
	bool                                               bNewInverted;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetGamepadLeftXDeadzone
struct UMordhauInput_SetGamepadLeftXDeadzone_Params
{
	float                                              NewDeadzone;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetControlScheme
struct UMordhauInput_SetControlScheme_Params
{
	int                                                NewControlScheme;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetAngleAttacksWithMovement
struct UMordhauInput_SetAngleAttacksWithMovement_Params
{
	int                                                NewAngleAttacksWithMovement;                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SetAngleAttackAfterPress
struct UMordhauInput_SetAngleAttackAfterPress_Params
{
	int                                                NewAngleAttackAfterPress;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.SaveSettings
struct UMordhauInput_SaveSettings_Params
{
};

// Function Mordhau.MordhauInput.RestoreDefaultSettings
struct UMordhauInput_RestoreDefaultSettings_Params
{
};

// Function Mordhau.MordhauInput.GetToggleSprint
struct UMordhauInput_GetToggleSprint_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetSecondaryAxisKeyBinding
struct UMordhauInput_GetSecondaryAxisKeyBinding_Params
{
	struct FName                                       AxisName;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAxisKeyMapping                        ReturnValue;                                               // 0x0008(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetSecondaryActionKeyBinding
struct UMordhauInput_GetSecondaryActionKeyBinding_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionKeyMapping                      ReturnValue;                                               // 0x0008(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetPrimaryAxisKeyBinding
struct UMordhauInput_GetPrimaryAxisKeyBinding_Params
{
	struct FName                                       AxisName;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAxisKeyMapping                        ReturnValue;                                               // 0x0008(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetPrimaryActionKeyBinding
struct UMordhauInput_GetPrimaryActionKeyBinding_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionKeyMapping                      ReturnValue;                                               // 0x0008(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetMouseYSensitivity
struct UMordhauInput_GetMouseYSensitivity_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetMouseYInverted
struct UMordhauInput_GetMouseYInverted_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetMouseXSensitivity
struct UMordhauInput_GetMouseXSensitivity_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetMouseXIsFlipAttackSide
struct UMordhauInput_GetMouseXIsFlipAttackSide_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetMouseXInverted
struct UMordhauInput_GetMouseXInverted_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetMouseSensitivityLimits
struct UMordhauInput_GetMouseSensitivityLimits_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetInverseAttackDirectionY
struct UMordhauInput_GetInverseAttackDirectionY_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetInverseAttackDirectionX
struct UMordhauInput_GetInverseAttackDirectionX_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetGamepadSensitivityLimits
struct UMordhauInput_GetGamepadSensitivityLimits_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetGamepadRightYSensitivity
struct UMordhauInput_GetGamepadRightYSensitivity_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetGamepadRightYInverted
struct UMordhauInput_GetGamepadRightYInverted_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetGamepadRightYDeadzone
struct UMordhauInput_GetGamepadRightYDeadzone_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetGamepadRightXSensitivity
struct UMordhauInput_GetGamepadRightXSensitivity_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetGamepadRightXInverted
struct UMordhauInput_GetGamepadRightXInverted_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetGamepadRightXDeadzone
struct UMordhauInput_GetGamepadRightXDeadzone_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetGamepadLeftYSensitivity
struct UMordhauInput_GetGamepadLeftYSensitivity_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetGamepadLeftYInverted
struct UMordhauInput_GetGamepadLeftYInverted_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetGamepadLeftYDeadzone
struct UMordhauInput_GetGamepadLeftYDeadzone_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetGamepadLeftXSensitivity
struct UMordhauInput_GetGamepadLeftXSensitivity_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetGamepadLeftXInverted
struct UMordhauInput_GetGamepadLeftXInverted_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetGamepadLeftXDeadzone
struct UMordhauInput_GetGamepadLeftXDeadzone_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetGamepadDeadzoneLimits
struct UMordhauInput_GetGamepadDeadzoneLimits_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetControlScheme
struct UMordhauInput_GetControlScheme_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetConsoleKeyBindings
struct UMordhauInput_GetConsoleKeyBindings_Params
{
	TArray<struct FKey>                                ConsoleKeyBindings;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetAxisScale
struct UMordhauInput_GetAxisScale_Params
{
	struct FInputAxisKeyMapping                        AxisKeyBinding;                                            // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetAxisOppositeDirectionName
struct UMordhauInput_GetAxisOppositeDirectionName_Params
{
	struct FName                                       AxisName;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetAxisName
struct UMordhauInput_GetAxisName_Params
{
	struct FInputAxisKeyMapping                        AxisKeyBinding;                                            // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetAxisKeyBindings
struct UMordhauInput_GetAxisKeyBindings_Params
{
	TArray<struct FInputAxisKeyMapping>                AxisKeyBindings;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetAxisKey
struct UMordhauInput_GetAxisKey_Params
{
	struct FInputAxisKeyMapping                        AxisKeyBinding;                                            // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FKey                                        ReturnValue;                                               // 0x0028(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetAngleAttacksWithMovement
struct UMordhauInput_GetAngleAttacksWithMovement_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetAngleAttackAfterPress
struct UMordhauInput_GetAngleAttackAfterPress_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetActionName
struct UMordhauInput_GetActionName_Params
{
	struct FInputActionKeyMapping                      ActionKeyBinding;                                          // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetActionKeyBindings
struct UMordhauInput_GetActionKeyBindings_Params
{
	TArray<struct FInputActionKeyMapping>              ActionKeyBindings;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.GetActionKey
struct UMordhauInput_GetActionKey_Params
{
	struct FInputActionKeyMapping                      ActionKeyBinding;                                          // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FKey                                        ReturnValue;                                               // 0x0028(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.ClearKeyBindings
struct UMordhauInput_ClearKeyBindings_Params
{
};

// Function Mordhau.MordhauInput.ApplySettings
struct UMordhauInput_ApplySettings_Params
{
};

// Function Mordhau.MordhauInput.AddConsoleKeyBinding
struct UMordhauInput_AddConsoleKeyBinding_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.AddAxisKeyBinding
struct UMordhauInput_AddAxisKeyBinding_Params
{
	struct FName                                       AxisName;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInput.AddActionKeyBinding
struct UMordhauInput_AddActionKeyBinding_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.UnlockLevelUnlocks
struct UMordhauInventory_UnlockLevelUnlocks_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.UnlockItems
struct UMordhauInventory_UnlockItems_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ItemDefIDs;                                                // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.UnlockItem
struct UMordhauInventory_UnlockItem_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemDefID;                                                 // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.TriggerItemDrop
struct UMordhauInventory_TriggerItemDrop_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemDefID;                                                 // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.SetPlayerXP
struct UMordhauInventory_SetPlayerXP_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                XP;                                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.SetPlayerGold
struct UMordhauInventory_SetPlayerGold_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Gold;                                                      // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.SetItemQuantity
struct UMordhauInventory_SetItemQuantity_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemDefID;                                                 // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x001C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.ResetInventory
struct UMordhauInventory_ResetInventory_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.RequestUnlockRecipes
struct UMordhauInventory_RequestUnlockRecipes_Params
{
};

// Function Mordhau.MordhauInventory.RefreshPlayerItems
struct UMordhauInventory_RefreshPlayerItems_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.RefreshItems
struct UMordhauInventory_RefreshItems_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.IsSkinAvailable
struct UMordhauInventory_IsSkinAvailable_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEquipmentSkinEntry                         Skin;                                                      // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.IsInventoryAvailable
struct UMordhauInventory_IsInventoryAvailable_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.HasSkin
struct UMordhauInventory_HasSkin_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEquipmentSkinEntry                         Skin;                                                      // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.HasItem
struct UMordhauInventory_HasItem_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemDefID;                                                 // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.GetXPItemDefID
struct UMordhauInventory_GetXPItemDefID_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.GetXP
struct UMordhauInventory_GetXP_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.GetUnlockRecipe
struct UMordhauInventory_GetUnlockRecipe_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemDefID;                                                 // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUnlockRecipe                               Recipe;                                                    // 0x0008(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.GetTutorialPackageItemDefID
struct UMordhauInventory_GetTutorialPackageItemDefID_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.GetSupporterPackageItemDefID
struct UMordhauInventory_GetSupporterPackageItemDefID_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.GetStackQuantity
struct UMordhauInventory_GetStackQuantity_Params
{
	struct FItemStack                                  ItemStack;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.GetStackItemDefID
struct UMordhauInventory_GetStackItemDefID_Params
{
	struct FItemStack                                  ItemStack;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.GetStackItem
struct UMordhauInventory_GetStackItem_Params
{
	struct FItemStack                                  ItemStack;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UMordhauInventoryItem*                       ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.GetSkinRarity
struct UMordhauInventory_GetSkinRarity_Params
{
	struct FEquipmentSkinEntry                         Skin;                                                      // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	Mordhau_EItemRarity                                ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.GetPlayerXP
struct UMordhauInventory_GetPlayerXP_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.GetPlayerGold
struct UMordhauInventory_GetPlayerGold_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.GetItemStacks
struct UMordhauInventory_GetItemStacks_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemStack>                          ItemStacks;                                                // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.GetItemQuantity
struct UMordhauInventory_GetItemQuantity_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemDefID;                                                 // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.GetItem
struct UMordhauInventory_GetItem_Params
{
	int                                                ItemDefID;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMordhauInventoryItem*                       ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.GetGoldItemDefID
struct UMordhauInventory_GetGoldItemDefID_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.GetGold
struct UMordhauInventory_GetGold_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.FakeRewardDrop
struct UMordhauInventory_FakeRewardDrop_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Gold;                                                      // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                XP;                                                        // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.FakeItemDrop
struct UMordhauInventory_FakeItemDrop_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemDefID;                                                 // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.ClearPlayerItems
struct UMordhauInventory_ClearPlayerItems_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.CanUnlockItems
struct UMordhauInventory_CanUnlockItems_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ItemDefIDs;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.CanUnlockItem
struct UMordhauInventory_CanUnlockItem_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemDefID;                                                 // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.AreUnlockRecipesAvailable
struct UMordhauInventory_AreUnlockRecipesAvailable_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.AddItems
struct UMordhauInventory_AddItems_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ItemDefIDs;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauInventory.AddItem
struct UMordhauInventory_AddItem_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemDefID;                                                 // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMovementComponent.OnInputTypeChange
struct UMordhauMovementComponent_OnInputTypeChange_Params
{
	bool                                               bUsingGamepad;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMovementComponent.OnCharacterLODTick
struct UMordhauMovementComponent_OnCharacterLODTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMovementComponent.Knockback
struct UMordhauMovementComponent_Knockback_Params
{
	struct FVector                                     Amount;                                                    // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMovementComponent.IsInKnockback
struct UMordhauMovementComponent_IsInKnockback_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMovementComponent.GetSpeedFactor
struct UMordhauMovementComponent_GetSpeedFactor_Params
{
	float                                              PartialSprintToSprintWeight;                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauMovementComponent.GetAccelerationFactor
struct UMordhauMovementComponent_GetAccelerationFactor_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.VoteMap
struct AMordhauPlayerController_VoteMap_Params
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.VoteLevel
struct AMordhauPlayerController_VoteLevel_Params
{
	struct FString                                     LevelName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.VoteKick
struct AMordhauPlayerController_VoteKick_Params
{
	struct FString                                     PlayerNameOrPlayFabID;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.UpdateWeaponMode
struct AMordhauPlayerController_UpdateWeaponMode_Params
{
	class UClass*                                      WeaponToUpdate;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAltMode;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.Unmute
struct AMordhauPlayerController_Unmute_Params
{
	struct FString                                     PlayerNameOrPlayFabID;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.UnmountPak
struct AMordhauPlayerController_UnmountPak_Params
{
	struct FString                                     PakPath;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.Unban
struct AMordhauPlayerController_Unban_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.Turn
struct AMordhauPlayerController_Turn_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ToggleStamina
struct AMordhauPlayerController_ToggleStamina_Params
{
};

// Function Mordhau.MordhauPlayerController.ToggleServerNetProfile
struct AMordhauPlayerController_ToggleServerNetProfile_Params
{
};

// Function Mordhau.MordhauPlayerController.ToggleDamage
struct AMordhauPlayerController_ToggleDamage_Params
{
};

// Function Mordhau.MordhauPlayerController.TakeReportScreenshot
struct AMordhauPlayerController_TakeReportScreenshot_Params
{
};

// Function Mordhau.MordhauPlayerController.StopServerStatsFile
struct AMordhauPlayerController_StopServerStatsFile_Params
{
};

// Function Mordhau.MordhauPlayerController.StartServerStatsFile
struct AMordhauPlayerController_StartServerStatsFile_Params
{
};

// Function Mordhau.MordhauPlayerController.SpectatorCmd
struct AMordhauPlayerController_SpectatorCmd_Params
{
	struct FString                                     SpecCmd;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.Slomo
struct AMordhauPlayerController_Slomo_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ShowTips
struct AMordhauPlayerController_ShowTips_Params
{
};

// Function Mordhau.MordhauPlayerController.ShowEquipment
struct AMordhauPlayerController_ShowEquipment_Params
{
};

// Function Mordhau.MordhauPlayerController.ShowAuthTraces
struct AMordhauPlayerController_ShowAuthTraces_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.SharesInstanceWith
struct AMordhauPlayerController_SharesInstanceWith_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.SetWeaponModesArray
struct AMordhauPlayerController_SetWeaponModesArray_Params
{
	TArray<class UClass*>                              InWeapons;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.SetServerSupportsLagReports
struct AMordhauPlayerController_SetServerSupportsLagReports_Params
{
	bool                                               bSupported;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.SetMaxNetSkip
struct AMordhauPlayerController_SetMaxNetSkip_Params
{
	int                                                NewMaxNetSkip;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.SetFriendlyNetSkipOffset
struct AMordhauPlayerController_SetFriendlyNetSkipOffset_Params
{
	int                                                NewFriendlyNetSkipOffset;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.SetChoiceMenuConsumesInput
struct AMordhauPlayerController_SetChoiceMenuConsumesInput_Params
{
	bool                                               Value;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerVoteLevel
struct AMordhauPlayerController_ServerVoteLevel_Params
{
	struct FString                                     LevelName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerUnbanPlayer
struct AMordhauPlayerController_ServerUnbanPlayer_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerToggleStamina
struct AMordhauPlayerController_ServerToggleStamina_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerToggleNetProfile
struct AMordhauPlayerController_ServerToggleNetProfile_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerToggleDamage
struct AMordhauPlayerController_ServerToggleDamage_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerStopServerStatsFile
struct AMordhauPlayerController_ServerStopServerStatsFile_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerStartServerStatsFile
struct AMordhauPlayerController_ServerStartServerStatsFile_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerSlomo
struct AMordhauPlayerController_ServerSlomo_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerSetXPAndMMR
struct AMordhauPlayerController_ServerSetXPAndMMR_Params
{
	int                                                XP;                                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DuelMMR;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamfightMMR;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CasualMMR;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerSetSpawnToken
struct AMordhauPlayerController_ServerSetSpawnToken_Params
{
	int                                                NewToken;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerSetSessionTicket
struct AMordhauPlayerController_ServerSetSessionTicket_Params
{
	struct FString                                     InSessionTicket;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerSetMaxNetSkip
struct AMordhauPlayerController_ServerSetMaxNetSkip_Params
{
	int                                                NewMaxNetSkip;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerSetMatchmakingMatchID
struct AMordhauPlayerController_ServerSetMatchmakingMatchID_Params
{
	struct FString                                     InMatchmakingMatchID;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerSetLevelDisplayType
struct AMordhauPlayerController_ServerSetLevelDisplayType_Params
{
	unsigned char                                      NewLevelDisplayType;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerSetFriendlyNetSkipOffset
struct AMordhauPlayerController_ServerSetFriendlyNetSkipOffset_Params
{
	int                                                NewFriendlyNetSkipOffset;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerSetBadge
struct AMordhauPlayerController_ServerSetBadge_Params
{
	unsigned char                                      NewBadge;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerRequestSphericalHitboxes
struct AMordhauPlayerController_ServerRequestSphericalHitboxes_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerRequestSetTeam
struct AMordhauPlayerController_ServerRequestSetTeam_Params
{
	int                                                NewTeam;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerRequestSetSkillsCustomization
struct AMordhauPlayerController_ServerRequestSetSkillsCustomization_Params
{
	struct FSkillsCustomization                        NewCharacterSkills;                                        // 0x0000(0x0004)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerRequestSetGearCustomization
struct AMordhauPlayerController_ServerRequestSetGearCustomization_Params
{
	struct FCharacterGearCustomization                 NewCharacterGear;                                          // 0x0000(0x0020)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerRequestSetFaceCustomization
struct AMordhauPlayerController_ServerRequestSetFaceCustomization_Params
{
	struct FFaceCustomization                          NewCharacterFace;                                          // 0x0000(0x0030)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerRequestSetDefaultProfile
struct AMordhauPlayerController_ServerRequestSetDefaultProfile_Params
{
	int                                                NewDefaultProfile;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerRequestSetDefaultCharacterTiers
struct AMordhauPlayerController_ServerRequestSetDefaultCharacterTiers_Params
{
	TArray<struct FCharacterGearCustomization>         Tiers;                                                     // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerRequestSetDefaultCharacterEquipment
struct AMordhauPlayerController_ServerRequestSetDefaultCharacterEquipment_Params
{
	TArray<struct FEquipmentCustomization>             Equip;                                                     // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerRequestSetAppearanceCustomization
struct AMordhauPlayerController_ServerRequestSetAppearanceCustomization_Params
{
	struct FAppearanceCustomization                    NewCharacterAppearance;                                    // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerRequestAuthTraces
struct AMordhauPlayerController_ServerRequestAuthTraces_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerReportServerLag
struct AMordhauPlayerController_ServerReportServerLag_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerRemoveBots
struct AMordhauPlayerController_ServerRemoveBots_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Team;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerRemoveAdmin
struct AMordhauPlayerController_ServerRemoveAdmin_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerPlayerStatus
struct AMordhauPlayerController_ServerPlayerStatus_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerNotifyPlayerDisconnecting
struct AMordhauPlayerController_ServerNotifyPlayerDisconnecting_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerNotifyItemsUnlocked
struct AMordhauPlayerController_ServerNotifyItemsUnlocked_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerMuteList
struct AMordhauPlayerController_ServerMuteList_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerKickPlayer
struct AMordhauPlayerController_ServerKickPlayer_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KickReason;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerHasPassedCheck
struct AMordhauPlayerController_ServerHasPassedCheck_Params
{
	unsigned char                                      Param;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerGetServerStats
struct AMordhauPlayerController_ServerGetServerStats_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerGetMapVoteMaps
struct AMordhauPlayerController_ServerGetMapVoteMaps_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerGetMapVoteCounts
struct AMordhauPlayerController_ServerGetMapVoteCounts_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerChatUnmutePlayer
struct AMordhauPlayerController_ServerChatUnmutePlayer_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerChatMutePlayer
struct AMordhauPlayerController_ServerChatMutePlayer_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MuteDuration;                                              // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerChangeLevel
struct AMordhauPlayerController_ServerChangeLevel_Params
{
	struct FString                                     LevelName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerBanPlayer
struct AMordhauPlayerController_ServerBanPlayer_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BanDuration;                                               // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BanReason;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerBanList
struct AMordhauPlayerController_ServerBanList_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerAdminLogin
struct AMordhauPlayerController_ServerAdminLogin_Params
{
	struct FString                                     Password;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerAdminList
struct AMordhauPlayerController_ServerAdminList_Params
{
};

// Function Mordhau.MordhauPlayerController.ServerAddBots
struct AMordhauPlayerController_ServerAddBots_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Team;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ServerAddAdmin
struct AMordhauPlayerController_ServerAddAdmin_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.Server_Reliable_GiveCata
struct AMordhauPlayerController_Server_Reliable_GiveCata_Params
{
};

// Function Mordhau.MordhauPlayerController.SaveCurrentProfilesAsBotProfiles
struct AMordhauPlayerController_SaveCurrentProfilesAsBotProfiles_Params
{
};

// Function Mordhau.MordhauPlayerController.RequestSphericalHitboxes
struct AMordhauPlayerController_RequestSphericalHitboxes_Params
{
};

// Function Mordhau.MordhauPlayerController.RequestServerRestrictionInfo
struct AMordhauPlayerController_RequestServerRestrictionInfo_Params
{
};

// Function Mordhau.MordhauPlayerController.RequestRewards
struct AMordhauPlayerController_RequestRewards_Params
{
};

// Function Mordhau.MordhauPlayerController.RequestReportPlayer
struct AMordhauPlayerController_RequestReportPlayer_Params
{
	struct FString                                     ReporteePlayFabID;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReportType;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Screenshot;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ReportServerLag
struct AMordhauPlayerController_ReportServerLag_Params
{
};

// Function Mordhau.MordhauPlayerController.ReportPlayer
struct AMordhauPlayerController_ReportPlayer_Params
{
	struct FString                                     ReporteePlayFabID;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReportType;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ScreenshotFilename;                                        // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.RemoveBotsTeam
struct AMordhauPlayerController_RemoveBotsTeam_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Team;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.RemoveBots
struct AMordhauPlayerController_RemoveBots_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.RemoveAdmin
struct AMordhauPlayerController_RemoveAdmin_Params
{
	struct FString                                     PlayerNameOrPlayFabID;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.RegisterAnglingYInput
struct AMordhauPlayerController_RegisterAnglingYInput_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.RegisterAnglingXInput
struct AMordhauPlayerController_RegisterAnglingXInput_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ReceiveServerRestrictionInfo
struct AMordhauPlayerController_ReceiveServerRestrictionInfo_Params
{
	struct FServerRestrictionInfo                      Info;                                                      // 0x0000(0x0010)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ProcessChatCommand
struct AMordhauPlayerController_ProcessChatCommand_Params
{
	struct FString                                     Prefix;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Command;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Args;                                                      // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.PrepareAndSendCustomizationIfChanged
struct AMordhauPlayerController_PrepareAndSendCustomizationIfChanged_Params
{
};

// Function Mordhau.MordhauPlayerController.PlayerStatus
struct AMordhauPlayerController_PlayerStatus_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.PlayerList
struct AMordhauPlayerController_PlayerList_Params
{
};

// Function Mordhau.MordhauPlayerController.ParryThis
struct AMordhauPlayerController_ParryThis_Params
{
};

// Function Mordhau.MordhauPlayerController.OnSpectatorCmd
struct AMordhauPlayerController_OnSpectatorCmd_Params
{
	struct FString                                     Cmd;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Param;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.OnSpectatorAction
struct AMordhauPlayerController_OnSpectatorAction_Params
{
	unsigned char                                      Action;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.OnSettingsChanged
struct AMordhauPlayerController_OnSettingsChanged_Params
{
};

// Function Mordhau.MordhauPlayerController.OnRequestVoteKick
struct AMordhauPlayerController_OnRequestVoteKick_Params
{
	class AMordhauPlayerState*                         TargetPlayer;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.OnRequestCancelVoteKick
struct AMordhauPlayerController_OnRequestCancelVoteKick_Params
{
};

// Function Mordhau.MordhauPlayerController.OnReceivedKillScore
struct AMordhauPlayerController_OnReceivedKillScore_Params
{
	class AMordhauCharacter*                           Killed;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.OnReceivedAssistScore
struct AMordhauPlayerController_OnReceivedAssistScore_Params
{
	float                                              Percentage;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauCharacter*                           Killed;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.OnPlayFabLoginComplete
struct AMordhauPlayerController_OnPlayFabLoginComplete_Params
{
	bool                                               bWasSuccessful;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.OnNewProfileFromClientPreValidation
struct AMordhauPlayerController_OnNewProfileFromClientPreValidation_Params
{
};

// Function Mordhau.MordhauPlayerController.OnNewProfileFromClientPostValidation
struct AMordhauPlayerController_OnNewProfileFromClientPostValidation_Params
{
};

// Function Mordhau.MordhauPlayerController.OnMordhauCharacterSpawned
struct AMordhauPlayerController_OnMordhauCharacterSpawned_Params
{
	class AMordhauCharacter*                           SpawnedCharacter;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.OnIsAnythingRestockableChanged
struct AMordhauPlayerController_OnIsAnythingRestockableChanged_Params
{
};

// Function Mordhau.MordhauPlayerController.OnInventoryItemsUnlocked
struct AMordhauPlayerController_OnInventoryItemsUnlocked_Params
{
	bool                                               bWasSuccessful;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemStack>                          ItemStacks;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.OnHighlightStart
struct AMordhauPlayerController_OnHighlightStart_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.OnHighlightEnd
struct AMordhauPlayerController_OnHighlightEnd_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.OnGetPlayFabPlayerComplete
struct AMordhauPlayerController_OnGetPlayFabPlayerComplete_Params
{
	bool                                               bWasSuccessful;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabPlayer                              PlayFabPlayer;                                             // 0x0018(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.OnGetPlayFabIDsFromPlatformIDsComplete
struct AMordhauPlayerController_OnGetPlayFabIDsFromPlatformIDsComplete_Params
{
	bool                                               bWasSuccessful;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               PlayFabIds;                                                // 0x0008(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.OnAmmoChanged
struct AMordhauPlayerController_OnAmmoChanged_Params
{
	class AMordhauEquipment*                           Equipment;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AmmoDifference;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.OnAfterUnPossess
struct AMordhauPlayerController_OnAfterUnPossess_Params
{
};

// Function Mordhau.MordhauPlayerController.OnAfterPossess
struct AMordhauPlayerController_OnAfterPossess_Params
{
	class APawn*                                       APawn;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.OnAFKTimeExceededMaximum
struct AMordhauPlayerController_OnAFKTimeExceededMaximum_Params
{
};

// Function Mordhau.MordhauPlayerController.OnActionFailed
struct AMordhauPlayerController_OnActionFailed_Params
{
	struct FName                                       Reason;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.MuteList
struct AMordhauPlayerController_MuteList_Params
{
};

// Function Mordhau.MordhauPlayerController.Mute
struct AMordhauPlayerController_Mute_Params
{
	struct FString                                     PlayerNameOrPlayFabID;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MuteDuration;                                              // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.MountPak
struct AMordhauPlayerController_MountPak_Params
{
	struct FString                                     PakPath;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.LookupPlayer
struct AMordhauPlayerController_LookupPlayer_Params
{
	struct FString                                     UniqueId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.LookUp
struct AMordhauPlayerController_LookUp_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.Kick
struct AMordhauPlayerController_Kick_Params
{
	struct FString                                     PlayerNameOrPlayFabID;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KickReason;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.IsSessionTicketAvailable
struct AMordhauPlayerController_IsSessionTicketAvailable_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.IsInventoryAvailable
struct AMordhauPlayerController_IsInventoryAvailable_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.IsAuthenticating
struct AMordhauPlayerController_IsAuthenticating_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.IsAuthenticated
struct AMordhauPlayerController_IsAuthenticated_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.IsAllowedServer
struct AMordhauPlayerController_IsAllowedServer_Params
{
	struct FString                                     Command;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.IsAllowedClient
struct AMordhauPlayerController_IsAllowedClient_Params
{
	struct FString                                     Command;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.IsAdmin
struct AMordhauPlayerController_IsAdmin_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.GiveClientScoreBP
struct AMordhauPlayerController_GiveClientScoreBP_Params
{
	Mordhau_EScoreFeedReason                           Reason;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ScoreAmount;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.GiveCata
struct AMordhauPlayerController_GiveCata_Params
{
};

// Function Mordhau.MordhauPlayerController.GetPlayFabPlayer
struct AMordhauPlayerController_GetPlayFabPlayer_Params
{
	struct FPlayFabPlayer                              ReturnValue;                                               // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.GetPlayFabId
struct AMordhauPlayerController_GetPlayFabId_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.GetNextViewablePlayerNonAuth
struct AMordhauPlayerController_GetNextViewablePlayerNonAuth_Params
{
	bool                                               bReverse;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyOwnTeam;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAdvancedCharacter*                          ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.GetLastControlledCharacter
struct AMordhauPlayerController_GetLastControlledCharacter_Params
{
	class AMordhauCharacter*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.GetDefaultTierCustomizationForSlot
struct AMordhauPlayerController_GetDefaultTierCustomizationForSlot_Params
{
	Mordhau_EMainWearableSlot                          MainSlot;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ArmorTier;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<Mordhau_EWearableSlot, struct FWearableCustomization> OutMap;                                                    // 0x0008(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.GetDefaultEquipmentCustomizationFor
struct AMordhauPlayerController_GetDefaultEquipmentCustomizationFor_Params
{
	class UClass*                                      ForEquipmentClass;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEquipmentCustomization                     OutCustomization;                                          // 0x0008(0x0030)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.GetControlledMordhauCharacter
struct AMordhauPlayerController_GetControlledMordhauCharacter_Params
{
	bool                                               bAlsoSearchVehicle;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauCharacter*                           ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.GetAnglingVector
struct AMordhauPlayerController_GetAnglingVector_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.GetAnglingAngle
struct AMordhauPlayerController_GetAnglingAngle_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.FlushPendingAnglingInputs
struct AMordhauPlayerController_FlushPendingAnglingInputs_Params
{
};

// Function Mordhau.MordhauPlayerController.EquipmentCommand
struct AMordhauPlayerController_EquipmentCommand_Params
{
	int                                                Command;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.DisplayMessage
struct AMordhauPlayerController_DisplayMessage_Params
{
	class APlayerState*                                SenderPlayerState;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     S;                                                         // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Type;                                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MsgLifeTime;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.DisplayAnnouncement
struct AMordhauPlayerController_DisplayAnnouncement_Params
{
	struct FString                                     Text;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Subtext;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.CopyName
struct AMordhauPlayerController_CopyName_Params
{
	struct FString                                     UniqueId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.CopyID
struct AMordhauPlayerController_CopyID_Params
{
	struct FString                                     UniqueId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ComputePlayerRank
struct AMordhauPlayerController_ComputePlayerRank_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ClientWasKicked_Implementation
struct AMordhauPlayerController_ClientWasKicked_Implementation_Params
{
	struct FText                                       KickReason;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ClientSetServerStats
struct AMordhauPlayerController_ClientSetServerStats_Params
{
	struct FServerStats                                InServerStats;                                             // 0x0000(0x0018)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ClientSetServerInfo
struct AMordhauPlayerController_ClientSetServerInfo_Params
{
	struct FBasicServerInfo                            ServerInfo;                                                // 0x0000(0x0018)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ClientSetPlayFabMatch
struct AMordhauPlayerController_ClientSetPlayFabMatch_Params
{
	struct FPlayFabMatch                               InMatch;                                                   // 0x0000(0x0060)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ClientSetMapVoteMaps
struct AMordhauPlayerController_ClientSetMapVoteMaps_Params
{
	TArray<struct FString>                             InMapVoteMaps;                                             // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ClientSetMapVoteCounts
struct AMordhauPlayerController_ClientSetMapVoteCounts_Params
{
	TArray<unsigned char>                              InMapVoteCounts;                                           // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ClientSetFlags
struct AMordhauPlayerController_ClientSetFlags_Params
{
	struct FString                                     InMyFlags;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAdminFlag>                          InAdminFlags;                                              // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ClientSetControlAndPawnRotation
struct AMordhauPlayerController_ClientSetControlAndPawnRotation_Params
{
	class APawn*                                       APawn;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    NewRotation;                                               // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ClientRequestXPAndMMR
struct AMordhauPlayerController_ClientRequestXPAndMMR_Params
{
};

// Function Mordhau.MordhauPlayerController.ClientRequestSessionTicket
struct AMordhauPlayerController_ClientRequestSessionTicket_Params
{
};

// Function Mordhau.MordhauPlayerController.ClientRequestMatchmakingMatchID
struct AMordhauPlayerController_ClientRequestMatchmakingMatchID_Params
{
};

// Function Mordhau.MordhauPlayerController.ClientReceiveSphericalHitboxes
struct AMordhauPlayerController_ClientReceiveSphericalHitboxes_Params
{
	TArray<struct FVector>                             Locations;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WeaponTraceStart;                                          // 0x0010(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WeaponTraceEnd;                                            // 0x001C(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ClientReceiveScoreNoState
struct AMordhauPlayerController_ClientReceiveScoreNoState_Params
{
	unsigned char                                      ReasonAndParam;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            ScoreAmount;                                               // 0x0002(0x0002)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ClientReceiveScoreBP
struct AMordhauPlayerController_ClientReceiveScoreBP_Params
{
	Mordhau_EScoreFeedReason                           Reason;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ReasonParam;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScoreAmount;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauPlayerState*                         AssociatedPlayer;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ClientReceiveScore
struct AMordhauPlayerController_ClientReceiveScore_Params
{
	unsigned char                                      ReasonAndParam;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            ScoreAmount;                                               // 0x0002(0x0002)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauPlayerState*                         AssociatedPlayer;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ClientReceiveMessage
struct AMordhauPlayerController_ClientReceiveMessage_Params
{
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ClientMessageBP
struct AMordhauPlayerController_ClientMessageBP_Params
{
	struct FString                                     String;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ClientDrawTracer
struct AMordhauPlayerController_ClientDrawTracer_Params
{
	struct FVector                                     Start;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                       // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ChooseExit
struct AMordhauPlayerController_ChooseExit_Params
{
};

// Function Mordhau.MordhauPlayerController.Choose9
struct AMordhauPlayerController_Choose9_Params
{
};

// Function Mordhau.MordhauPlayerController.Choose8
struct AMordhauPlayerController_Choose8_Params
{
};

// Function Mordhau.MordhauPlayerController.Choose7
struct AMordhauPlayerController_Choose7_Params
{
};

// Function Mordhau.MordhauPlayerController.Choose6
struct AMordhauPlayerController_Choose6_Params
{
};

// Function Mordhau.MordhauPlayerController.Choose5
struct AMordhauPlayerController_Choose5_Params
{
};

// Function Mordhau.MordhauPlayerController.Choose4
struct AMordhauPlayerController_Choose4_Params
{
};

// Function Mordhau.MordhauPlayerController.Choose3
struct AMordhauPlayerController_Choose3_Params
{
};

// Function Mordhau.MordhauPlayerController.Choose2
struct AMordhauPlayerController_Choose2_Params
{
};

// Function Mordhau.MordhauPlayerController.Choose1
struct AMordhauPlayerController_Choose1_Params
{
};

// Function Mordhau.MordhauPlayerController.ChoiceMenuOptionSelected
struct AMordhauPlayerController_ChoiceMenuOptionSelected_Params
{
	int                                                Choice;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ChoiceMenu
struct AMordhauPlayerController_ChoiceMenu_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ChangeMap
struct AMordhauPlayerController_ChangeMap_Params
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.ChangeLevel
struct AMordhauPlayerController_ChangeLevel_Params
{
	struct FString                                     LevelName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.CancelVoteKick
struct AMordhauPlayerController_CancelVoteKick_Params
{
};

// Function Mordhau.MordhauPlayerController.CanAskForSpawn
struct AMordhauPlayerController_CanAskForSpawn_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.BanList
struct AMordhauPlayerController_BanList_Params
{
};

// Function Mordhau.MordhauPlayerController.Ban
struct AMordhauPlayerController_Ban_Params
{
	struct FString                                     PlayerNameOrPlayFabID;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BanDuration;                                               // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BanReason;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.AskForSpawn
struct AMordhauPlayerController_AskForSpawn_Params
{
};

// Function Mordhau.MordhauPlayerController.AreStatsAvailable
struct AMordhauPlayerController_AreStatsAvailable_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.AdminLogin
struct AMordhauPlayerController_AdminLogin_Params
{
	struct FString                                     Password;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.AdminList
struct AMordhauPlayerController_AdminList_Params
{
};

// Function Mordhau.MordhauPlayerController.AddBotsTeam
struct AMordhauPlayerController_AddBotsTeam_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Team;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.AddBots
struct AMordhauPlayerController_AddBots_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerController.AddAdmin
struct AMordhauPlayerController_AddAdmin_Params
{
	struct FString                                     PlayerNameOrPlayFabID;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerStart.OnSpawnChosen
struct AMordhauPlayerStart_OnSpawnChosen_Params
{
	class AController*                                 Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerStart.IsAllowedSpawnFor
struct AMordhauPlayerStart_IsAllowedSpawnFor_Params
{
	class AController*                                 Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerStart.GetSpawnPreferenceFor
struct AMordhauPlayerStart_GetSpawnPreferenceFor_Params
{
	class AController*                                 Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerState.SetTeam
struct AMordhauPlayerState_SetTeam_Params
{
	int                                                NewTeam;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerState.SetPlayerName
struct AMordhauPlayerState_SetPlayerName_Params
{
	struct FString                                     S;                                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerState.OnRep_ReplicatedTeam
struct AMordhauPlayerState_OnRep_ReplicatedTeam_Params
{
};

// Function Mordhau.MordhauPlayerState.OnRep_ReplicatedKills
struct AMordhauPlayerState_OnRep_ReplicatedKills_Params
{
};

// Function Mordhau.MordhauPlayerState.OnRep_ReplicatedDeathsAndFlags
struct AMordhauPlayerState_OnRep_ReplicatedDeathsAndFlags_Params
{
};

// Function Mordhau.MordhauPlayerState.OnRep_ReplicatedAssists
struct AMordhauPlayerState_OnRep_ReplicatedAssists_Params
{
};

// Function Mordhau.MordhauPlayerState.GetRank
struct AMordhauPlayerState_GetRank_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerState.GetPlayFabPlayer
struct AMordhauPlayerState_GetPlayFabPlayer_Params
{
	struct FPlayFabPlayer                              ReturnValue;                                               // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerState.GetPlayFabId
struct AMordhauPlayerState_GetPlayFabId_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerState.GetLastPossessedMordhauCharacter
struct AMordhauPlayerState_GetLastPossessedMordhauCharacter_Params
{
	class AMordhauCharacter*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerState.BanPlayer
struct AMordhauPlayerState_BanPlayer_Params
{
	int                                                BanDuration;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BanReason;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOfficialServerBan;                                      // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EBanType                                   BanType;                                                   // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerState.AddScore
struct AMordhauPlayerState_AddScore_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerState.AddKills
struct AMordhauPlayerState_AddKills_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerState.AddDeaths
struct AMordhauPlayerState_AddDeaths_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauPlayerState.AddAssists
struct AMordhauPlayerState_AddAssists_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.WillSticky
struct AMordhauProjectile_WillSticky_Params
{
	unsigned char                                      Surface;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.WillPassThrough
struct AMordhauProjectile_WillPassThrough_Params
{
	unsigned char                                      Surface;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.UsesProjectileBlending
struct AMordhauProjectile_UsesProjectileBlending_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.UpdateProjectileState
struct AMordhauProjectile_UpdateProjectileState_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.TerminateProjectile
struct AMordhauProjectile_TerminateProjectile_Params
{
};

// Function Mordhau.MordhauProjectile.SweepProjectile
struct AMordhauProjectile_SweepProjectile_Params
{
};

// Function Mordhau.MordhauProjectile.StopTrail
struct AMordhauProjectile_StopTrail_Params
{
};

// Function Mordhau.MordhauProjectile.StartTrail
struct AMordhauProjectile_StartTrail_Params
{
};

// Function Mordhau.MordhauProjectile.SpawnParticles
struct AMordhauProjectile_SpawnParticles_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UParticleSystem*                             System;                                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.SpawnDecal
struct AMordhauProjectile_SpawnDecal_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDecalInfo                                  DecalInfo;                                                 // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.SetCurrentTrailParticles
struct AMordhauProjectile_SetCurrentTrailParticles_Params
{
	class UParticleSystemComponent*                    ParticleSystemComponent;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.RestockCharacter
struct AMordhauProjectile_RestockCharacter_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.ProcessProjectileHit
struct AMordhauProjectile_ProcessProjectileHit_Params
{
	bool                                               bIsBlocking;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // 0x0004(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.OnRep_ReplicatedProjectileInfo
struct AMordhauProjectile_OnRep_ReplicatedProjectileInfo_Params
{
};

// Function Mordhau.MordhauProjectile.OnProjectileHitCosmetic
struct AMordhauProjectile_OnProjectileHitCosmetic_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // 0x0008(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.OnProjectileHit
struct AMordhauProjectile_OnProjectileHit_Params
{
	struct FVector                                     HitLocation;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitNormal;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BounceForce;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Surface;                                                   // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasHitWorld;                                              // 0x001D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasStopped;                                               // 0x001E(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.OnProjectileFired
struct AMordhauProjectile_OnProjectileFired_Params
{
};

// Function Mordhau.MordhauProjectile.OnProjectileDamagedDamagable
struct AMordhauProjectile_OnProjectileDamagedDamagable_Params
{
	class UDamageableComponent*                        DamagableComp;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWillKill;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldLocation;                                             // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bone;                                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.InitializeProjectile
struct AMordhauProjectile_InitializeProjectile_Params
{
	class AController*                                 InOwningController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInIsLocallyPredicted;                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InCreator;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.GetWorldMeshTransformWithOffsets
struct AMordhauProjectile_GetWorldMeshTransformWithOffsets_Params
{
	struct FTransform                                  ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.GetProjectileOwningController
struct AMordhauProjectile_GetProjectileOwningController_Params
{
	class AController*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.GetProjectileCreator
struct AMordhauProjectile_GetProjectileCreator_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.GetPercentageOfMaxVelocityClamped
struct AMordhauProjectile_GetPercentageOfMaxVelocityClamped_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.GetCurrentTrailParticles
struct AMordhauProjectile_GetCurrentTrailParticles_Params
{
	class UParticleSystemComponent*                    ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.GetBlendedTransform
struct AMordhauProjectile_GetBlendedTransform_Params
{
	struct FTransform                                  Ours;                                                      // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Associated;                                                // 0x0030(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              T;                                                         // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // 0x0070(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.GetBlendedMeshTransform
struct AMordhauProjectile_GetBlendedMeshTransform_Params
{
	float                                              T;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.GetBlendedActorTransform
struct AMordhauProjectile_GetBlendedActorTransform_Params
{
	float                                              T;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.Fire
struct AMordhauProjectile_Fire_Params
{
};

// Function Mordhau.MordhauProjectile.CarryOverTrail
struct AMordhauProjectile_CarryOverTrail_Params
{
	class AMordhauProjectile*                          NewProjectile;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.BounceComponent
struct AMordhauProjectile_BounceComponent_Params
{
	class USkeletalMeshComponent*                      ComponentToBounce;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NewVelocity;                                               // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NewAngularVelocity;                                        // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauProjectile.AttachProjectile
struct AMordhauProjectile_AttachProjectile_Params
{
	struct FHitResult                                  Hit;                                                       // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.IsVacSecured
struct UFindMordhauServerSessions_IsVacSecured_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0110(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.IsRecentServer
struct UFindMordhauServerSessions_IsRecentServer_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0110(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.IsRanked
struct UFindMordhauServerSessions_IsRanked_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0110(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.IsPasswordProtected
struct UFindMordhauServerSessions_IsPasswordProtected_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0110(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.IsOfficial
struct UFindMordhauServerSessions_IsOfficial_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0110(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.IsModded
struct UFindMordhauServerSessions_IsModded_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0110(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.IsMatchmaking
struct UFindMordhauServerSessions_IsMatchmaking_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0110(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.IsFavoriteServer
struct UFindMordhauServerSessions_IsFavoriteServer_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0110(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.IsDevBuild
struct UFindMordhauServerSessions_IsDevBuild_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0110(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.GetServerName
struct UFindMordhauServerSessions_GetServerName_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0110(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.GetServerList
struct UFindMordhauServerSessions_GetServerList_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	Mordhau_EServerList                                ReturnValue;                                               // 0x0110(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.GetServerID
struct UFindMordhauServerSessions_GetServerID_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0110(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.GetServerAddress
struct UFindMordhauServerSessions_GetServerAddress_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0110(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.GetRegion
struct UFindMordhauServerSessions_GetRegion_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EServerRegion               ReturnValue;                                               // 0x0110(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.GetPlayers
struct UFindMordhauServerSessions_GetPlayers_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReturnValue;                                               // 0x0110(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.GetPing
struct UFindMordhauServerSessions_GetPing_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0110(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.GetMods
struct UFindMordhauServerSessions_GetMods_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<int>                                        ReturnValue;                                               // 0x0110(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.GetMaxPlayers
struct UFindMordhauServerSessions_GetMaxPlayers_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0110(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.GetMapName
struct UFindMordhauServerSessions_GetMapName_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0110(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.GetGameMode
struct UFindMordhauServerSessions_GetGameMode_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0110(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.GetCurrentPlayers
struct UFindMordhauServerSessions_GetCurrentPlayers_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0110(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.FindMordhauServerSessions
struct UFindMordhauServerSessions_FindMordhauServerSessions_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EServerList                                ServerList;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxResults;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFindServerSessionsFilter                   Filter;                                                    // 0x0010(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UFindMordhauServerSessions*                  ReturnValue;                                               // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessions.AllowsJoin
struct UFindMordhauServerSessions_AllowsJoin_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0110(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.FindMordhauServerSessionByAddress.FindMordhauServerSessionByAddress
struct UFindMordhauServerSessionByAddress_FindMordhauServerSessionByAddress_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FServerAddress                              Address;                                                   // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UFindMordhauServerSessionByAddress*          ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.JoinMordhauServerSession.JoinMordhauServerSession
struct UJoinMordhauServerSession_JoinMordhauServerSession_Params
{
	struct FServerSearchResult                         SearchResult;                                              // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UJoinMordhauServerSession*                   ReturnValue;                                               // 0x0110(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.CancelFindMordhauSessions.CancelFindMordhauSessions
struct UCancelFindMordhauSessions_CancelFindMordhauSessions_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.DestroyMordhauServerSession.DestroyMordhauServerSession
struct UDestroyMordhauServerSession_DestroyMordhauServerSession_Params
{
	class UDestroyMordhauServerSession*                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.PingMordhauServerSession.PingMordhauServerSession
struct UPingMordhauServerSession_PingMordhauServerSession_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FServerSearchResult                         SearchResult;                                              // 0x0008(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UPingMordhauServerSession*                   ReturnValue;                                               // 0x0118(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ReserveMordhauServerSessionSlots.ReserveMordhauServerSessionSlots
struct UReserveMordhauServerSessionSlots_ReserveMordhauServerSessionSlots_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FServerSearchResult                         SearchResult;                                              // 0x0008(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FPlayFabPlayerEntity>                PartyMembers;                                              // 0x0118(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReserveMordhauServerSessionSlots*           ReturnValue;                                               // 0x0128(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.GetMordhauServerSessionMods.GetMordhauServerSessionMods
struct UGetMordhauServerSessionMods_GetMordhauServerSessionMods_Params
{
	struct FServerSearchResult                         SearchResult;                                              // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGetMordhauServerSessionMods*                ReturnValue;                                               // 0x0110(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.UpdatePreviousLaunchInventory
struct UMordhauSingleton_UpdatePreviousLaunchInventory_Params
{
};

// Function Mordhau.MordhauSingleton.SpawnEquipment
struct UMordhauSingleton_SpawnEquipment_Params
{
	class UWorld*                                      WorldRef;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEquipmentCustomization                     Customization;                                             // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	unsigned char                                      Emblem;                                                    // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      EmblemColor1;                                              // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      EmblemColor2;                                              // 0x003A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceInstantMeshUpdate;                                   // 0x003B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceMipStreaming;                                        // 0x003C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauEquipment*                           ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.SaveToConfig
struct UMordhauSingleton_SaveToConfig_Params
{
};

// Function Mordhau.MordhauSingleton.LoadQueueFinishedLoadingChunk
struct UMordhauSingleton_LoadQueueFinishedLoadingChunk_Params
{
};

// Function Mordhau.MordhauSingleton.LoadFromConfig
struct UMordhauSingleton_LoadFromConfig_Params
{
};

// Function Mordhau.MordhauSingleton.GetVoicesNum
struct UMordhauSingleton_GetVoicesNum_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetVoice
struct UMordhauSingleton_GetVoice_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetUpperChestWearablesNum
struct UMordhauSingleton_GetUpperChestWearablesNum_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetUpperChestWearable
struct UMordhauSingleton_GetUpperChestWearable_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetTableColorObject
struct UMordhauSingleton_GetTableColorObject_Params
{
	unsigned char                                      Table;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ID;                                                        // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMordhauColor*                               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetTableColor
struct UMordhauSingleton_GetTableColor_Params
{
	unsigned char                                      Table;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ID;                                                        // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetSkinColorObject
struct UMordhauSingleton_GetSkinColorObject_Params
{
	unsigned char                                      ID;                                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMordhauColor*                               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetSkinColor
struct UMordhauSingleton_GetSkinColor_Params
{
	unsigned char                                      ID;                                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetMetalTintsColorObject
struct UMordhauSingleton_GetMetalTintsColorObject_Params
{
	unsigned char                                      ID;                                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMordhauColor*                               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetMetalTintsColor
struct UMordhauSingleton_GetMetalTintsColor_Params
{
	unsigned char                                      ID;                                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetLegsWearablesNum
struct UMordhauSingleton_GetLegsWearablesNum_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetLegsWearable
struct UMordhauSingleton_GetLegsWearable_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetIsLoadingAssets
struct UMordhauSingleton_GetIsLoadingAssets_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetHeadWearablesNum
struct UMordhauSingleton_GetHeadWearablesNum_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetHeadWearable
struct UMordhauSingleton_GetHeadWearable_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetHairColorObject
struct UMordhauSingleton_GetHairColorObject_Params
{
	unsigned char                                      ID;                                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMordhauColor*                               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetHairColor
struct UMordhauSingleton_GetHairColor_Params
{
	unsigned char                                      ID;                                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetEyeColorObject
struct UMordhauSingleton_GetEyeColorObject_Params
{
	unsigned char                                      ID;                                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMordhauColor*                               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetEyeColor
struct UMordhauSingleton_GetEyeColor_Params
{
	unsigned char                                      ID;                                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetEquipmentNum
struct UMordhauSingleton_GetEquipmentNum_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetEquipmentID
struct UMordhauSingleton_GetEquipmentID_Params
{
	class UClass*                                      EquipmentType;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetEquipment
struct UMordhauSingleton_GetEquipment_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetEmblemColorObject
struct UMordhauSingleton_GetEmblemColorObject_Params
{
	unsigned char                                      ID;                                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMordhauColor*                               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.GetEmblemColor
struct UMordhauSingleton_GetEmblemColor_Params
{
	unsigned char                                      ID;                                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSingleton.ApplyProfileTo
struct UMordhauSingleton_ApplyProfileTo_Params
{
	struct FCharacterProfile                           Profile;                                                   // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AMordhauCharacter*                           Char;                                                      // 0x00B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Team;                                                      // 0x00C0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAddEquipment;                                             // 0x00C1(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauSpectator.TertiarySpectatorAction
struct AMordhauSpectator_TertiarySpectatorAction_Params
{
};

// Function Mordhau.MordhauSpectator.SwitchToFreeCam
struct AMordhauSpectator_SwitchToFreeCam_Params
{
};

// Function Mordhau.MordhauSpectator.SecondarySpectatorAction
struct AMordhauSpectator_SecondarySpectatorAction_Params
{
};

// Function Mordhau.MordhauSpectator.PrimarySpectatorAction
struct AMordhauSpectator_PrimarySpectatorAction_Params
{
};

// Function Mordhau.MordhauSpectator.IsWatchingOwnDeath
struct AMordhauSpectator_IsWatchingOwnDeath_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauStats.UnlockAchievement
struct UMordhauStats_UnlockAchievement_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAchievement                                Achievement;                                               // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauStats.StoreStats
struct UMordhauStats_StoreStats_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauStats.StorePlayerStats
struct UMordhauStats_StorePlayerStats_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauStats.SetValue
struct UMordhauStats_SetValue_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStat                                       Stat;                                                      // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauStats.SetPlayerValue
struct UMordhauStats_SetPlayerValue_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStat                                       Stat;                                                      // 0x0018(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauStats.ResetAllStats
struct UMordhauStats_ResetAllStats_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAchievementsToo;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauStats.RequestStats
struct UMordhauStats_RequestStats_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauStats.RequestPlayerStats
struct UMordhauStats_RequestPlayerStats_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauStats.LockAchievement
struct UMordhauStats_LockAchievement_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAchievement                                Achievement;                                               // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauStats.IsAchievementUnlocked
struct UMordhauStats_IsAchievementUnlocked_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAchievement                                Achievement;                                               // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsUnlocked;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauStats.IncrementValueChecked
struct UMordhauStats_IncrementValueChecked_Params
{
	class UWorld*                                      World;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStat                                       Stat;                                                      // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauStats.GetValueByName
struct UMordhauStats_GetValueByName_Params
{
	struct FString                                     StatName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutValue;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauStats.GetValue
struct UMordhauStats_GetValue_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStat                                       Stat;                                                      // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauStats.GetPlayerValue
struct UMordhauStats_GetPlayerValue_Params
{
	Mordhau_ECallResult                                CallResult;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStat                                       Stat;                                                      // 0x0018(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauStats.AreStatsAvailable
struct UMordhauStats_AreStatsAvailable_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.VSmoothDamp
struct UMordhauUtilityLibrary_VSmoothDamp_Params
{
	struct FVector                                     Current;                                                   // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Target;                                                    // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CurrentVelocity;                                           // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SmoothTime;                                                // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSpeed;                                                  // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.ValidateCharacterProfile
struct UMordhauUtilityLibrary_ValidateCharacterProfile_Params
{
	struct FCharacterProfile                           Profile;                                                   // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bValidateInventory;                                        // 0x00B8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00B9(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.UploadChat
struct UMordhauUtilityLibrary_UploadChat_Params
{
	struct FString                                     ChatString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.UnpossessCharacterAndHandleSpectating
struct UMordhauUtilityLibrary_UnpossessCharacterAndHandleSpectating_Params
{
	class AController*                                 Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.UnmountPak
struct UMordhauUtilityLibrary_UnmountPak_Params
{
	struct FString                                     PakPath;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.UncompressData
struct UMordhauUtilityLibrary_UncompressData_Params
{
	struct FString                                     InData;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              OutData;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.TryExecuteHeavydutyOperation
struct UMordhauUtilityLibrary_TryExecuteHeavydutyOperation_Params
{
	class UWorld*                                      WorldObject;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsForced;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.TermAllChildBodiesOf
struct UMordhauUtilityLibrary_TermAllChildBodiesOf_Params
{
	class USkeletalMeshComponent*                      USMC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.StripProfile
struct UMordhauUtilityLibrary_StripProfile_Params
{
	struct FCharacterProfile                           InProfile;                                                 // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bStripEquipment;                                           // 0x00B8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStripPerks;                                               // 0x00B9(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStripNonTier0Armor;                                       // 0x00BA(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterProfile                           ReturnValue;                                               // 0x00C0(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SpawnBloodDecalAtLocation
struct UMordhauUtilityLibrary_SpawnBloodDecalAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          DecalMaterial;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DecalSize;                                                 // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              LifeSpan;                                                  // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDecalComponent*                             ReturnValue;                                               // 0x0038(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SortStringArray
struct UMordhauUtilityLibrary_SortStringArray_Params
{
	TArray<struct FString>                             Array;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSortAscending;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SortQueueNamesByBestMatch
struct UMordhauUtilityLibrary_SortQueueNamesByBestMatch_Params
{
	TMap<struct FString, struct FPlayFabMatchmakingMatch> Matches;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReturnValue;                                               // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SortPlayers
struct UMordhauUtilityLibrary_SortPlayers_Params
{
	TArray<class AMordhauPlayerState*>                 Array;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AMordhauPlayerState*>                 ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SortIntArray
struct UMordhauUtilityLibrary_SortIntArray_Params
{
	TArray<int>                                        Array;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSortAscending;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SortForServerBrowserByServerName
struct UMordhauUtilityLibrary_SortForServerBrowserByServerName_Params
{
	TArray<struct FServerSearchResult>                 Array;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSortAscending;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FServerSearchResult>                 ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SortForServerBrowserByPing
struct UMordhauUtilityLibrary_SortForServerBrowserByPing_Params
{
	TArray<struct FServerSearchResult>                 Array;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSortAscending;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FServerSearchResult>                 ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SortForServerBrowserByMapName
struct UMordhauUtilityLibrary_SortForServerBrowserByMapName_Params
{
	TArray<struct FServerSearchResult>                 Array;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSortAscending;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FServerSearchResult>                 ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SortForServerBrowserByGameModeName
struct UMordhauUtilityLibrary_SortForServerBrowserByGameModeName_Params
{
	TArray<struct FServerSearchResult>                 Array;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSortAscending;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FServerSearchResult>                 ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SortForServerBrowserByCount
struct UMordhauUtilityLibrary_SortForServerBrowserByCount_Params
{
	TArray<struct FServerSearchResult>                 Array;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSortAscending;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FServerSearchResult>                 ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SortForMatchmakingByLocationPreference
struct UMordhauUtilityLibrary_SortForMatchmakingByLocationPreference_Params
{
	TArray<struct FPlayFabGameServer>                  Servers;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<MordhauOnlineSubsystem_EServerLocation>     LocationPreference;                                        // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayFabGameServer>                  ReturnValue;                                               // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SortForMatchmaking
struct UMordhauUtilityLibrary_SortForMatchmaking_Params
{
	TArray<struct FServerSearchResult>                 Array;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FServerSearchResult>                 ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SortArrayByProperty
struct UMordhauUtilityLibrary_SortArrayByProperty_Params
{
	TArray<class UObject*>                             Array;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PropertyName;                                              // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAscending;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWasTypeValid;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             ReturnValue;                                               // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SortArrayByFunction
struct UMordhauUtilityLibrary_SortArrayByFunction_Params
{
	TArray<class UObject*>                             Array;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             FuncDel;                                                   // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             ReturnValue;                                               // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SortAndFilterArrayByFunction
struct UMordhauUtilityLibrary_SortAndFilterArrayByFunction_Params
{
	TArray<class UObject*>                             Array;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             FuncDel;                                                   // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      Class;                                                     // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             ReturnValue;                                               // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.Snap180AngleToSteps
struct UMordhauUtilityLibrary_Snap180AngleToSteps_Params
{
	float                                              Angle180;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Step;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SLessThan
struct UMordhauUtilityLibrary_SLessThan_Params
{
	struct FString                                     StringA;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StringB;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SGreaterThan
struct UMordhauUtilityLibrary_SGreaterThan_Params
{
	struct FString                                     StringA;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StringB;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetVisibilityId
struct UMordhauUtilityLibrary_SetVisibilityId_Params
{
	class UPrimitiveComponent*                         Comp;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewId;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetSoundMixVolume
struct UMordhauUtilityLibrary_SetSoundMixVolume_Params
{
	Mordhau_ESoundMix                                  SoundMix;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetPerBoneMotionBlur
struct UMordhauUtilityLibrary_SetPerBoneMotionBlur_Params
{
	class USkeletalMeshComponent*                      Component;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNewValue;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetPawnFromRep
struct UMordhauUtilityLibrary_SetPawnFromRep_Params
{
	class AController*                                 Contr;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       NewPawn;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetNeverDistanceCull
struct UMordhauUtilityLibrary_SetNeverDistanceCull_Params
{
	class UPrimitiveComponent*                         Comp;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNewValue;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetNavAreaClass
struct UMordhauUtilityLibrary_SetNavAreaClass_Params
{
	class UShapeComponent*                             ShapeComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AreaClass;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetMousePosition
struct UMordhauUtilityLibrary_SetMousePosition_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LocationX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LocationY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetLODActorDrawDistance
struct UMordhauUtilityLibrary_SetLODActorDrawDistance_Params
{
	class ALODActor*                                   Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewDrawDistance;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetLocalSpaceKinematics
struct UMordhauUtilityLibrary_SetLocalSpaceKinematics_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNewValue;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetForceMipStreaming
struct UMordhauUtilityLibrary_SetForceMipStreaming_Params
{
	class USkeletalMeshComponent*                      SMC;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bValue;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetDecalFadeScreenSize
struct UMordhauUtilityLibrary_SetDecalFadeScreenSize_Params
{
	class UDecalComponent*                             Decal;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewFadeScreenSize;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetCustomConfigVar_Vector2D
struct UMordhauUtilityLibrary_SetCustomConfigVar_Vector2D_Params
{
	struct FString                                     SectionName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Value;                                                     // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetCustomConfigVar_Vector
struct UMordhauUtilityLibrary_SetCustomConfigVar_Vector_Params
{
	struct FString                                     SectionName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Value;                                                     // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetCustomConfigVar_String
struct UMordhauUtilityLibrary_SetCustomConfigVar_String_Params
{
	struct FString                                     SectionName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetCustomConfigVar_Rotator
struct UMordhauUtilityLibrary_SetCustomConfigVar_Rotator_Params
{
	struct FString                                     SectionName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Value;                                                     // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetCustomConfigVar_Int
struct UMordhauUtilityLibrary_SetCustomConfigVar_Int_Params
{
	struct FString                                     SectionName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetCustomConfigVar_Float
struct UMordhauUtilityLibrary_SetCustomConfigVar_Float_Params
{
	struct FString                                     SectionName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetCustomConfigVar_Color
struct UMordhauUtilityLibrary_SetCustomConfigVar_Color_Params
{
	struct FString                                     SectionName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Value;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetCustomConfigVar_Bool
struct UMordhauUtilityLibrary_SetCustomConfigVar_Bool_Params
{
	struct FString                                     SectionName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Value;                                                     // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetCustomConfigVar_Array
struct UMordhauUtilityLibrary_SetCustomConfigVar_Array_Params
{
	struct FString                                     SectionName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Value;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetCanEverAffectNavigation
struct UMordhauUtilityLibrary_SetCanEverAffectNavigation_Params
{
	class UActorComponent*                             ActorComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRelevant;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SetCachedMaxDistanceAndMarkDirty
struct UMordhauUtilityLibrary_SetCachedMaxDistanceAndMarkDirty_Params
{
	class UPrimitiveComponent*                         Comp;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewMaxDistance;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SendMessageToRconClients
struct UMordhauUtilityLibrary_SendMessageToRconClients_Params
{
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClientId;                                                  // 0x0010(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bToAll;                                                    // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EBroadcastTypes                            TypeOfBroadcast;                                           // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0016(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SendClientAdjustment
struct UMordhauUtilityLibrary_SendClientAdjustment_Params
{
	class UCharacterMovementComponent*                 CMC;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SCompare
struct UMordhauUtilityLibrary_SCompare_Params
{
	struct FString                                     StringA;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StringB;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SaveStringToFile
struct UMordhauUtilityLibrary_SaveStringToFile_Params
{
	struct FString                                     Filename;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     String;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SaveStringArrayToFile
struct UMordhauUtilityLibrary_SaveStringArrayToFile_Params
{
	struct FString                                     Filename;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             StringArray;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SaveArrayToFile
struct UMordhauUtilityLibrary_SaveArrayToFile_Params
{
	struct FString                                     Filename;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ByteArray;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.SanitizePlayerName
struct UMordhauUtilityLibrary_SanitizePlayerName_Params
{
	struct FString                                     InName;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InFallback;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.ResetServerPredictionData
struct UMordhauUtilityLibrary_ResetServerPredictionData_Params
{
	class UCharacterMovementComponent*                 CMC;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.ResetController
struct UMordhauUtilityLibrary_ResetController_Params
{
	class AController*                                 Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.ResetClientPredictionData
struct UMordhauUtilityLibrary_ResetClientPredictionData_Params
{
	class UCharacterMovementComponent*                 CMC;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.ReserveCharacterRagdoll
struct UMordhauUtilityLibrary_ReserveCharacterRagdoll_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.RandomRangeExclude
struct UMordhauUtilityLibrary_RandomRangeExclude_Params
{
	int                                                Min;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Max;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Exclude;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.ProjectWorldToScreenBidirectional
struct UMordhauUtilityLibrary_ProjectWorldToScreenBidirectional_Params
{
	class APlayerController*                           Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldPosition;                                             // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ScreenPosition;                                            // 0x0014(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTargetBehindCamera;                                       // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayerViewportRelative;                                   // 0x001D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x001E(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.PrintToConsoleAndLog
struct UMordhauUtilityLibrary_PrintToConsoleAndLog_Params
{
	struct FString                                     String;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipRepeatedStrings;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.PlaneTrace
struct UMordhauUtilityLibrary_PlaneTrace_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Left;                                                      // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Right;                                                     // 0x0014(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Forward;                                                   // 0x0020(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Back;                                                      // 0x002C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TraceAmount;                                               // 0x0038(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<Engine_EObjectTypeQuery>>       ObjectTypes;                                               // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTraceComplex;                                             // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ActorsToIgnore;                                            // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bConnectLeftRight;                                         // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bConnectForwardBack;                                       // 0x0071(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ConnectOffset;                                             // 0x0074(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  LeftHit;                                                   // 0x0080(0x0088)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FHitResult                                  RightHit;                                                  // 0x0108(0x0088)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FHitResult                                  ForwardHit;                                                // 0x0190(0x0088)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FHitResult                                  BackHit;                                                   // 0x0218(0x0088)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     OutRight;                                                  // 0x02A0(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutForward;                                                // 0x02AC(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreSelf;                                               // 0x02B8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x02B9(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.PerformCharacterRenderingStressTest
struct UMordhauUtilityLibrary_PerformCharacterRenderingStressTest_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Type;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Spread;                                                    // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceFromCamera;                                        // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.OpenURL
struct UMordhauUtilityLibrary_OpenURL_Params
{
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.NotEqual_PlayFabPlayer
struct UMordhauUtilityLibrary_NotEqual_PlayFabPlayer_Params
{
	struct FPlayFabPlayer                              A;                                                         // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabPlayer                              B;                                                         // 0x0060(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.MountPak
struct UMordhauUtilityLibrary_MountPak_Params
{
	struct FString                                     PakPath;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.MordhauApplyRadialDamageWithFalloff
struct UMordhauUtilityLibrary_MordhauApplyRadialDamageWithFalloff_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseDamage;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumDamage;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseStructureDamage;                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumStructureDamage;                                    // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                    // 0x0018(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageInnerRadius;                                         // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageOuterRadius;                                         // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageFalloff;                                             // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              IgnoreActors;                                              // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseKnockback;                                             // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumKnockback;                                          // 0x0044(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RagdollFallRadius;                                         // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 InstigatedByController;                                    // 0x0058(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              DamagePreventionChannel;                                   // 0x0060(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreFriendly;                                           // 0x0061(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0062(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.MarkRenderStateDirty
struct UMordhauUtilityLibrary_MarkRenderStateDirty_Params
{
	class UMeshComponent*                              MeshComp;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.MakeEmptyProfile
struct UMordhauUtilityLibrary_MakeEmptyProfile_Params
{
	class UClass*                                      CharacterClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomizeVoice;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterProfile                           ReturnValue;                                               // 0x0010(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.LoadStringFromFile
struct UMordhauUtilityLibrary_LoadStringFromFile_Params
{
	struct FString                                     Filename;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoadedString;                                              // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.LoadStringArrayFromFile
struct UMordhauUtilityLibrary_LoadStringArrayFromFile_Params
{
	struct FString                                     Filename;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             LoadedStringArray;                                         // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.LoadReportImageByteArray
struct UMordhauUtilityLibrary_LoadReportImageByteArray_Params
{
	struct FString                                     ImageName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              LoadedArray;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.LoadAsset
struct UMordhauUtilityLibrary_LoadAsset_Params
{
	struct FSoftObjectPath                             SoftObjectPath;                                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.LoadArrayFromFile
struct UMordhauUtilityLibrary_LoadArrayFromFile_Params
{
	struct FString                                     Filename;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              LoadedArray;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.LineTraceMultiForObjectsReturnFace
struct UMordhauUtilityLibrary_LineTraceMultiForObjectsReturnFace_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Start;                                                     // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                       // 0x0014(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<Engine_EObjectTypeQuery>>       ObjectTypes;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTraceComplex;                                             // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ActorsToIgnore;                                            // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EDrawDebugTrace>                DrawDebugType;                                             // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          OutHits;                                                   // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreSelf;                                               // 0x0060(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0061(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.LerpPOV
struct UMordhauUtilityLibrary_LerpPOV_Params
{
	struct FPOV                                        A;                                                         // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPOV                                        B;                                                         // 0x001C(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPOV                                        ReturnValue;                                               // 0x003C(0x001C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsValidIPAddress
struct UMordhauUtilityLibrary_IsValidIPAddress_Params
{
	struct FString                                     IPAddress;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsValid_PlayFabPlayer
struct UMordhauUtilityLibrary_IsValid_PlayFabPlayer_Params
{
	struct FPlayFabPlayer                              Player;                                                    // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsStandalone
struct UMordhauUtilityLibrary_IsStandalone_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsServer
struct UMordhauUtilityLibrary_IsServer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsReflexAvailable
struct UMordhauUtilityLibrary_IsReflexAvailable_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsPublicIPAddress
struct UMordhauUtilityLibrary_IsPublicIPAddress_Params
{
	struct FString                                     IPAddress;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsPrivateIPAddress
struct UMordhauUtilityLibrary_IsPrivateIPAddress_Params
{
	struct FString                                     IPAddress;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsPlayInEditor
struct UMordhauUtilityLibrary_IsPlayInEditor_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsPartyMember
struct UMordhauUtilityLibrary_IsPartyMember_Params
{
	class AMordhauPlayerState*                         Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsOfficialServer
struct UMordhauUtilityLibrary_IsOfficialServer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsListenServer
struct UMordhauUtilityLibrary_IsListenServer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsFriendlyToLocalPlayer
struct UMordhauUtilityLibrary_IsFriendlyToLocalPlayer_Params
{
	class UWorld*                                      WorldReference;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsFriend
struct UMordhauUtilityLibrary_IsFriend_Params
{
	class AMordhauPlayerState*                         Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsEditor
struct UMordhauUtilityLibrary_IsEditor_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsDLCInstalled
struct UMordhauUtilityLibrary_IsDLCInstalled_Params
{
	Mordhau_EDownloadableContent                       DLC;                                                       // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsDevelopmentEnvironment
struct UMordhauUtilityLibrary_IsDevelopmentEnvironment_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsDevelopmentBuild
struct UMordhauUtilityLibrary_IsDevelopmentBuild_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsDevelopmentBranch
struct UMordhauUtilityLibrary_IsDevelopmentBranch_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsDemoPlayback
struct UMordhauUtilityLibrary_IsDemoPlayback_Params
{
	class UWorld*                                      World;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsDedicatedServer
struct UMordhauUtilityLibrary_IsDedicatedServer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsConsolePlatform
struct UMordhauUtilityLibrary_IsConsolePlatform_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsCommunityServer
struct UMordhauUtilityLibrary_IsCommunityServer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.IsClient
struct UMordhauUtilityLibrary_IsClient_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.HasPath
struct UMordhauUtilityLibrary_HasPath_Params
{
	class AAIController*                               Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.HasBeenReallyRecentlyRendered
struct UMordhauUtilityLibrary_HasBeenReallyRecentlyRendered_Params
{
	class UMeshComponent*                              MeshComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.HasActorBegunPlay
struct UMordhauUtilityLibrary_HasActorBegunPlay_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GrowBoxToIncludePoint
struct UMordhauUtilityLibrary_GrowBoxToIncludePoint_Params
{
	struct FBox                                        Box;                                                       // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Vector;                                                    // 0x001C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                        ReturnValue;                                               // 0x0028(0x001C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetXPFromRank
struct UMordhauUtilityLibrary_GetXPFromRank_Params
{
	int                                                Rank;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetWorldOf
struct UMordhauUtilityLibrary_GetWorldOf_Params
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorld*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetWearableNames
struct UMordhauUtilityLibrary_GetWearableNames_Params
{
	struct FCharacterGearCustomization                 CharacterGearCustomization;                                // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	Mordhau_EWearableSlot                              Slot;                                                      // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               ReturnValue;                                               // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetWearableClasses
struct UMordhauUtilityLibrary_GetWearableClasses_Params
{
	struct FCharacterGearCustomization                 CharacterGearCustomization;                                // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	Mordhau_EWearableSlot                              Slot;                                                      // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ReturnValue;                                               // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetWearableClass
struct UMordhauUtilityLibrary_GetWearableClass_Params
{
	struct FCharacterGearCustomization                 CharacterGearCustomization;                                // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	Mordhau_EWearableSlot                              Slot;                                                      // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetVisibilityId
struct UMordhauUtilityLibrary_GetVisibilityId_Params
{
	class UPrimitiveComponent*                         Comp;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetViewTargetCharacter
struct UMordhauUtilityLibrary_GetViewTargetCharacter_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyLiving;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauCharacter*                           ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetVersionString
struct UMordhauUtilityLibrary_GetVersionString_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetVersionName
struct UMordhauUtilityLibrary_GetVersionName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetTotalDemoTime
struct UMordhauUtilityLibrary_GetTotalDemoTime_Params
{
	class UWorld*                                      World;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetSyncGroupPositionBetweenMarkers
struct UMordhauUtilityLibrary_GetSyncGroupPositionBetweenMarkers_Params
{
	class UAnimInstance*                               AnimInstance;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SyncGroup;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetSupportedScreenResolutions
struct UMordhauUtilityLibrary_GetSupportedScreenResolutions_Params
{
	TArray<struct FString>                             Resolutions;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetSoundMixInfo
struct UMordhauUtilityLibrary_GetSoundMixInfo_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundMixInfo                               SoundMixInfo;                                              // 0x0010(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetServerConnectString
struct UMordhauUtilityLibrary_GetServerConnectString_Params
{
	struct FPlayFabServerDetails                       ServerDetails;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     PortName;                                                  // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetSculptableBoneAtLine
struct UMordhauUtilityLibrary_GetSculptableBoneAtLine_Params
{
	struct FVector                                     LineStart;                                                 // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LineEnd;                                                   // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SearchRadius;                                              // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      MeshComponent;                                             // 0x0020(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauCharacter*                           Character;                                                 // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0034(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetRole
struct UMordhauUtilityLibrary_GetRole_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ENetRole>                       ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetReleaseVersion
struct UMordhauUtilityLibrary_GetReleaseVersion_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetRegionName
struct UMordhauUtilityLibrary_GetRegionName_Params
{
	MordhauOnlineSubsystem_EServerRegion               Region;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetRegionDisplayName
struct UMordhauUtilityLibrary_GetRegionDisplayName_Params
{
	MordhauOnlineSubsystem_EServerRegion               Region;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetRegion
struct UMordhauUtilityLibrary_GetRegion_Params
{
	struct FString                                     RegionName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EServerRegion               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetRankFromXP
struct UMordhauUtilityLibrary_GetRankFromXP_Params
{
	int                                                XP;                                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomWeapon
struct UMordhauUtilityLibrary_GetRandomWeapon_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkillsCustomization                        SkillsCustomization;                                       // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	Mordhau_EItemRarity                                MaxRarity;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauEquipment*                           ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomUpperChestWearable
struct UMordhauUtilityLibrary_GetRandomUpperChestWearable_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkillsCustomization                        SkillsCustomization;                                       // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	Mordhau_EItemRarity                                MaxRarity;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUpperChestWearable*                         ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomSkin
struct UMordhauUtilityLibrary_GetRandomSkin_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEquipmentSkinEntry                         Skin;                                                      // 0x0008(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	class AMordhauEquipment*                           Equipment;                                                 // 0x0058(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EItemRarity                                MaxRarity;                                                 // 0x0060(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomShouldersWearable
struct UMordhauUtilityLibrary_GetRandomShouldersWearable_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUpperChestWearable*                         UpperChestWearable;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkillsCustomization                        SkillsCustomization;                                       // 0x0010(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	Mordhau_EItemRarity                                MaxRarity;                                                 // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMordhauWearable*                            ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomRangedWeapon
struct UMordhauUtilityLibrary_GetRandomRangedWeapon_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkillsCustomization                        SkillsCustomization;                                       // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	Mordhau_EItemRarity                                MaxRarity;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauEquipment*                           ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomMeleeWeapon
struct UMordhauUtilityLibrary_GetRandomMeleeWeapon_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkillsCustomization                        SkillsCustomization;                                       // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	Mordhau_EItemRarity                                MaxRarity;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauEquipment*                           ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomLowerChestWearable
struct UMordhauUtilityLibrary_GetRandomLowerChestWearable_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUpperChestWearable*                         UpperChestWearable;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkillsCustomization                        SkillsCustomization;                                       // 0x0010(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	Mordhau_EItemRarity                                MaxRarity;                                                 // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMordhauWearable*                            ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomLegsWearable
struct UMordhauUtilityLibrary_GetRandomLegsWearable_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkillsCustomization                        SkillsCustomization;                                       // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	Mordhau_EItemRarity                                MaxRarity;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULegsWearable*                               ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomHeadWearable
struct UMordhauUtilityLibrary_GetRandomHeadWearable_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkillsCustomization                        SkillsCustomization;                                       // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	Mordhau_EItemRarity                                MaxRarity;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHeadWearable*                               ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomHandsWearable
struct UMordhauUtilityLibrary_GetRandomHandsWearable_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UArmsWearable*                               ArmsWearable;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkillsCustomization                        SkillsCustomization;                                       // 0x0010(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	Mordhau_EItemRarity                                MaxRarity;                                                 // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMordhauWearable*                            ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomFeetWearable
struct UMordhauUtilityLibrary_GetRandomFeetWearable_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULegsWearable*                               LegsWearable;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkillsCustomization                        SkillsCustomization;                                       // 0x0010(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	Mordhau_EItemRarity                                MaxRarity;                                                 // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMordhauWearable*                            ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomFaceCustomizationVector
struct UMordhauUtilityLibrary_GetRandomFaceCustomizationVector_Params
{
	float                                              RandomExponent;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomEquipment
struct UMordhauUtilityLibrary_GetRandomEquipment_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkillsCustomization                        SkillsCustomization;                                       // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	Mordhau_EItemRarity                                MaxRarity;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauEquipment*                           ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomCoifWearable
struct UMordhauUtilityLibrary_GetRandomCoifWearable_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHeadWearable*                               HeadWearable;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkillsCustomization                        SkillsCustomization;                                       // 0x0010(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	Mordhau_EItemRarity                                MaxRarity;                                                 // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMordhauWearable*                            ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetRandomArmsWearable
struct UMordhauUtilityLibrary_GetRandomArmsWearable_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUpperChestWearable*                         UpperChestWearable;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkillsCustomization                        SkillsCustomization;                                       // 0x0010(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	Mordhau_EItemRarity                                MaxRarity;                                                 // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UArmsWearable*                               ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetPlayFabTimestamp
struct UMordhauUtilityLibrary_GetPlayFabTimestamp_Params
{
	struct FDateTime                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetPlayFabPlayer
struct UMordhauUtilityLibrary_GetPlayFabPlayer_Params
{
	struct FPlayFabPlayer                              ReturnValue;                                               // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetPlayFabId
struct UMordhauUtilityLibrary_GetPlayFabId_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetPlayFabEntityID
struct UMordhauUtilityLibrary_GetPlayFabEntityID_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetPlayFabAPI
struct UMordhauUtilityLibrary_GetPlayFabAPI_Params
{
	class UPlayFabAPI*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetPlayerCountFromGameModeMetadataClass
struct UMordhauUtilityLibrary_GetPlayerCountFromGameModeMetadataClass_Params
{
	class UClass*                                      MetadataClass;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetPlayerAvatar
struct UMordhauUtilityLibrary_GetPlayerAvatar_Params
{
	struct FPlayFabPlayer                              Player;                                                    // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetPlatformName
struct UMordhauUtilityLibrary_GetPlatformName_Params
{
	MordhauOnlineSubsystem_EPlatform                   Platform;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetPlatformByName
struct UMordhauUtilityLibrary_GetPlatformByName_Params
{
	struct FString                                     PlatformName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EPlatform                   ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetPlatform
struct UMordhauUtilityLibrary_GetPlatform_Params
{
	MordhauOnlineSubsystem_EPlatform                   ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetPing
struct UMordhauUtilityLibrary_GetPing_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseMedian;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetPhysicsBodyWorldTransform
struct UMordhauUtilityLibrary_GetPhysicsBodyWorldTransform_Params
{
	class USkeletalMeshComponent*                      MeshComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetPhysicsBodyBounds
struct UMordhauUtilityLibrary_GetPhysicsBodyBounds_Params
{
	class USkeletalMeshComponent*                      MeshComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                        ReturnValue;                                               // 0x0010(0x001C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetPerksCost
struct UMordhauUtilityLibrary_GetPerksCost_Params
{
	struct FCharacterProfile                           Profile;                                                   // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x00B8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetPerks
struct UMordhauUtilityLibrary_GetPerks_Params
{
	struct FCharacterProfile                           Profile;                                                   // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UPerk*>                               ReturnValue;                                               // 0x00B8(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetPerforceRevision
struct UMordhauUtilityLibrary_GetPerforceRevision_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetPacketsLost
struct UMordhauUtilityLibrary_GetPacketsLost_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetOSVersion
struct UMordhauUtilityLibrary_GetOSVersion_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetNotifyServerReceivedClientData
struct UMordhauUtilityLibrary_GetNotifyServerReceivedClientData_Params
{
	class UCharacterMovementComponent*                 CMC;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetNormalizedTime
struct UMordhauUtilityLibrary_GetNormalizedTime_Params
{
	float                                              Start;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              End;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Current;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetMousePosition
struct UMordhauUtilityLibrary_GetMousePosition_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetMordhauStats
struct UMordhauUtilityLibrary_GetMordhauStats_Params
{
	class UMordhauStats*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetMordhauSingleton
struct UMordhauUtilityLibrary_GetMordhauSingleton_Params
{
	class UMordhauSingleton*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetMordhauInventory
struct UMordhauUtilityLibrary_GetMordhauInventory_Params
{
	class UMordhauInventory*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetMordhauInput
struct UMordhauUtilityLibrary_GetMordhauInput_Params
{
	class UMordhauInput*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetMordhauHUD
struct UMordhauUtilityLibrary_GetMordhauHUD_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauHUD*                                 ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetMordhauGameUserSettings
struct UMordhauUtilityLibrary_GetMordhauGameUserSettings_Params
{
	class UMordhauGameUserSettings*                    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetMordhauGameSession
struct UMordhauUtilityLibrary_GetMordhauGameSession_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauGameSession*                         ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetMaxIndexWithDraw
struct UMordhauUtilityLibrary_GetMaxIndexWithDraw_Params
{
	TArray<int>                                        inArray;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFoundDraw;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetMapName
struct UMordhauUtilityLibrary_GetMapName_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetMapInfo
struct UMordhauUtilityLibrary_GetMapInfo_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapPath;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMapInfo                                    ReturnValue;                                               // 0x0018(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetLODParentPrimitive
struct UMordhauUtilityLibrary_GetLODParentPrimitive_Params
{
	class UPrimitiveComponent*                         Comp;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetLocationName
struct UMordhauUtilityLibrary_GetLocationName_Params
{
	MordhauOnlineSubsystem_EServerLocation             Location;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetLocationDisplayName
struct UMordhauUtilityLibrary_GetLocationDisplayName_Params
{
	MordhauOnlineSubsystem_EServerLocation             Location;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetLocation
struct UMordhauUtilityLibrary_GetLocation_Params
{
	struct FString                                     LocationName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EServerLocation             ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetLocalShortID
struct UMordhauUtilityLibrary_GetLocalShortID_Params
{
	class AMordhauPlayerState*                         PlayerState;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetLocalNetworkVersion
struct UMordhauUtilityLibrary_GetLocalNetworkVersion_Params
{
	uint32_t                                           ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetLastReceiveTime
struct UMordhauUtilityLibrary_GetLastReceiveTime_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetIsUsingController
struct UMordhauUtilityLibrary_GetIsUsingController_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetIsPeasant
struct UMordhauUtilityLibrary_GetIsPeasant_Params
{
	struct FCharacterProfile                           Profile;                                                   // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetIngameEvent
struct UMordhauUtilityLibrary_GetIngameEvent_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EIngameEvent                ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetImportedBounds
struct UMordhauUtilityLibrary_GetImportedBounds_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoxSphereBounds                            ReturnValue;                                               // 0x0008(0x001C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetGameServerGamePort
struct UMordhauUtilityLibrary_GetGameServerGamePort_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetGamePortName
struct UMordhauUtilityLibrary_GetGamePortName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetFaceIndex
struct UMordhauUtilityLibrary_GetFaceIndex_Params
{
	struct FHitResult                                  Hit;                                                       // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0088(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.getErrorText
struct UMordhauUtilityLibrary_getErrorText_Params
{
	struct FString                                     ErrorString;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetEnumValue
struct UMordhauUtilityLibrary_GetEnumValue_Params
{
	struct FString                                     EnumName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EnumKey;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetEnumKey
struct UMordhauUtilityLibrary_GetEnumKey_Params
{
	struct FString                                     EnumName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EnumValue;                                                 // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetDurationText
struct UMordhauUtilityLibrary_GetDurationText_Params
{
	int                                                Seconds;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetDefaultWearable
struct UMordhauUtilityLibrary_GetDefaultWearable_Params
{
	class UClass*                                      FromClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMordhauWearable*                            ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetDefaultObjectCopy
struct UMordhauUtilityLibrary_GetDefaultObjectCopy_Params
{
	class UClass*                                      FromClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ObjectCopy;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetDefaultObject
struct UMordhauUtilityLibrary_GetDefaultObject_Params
{
	class UClass*                                      FromClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetDefaultBadge
struct UMordhauUtilityLibrary_GetDefaultBadge_Params
{
	class UClass*                                      BadgeClass;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBadge*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetDefaultActorCopy
struct UMordhauUtilityLibrary_GetDefaultActorCopy_Params
{
	class UClass*                                      FromClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ActorCopy;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetDefaultActor
struct UMordhauUtilityLibrary_GetDefaultActor_Params
{
	class UClass*                                      FromClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetDateTimeFromUnixTimestamp
struct UMordhauUtilityLibrary_GetDateTimeFromUnixTimestamp_Params
{
	int                                                Timestamp;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetCustomConfigVar_Vector2D
struct UMordhauUtilityLibrary_GetCustomConfigVar_Vector2D_Params
{
	struct FString                                     SectionName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsValid;                                                   // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // 0x0024(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetCustomConfigVar_Vector
struct UMordhauUtilityLibrary_GetCustomConfigVar_Vector_Params
{
	struct FString                                     SectionName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsValid;                                                   // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetCustomConfigVar_String
struct UMordhauUtilityLibrary_GetCustomConfigVar_String_Params
{
	struct FString                                     SectionName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsValid;                                                   // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetCustomConfigVar_Rotator
struct UMordhauUtilityLibrary_GetCustomConfigVar_Rotator_Params
{
	struct FString                                     SectionName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsValid;                                                   // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    ReturnValue;                                               // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetCustomConfigVar_Int
struct UMordhauUtilityLibrary_GetCustomConfigVar_Int_Params
{
	struct FString                                     SectionName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsValid;                                                   // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetCustomConfigVar_Float
struct UMordhauUtilityLibrary_GetCustomConfigVar_Float_Params
{
	struct FString                                     SectionName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsValid;                                                   // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetCustomConfigVar_Color
struct UMordhauUtilityLibrary_GetCustomConfigVar_Color_Params
{
	struct FString                                     SectionName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsValid;                                                   // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // 0x0024(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetCustomConfigVar_Bool
struct UMordhauUtilityLibrary_GetCustomConfigVar_Bool_Params
{
	struct FString                                     SectionName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsValid;                                                   // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetCustomConfigVar_Array
struct UMordhauUtilityLibrary_GetCustomConfigVar_Array_Params
{
	struct FString                                     SectionName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArraySize;                                                 // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReturnValue;                                               // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetCurrentPlatformName
struct UMordhauUtilityLibrary_GetCurrentPlatformName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetCurrentFrameBP
struct UMordhauUtilityLibrary_GetCurrentFrameBP_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetCurrentFrame
struct UMordhauUtilityLibrary_GetCurrentFrame_Params
{
	class UWorld*                                      World;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetCurrentDemoTime
struct UMordhauUtilityLibrary_GetCurrentDemoTime_Params
{
	class UWorld*                                      World;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetConsoleVariableString
struct UMordhauUtilityLibrary_GetConsoleVariableString_Params
{
	struct FString                                     VariableName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetConsoleVariableInt
struct UMordhauUtilityLibrary_GetConsoleVariableInt_Params
{
	struct FString                                     VariableName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetConsoleVariableFloat
struct UMordhauUtilityLibrary_GetConsoleVariableFloat_Params
{
	struct FString                                     VariableName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetComponentsBoundingBoxInActorSpace
struct UMordhauUtilityLibrary_GetComponentsBoundingBoxInActorSpace_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetCentroid
struct UMordhauUtilityLibrary_GetCentroid_Params
{
	TArray<struct FVector>                             Points;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetCanEverAffectNavigation
struct UMordhauUtilityLibrary_GetCanEverAffectNavigation_Params
{
	class USceneComponent*                             SceneComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetBuildVersion
struct UMordhauUtilityLibrary_GetBuildVersion_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetBoxCenter
struct UMordhauUtilityLibrary_GetBoxCenter_Params
{
	struct FBox                                        Box;                                                       // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetBoundingBoxOfBoneInfluence
struct UMordhauUtilityLibrary_GetBoundingBoxOfBoneInfluence_Params
{
	class USkeletalMeshComponent*                      MeshComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Bones;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeightThreshold;                                           // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                        ReturnValue;                                               // 0x001C(0x001C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetBeaconPortName
struct UMordhauUtilityLibrary_GetBeaconPortName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetBaseFilename
struct UMordhauUtilityLibrary_GetBaseFilename_Params
{
	struct FString                                     InPath;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemovePath;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetBannedPerkNames
struct UMordhauUtilityLibrary_GetBannedPerkNames_Params
{
	struct FCharacterProfile                           Profile;                                                   // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AGameStateBase*                              GameState;                                                 // 0x00B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x00C0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetBannedEquipmentNames
struct UMordhauUtilityLibrary_GetBannedEquipmentNames_Params
{
	struct FCharacterProfile                           Profile;                                                   // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AGameStateBase*                              GameState;                                                 // 0x00B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x00C0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetAxisAngleFromRotator
struct UMordhauUtilityLibrary_GetAxisAngleFromRotator_Params
{
	struct FRotator                                    Rot;                                                       // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              OutAngle;                                                  // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetAttachParentActor
struct UMordhauUtilityLibrary_GetAttachParentActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetArchetypeObject
struct UMordhauUtilityLibrary_GetArchetypeObject_Params
{
	struct FCharacterProfile                           Profile;                                                   // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UArchetype*                                  ReturnValue;                                               // 0x00B8(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.GetAllWearableClassesForSlotExhaustive
struct UMordhauUtilityLibrary_GetAllWearableClassesForSlotExhaustive_Params
{
	Mordhau_EWearableSlot                              Slot;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.FSmoothDamp
struct UMordhauUtilityLibrary_FSmoothDamp_Params
{
	float                                              Current;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Target;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentVelocity;                                           // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SmoothTime;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSpeed;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.FormatText
struct UMordhauUtilityLibrary_FormatText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.ForceValidCharacterProfile
struct UMordhauUtilityLibrary_ForceValidCharacterProfile_Params
{
	struct FCharacterProfile                           Profile;                                                   // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FCharacterProfile                           ForceValidatedProfile;                                     // 0x00B8(0x00B8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               bValidateInventory;                                        // 0x0170(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0171(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.ForceReplicationUpdate
struct UMordhauUtilityLibrary_ForceReplicationUpdate_Params
{
	class UCharacterMovementComponent*                 CMC;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.FlushPlayerControllerPressedKeys
struct UMordhauUtilityLibrary_FlushPlayerControllerPressedKeys_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.FlashWindow
struct UMordhauUtilityLibrary_FlashWindow_Params
{
};

// Function Mordhau.MordhauUtilityLibrary.FInterpToSeparate
struct UMordhauUtilityLibrary_FInterpToSeparate_Params
{
	float                                              Current;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Target;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IncreaseSpeed;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecreaseSpeed;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.FInterpConstantToSeparate
struct UMordhauUtilityLibrary_FInterpConstantToSeparate_Params
{
	float                                              Current;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Target;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IncreaseSpeed;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecreaseSpeed;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.FindTeleportSpot
struct UMordhauUtilityLibrary_FindTeleportSpot_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InLocation;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    InRotation;                                                // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     OutLocation;                                               // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.FindPlayFabPlayer
struct UMordhauUtilityLibrary_FindPlayFabPlayer_Params
{
	struct FString                                     PlayerNameOrPlayFabID;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabPlayer                              ReturnValue;                                               // 0x0010(0x0060)  (ConstParm, Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.FindPlayerStateWithoutLocalID
struct UMordhauUtilityLibrary_FindPlayerStateWithoutLocalID_Params
{
	struct FString                                     PlayerNameOrPlayFabID;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauPlayerState*                         ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.FindPlayerState
struct UMordhauUtilityLibrary_FindPlayerState_Params
{
	struct FString                                     PlayerNameOrPlayFabID;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauPlayerState*                         ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.FindCircleIntersectionPoints
struct UMordhauUtilityLibrary_FindCircleIntersectionPoints_Params
{
	struct FVector2D                                   CenterA;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RadiusA;                                                   // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   CenterB;                                                   // 0x000C(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RadiusB;                                                   // 0x0014(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   PointA;                                                    // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   PointB;                                                    // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.FindByFunctionTyped
struct UMordhauUtilityLibrary_FindByFunctionTyped_Params
{
	TArray<class UObject*>                             Array;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             FuncDel;                                                   // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      Class;                                                     // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.FindByFunction
struct UMordhauUtilityLibrary_FindByFunction_Params
{
	TArray<class UObject*>                             Array;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             FuncDel;                                                   // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.FindBetween
struct UMordhauUtilityLibrary_FindBetween_Params
{
	struct FVector                                     A;                                                         // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     B;                                                         // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    ReturnValue;                                               // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.FilterArrayByFunction
struct UMordhauUtilityLibrary_FilterArrayByFunction_Params
{
	TArray<class UObject*>                             Array;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             FuncDel;                                                   // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      Class;                                                     // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             ReturnValue;                                               // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.FakeTickComponent
struct UMordhauUtilityLibrary_FakeTickComponent_Params
{
	class USceneComponent*                             Component;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.Equal_PlayFabPlayer
struct UMordhauUtilityLibrary_Equal_PlayFabPlayer_Params
{
	struct FPlayFabPlayer                              A;                                                         // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabPlayer                              B;                                                         // 0x0060(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.EncodeByteArrayToBase64String
struct UMordhauUtilityLibrary_EncodeByteArrayToBase64String_Params
{
	TArray<unsigned char>                              Array;                                                     // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.DrawText
struct UMordhauUtilityLibrary_DrawText_Params
{
	class UCanvas*                                     Canvas;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFont*                                       Font;                                                      // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Size;                                                      // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Text;                                                      // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Position;                                                  // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                TextColor;                                                 // 0x0030(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Kerning;                                                   // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColor;                                               // 0x0044(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ShadowOffset;                                              // 0x0054(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCentreX;                                                  // 0x005C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCentreY;                                                  // 0x005D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOutlined;                                                 // 0x005E(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                OutlineColor;                                              // 0x0060(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.DoesProfileContainBannedPerks
struct UMordhauUtilityLibrary_DoesProfileContainBannedPerks_Params
{
	struct FCharacterProfile                           Profile;                                                   // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AGameStateBase*                              GameState;                                                 // 0x00B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.DoesProfileContainBannedEquipment
struct UMordhauUtilityLibrary_DoesProfileContainBannedEquipment_Params
{
	struct FCharacterProfile                           Profile;                                                   // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AGameStateBase*                              GameState;                                                 // 0x00B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.CopyToClipboard
struct UMordhauUtilityLibrary_CopyToClipboard_Params
{
	struct FString                                     MessageToCopy;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.ConvertStringSteamIDsToPlayFabIDs
struct UMordhauUtilityLibrary_ConvertStringSteamIDsToPlayFabIDs_Params
{
	TArray<struct FString>                             InSteamIDArray;                                            // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // 0x0020(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.ConvertRelativePathToFull
struct UMordhauUtilityLibrary_ConvertRelativePathToFull_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.ConvertColorArrayToJPEG
struct UMordhauUtilityLibrary_ConvertColorArrayToJPEG_Params
{
	int                                                InSizeX;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InSizeY;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FColor>                              InImageData;                                               // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              CompressedData;                                            // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                  // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ImageQuality;                                              // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.Conv_SoftObjectPathToString
struct UMordhauUtilityLibrary_Conv_SoftObjectPathToString_Params
{
	struct FSoftObjectPath                             SoftObjectPath;                                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.ConsumeBudget
struct UMordhauUtilityLibrary_ConsumeBudget_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EBudgetType                                BudgetType;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipInvisible;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceCutoff;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.ComputePointsLeft
struct UMordhauUtilityLibrary_ComputePointsLeft_Params
{
	struct FCharacterProfile                           Profile;                                                   // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x00B8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.CompressData
struct UMordhauUtilityLibrary_CompressData_Params
{
	TArray<unsigned char>                              InData;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutData;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.CompareGearCustomization
struct UMordhauUtilityLibrary_CompareGearCustomization_Params
{
	struct FCharacterGearCustomization                 First;                                                     // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FCharacterGearCustomization                 Second;                                                    // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.CompareFaceCustomization
struct UMordhauUtilityLibrary_CompareFaceCustomization_Params
{
	struct FFaceCustomization                          First;                                                     // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFaceCustomization                          Second;                                                    // 0x0030(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.CompareEquipmentCustomization
struct UMordhauUtilityLibrary_CompareEquipmentCustomization_Params
{
	struct FEquipmentCustomization                     First;                                                     // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEquipmentCustomization                     Second;                                                    // 0x0030(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.CompareAppearanceCustomization
struct UMordhauUtilityLibrary_CompareAppearanceCustomization_Params
{
	struct FAppearanceCustomization                    First;                                                     // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAppearanceCustomization                    Second;                                                    // 0x0028(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.ClosestPointOnLine
struct UMordhauUtilityLibrary_ClosestPointOnLine_Params
{
	struct FVector                                     LineStart;                                                 // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LineEnd;                                                   // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Point;                                                     // 0x0018(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.Capitalize
struct UMordhauUtilityLibrary_Capitalize_Params
{
	struct FString                                     String;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.CallFunctionByNameWithArgs
struct UMordhauUtilityLibrary_CallFunctionByNameWithArgs_Params
{
	struct FString                                     Str;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Executor;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.CalculateGCD
struct UMordhauUtilityLibrary_CalculateGCD_Params
{
	int                                                ValueA;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ValueB;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.CalculateAngle2D
struct UMordhauUtilityLibrary_CalculateAngle2D_Params
{
	struct FVector                                     Direction;                                                 // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Yaw;                                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.AwardTeamfightMMR
struct UMordhauUtilityLibrary_AwardTeamfightMMR_Params
{
	bool                                               bIsWin;                                                    // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherTeamMMR;                                              // 0x0018(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewMMR;                                                    // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.AwardDuelMMR
struct UMordhauUtilityLibrary_AwardDuelMMR_Params
{
	struct FString                                     WinnerID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoserID;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewWinnerMMR;                                              // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewLoserMMR;                                               // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.AreProfilesEqual
struct UMordhauUtilityLibrary_AreProfilesEqual_Params
{
	struct FCharacterProfile                           First;                                                     // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FCharacterProfile                           Second;                                                    // 0x00B8(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0170(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.AreActorsFromSameLevel
struct UMordhauUtilityLibrary_AreActorsFromSameLevel_Params
{
	class AActor*                                      ActorA;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ActorB;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.AngularDistance
struct UMordhauUtilityLibrary_AngularDistance_Params
{
	struct FRotator                                    A;                                                         // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    B;                                                         // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauUtilityLibrary.ActorGetDistanceToCollision
struct UMordhauUtilityLibrary_ActorGetDistanceToCollision_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Point;                                                     // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PointOnCollision;                                          // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              TraceChannel;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MordhauWidgetComponent.SetPlayerStateAlwaysSee
struct UMordhauWidgetComponent_SetPlayerStateAlwaysSee_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MotionSystemComponent.OnServerAssignNetMotion
struct UMotionSystemComponent_OnServerAssignNetMotion_Params
{
	struct FNetMotion                                  NewNetMotion;                                              // 0x0000(0x0006)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      LastAuthObserved;                                          // 0x0006(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MotionSystemComponent.OnPreBeginPlay
struct UMotionSystemComponent_OnPreBeginPlay_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MotionSystemComponent.OnLODTick
struct UMotionSystemComponent_OnLODTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MotionSystemComponent.OnLateTick
struct UMotionSystemComponent_OnLateTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MotionSystemComponent.OnClientSetNetMotion
struct UMotionSystemComponent_OnClientSetNetMotion_Params
{
	struct FNetMotion                                  NewMotion;                                                 // 0x0000(0x0006)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ServerStartTime;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MoveSoundComponent.OnLODTick
struct UMoveSoundComponent_OnLODTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.MoveSoundComponent.OnCharacterDied
struct UMoveSoundComponent_OnCharacterDied_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.OneDimensionalMovementComponent.SetMovementLine
struct UOneDimensionalMovementComponent_SetMovementLine_Params
{
	struct FVector                                     NewLineStart;                                              // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NewLineEnd;                                                // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ParticleSystemActor.SparseTick
struct AParticleSystemActor_SparseTick_Params
{
};

// Function Mordhau.PerkSystemComponent.OnTakeDamage
struct UPerkSystemComponent_OnTakeDamage_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMordhauDamageInfo                          DamageInfo;                                                // 0x0008(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AController*                                 EventInstigator;                                           // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // 0x00B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.PerkSystemComponent.OnPreBeginPlay
struct UPerkSystemComponent_OnPreBeginPlay_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.PerkSystemComponent.OnLODTick
struct UPerkSystemComponent_OnLODTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.PerkSystemComponent.OnCharacterBuilt
struct UPerkSystemComponent_OnCharacterBuilt_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.PerspectiveTypes.Get
struct UPerspectiveTypes_Get_Params
{
	struct FPerspectiveAnimMontage                     PerspectiveType;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsFirstPerson;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ProjectileShooterComponent.UpdateProjectileTrajectory
struct UProjectileShooterComponent_UpdateProjectileTrajectory_Params
{
};

// Function Mordhau.ProjectileShooterComponent.ReplenishAmmo
struct UProjectileShooterComponent_ReplenishAmmo_Params
{
};

// Function Mordhau.ProjectileShooterComponent.OnWeaponStateReleasing
struct UProjectileShooterComponent_OnWeaponStateReleasing_Params
{
};

// Function Mordhau.ProjectileShooterComponent.OnWeaponStateRecovery
struct UProjectileShooterComponent_OnWeaponStateRecovery_Params
{
};

// Function Mordhau.ProjectileShooterComponent.OnWeaponStateLoading
struct UProjectileShooterComponent_OnWeaponStateLoading_Params
{
};

// Function Mordhau.ProjectileShooterComponent.OnWeaponStateLoaded
struct UProjectileShooterComponent_OnWeaponStateLoaded_Params
{
};

// Function Mordhau.ProjectileShooterComponent.OnWeaponStateBuilding
struct UProjectileShooterComponent_OnWeaponStateBuilding_Params
{
};

// Function Mordhau.ProjectileShooterComponent.OnVehicleDied
struct UProjectileShooterComponent_OnVehicleDied_Params
{
	class AVehicleBase*                                Vehicle;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ProjectileShooterComponent.OnVehicleDestroyed
struct UProjectileShooterComponent_OnVehicleDestroyed_Params
{
	class AVehicleBase*                                Vehicle;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ProjectileShooterComponent.OnStopDriving
struct UProjectileShooterComponent_OnStopDriving_Params
{
};

// Function Mordhau.ProjectileShooterComponent.OnRep_WeaponStateChanged
struct UProjectileShooterComponent_OnRep_WeaponStateChanged_Params
{
};

// Function Mordhau.ProjectileShooterComponent.OnRep_ProjectileIsOnFireChanged
struct UProjectileShooterComponent_OnRep_ProjectileIsOnFireChanged_Params
{
};

// Function Mordhau.ProjectileShooterComponent.OnRep_AmmoChanged
struct UProjectileShooterComponent_OnRep_AmmoChanged_Params
{
};

// Function Mordhau.ProjectileShooterComponent.OnReleasingStageCompleted
struct UProjectileShooterComponent_OnReleasingStageCompleted_Params
{
};

// Function Mordhau.ProjectileShooterComponent.OnRecoveryStageCompleted
struct UProjectileShooterComponent_OnRecoveryStageCompleted_Params
{
};

// Function Mordhau.ProjectileShooterComponent.OnLoadingStageCompleted
struct UProjectileShooterComponent_OnLoadingStageCompleted_Params
{
};

// Function Mordhau.ProjectileShooterComponent.OnFirePressed
struct UProjectileShooterComponent_OnFirePressed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ProjectileShooterComponent.OnCharacterDied
struct UProjectileShooterComponent_OnCharacterDied_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ProjectileShooterComponent.OnCharacterDestroyed
struct UProjectileShooterComponent_OnCharacterDestroyed_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ProjectileShooterComponent.OnBuildingStageCompleted
struct UProjectileShooterComponent_OnBuildingStageCompleted_Params
{
};

// Function Mordhau.ProjectileShooterComponent.InitializeProjectileTrajectory
struct UProjectileShooterComponent_InitializeProjectileTrajectory_Params
{
};

// Function Mordhau.ProjectileShooterComponent.FireProjectile
struct UProjectileShooterComponent_FireProjectile_Params
{
};

// Function Mordhau.ProjectileShooterComponent.ClearProjectileTrajectoryAddedInstances
struct UProjectileShooterComponent_ClearProjectileTrajectoryAddedInstances_Params
{
};

// Function Mordhau.ProjectileShooterComponent.CheckProjectileMeshComponentReference
struct UProjectileShooterComponent_CheckProjectileMeshComponentReference_Params
{
};

// Function Mordhau.ProjectileArmShooterComponent.UpdateArmTarget
struct UProjectileArmShooterComponent_UpdateArmTarget_Params
{
	class AActor*                                      Owner;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ProjectileArmShooterComponent.UpdateArmPullSound
struct UProjectileArmShooterComponent_UpdateArmPullSound_Params
{
	class AActor*                                      CharacterOwner;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ProjectileArmShooterComponent.RaiseArm
struct UProjectileArmShooterComponent_RaiseArm_Params
{
};

// Function Mordhau.ProjectileArmShooterComponent.OnRaiseArmPressed
struct UProjectileArmShooterComponent_OnRaiseArmPressed_Params
{
};

// Function Mordhau.ProjectileArmShooterComponent.OnLowerArmPressed
struct UProjectileArmShooterComponent_OnLowerArmPressed_Params
{
};

// Function Mordhau.ProjectileArmShooterComponent.LowerArm
struct UProjectileArmShooterComponent_LowerArm_Params
{
};

// Function Mordhau.ProjectileArmShooterComponent.AdjustArm
struct UProjectileArmShooterComponent_AdjustArm_Params
{
	int                                                Delta;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ProjectileTurretShooterComponent.OnRep_TurnCapChanged
struct UProjectileTurretShooterComponent_OnRep_TurnCapChanged_Params
{
};

// Function Mordhau.ProjectileTurretShooterComponent.OnRep_LookUpCapChanged
struct UProjectileTurretShooterComponent_OnRep_LookUpCapChanged_Params
{
};

// Function Mordhau.PushableActor.SetProgress
struct APushableActor_SetProgress_Params
{
	float                                              NewProgress;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.PushableActor.OnRep_ReplicatedProgress
struct APushableActor_OnRep_ReplicatedProgress_Params
{
};

// Function Mordhau.PushableActor.OnProgressUpdated
struct APushableActor_OnProgressUpdated_Params
{
	float                                              OldProgress;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.Quiver.FindAppropriateQuiverMesh
struct UQuiver_FindAppropriateQuiverMesh_Params
{
	unsigned char                                      Ammo;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MaxAmmo;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.RconFunctionLibrary.GetJsonTypeAsString
struct URconFunctionLibrary_GetJsonTypeAsString_Params
{
	TEnumAsByte<PlayFab_EPFJson>                       Type;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.RconFunctionLibrary.GenerateResponseObject
struct URconFunctionLibrary_GenerateResponseObject_Params
{
	struct FRconResponseStruct                         RconResponse;                                              // 0x0000(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          ReturnValue;                                               // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.RconFunctionLibrary.GenerateRequestInfoResponseObject
struct URconFunctionLibrary_GenerateRequestInfoResponseObject_Params
{
	struct FRconRequestInfoResponse                    RconRequestInfoResponse;                                   // 0x0000(0x0058)  (Parm, OutParm, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          ReturnValue;                                               // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.RconFunctionLibrary.GenerateRconParameterValue
struct URconFunctionLibrary_GenerateRconParameterValue_Params
{
	struct FRconParameter                              RconParameter;                                             // 0x0000(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
	class UPlayFabJsonValue*                           ReturnValue;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.SeparatedBodyPart.OnCosmeticHit
struct ASeparatedBodyPart_OnCosmeticHit_Params
{
	Mordhau_EMordhauDamageType                         DamageType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SubType;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // 0x0004(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                      Agent;                                                     // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.SeparatedBodyPart.IsPartiallyDismembered
struct ASeparatedBodyPart_IsPartiallyDismembered_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.SeparatedBodyPart.IsDismembered
struct ASeparatedBodyPart_IsDismembered_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.SeparatedBodyPart.InitializeDismemberment
struct ASeparatedBodyPart_InitializeDismemberment_Params
{
	class AMordhauCharacter*                           Source;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bone;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  SourceBoneTransform;                                       // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsPartial;                                                // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsBluntForce;                                             // 0x0041(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.SpawnGroup.SetSpawnsTeam
struct ASpawnGroup_SetSpawnsTeam_Params
{
	int                                                NewTeam;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.SpawnGroup.SetAreSpawnsEnabled
struct ASpawnGroup_SetAreSpawnsEnabled_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.SpawnGroup.GetAreSpawnsEnabled
struct ASpawnGroup_GetAreSpawnsEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.SplineAudio.SetCurve
struct ASplineAudio_SetCurve_Params
{
	class UCurveFloat*                                 InCurve;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.SplineAudio.OnDeactivate
struct ASplineAudio_OnDeactivate_Params
{
};

// Function Mordhau.SplineAudio.OnActivate
struct ASplineAudio_OnActivate_Params
{
};

// Function Mordhau.StaminaStatComponent.OnCharacterDied
struct UStaminaStatComponent_OnCharacterDied_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.SubField.SetSubFieldHidden
struct ASubField_SetSubFieldHidden_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.SubField.GetMaster
struct ASubField_GetMaster_Params
{
	class AMasterField*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.SubField.DeactivateSubField
struct ASubField_DeactivateSubField_Params
{
};

// Function Mordhau.SubField.BeginSubFieldDeactivation
struct ASubField_BeginSubFieldDeactivation_Params
{
};

// Function Mordhau.TagSystemComponent.SetTags
struct UTagSystemComponent_SetTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.TagSystemComponent.RemoveTags
struct UTagSystemComponent_RemoveTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.TagSystemComponent.RemoveTag
struct UTagSystemComponent_RemoveTag_Params
{
	struct FGameplayTag                                Tag;                                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.TagSystemComponent.RegisterTagConditionDelegate
struct UTagSystemComponent_RegisterTagConditionDelegate_Params
{
	struct FGameplayTagCondition                       Condition;                                                 // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UObject*                                     Object;                                                    // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Function;                                                  // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.TagSystemComponent.FlashTags
struct UTagSystemComponent_FlashTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.TagSystemComponent.FlashTag
struct UTagSystemComponent_FlashTag_Params
{
	struct FGameplayTag                                Tag;                                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.TagSystemComponent.AddTags
struct UTagSystemComponent_AddTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.TagSystemComponent.AddTag
struct UTagSystemComponent_AddTag_Params
{
	struct FGameplayTag                                Tag;                                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.TagSystemComponent.AddAndRemoveTags
struct UTagSystemComponent_AddAndRemoveTags_Params
{
	struct FGameplayTagContainer                       TagsToAdd;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       TagsToRemove;                                              // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Mordhau.TagSystemComponent.AddAndRemoveTag
struct UTagSystemComponent_AddAndRemoveTag_Params
{
	struct FGameplayTag                                TagToAdd;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                TagToRemove;                                               // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.ThudderComponent.DoTick
struct UThudderComponent_DoTick_Params
{
};

// Function Mordhau.UpperChestWearable.GetShouldersWearablesNum
struct UUpperChestWearable_GetShouldersWearablesNum_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.UpperChestWearable.GetShouldersWearable
struct UUpperChestWearable_GetShouldersWearable_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.UpperChestWearable.GetLowerChestWearablesNum
struct UUpperChestWearable_GetLowerChestWearablesNum_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.UpperChestWearable.GetLowerChestWearable
struct UUpperChestWearable_GetLowerChestWearable_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.UpperChestWearable.GetArmsWearablesNum
struct UUpperChestWearable_GetArmsWearablesNum_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mordhau.UpperChestWearable.GetArmsWearable
struct UUpperChestWearable_GetArmsWearable_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
