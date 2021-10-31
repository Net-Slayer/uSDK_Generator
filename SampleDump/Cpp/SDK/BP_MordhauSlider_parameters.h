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

// Function BP_MordhauSlider.BP_MordhauSlider_C.Get Discrete Slider Value
struct UBP_MordhauSlider_C_Get_Discrete_Slider_Value_Params
{
	int                                                Discretized_Value;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauSlider.BP_MordhauSlider_C.Continualize Value
struct UBP_MordhauSlider_C_Continualize_Value_Params
{
	int                                                Discrete_Value;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ContinualizedValue;                                        // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauSlider.BP_MordhauSlider_C.Discretize Value
struct UBP_MordhauSlider_C_Discretize_Value_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Discretized_Value;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauSlider.BP_MordhauSlider_C.Shift slider step
struct UBP_MordhauSlider_C_Shift_slider_step_Params
{
	int                                                Direction;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauSlider.BP_MordhauSlider_C.Get_ProgressBar_1_Percent_1
struct UBP_MordhauSlider_C_Get_ProgressBar_1_Percent_1_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauSlider.BP_MordhauSlider_C.Initialize
struct UBP_MordhauSlider_C_Initialize_Params
{
	struct FS_MordhauSlider                            Slider_Struct;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Skip_set_value;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MordhauSlider.BP_MordhauSlider_C.Get Slider Value
struct UBP_MordhauSlider_C_Get_Slider_Value_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauSlider.BP_MordhauSlider_C.Set Value
struct UBP_MordhauSlider_C_Set_Value_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauSlider.BP_MordhauSlider_C.Get_NumericDisplay_Visibility_1
struct UBP_MordhauSlider_C_Get_NumericDisplay_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauSlider.BP_MordhauSlider_C.Get Numeric Value
struct UBP_MordhauSlider_C_Get_Numeric_Value_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
struct UBP_MordhauSlider_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
struct UBP_MordhauSlider_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature
struct UBP_MordhauSlider_C_BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
struct UBP_MordhauSlider_C_BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
struct UBP_MordhauSlider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauSlider.BP_MordhauSlider_C.Tick
struct UBP_MordhauSlider_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauSlider.BP_MordhauSlider_C.Construct
struct UBP_MordhauSlider_C_Construct_Params
{
};

// Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature
struct UBP_MordhauSlider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function BP_MordhauSlider.BP_MordhauSlider_C.ExecuteUbergraph_BP_MordhauSlider
struct UBP_MordhauSlider_C_ExecuteUbergraph_BP_MordhauSlider_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauSlider.BP_MordhauSlider_C.OnMouseCapture__DelegateSignature
struct UBP_MordhauSlider_C_OnMouseCapture__DelegateSignature_Params
{
};

// Function BP_MordhauSlider.BP_MordhauSlider_C.OnValueChanged__DelegateSignature
struct UBP_MordhauSlider_C_OnValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
