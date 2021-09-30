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

// Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.CloseMenu
struct UBP_ContextPopupWrapper_Interface_C_CloseMenu_Params
{
};

// Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.GetVisibility_1
struct UBP_ContextPopupWrapper_Interface_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.ConstructContextMenu
struct UBP_ContextPopupWrapper_Interface_C_ConstructContextMenu_Params
{
	TMap<struct FString, struct FText>                 Options;                                                   // 0x0010(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.OpenMenu
struct UBP_ContextPopupWrapper_Interface_C_OpenMenu_Params
{
	TMap<struct FString, struct FText>                 Options;                                                   // 0x0010(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.OnGetMenuContent_1
struct UBP_ContextPopupWrapper_Interface_C_OnGetMenuContent_1_Params
{
	class UWidget*                                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UBP_ContextPopupWrapper_Interface_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.ExecuteUbergraph_BP_ContextPopupWrapper_Interface
struct UBP_ContextPopupWrapper_Interface_C_ExecuteUbergraph_BP_ContextPopupWrapper_Interface_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
