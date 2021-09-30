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

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.GetVisibility_5
struct UBP_HUDButtonPrompts_C_GetVisibility_5_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.GetVisibility_4
struct UBP_HUDButtonPrompts_C_GetVisibility_4_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.GetVisibility_2
struct UBP_HUDButtonPrompts_C_GetVisibility_2_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Get_BP_ButtonPrompt_PrimarySpecAction_Visibility_1
struct UBP_HUDButtonPrompts_C_Get_BP_ButtonPrompt_PrimarySpecAction_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Clear Vehicle Prompts
struct UBP_HUDButtonPrompts_C_Clear_Vehicle_Prompts_Params
{
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Add Vehicle Prompt
struct UBP_HUDButtonPrompts_C_Add_Vehicle_Prompt_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       DisplayedText;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Get_Overlay_SpectatorActionPrompts_Visibility_2
struct UBP_HUDButtonPrompts_C_Get_Overlay_SpectatorActionPrompts_Visibility_2_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Get_Overlay_VehiclePrompts_Visibility_1
struct UBP_HUDButtonPrompts_C_Get_Overlay_VehiclePrompts_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.GetVisibility_1
struct UBP_HUDButtonPrompts_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Update Spectator Prompts
struct UBP_HUDButtonPrompts_C_Update_Spectator_Prompts_Params
{
	class AMordhauSpectator*                           MordhauSpectator;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Get_Overlay_SpectatorActionPrompts_Visibility_1
struct UBP_HUDButtonPrompts_C_Get_Overlay_SpectatorActionPrompts_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Update Action Prompts
struct UBP_HUDButtonPrompts_C_Update_Action_Prompts_Params
{
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Clear Equipment Prompts
struct UBP_HUDButtonPrompts_C_Clear_Equipment_Prompts_Params
{
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Add Prompt
struct UBP_HUDButtonPrompts_C_Add_Prompt_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       DisplayedText;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Construct
struct UBP_HUDButtonPrompts_C_Construct_Params
{
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Hide Equipment Prompts
struct UBP_HUDButtonPrompts_C_Hide_Equipment_Prompts_Params
{
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Show Equipment Prompts
struct UBP_HUDButtonPrompts_C_Show_Equipment_Prompts_Params
{
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Play Vanish Anim
struct UBP_HUDButtonPrompts_C_Play_Vanish_Anim_Params
{
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Vanish
struct UBP_HUDButtonPrompts_C_Vanish_Params
{
};

// Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.ExecuteUbergraph_BP_HUDButtonPrompts
struct UBP_HUDButtonPrompts_C_ExecuteUbergraph_BP_HUDButtonPrompts_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
