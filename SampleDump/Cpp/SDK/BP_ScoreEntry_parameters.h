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

// Function BP_ScoreEntry.BP_ScoreEntry_C.UpdatePointsText
struct UBP_ScoreEntry_C_UpdatePointsText_Params
{
};

// Function BP_ScoreEntry.BP_ScoreEntry_C.Initialize
struct UBP_ScoreEntry_C_Initialize_Params
{
	float                                              StartingPoints;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     InPlayerName;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       InLabel;                                                   // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UBP_ScoreFeed_C*                             InScoreFeed;                                               // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ScoreEntry.BP_ScoreEntry_C.AddPoints
struct UBP_ScoreEntry_C_AddPoints_Params
{
	float                                              InPoints;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ScoreEntry.BP_ScoreEntry_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1
struct UBP_ScoreEntry_C_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1_Params
{
};

// Function BP_ScoreEntry.BP_ScoreEntry_C.ExecuteUbergraph_BP_ScoreEntry
struct UBP_ScoreEntry_C_ExecuteUbergraph_BP_ScoreEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
