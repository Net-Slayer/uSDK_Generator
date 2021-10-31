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

// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.RefreshAvatar
struct UBP_LeaderboardEntry_C_RefreshAvatar_Params
{
};

// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Get_MMRText_ColorAndOpacity_1
struct UBP_LeaderboardEntry_C_Get_MMRText_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                               // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
};

// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.GetToolTipText_1
struct UBP_LeaderboardEntry_C_GetToolTipText_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Update
struct UBP_LeaderboardEntry_C_Update_Params
{
	struct FLeaderboardEntry                           Entry;                                                     // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Get_MMR_Text_1
struct UBP_LeaderboardEntry_C_Get_MMR_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Get_Rank_Text_1
struct UBP_LeaderboardEntry_C_Get_Rank_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UBP_LeaderboardEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.ContextButtonClicked
struct UBP_LeaderboardEntry_C_ContextButtonClicked_Params
{
	int                                                Button_Index;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.ExecuteUbergraph_BP_LeaderboardEntry
struct UBP_LeaderboardEntry_C_ExecuteUbergraph_BP_LeaderboardEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
