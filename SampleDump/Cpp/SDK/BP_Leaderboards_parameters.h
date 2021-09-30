#pragma once

// Name: Mordhau, Version: 4_25_hotfix


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

// Function BP_Leaderboards.BP_Leaderboards_C.Update
struct UBP_Leaderboards_C_Update_Params
{
};

// Function BP_Leaderboards.BP_Leaderboards_C.Tick
struct UBP_Leaderboards_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Leaderboards.BP_Leaderboards_C.Construct
struct UBP_Leaderboards_C_Construct_Params
{
};

// Function BP_Leaderboards.BP_Leaderboards_C.OnGetLeaderboardComplete
struct UBP_Leaderboards_C_OnGetLeaderboardComplete_Params
{
	bool                                               bWasSuccessful;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     LeaderboardName;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FLeaderboardEntry>                   Entries;                                                   // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FLeaderboardEntry                           SelfEntry;                                                 // 0x0028(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Leaderboards.BP_Leaderboards_C.ExecuteUbergraph_BP_Leaderboards
struct UBP_Leaderboards_C_ExecuteUbergraph_BP_Leaderboards_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
