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

// Function BP_PushHUDWidget.BP_PushHUDWidget_C.Get_timer_Text_Visibility_1
struct UBP_PushHUDWidget_C_Get_timer_Text_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PushHUDWidget.BP_PushHUDWidget_C.Get_timer_Text_Text_1
struct UBP_PushHUDWidget_C_Get_timer_Text_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_PushHUDWidget.BP_PushHUDWidget_C.InitializeCapPointGroup
struct UBP_PushHUDWidget_C_InitializeCapPointGroup_Params
{
	struct FCapturePointGroup                          Group;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Length;                                                    // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PushHUDWidget.BP_PushHUDWidget_C.GetLeftTeamColor
struct UBP_PushHUDWidget_C_GetLeftTeamColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PushHUDWidget.BP_PushHUDWidget_C.GetRightTeamColor
struct UBP_PushHUDWidget_C_GetRightTeamColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PushHUDWidget.BP_PushHUDWidget_C.Tick
struct UBP_PushHUDWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PushHUDWidget.BP_PushHUDWidget_C.AddTime
struct UBP_PushHUDWidget_C_AddTime_Params
{
	float                                              Time_to_add__seconds_;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PushHUDWidget.BP_PushHUDWidget_C.ExecuteUbergraph_BP_PushHUDWidget
struct UBP_PushHUDWidget_C_ExecuteUbergraph_BP_PushHUDWidget_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
