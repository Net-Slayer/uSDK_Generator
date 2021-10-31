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

// Function BP_FrontlineGameState.BP_FrontlineGameState_C.DrainTickets
struct ABP_FrontlineGameState_C_DrainTickets_Params
{
	class ABP_MordhauGameMode_C*                       GameMode;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineGameState.BP_FrontlineGameState_C.ReceiveBeginPlay
struct ABP_FrontlineGameState_C_ReceiveBeginPlay_Params
{
};

// Function BP_FrontlineGameState.BP_FrontlineGameState_C.ReceiveTick
struct ABP_FrontlineGameState_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineGameState.BP_FrontlineGameState_C.HandleMatchEndInfo
struct ABP_FrontlineGameState_C_HandleMatchEndInfo_Params
{
};

// Function BP_FrontlineGameState.BP_FrontlineGameState_C.LocalPlayerChangedTeam
struct ABP_FrontlineGameState_C_LocalPlayerChangedTeam_Params
{
};

// Function BP_FrontlineGameState.BP_FrontlineGameState_C.TriggerWinDelayed
struct ABP_FrontlineGameState_C_TriggerWinDelayed_Params
{
};

// Function BP_FrontlineGameState.BP_FrontlineGameState_C.ExecuteUbergraph_BP_FrontlineGameState
struct ABP_FrontlineGameState_C_ExecuteUbergraph_BP_FrontlineGameState_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
