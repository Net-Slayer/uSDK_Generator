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

// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.IsInObjectiveArea
struct ABP_FrontlineKillObjectiveWrapper_C_IsInObjectiveArea_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InArea;                                                    // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.IsCompleted
struct ABP_FrontlineKillObjectiveWrapper_C_IsCompleted_Params
{
	bool                                               Completed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.GetObjectiveProgress
struct ABP_FrontlineKillObjectiveWrapper_C_GetObjectiveProgress_Params
{
	float                                              Progress;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.OnAnyObjectiveProgressChanged
struct ABP_FrontlineKillObjectiveWrapper_C_OnAnyObjectiveProgressChanged_Params
{
};

// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.OnEnemyGainedPrerequisites
struct ABP_FrontlineKillObjectiveWrapper_C_OnEnemyGainedPrerequisites_Params
{
};

// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.OnEnemyLostPrerequisites
struct ABP_FrontlineKillObjectiveWrapper_C_OnEnemyLostPrerequisites_Params
{
};

// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.OnInitialize
struct ABP_FrontlineKillObjectiveWrapper_C_OnInitialize_Params
{
	class ABP_CapturePoint_C*                          Point;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.OnUpdateUIWidgets
struct ABP_FrontlineKillObjectiveWrapper_C_OnUpdateUIWidgets_Params
{
};

// Function BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C.ExecuteUbergraph_BP_FrontlineKillObjectiveWrapper
struct ABP_FrontlineKillObjectiveWrapper_C_ExecuteUbergraph_BP_FrontlineKillObjectiveWrapper_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
