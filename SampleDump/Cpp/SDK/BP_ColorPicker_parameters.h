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

// Function BP_ColorPicker.BP_ColorPicker_C.CloseColorPicker
struct UBP_ColorPicker_C_CloseColorPicker_Params
{
};

// Function BP_ColorPicker.BP_ColorPicker_C.SetColorsAndIndex
struct UBP_ColorPicker_C_SetColorsAndIndex_Params
{
	TArray<class UClass*>                              Colors;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ColorPicker.BP_ColorPicker_C.GetSelectedColors
struct UBP_ColorPicker_C_GetSelectedColors_Params
{
	TArray<class UClass*>                              Colors;                                                    // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_ColorPicker.BP_ColorPicker_C.SetIndex
struct UBP_ColorPicker_C_SetIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ColorPicker.BP_ColorPicker_C.GetSelectedIndex
struct UBP_ColorPicker_C_GetSelectedIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ColorPicker.BP_ColorPicker_C.SetColors
struct UBP_ColorPicker_C_SetColors_Params
{
	TArray<class UClass*>                              Colors;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function BP_ColorPicker.BP_ColorPicker_C.OnClicked
struct UBP_ColorPicker_C_OnClicked_Params
{
	int                                                ColorIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ColorPicker.BP_ColorPicker_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_10201_OnButtonClickedEvent__DelegateSignature
struct UBP_ColorPicker_C_BndEvt__ImageButton_K2Node_ComponentBoundEvent_10201_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ColorPicker.BP_ColorPicker_C.OnHovered
struct UBP_ColorPicker_C_OnHovered_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ColorPicker.BP_ColorPicker_C.UpdatePreviewColor
struct UBP_ColorPicker_C_UpdatePreviewColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ColorPicker.BP_ColorPicker_C.OnColsed
struct UBP_ColorPicker_C_OnColsed_Params
{
};

// Function BP_ColorPicker.BP_ColorPicker_C.ExecuteUbergraph_BP_ColorPicker
struct UBP_ColorPicker_C_ExecuteUbergraph_BP_ColorPicker_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ColorPicker.BP_ColorPicker_C.OnColorPickerClosed__DelegateSignature
struct UBP_ColorPicker_C_OnColorPickerClosed__DelegateSignature_Params
{
	int                                                LstSelectedColorIndex;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ColorPicker.BP_ColorPicker_C.OnColorHovered__DelegateSignature
struct UBP_ColorPicker_C_OnColorHovered__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ColorPicker.BP_ColorPicker_C.OnColorClicked__DelegateSignature
struct UBP_ColorPicker_C_OnColorClicked__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
