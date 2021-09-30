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

// Function BP_SliderEntry.BP_SliderEntry_C.GetValue
struct UBP_SliderEntry_C_GetValue_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SliderEntry.BP_SliderEntry_C.SetValue
struct UBP_SliderEntry_C_SetValue_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SliderEntry.BP_SliderEntry_C.GetPercent
struct UBP_SliderEntry_C_GetPercent_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SliderEntry.BP_SliderEntry_C.GetNumericValue
struct UBP_SliderEntry_C_GetNumericValue_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__TestSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
struct UBP_SliderEntry_C_BndEvt__TestSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UBP_SliderEntry_C_BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_136_OnEditableTextChangedEvent__DelegateSignature
struct UBP_SliderEntry_C_BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_136_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_150_OnEditableTextCommittedEvent__DelegateSignature
struct UBP_SliderEntry_C_BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_150_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SliderEntry.BP_SliderEntry_C.Construct
struct UBP_SliderEntry_C_Construct_Params
{
};

// Function BP_SliderEntry.BP_SliderEntry_C.ExecuteUbergraph_BP_SliderEntry
struct UBP_SliderEntry_C_ExecuteUbergraph_BP_SliderEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SliderEntry.BP_SliderEntry_C.OnHovered__DelegateSignature
struct UBP_SliderEntry_C_OnHovered__DelegateSignature_Params
{
};

// Function BP_SliderEntry.BP_SliderEntry_C.OnValueChanged__DelegateSignature
struct UBP_SliderEntry_C_OnValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
