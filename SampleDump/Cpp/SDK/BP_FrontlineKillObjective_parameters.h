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

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.IsInObjectiveArea
struct ABP_FrontlineKillObjective_C_IsInObjectiveArea_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InArea;                                                    // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.IsCompleted
struct ABP_FrontlineKillObjective_C_IsCompleted_Params
{
	bool                                               Completed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.GetObjectiveProgress
struct ABP_FrontlineKillObjective_C_GetObjectiveProgress_Params
{
	float                                              Progress;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.AwardScorePointsIfApplicable
struct ABP_FrontlineKillObjective_C_AwardScorePointsIfApplicable_Params
{
	class AController*                                 Instigator;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Points;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.CompileCandidatesList
struct ABP_FrontlineKillObjective_C_CompileCandidatesList_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.IsCandidateValidForPossession
struct ABP_FrontlineKillObjective_C_IsCandidateValidForPossession_Params
{
	class ABP_FrontlinePlayerController_C*             Candidate;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Valid;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.NotifyCandidateForPossession
struct ABP_FrontlineKillObjective_C_NotifyCandidateForPossession_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.UpdateUIWidgets
struct ABP_FrontlineKillObjective_C_UpdateUIWidgets_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.SpawnOurEquipment
struct ABP_FrontlineKillObjective_C_SpawnOurEquipment_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.UserConstructionScript
struct ABP_FrontlineKillObjective_C_UserConstructionScript_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ReceiveBeginPlay
struct ABP_FrontlineKillObjective_C_ReceiveBeginPlay_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnEnemyGainedPrerequisites
struct ABP_FrontlineKillObjective_C_OnEnemyGainedPrerequisites_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnEnemyLostPrerequisites
struct ABP_FrontlineKillObjective_C_OnEnemyLostPrerequisites_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ReceiveAnyDamage
struct ABP_FrontlineKillObjective_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnInitialize
struct ABP_FrontlineKillObjective_C_OnInitialize_Params
{
	class ABP_CapturePoint_C*                          Point;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnDied
struct ABP_FrontlineKillObjective_C_OnDied_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SubType;                                                   // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       bone;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Point;                                                     // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Source;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Agent;                                                     // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnUpdateUIWidgets
struct ABP_FrontlineKillObjective_C_OnUpdateUIWidgets_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnHealthChanged
struct ABP_FrontlineKillObjective_C_OnHealthChanged_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.BPLODTick
struct ABP_FrontlineKillObjective_C_BPLODTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnAnyObjectiveProgressChanged
struct ABP_FrontlineKillObjective_C_OnAnyObjectiveProgressChanged_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.MoveBlockedBySlow
struct ABP_FrontlineKillObjective_C_MoveBlockedBySlow_Params
{
	struct FHitResult                                  Impact;                                                    // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ReceiveDestroyed
struct ABP_FrontlineKillObjective_C_ReceiveDestroyed_Params
{
};

// Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ExecuteUbergraph_BP_FrontlineKillObjective
struct ABP_FrontlineKillObjective_C_ExecuteUbergraph_BP_FrontlineKillObjective_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
