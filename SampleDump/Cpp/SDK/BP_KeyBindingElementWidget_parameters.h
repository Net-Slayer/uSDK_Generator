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

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.EndEditBinding
struct UBP_KeyBindingElementWidget_C_EndEditBinding_Params
{
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.GetActionNameText
struct UBP_KeyBindingElementWidget_C_GetActionNameText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.GetCustomBinding
struct UBP_KeyBindingElementWidget_C_GetCustomBinding_Params
{
	bool                                               bIsPrimary;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FKey                                        Key;                                                       // 0x0008(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.SetCustomBinding
struct UBP_KeyBindingElementWidget_C_SetCustomBinding_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               bIsPrimary;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.GetKeyText
struct UBP_KeyBindingElementWidget_C_GetKeyText_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               bIsEditingBinding;                                         // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       KeyText;                                                   // 0x0020(0x0018)  (Parm, OutParm)
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.GetSecondaryKeyText
struct UBP_KeyBindingElementWidget_C_GetSecondaryKeyText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.GetPrimaryKeyText
struct UBP_KeyBindingElementWidget_C_GetPrimaryKeyText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.AddCustomBinding
struct UBP_KeyBindingElementWidget_C_AddCustomBinding_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.StartEditBinding
struct UBP_KeyBindingElementWidget_C_StartEditBinding_Params
{
	bool                                               bIsPrimary;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.Construct
struct UBP_KeyBindingElementWidget_C_Construct_Params
{
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_442_OnButtonClickedEvent__DelegateSignature
struct UBP_KeyBindingElementWidget_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_442_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_460_OnButtonClickedEvent__DelegateSignature
struct UBP_KeyBindingElementWidget_C_BndEvt__Button_5_K2Node_ComponentBoundEvent_460_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.ExecuteUbergraph_BP_KeyBindingElementWidget
struct UBP_KeyBindingElementWidget_C_ExecuteUbergraph_BP_KeyBindingElementWidget_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
