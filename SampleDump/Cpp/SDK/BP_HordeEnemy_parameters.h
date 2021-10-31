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

// Function BP_HordeEnemy.BP_HordeEnemy_C.AttemptClimb
struct ABP_HordeEnemy_C_AttemptClimb_Params
{
	bool                                               Succeeded;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.HandleObstructionRemoval
struct ABP_HordeEnemy_C_HandleObstructionRemoval_Params
{
	struct FHitResult                                  Impact;                                                    // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.OnRep_StunnedBySkillCounter
struct ABP_HordeEnemy_C_OnRep_StunnedBySkillCounter_Params
{
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.GetEnragedTarget
struct ABP_HordeEnemy_C_GetEnragedTarget_Params
{
	class AMordhauCharacter*                           OutTarget;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.ModifyParryResult
struct ABP_HordeEnemy_C_ModifyParryResult_Params
{
	bool                                               InResult;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitResult;                                                 // 0x0004(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AMordhauCharacter*                           Attacker;                                                  // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.ModifyDamage
struct ABP_HordeEnemy_C_ModifyDamage_Params
{
	float                                              DamageAmount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMordhauDamageInfo                          DamageInfo;                                                // 0x0008(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	class AController*                                 EventInstigator;                                           // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // 0x00B8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.ReceiveBeginPlay
struct ABP_HordeEnemy_C_ReceiveBeginPlay_Params
{
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.OnDied
struct ABP_HordeEnemy_C_OnDied_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SubType;                                                   // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       bone;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Point;                                                     // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Source;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Agent;                                                     // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.MoveBlockedBySlow
struct ABP_HordeEnemy_C_MoveBlockedBySlow_Params
{
	struct FHitResult                                  Impact;                                                    // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.CompleteTask
struct ABP_HordeEnemy_C_CompleteTask_Params
{
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.ReceiveMordhauDamage
struct ABP_HordeEnemy_C_ReceiveMordhauDamage_Params
{
	float                                              Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitResult;                                                 // 0x0004(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Mordhau_EMordhauDamageType                         DamageType;                                                // 0x008C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SubDamageType;                                             // 0x008D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Source;                                                    // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Agent;                                                     // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 EventInstigator;                                           // 0x00A0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.LegSweep
struct ABP_HordeEnemy_C_LegSweep_Params
{
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.OnBlockedMelee
struct ABP_HordeEnemy_C_OnBlockedMelee_Params
{
	struct FHitResult                                  HitResult;                                                 // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AMordhauCharacter*                           Attacker;                                                  // 0x0088(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.Recoil
struct ABP_HordeEnemy_C_Recoil_Params
{
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.Cripple
struct ABP_HordeEnemy_C_Cripple_Params
{
	float                                              Duration;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.Enrage
struct ABP_HordeEnemy_C_Enrage_Params
{
	class AMordhauCharacter*                           Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.OnKilled
struct ABP_HordeEnemy_C_OnKilled_Params
{
	class AController*                                 EventInstigator;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.ReceivePossessed
struct ABP_HordeEnemy_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeEnemy.BP_HordeEnemy_C.ExecuteUbergraph_BP_HordeEnemy
struct ABP_HordeEnemy_C_ExecuteUbergraph_BP_HordeEnemy_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
