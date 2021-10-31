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

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.IsInObjectiveArea
struct ABP_ItemDeliverySpot_C_IsInObjectiveArea_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InArea;                                                    // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.IsCompleted
struct ABP_ItemDeliverySpot_C_IsCompleted_Params
{
	bool                                               Completed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.GetObjectiveProgress
struct ABP_ItemDeliverySpot_C_GetObjectiveProgress_Params
{
	float                                              Progress;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UpdateFlipProgressBarState
struct ABP_ItemDeliverySpot_C_UpdateFlipProgressBarState_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UpdateFloater
struct ABP_ItemDeliverySpot_C_UpdateFloater_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.AnyObjectiveProgressChanged
struct ABP_ItemDeliverySpot_C_AnyObjectiveProgressChanged_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.IsCapturePointDone
struct ABP_ItemDeliverySpot_C_IsCapturePointDone_Params
{
	bool                                               IsDone;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.ActivateSpawns
struct ABP_ItemDeliverySpot_C_ActivateSpawns_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.DisableSpawns
struct ABP_ItemDeliverySpot_C_DisableSpawns_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UpdateDeliverySpotVisuals
struct ABP_ItemDeliverySpot_C_UpdateDeliverySpotVisuals_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.EnemyLostPrerequisites
struct ABP_ItemDeliverySpot_C_EnemyLostPrerequisites_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.EnemyGainedPrerequisites
struct ABP_ItemDeliverySpot_C_EnemyGainedPrerequisites_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.Initialize
struct ABP_ItemDeliverySpot_C_Initialize_Params
{
	class ABP_CapturePoint_C*                          CapturePoint;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.Disable
struct ABP_ItemDeliverySpot_C_Disable_Params
{
	bool                                               SlowDisable;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.Activate
struct ABP_ItemDeliverySpot_C_Activate_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnRep_Deliverables
struct ABP_ItemDeliverySpot_C_OnRep_Deliverables_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UserConstructionScript
struct ABP_ItemDeliverySpot_C_UserConstructionScript_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.BndEvt__Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ItemDeliverySpot_C_BndEvt__Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnInitialize
struct ABP_ItemDeliverySpot_C_OnInitialize_Params
{
	class ABP_CapturePoint_C*                          Point;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnEnemyGainedPrerequisites
struct ABP_ItemDeliverySpot_C_OnEnemyGainedPrerequisites_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnEnemyLostPrerequisites
struct ABP_ItemDeliverySpot_C_OnEnemyLostPrerequisites_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnUpdateUIWidgets
struct ABP_ItemDeliverySpot_C_OnUpdateUIWidgets_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnDeliverablesChanged
struct ABP_ItemDeliverySpot_C_OnDeliverablesChanged_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.ProgressVisualStage
struct ABP_ItemDeliverySpot_C_ProgressVisualStage_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnAnyObjectiveProgressChanged
struct ABP_ItemDeliverySpot_C_OnAnyObjectiveProgressChanged_Params
{
};

// Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.ExecuteUbergraph_BP_ItemDeliverySpot
struct ABP_ItemDeliverySpot_C_ExecuteUbergraph_BP_ItemDeliverySpot_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
