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

// Function BP_Scoreboard.BP_Scoreboard_C.Open Menu Scoreboard
struct UBP_Scoreboard_C_Open_Menu_Scoreboard_Params
{
};

// Function BP_Scoreboard.BP_Scoreboard_C.Get Team Color
struct UBP_Scoreboard_C_Get_Team_Color_Params
{
	int                                                Team;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Output__Linear_;                                           // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 Output__Slate_;                                            // 0x0018(0x0028)  (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.Update
struct UBP_Scoreboard_C_Update_Params
{
};

// Function BP_Scoreboard.BP_Scoreboard_C.Refresh
struct UBP_Scoreboard_C_Refresh_Params
{
	class AMordhauPlayerState*                         PlayerState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetMaxPlayers
struct UBP_Scoreboard_C_GetMaxPlayers_Params
{
	int                                                DivideBy;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Text;                                                      // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetServerName
struct UBP_Scoreboard_C_GetServerName_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetMapName
struct UBP_Scoreboard_C_GetMapName_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetTeamObjectiveValue
struct UBP_Scoreboard_C_GetTeamObjectiveValue_Params
{
	int                                                Team;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0008(0x0018)  (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2ObjectiveValue
struct UBP_Scoreboard_C_GetTeam2ObjectiveValue_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1ObjectiveValue
struct UBP_Scoreboard_C_GetTeam1ObjectiveValue_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetObjectiveName
struct UBP_Scoreboard_C_GetObjectiveName_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetGameModeName
struct UBP_Scoreboard_C_GetGameModeName_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2Players
struct UBP_Scoreboard_C_GetTeam2Players_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1Players
struct UBP_Scoreboard_C_GetTeam1Players_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetTeamPlayers
struct UBP_Scoreboard_C_GetTeamPlayers_Params
{
	int                                                Team;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0008(0x0018)  (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2Name
struct UBP_Scoreboard_C_GetTeam2Name_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetTeamName
struct UBP_Scoreboard_C_GetTeamName_Params
{
	int                                                Team;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0008(0x0018)  (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1Name
struct UBP_Scoreboard_C_GetTeam1Name_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetScoreboardTime
struct UBP_Scoreboard_C_GetScoreboardTime_Params
{
	struct FText                                       Time;                                                      // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.Hide
struct UBP_Scoreboard_C_Hide_Params
{
};

// Function BP_Scoreboard.BP_Scoreboard_C.Show
struct UBP_Scoreboard_C_Show_Params
{
};

// Function BP_Scoreboard.BP_Scoreboard_C.Refresh Players Array
struct UBP_Scoreboard_C_Refresh_Players_Array_Params
{
};

// Function BP_Scoreboard.BP_Scoreboard_C.Construct
struct UBP_Scoreboard_C_Construct_Params
{
};

// Function BP_Scoreboard.BP_Scoreboard_C.ExecuteUbergraph_BP_Scoreboard
struct UBP_Scoreboard_C_ExecuteUbergraph_BP_Scoreboard_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
