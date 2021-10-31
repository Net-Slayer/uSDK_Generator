﻿#pragma once

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

// Function BP_CapturePoint.BP_CapturePoint_C.OnObjectivesCompleted
struct ABP_CapturePoint_C_OnObjectivesCompleted_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.ShowPushDefenderAnnouncement
struct ABP_CapturePoint_C_ShowPushDefenderAnnouncement_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.ShowPushAttackerAnnouncement
struct ABP_CapturePoint_C_ShowPushAttackerAnnouncement_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.ObjectivesChanged
struct ABP_CapturePoint_C_ObjectivesChanged_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.Set Cap Point Widget Colors
struct ABP_CapturePoint_C_Set_Cap_Point_Widget_Colors_Params
{
	struct FLinearColor                                Fill_Color;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Progress_Bar_Color;                                        // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CapturePoint.BP_CapturePoint_C.GetTeamRelevance
struct ABP_CapturePoint_C_GetTeamRelevance_Params
{
	unsigned char                                      Team;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Relevance;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CapturePoint.BP_CapturePoint_C.UserConstructionScript
struct ABP_CapturePoint_C_UserConstructionScript_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.ReceiveBeginPlay
struct ABP_CapturePoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.OnCapturingTeamChanged
struct ABP_CapturePoint_C_OnCapturingTeamChanged_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.OnOwningTeamChanged
struct ABP_CapturePoint_C_OnOwningTeamChanged_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.EnemyGainedPrerequisites
struct ABP_CapturePoint_C_EnemyGainedPrerequisites_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.EnemyLostPrerequisites
struct ABP_CapturePoint_C_EnemyLostPrerequisites_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.UpdateUIWidgets
struct ABP_CapturePoint_C_UpdateUIWidgets_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.OnStartedFlashing
struct ABP_CapturePoint_C_OnStartedFlashing_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.OnStoppedFlashing
struct ABP_CapturePoint_C_OnStoppedFlashing_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.TriggerWinDelayed
struct ABP_CapturePoint_C_TriggerWinDelayed_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.Pulse
struct ABP_CapturePoint_C_Pulse_Params
{
};

// Function BP_CapturePoint.BP_CapturePoint_C.ExecuteUbergraph_BP_CapturePoint
struct ABP_CapturePoint_C_ExecuteUbergraph_BP_CapturePoint_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
