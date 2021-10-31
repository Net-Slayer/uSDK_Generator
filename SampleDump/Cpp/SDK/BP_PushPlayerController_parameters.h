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

// Function BP_PushPlayerController.BP_PushPlayerController_C.ShowCurrentObjective
struct ABP_PushPlayerController_C_ShowCurrentObjective_Params
{
	bool                                               PlayHorn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PushPlayerController.BP_PushPlayerController_C.OnAfterPossess
struct ABP_PushPlayerController_C_OnAfterPossess_Params
{
	class APawn*                                       APawn;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PushPlayerController.BP_PushPlayerController_C.OnReceivedKillScore
struct ABP_PushPlayerController_C_OnReceivedKillScore_Params
{
	class AMordhauCharacter*                           Killed;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PushPlayerController.BP_PushPlayerController_C.OnReceivedAssistScore
struct ABP_PushPlayerController_C_OnReceivedAssistScore_Params
{
	float                                              Percentage;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauCharacter*                           Killed;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PushPlayerController.BP_PushPlayerController_C.ExecuteUbergraph_BP_PushPlayerController
struct ABP_PushPlayerController_C_ExecuteUbergraph_BP_PushPlayerController_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
