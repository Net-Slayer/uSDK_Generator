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

// Function BP_PushGameState.BP_PushGameState_C.GetScoreboardTimeInProgress
struct ABP_PushGameState_C_GetScoreboardTimeInProgress_Params
{
	struct FTimespan                                   Time;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PushGameState.BP_PushGameState_C.GetScoreboardObjectiveName
struct ABP_PushGameState_C_GetScoreboardObjectiveName_Params
{
	struct FText                                       NewParam;                                                  // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BP_PushGameState.BP_PushGameState_C.GetScoreboardTeamObjectiveValue
struct ABP_PushGameState_C_GetScoreboardTeamObjectiveValue_Params
{
	int                                                Team;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Output;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PushGameState.BP_PushGameState_C.HandleMatchEndInfo
struct ABP_PushGameState_C_HandleMatchEndInfo_Params
{
};

// Function BP_PushGameState.BP_PushGameState_C.ExecuteUbergraph_BP_PushGameState
struct ABP_PushGameState_C_ExecuteUbergraph_BP_PushGameState_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
