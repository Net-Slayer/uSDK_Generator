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

// Function BP_DummyObjective.BP_DummyObjective_C.IsInObjectiveArea
struct ABP_DummyObjective_C_IsInObjectiveArea_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InArea;                                                    // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DummyObjective.BP_DummyObjective_C.IsCompleted
struct ABP_DummyObjective_C_IsCompleted_Params
{
	bool                                               Completed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DummyObjective.BP_DummyObjective_C.GetObjectiveProgress
struct ABP_DummyObjective_C_GetObjectiveProgress_Params
{
	float                                              Progress;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DummyObjective.BP_DummyObjective_C.AnyObjectiveProgressChanged
struct ABP_DummyObjective_C_AnyObjectiveProgressChanged_Params
{
};

// Function BP_DummyObjective.BP_DummyObjective_C.IsCapturePointDone
struct ABP_DummyObjective_C_IsCapturePointDone_Params
{
	bool                                               IsDone;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DummyObjective.BP_DummyObjective_C.EnemyLostPrerequisites
struct ABP_DummyObjective_C_EnemyLostPrerequisites_Params
{
};

// Function BP_DummyObjective.BP_DummyObjective_C.EnemyGainedPrerequisites
struct ABP_DummyObjective_C_EnemyGainedPrerequisites_Params
{
};

// Function BP_DummyObjective.BP_DummyObjective_C.Initialize
struct ABP_DummyObjective_C_Initialize_Params
{
	class ABP_CapturePoint_C*                          CapturePoint;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DummyObjective.BP_DummyObjective_C.Disable
struct ABP_DummyObjective_C_Disable_Params
{
};

// Function BP_DummyObjective.BP_DummyObjective_C.Activate
struct ABP_DummyObjective_C_Activate_Params
{
};

// Function BP_DummyObjective.BP_DummyObjective_C.OnInitialize
struct ABP_DummyObjective_C_OnInitialize_Params
{
	class ABP_CapturePoint_C*                          Point;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DummyObjective.BP_DummyObjective_C.OnEnemyGainedPrerequisites
struct ABP_DummyObjective_C_OnEnemyGainedPrerequisites_Params
{
};

// Function BP_DummyObjective.BP_DummyObjective_C.OnEnemyLostPrerequisites
struct ABP_DummyObjective_C_OnEnemyLostPrerequisites_Params
{
};

// Function BP_DummyObjective.BP_DummyObjective_C.OnUpdateUIWidgets
struct ABP_DummyObjective_C_OnUpdateUIWidgets_Params
{
};

// Function BP_DummyObjective.BP_DummyObjective_C.OnAnyObjectiveProgressChanged
struct ABP_DummyObjective_C_OnAnyObjectiveProgressChanged_Params
{
};

// Function BP_DummyObjective.BP_DummyObjective_C.ExecuteUbergraph_BP_DummyObjective
struct ABP_DummyObjective_C_ExecuteUbergraph_BP_DummyObjective_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
