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

// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.GetVisibility_1
struct UBP_ContextPopupWrapper_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.OnGetMenuContent_1
struct UBP_ContextPopupWrapper_C_OnGetMenuContent_1_Params
{
	class UWidget*                                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.Close Menu
struct UBP_ContextPopupWrapper_C_Close_Menu_Params
{
};

// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.Open Menu
struct UBP_ContextPopupWrapper_C_Open_Menu_Params
{
};

// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.Construct Context Menu
struct UBP_ContextPopupWrapper_C_Construct_Context_Menu_Params
{
	TMap<struct FString, struct FText>                 Option_Map;                                                // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UBP_ContextPopupWrapper_C*                   Wrapper;                                                   // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UBP_ContextPopupWrapper_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.ExecuteUbergraph_BP_ContextPopupWrapper
struct UBP_ContextPopupWrapper_C_ExecuteUbergraph_BP_ContextPopupWrapper_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.ContextButtonClicked__DelegateSignature
struct UBP_ContextPopupWrapper_C_ContextButtonClicked__DelegateSignature_Params
{
	int                                                Button_Index;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
