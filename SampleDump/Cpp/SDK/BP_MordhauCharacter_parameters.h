#pragma once

// Name: Mordhau, Version: 4_25_hotfix


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

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.GiveFists
struct ABP_MordhauCharacter_C_GiveFists_Params
{
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnBeforeReceiveWearablePickup
struct ABP_MordhauCharacter_C_OnBeforeReceiveWearablePickup_Params
{
	class ABP_WearablePickup_C*                        WearablePickup;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.IsAnUpgrade
struct ABP_MordhauCharacter_C_IsAnUpgrade_Params
{
	class ABP_WearablePickup_C*                        Wearable;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.SpawnBloodPoolUnderneath
struct ABP_MordhauCharacter_C_SpawnBloodPoolUnderneath_Params
{
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.GetOutOfBoundsSubtext
struct ABP_MordhauCharacter_C_GetOutOfBoundsSubtext_Params
{
	struct FText                                       Subtext;                                                   // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.GetOutOfBoundsText
struct ABP_MordhauCharacter_C_GetOutOfBoundsText_Params
{
	struct FText                                       Header;                                                    // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.AddRagdollImpulse
struct ABP_MordhauCharacter_C_AddRagdollImpulse_Params
{
	struct FVector                                     Impulse;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       bone;                                                      // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.TryClimbing
struct ABP_MordhauCharacter_C_TryClimbing_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.CalculateLedgeOffsetAndNormal
struct ABP_MordhauCharacter_C_CalculateLedgeOffsetAndNormal_Params
{
	class UClimbingMotion*                             ClimbingMotion;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     OutOffset;                                                 // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     OutNormal;                                                 // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.AttemptClimb
struct ABP_MordhauCharacter_C_AttemptClimb_Params
{
	bool                                               Succeeded;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.FindClimbSpot
struct ABP_MordhauCharacter_C_FindClimbSpot_Params
{
	float                                              UpwardsCast;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Succeeded;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     TargetSpot;                                                // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.UserConstructionScript
struct ABP_MordhauCharacter_C_UserConstructionScript_Params
{
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_2
struct ABP_MordhauCharacter_C_InpActEvt_Cycle_Camera_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_1
struct ABP_MordhauCharacter_C_InpActEvt_Cycle_Camera_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.ReceiveBeginPlay
struct ABP_MordhauCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnDied
struct ABP_MordhauCharacter_C_OnDied_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SubType;                                                   // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       bone;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Point;                                                     // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Source;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Agent;                                                     // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnCosmeticHit
struct ABP_MordhauCharacter_C_OnCosmeticHit_Params
{
	Mordhau_EMordhauDamageType                         DamageType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SubType;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // 0x0004(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                      Agent;                                                     // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnPostDismember
struct ABP_MordhauCharacter_C_OnPostDismember_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASeparatedBodyPart*                          SeparatedPart;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Agent;                                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.BndEvt__Thudder_K2Node_ComponentBoundEvent_0_ComponentThudSignature__DelegateSignature
struct ABP_MordhauCharacter_C_BndEvt__Thudder_K2Node_ComponentBoundEvent_0_ComponentThudSignature__DelegateSignature_Params
{
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.ReplicatedTripWithKnockback
struct ABP_MordhauCharacter_C_ReplicatedTripWithKnockback_Params
{
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnPostProfileAssigned
struct ABP_MordhauCharacter_C_OnPostProfileAssigned_Params
{
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.ApplyRagdollForce
struct ABP_MordhauCharacter_C_ApplyRagdollForce_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SubType;                                                   // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       bone;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Point;                                                     // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Source;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Agent;                                                     // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.ServerSetClimbLocation
struct ABP_MordhauCharacter_C_ServerSetClimbLocation_Params
{
	struct FVector_NetQuantize                         NewParam;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.DebugPossess
struct ABP_MordhauCharacter_C_DebugPossess_Params
{
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.SprintingMoveBlockedBy
struct ABP_MordhauCharacter_C_SprintingMoveBlockedBy_Params
{
	class AActor*                                      BlockedBy;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.ExecuteUbergraph_BP_MordhauCharacter
struct ABP_MordhauCharacter_C_ExecuteUbergraph_BP_MordhauCharacter_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
