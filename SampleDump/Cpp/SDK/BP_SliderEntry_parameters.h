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

// Function BP_SliderEntry.BP_SliderEntry_C.Update Slider
struct UBP_SliderEntry_C_Update_Slider_Params
{
	struct FS_MordhauSlider                            Slider_Struct;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

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

// Function BP_SliderEntry.BP_SliderEntry_C.Construct
struct UBP_SliderEntry_C_Construct_Params
{
};

// Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UBP_SliderEntry_C_BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__BP_MordhauSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
struct UBP_SliderEntry_C_BndEvt__BP_MordhauSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
