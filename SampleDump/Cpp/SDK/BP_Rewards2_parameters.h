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

// Function BP_Rewards2.BP_Rewards2_C.FindProgressBarTarget
struct UBP_Rewards2_C_FindProgressBarTarget_Params
{
	int                                                Next_Rank_XP;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Current_Rank_XP;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Current_XP;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Earned_XP;                                                 // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Target;                                                    // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Rewards2.BP_Rewards2_C.HandleRankUp
struct UBP_Rewards2_C_HandleRankUp_Params
{
	class UBP_CasualRankWidget_C*                      Casual_Rank_Widget_Ref;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Rewards2.BP_Rewards2_C.XP Interpolation
struct UBP_Rewards2_C_XP_Interpolation_Params
{
	class UBP_CasualRankWidget_C*                      Casual_Rank_Widget_Ref;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Delta_Time;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Rewards2.BP_Rewards2_C.InitializeRankValues
struct UBP_Rewards2_C_InitializeRankValues_Params
{
	class UBP_CasualRankWidget_C*                      Casual_Rank_Widget_Ref;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Rewards2.BP_Rewards2_C.Get_EarnedXPText_Text_1
struct UBP_Rewards2_C_Get_EarnedXPText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_Rewards2.BP_Rewards2_C.BeginXPSequence
struct UBP_Rewards2_C_BeginXPSequence_Params
{
};

// Function BP_Rewards2.BP_Rewards2_C.AddToXPBar
struct UBP_Rewards2_C_AddToXPBar_Params
{
};

// Function BP_Rewards2.BP_Rewards2_C.Tick
struct UBP_Rewards2_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Rewards2.BP_Rewards2_C.RankUp
struct UBP_Rewards2_C_RankUp_Params
{
};

// Function BP_Rewards2.BP_Rewards2_C.ExitXP
struct UBP_Rewards2_C_ExitXP_Params
{
};

// Function BP_Rewards2.BP_Rewards2_C.RankUpAnimDone
struct UBP_Rewards2_C_RankUpAnimDone_Params
{
};

// Function BP_Rewards2.BP_Rewards2_C.MergeGold
struct UBP_Rewards2_C_MergeGold_Params
{
};

// Function BP_Rewards2.BP_Rewards2_C.RequestRewards
struct UBP_Rewards2_C_RequestRewards_Params
{
};

// Function BP_Rewards2.BP_Rewards2_C.RewardDropTimedOut
struct UBP_Rewards2_C_RewardDropTimedOut_Params
{
};

// Function BP_Rewards2.BP_Rewards2_C.Construct
struct UBP_Rewards2_C_Construct_Params
{
};

// Function BP_Rewards2.BP_Rewards2_C.OnRewardsDropped
struct UBP_Rewards2_C_OnRewardsDropped_Params
{
	bool                                               bWasSuccessful;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Gold;                                                      // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                XP;                                                        // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Rewards2.BP_Rewards2_C.Enable
struct UBP_Rewards2_C_Enable_Params
{
};

// Function BP_Rewards2.BP_Rewards2_C.BeginGoldAnimation
struct UBP_Rewards2_C_BeginGoldAnimation_Params
{
};

// Function BP_Rewards2.BP_Rewards2_C.Update Player Widget
struct UBP_Rewards2_C_Update_Player_Widget_Params
{
};

// Function BP_Rewards2.BP_Rewards2_C.ExecuteUbergraph_BP_Rewards2
struct UBP_Rewards2_C_ExecuteUbergraph_BP_Rewards2_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Rewards2.BP_Rewards2_C.RewardsComplete__DelegateSignature
struct UBP_Rewards2_C_RewardsComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
