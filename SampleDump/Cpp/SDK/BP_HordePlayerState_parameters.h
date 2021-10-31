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

// Function BP_HordePlayerState.BP_HordePlayerState_C.CopyFromOtherState
struct ABP_HordePlayerState_C_CopyFromOtherState_Params
{
	class ABP_HordePlayerState_C*                      OtherState;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordePlayerState.BP_HordePlayerState_C.OnRep_ReplicatedSkills
struct ABP_HordePlayerState_C_OnRep_ReplicatedSkills_Params
{
};

// Function BP_HordePlayerState.BP_HordePlayerState_C.OnRep_SkillPoints
struct ABP_HordePlayerState_C_OnRep_SkillPoints_Params
{
};

// Function BP_HordePlayerState.BP_HordePlayerState_C.GetDiscountedPrice
struct ABP_HordePlayerState_C_GetDiscountedPrice_Params
{
	int                                                BasePrice;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DiscountedPrice;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordePlayerState.BP_HordePlayerState_C.OnRep_Coins
struct ABP_HordePlayerState_C_OnRep_Coins_Params
{
};

// Function BP_HordePlayerState.BP_HordePlayerState_C.UserConstructionScript
struct ABP_HordePlayerState_C_UserConstructionScript_Params
{
};

// Function BP_HordePlayerState.BP_HordePlayerState_C.ReceiveCopyProperties
struct ABP_HordePlayerState_C_ReceiveCopyProperties_Params
{
	class APlayerState*                                NewPlayerState;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordePlayerState.BP_HordePlayerState_C.ExecuteUbergraph_BP_HordePlayerState
struct ABP_HordePlayerState_C_ExecuteUbergraph_BP_HordePlayerState_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
