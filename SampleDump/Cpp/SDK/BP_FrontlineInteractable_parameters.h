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

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.IsInObjectiveArea
struct ABP_FrontlineInteractable_C_IsInObjectiveArea_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InArea;                                                    // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.IsCompleted
struct ABP_FrontlineInteractable_C_IsCompleted_Params
{
	bool                                               Completed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.GetObjectiveProgress
struct ABP_FrontlineInteractable_C_GetObjectiveProgress_Params
{
	float                                              Progress;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.UpdateUIWidgets
struct ABP_FrontlineInteractable_C_UpdateUIWidgets_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.CanHeldInteract
struct ABP_FrontlineInteractable_C_CanHeldInteract_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.CanInteract
struct ABP_FrontlineInteractable_C_CanInteract_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.IncrementInteractions
struct ABP_FrontlineInteractable_C_IncrementInteractions_Params
{
	class AController*                                 Interactor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnRep_Interactions
struct ABP_FrontlineInteractable_C_OnRep_Interactions_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.EnemyLostPrerequisites
struct ABP_FrontlineInteractable_C_EnemyLostPrerequisites_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.EnemyGainedPrerequisites
struct ABP_FrontlineInteractable_C_EnemyGainedPrerequisites_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.Initialize
struct ABP_FrontlineInteractable_C_Initialize_Params
{
	class ABP_CapturePoint_C*                          CapturePoint;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.Disable
struct ABP_FrontlineInteractable_C_Disable_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.Activate
struct ABP_FrontlineInteractable_C_Activate_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnInitialize
struct ABP_FrontlineInteractable_C_OnInitialize_Params
{
	class ABP_CapturePoint_C*                          Point;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnEnemyGainedPrerequisites
struct ABP_FrontlineInteractable_C_OnEnemyGainedPrerequisites_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnEnemyLostPrerequisites
struct ABP_FrontlineInteractable_C_OnEnemyLostPrerequisites_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnUpdateUIWidgets
struct ABP_FrontlineInteractable_C_OnUpdateUIWidgets_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnInteractionsChanged
struct ABP_FrontlineInteractable_C_OnInteractionsChanged_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.ProgressVisualStage
struct ABP_FrontlineInteractable_C_ProgressVisualStage_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnHeldInteractionStart
struct ABP_FrontlineInteractable_C_OnHeldInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnAnyObjectiveProgressChanged
struct ABP_FrontlineInteractable_C_OnAnyObjectiveProgressChanged_Params
{
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnInteractionStart
struct ABP_FrontlineInteractable_C_OnInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.ExecuteUbergraph_BP_FrontlineInteractable
struct ABP_FrontlineInteractable_C_ExecuteUbergraph_BP_FrontlineInteractable_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
