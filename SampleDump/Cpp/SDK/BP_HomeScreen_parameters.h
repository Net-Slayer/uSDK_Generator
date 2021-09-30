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

// Function BP_HomeScreen.BP_HomeScreen_C.Get_ToggleNewsButton_Visibility_1
struct UBP_HomeScreen_C_Get_ToggleNewsButton_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HomeScreen.BP_HomeScreen_C.Get_CloseMenuButton_Visibility_1
struct UBP_HomeScreen_C_Get_CloseMenuButton_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HomeScreen.BP_HomeScreen_C.GetVisibility_1
struct UBP_HomeScreen_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HomeScreen.BP_HomeScreen_C.Get_TextBlock_14_Text_1
struct UBP_HomeScreen_C_Get_TextBlock_14_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_HomeScreen.BP_HomeScreen_C.GetCurrentVersionText
struct UBP_HomeScreen_C_GetCurrentVersionText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__Button_33_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UBP_HomeScreen_C_BndEvt__Button_33_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__leaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_HomeScreen_C_BndEvt__leaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBP_HomeScreen_C_BndEvt__Button_64_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_HomeScreen.BP_HomeScreen_C.BndEvt__HideNewsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UBP_HomeScreen_C_BndEvt__HideNewsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_HomeScreen.BP_HomeScreen_C.Construct
struct UBP_HomeScreen_C_Construct_Params
{
};

// Function BP_HomeScreen.BP_HomeScreen_C.OnItemsRefreshed
struct UBP_HomeScreen_C_OnItemsRefreshed_Params
{
	bool                                               bWasSuccessful;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FItemStack>                          ItemStacks;                                                // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function BP_HomeScreen.BP_HomeScreen_C.OnPartyUpdated
struct UBP_HomeScreen_C_OnPartyUpdated_Params
{
	TArray<struct FPlayFabPlayer>                      PartyMembers;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function BP_HomeScreen.BP_HomeScreen_C.UpdatePartyList
struct UBP_HomeScreen_C_UpdatePartyList_Params
{
};

// Function BP_HomeScreen.BP_HomeScreen_C.ToggleNews
struct UBP_HomeScreen_C_ToggleNews_Params
{
};

// Function BP_HomeScreen.BP_HomeScreen_C.OnShown
struct UBP_HomeScreen_C_OnShown_Params
{
};

// Function BP_HomeScreen.BP_HomeScreen_C.ExecuteUbergraph_BP_HomeScreen
struct UBP_HomeScreen_C_ExecuteUbergraph_BP_HomeScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
