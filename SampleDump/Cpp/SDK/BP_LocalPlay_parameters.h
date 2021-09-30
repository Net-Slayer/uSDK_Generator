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

// Function BP_LocalPlay.BP_LocalPlay_C.Get_BotSettings_Visibility_1
struct UBP_LocalPlay_C_Get_BotSettings_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LocalPlay.BP_LocalPlay_C.GetPlayerCountText
struct UBP_LocalPlay_C_GetPlayerCountText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_LocalPlay.BP_LocalPlay_C.Construct
struct UBP_LocalPlay_C_Construct_Params
{
};

// Function BP_LocalPlay.BP_LocalPlay_C.BndEvt__GameModeComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
struct UBP_LocalPlay_C_BndEvt__GameModeComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FText                                       SelectedItem;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LocalPlay.BP_LocalPlay_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_173_OnButtonClickedEvent__DelegateSignature
struct UBP_LocalPlay_C_BndEvt__StartButton_K2Node_ComponentBoundEvent_173_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_LocalPlay.BP_LocalPlay_C.ExecuteUbergraph_BP_LocalPlay
struct UBP_LocalPlay_C_ExecuteUbergraph_BP_LocalPlay_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
