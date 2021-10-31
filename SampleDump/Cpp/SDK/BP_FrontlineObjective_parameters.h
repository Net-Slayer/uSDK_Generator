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

// Function BP_FrontlineObjective.BP_FrontlineObjective_C.IsInObjectiveArea
struct UBP_FrontlineObjective_C_IsInObjectiveArea_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InArea;                                                    // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FrontlineObjective.BP_FrontlineObjective_C.IsCompleted
struct UBP_FrontlineObjective_C_IsCompleted_Params
{
	bool                                               Completed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnAnyObjectiveProgressChanged
struct UBP_FrontlineObjective_C_OnAnyObjectiveProgressChanged_Params
{
};

// Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnInitialize
struct UBP_FrontlineObjective_C_OnInitialize_Params
{
	class ABP_CapturePoint_C*                          Point;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnUpdateUIWidgets
struct UBP_FrontlineObjective_C_OnUpdateUIWidgets_Params
{
};

// Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnEnemyLostPrerequisites
struct UBP_FrontlineObjective_C_OnEnemyLostPrerequisites_Params
{
};

// Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnEnemyGainedPrerequisites
struct UBP_FrontlineObjective_C_OnEnemyGainedPrerequisites_Params
{
};

// Function BP_FrontlineObjective.BP_FrontlineObjective_C.GetObjectiveProgress
struct UBP_FrontlineObjective_C_GetObjectiveProgress_Params
{
	float                                              Progress;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
