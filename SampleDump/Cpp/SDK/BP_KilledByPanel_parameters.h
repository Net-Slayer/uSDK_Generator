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

// Function BP_KilledByPanel.BP_KilledByPanel_C.Hide
struct UBP_KilledByPanel_C_Hide_Params
{
};

// Function BP_KilledByPanel.BP_KilledByPanel_C.Show
struct UBP_KilledByPanel_C_Show_Params
{
	class AMordhauPlayerState*                         Killer;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_KilledByPanel.BP_KilledByPanel_C.Get_HealthProgressBar_Percent_1
struct UBP_KilledByPanel_C_Get_HealthProgressBar_Percent_1_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_KilledByPanel.BP_KilledByPanel_C.Get_StamProgressBar_Percent_1
struct UBP_KilledByPanel_C_Get_StamProgressBar_Percent_1_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_KilledByPanel.BP_KilledByPanel_C.GetText_2
struct UBP_KilledByPanel_C_GetText_2_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_KilledByPanel.BP_KilledByPanel_C.GetText_1
struct UBP_KilledByPanel_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_KilledByPanel.BP_KilledByPanel_C.TakeFromKiller
struct UBP_KilledByPanel_C_TakeFromKiller_Params
{
	class AMordhauPlayerState*                         KilledBy;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_KilledByPanel.BP_KilledByPanel_C.Tick
struct UBP_KilledByPanel_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_KilledByPanel.BP_KilledByPanel_C.OnAnimationFinished
struct UBP_KilledByPanel_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_KilledByPanel.BP_KilledByPanel_C.ExecuteUbergraph_BP_KilledByPanel
struct UBP_KilledByPanel_C_ExecuteUbergraph_BP_KilledByPanel_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
