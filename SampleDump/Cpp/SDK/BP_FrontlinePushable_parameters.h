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

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.IsInObjectiveArea
struct ABP_FrontlinePushable_C_IsInObjectiveArea_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InArea;                                                    // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.IsCompleted
struct ABP_FrontlinePushable_C_IsCompleted_Params
{
	bool                                               Completed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.GetObjectiveProgress
struct ABP_FrontlinePushable_C_GetObjectiveProgress_Params
{
	float                                              Progress;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.UpdateUIWidgets
struct ABP_FrontlinePushable_C_UpdateUIWidgets_Params
{
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.EnemyLostPrerequisites
struct ABP_FrontlinePushable_C_EnemyLostPrerequisites_Params
{
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.EnemyGainedPrerequisites
struct ABP_FrontlinePushable_C_EnemyGainedPrerequisites_Params
{
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.Initialize
struct ABP_FrontlinePushable_C_Initialize_Params
{
	class ABP_CapturePoint_C*                          CapturePoint;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnProgressUpdated
struct ABP_FrontlinePushable_C_OnProgressUpdated_Params
{
	float                                              OldProgress;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnInitialize
struct ABP_FrontlinePushable_C_OnInitialize_Params
{
	class ABP_CapturePoint_C*                          Point;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnEnemyLostPrerequisites
struct ABP_FrontlinePushable_C_OnEnemyLostPrerequisites_Params
{
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnEnemyGainedPrerequisites
struct ABP_FrontlinePushable_C_OnEnemyGainedPrerequisites_Params
{
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnUpdateUIWidgets
struct ABP_FrontlinePushable_C_OnUpdateUIWidgets_Params
{
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.PushableArrivedAtDestination
struct ABP_FrontlinePushable_C_PushableArrivedAtDestination_Params
{
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnAnyObjectiveProgressChanged
struct ABP_FrontlinePushable_C_OnAnyObjectiveProgressChanged_Params
{
};

// Function BP_FrontlinePushable.BP_FrontlinePushable_C.ExecuteUbergraph_BP_FrontlinePushable
struct ABP_FrontlinePushable_C_ExecuteUbergraph_BP_FrontlinePushable_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
