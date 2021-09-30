﻿#pragma once

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

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.GetPercent
struct UBP_DiscreteSlider_C_GetPercent_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.ContinualizeValue
struct UBP_DiscreteSlider_C_ContinualizeValue_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ContinualizedValue;                                        // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.OnValueChangedInternal
struct UBP_DiscreteSlider_C_OnValueChangedInternal_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.GetValue
struct UBP_DiscreteSlider_C_GetValue_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.SetValue
struct UBP_DiscreteSlider_C_SetValue_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumOfIndices;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.DiscretizeValue
struct UBP_DiscreteSlider_C_DiscretizeValue_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DiscretizedValue;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.BndEvt__Slider_9174_K2Node_ComponentBoundEvent_17317_OnFloatValueChangedEvent__DelegateSignature
struct UBP_DiscreteSlider_C_BndEvt__Slider_9174_K2Node_ComponentBoundEvent_17317_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_8_OnMouseCaptureBeginEvent__DelegateSignature
struct UBP_DiscreteSlider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_8_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.ExecuteUbergraph_BP_DiscreteSlider
struct UBP_DiscreteSlider_C_ExecuteUbergraph_BP_DiscreteSlider_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.OnStartedTouching__DelegateSignature
struct UBP_DiscreteSlider_C_OnStartedTouching__DelegateSignature_Params
{
};

// Function BP_DiscreteSlider.BP_DiscreteSlider_C.OnValueChanged__DelegateSignature
struct UBP_DiscreteSlider_C_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
