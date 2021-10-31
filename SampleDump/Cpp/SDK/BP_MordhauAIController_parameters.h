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

// Function BP_MordhauAIController.BP_MordhauAIController_C.GetTeamFilterClass
struct ABP_MordhauAIController_C_GetTeamFilterClass_Params
{
	class UClass*                                      FilterClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauAIController.BP_MordhauAIController_C.ReceivePossess
struct ABP_MordhauAIController_C_ReceivePossess_Params
{
	class APawn*                                       PossessedPawn;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauAIController.BP_MordhauAIController_C.OnAfterUnPossess
struct ABP_MordhauAIController_C_OnAfterUnPossess_Params
{
};

// Function BP_MordhauAIController.BP_MordhauAIController_C.ReceiveBeginPlay
struct ABP_MordhauAIController_C_ReceiveBeginPlay_Params
{
};

// Function BP_MordhauAIController.BP_MordhauAIController_C.OnStartedPerceivingCharacter
struct ABP_MordhauAIController_C_OnStartedPerceivingCharacter_Params
{
	class AAdvancedCharacter*                          PerceivedCharacter;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPerceptionInfo                             PerceptionInfo;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function BP_MordhauAIController.BP_MordhauAIController_C.OnStoppedPerceivingCharacter
struct ABP_MordhauAIController_C_OnStoppedPerceivingCharacter_Params
{
	class AAdvancedCharacter*                          PerceivedCharacter;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPerceptionInfo                             PerceptionInfo;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function BP_MordhauAIController.BP_MordhauAIController_C.ExecuteUbergraph_BP_MordhauAIController
struct ABP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
