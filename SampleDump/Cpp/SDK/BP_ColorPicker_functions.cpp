// Name: Mordhau, Version: 4_25_hotfix

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ColorPicker.BP_ColorPicker_C.CloseColorPicker
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ColorPicker_C::CloseColorPicker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.CloseColorPicker");

	UBP_ColorPicker_C_CloseColorPicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ColorPicker.BP_ColorPicker_C.SetColorsAndIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UClass*>                              Colors                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ColorPicker_C::SetColorsAndIndex(TArray<class UClass*>* Colors, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.SetColorsAndIndex");

	UBP_ColorPicker_C_SetColorsAndIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ColorPicker.BP_ColorPicker_C.GetSelectedColors
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UClass*>                              Colors                                                     (Parm, OutParm, HasGetValueTypeHash)
void UBP_ColorPicker_C::GetSelectedColors(TArray<class UClass*>* Colors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.GetSelectedColors");

	UBP_ColorPicker_C_GetSelectedColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ColorPicker.BP_ColorPicker_C.SetIndex
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ColorPicker_C::SetIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.SetIndex");

	UBP_ColorPicker_C_SetIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ColorPicker.BP_ColorPicker_C.GetSelectedIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ColorPicker_C::GetSelectedIndex(int* Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.GetSelectedIndex");

	UBP_ColorPicker_C_GetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ColorPicker.BP_ColorPicker_C.SetColors
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UClass*>                              Colors                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UBP_ColorPicker_C::SetColors(TArray<class UClass*>* Colors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.SetColors");

	UBP_ColorPicker_C_SetColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ColorPicker.BP_ColorPicker_C.OnClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ColorIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ColorPicker_C::OnClicked(int ColorIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.OnClicked");

	UBP_ColorPicker_C_OnClicked_Params params;
	params.ColorIndex = ColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ColorPicker.BP_ColorPicker_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_10201_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ColorPicker_C::BndEvt__ImageButton_K2Node_ComponentBoundEvent_10201_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_10201_OnButtonClickedEvent__DelegateSignature");

	UBP_ColorPicker_C_BndEvt__ImageButton_K2Node_ComponentBoundEvent_10201_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ColorPicker.BP_ColorPicker_C.OnHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ColorPicker_C::OnHovered(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.OnHovered");

	UBP_ColorPicker_C_OnHovered_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ColorPicker.BP_ColorPicker_C.UpdatePreviewColor
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ColorPicker_C::UpdatePreviewColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.UpdatePreviewColor");

	UBP_ColorPicker_C_UpdatePreviewColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ColorPicker.BP_ColorPicker_C.OnColsed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ColorPicker_C::OnColsed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.OnColsed");

	UBP_ColorPicker_C_OnColsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ColorPicker.BP_ColorPicker_C.ExecuteUbergraph_BP_ColorPicker
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ColorPicker_C::ExecuteUbergraph_BP_ColorPicker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.ExecuteUbergraph_BP_ColorPicker");

	UBP_ColorPicker_C_ExecuteUbergraph_BP_ColorPicker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ColorPicker.BP_ColorPicker_C.OnColorPickerClosed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                LstSelectedColorIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ColorPicker_C::OnColorPickerClosed__DelegateSignature(int LstSelectedColorIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.OnColorPickerClosed__DelegateSignature");

	UBP_ColorPicker_C_OnColorPickerClosed__DelegateSignature_Params params;
	params.LstSelectedColorIndex = LstSelectedColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ColorPicker.BP_ColorPicker_C.OnColorHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ColorPicker_C::OnColorHovered__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.OnColorHovered__DelegateSignature");

	UBP_ColorPicker_C_OnColorHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ColorPicker.BP_ColorPicker_C.OnColorClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ColorPicker_C::OnColorClicked__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPicker.BP_ColorPicker_C.OnColorClicked__DelegateSignature");

	UBP_ColorPicker_C_OnColorClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
