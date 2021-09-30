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

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetWaitingMode
struct UBP_ChoiceDialog_C_SetWaitingMode_Params
{
	bool                                               IsWaitingMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.OnPreviewKeyDown
struct UBP_ChoiceDialog_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.GetChoiceText
struct UBP_ChoiceDialog_C_GetChoiceText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetTitleText
struct UBP_ChoiceDialog_C_SetTitleText_Params
{
	struct FText                                       Title;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetRightButtonText
struct UBP_ChoiceDialog_C_SetRightButtonText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetLeftButtonText
struct UBP_ChoiceDialog_C_SetLeftButtonText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature
struct UBP_ChoiceDialog_C_BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature_Params
{
};

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature
struct UBP_ChoiceDialog_C_BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature_Params
{
};

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.Show
struct UBP_ChoiceDialog_C_Show_Params
{
};

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.Hide
struct UBP_ChoiceDialog_C_Hide_Params
{
};

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.ExecuteUbergraph_BP_ChoiceDialog
struct UBP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.RightButtonClicked__DelegateSignature
struct UBP_ChoiceDialog_C_RightButtonClicked__DelegateSignature_Params
{
};

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.LeftButtonClicked__DelegateSignature
struct UBP_ChoiceDialog_C_LeftButtonClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
