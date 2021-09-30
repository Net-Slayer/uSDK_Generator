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
//		Name   -> Function BP_CustomizationColorPicker.BP_CustomizationColorPicker_C.SetColorsAndIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UClass*>                              Colors                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CustomizationColorPicker_C::SetColorsAndIndex(TArray<class UClass*>* Colors, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationColorPicker.BP_CustomizationColorPicker_C.SetColorsAndIndex");

	UBP_CustomizationColorPicker_C_SetColorsAndIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CustomizationColorPicker.BP_CustomizationColorPicker_C.BndEvt__BP_MordhauColorPicker_K2Node_ComponentBoundEvent_2611_OnColorHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CustomizationColorPicker_C::BndEvt__BP_MordhauColorPicker_K2Node_ComponentBoundEvent_2611_OnColorHovered__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationColorPicker.BP_CustomizationColorPicker_C.BndEvt__BP_MordhauColorPicker_K2Node_ComponentBoundEvent_2611_OnColorHovered__DelegateSignature");

	UBP_CustomizationColorPicker_C_BndEvt__BP_MordhauColorPicker_K2Node_ComponentBoundEvent_2611_OnColorHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CustomizationColorPicker.BP_CustomizationColorPicker_C.BndEvt__BP_MordhauColorPicker_K2Node_ComponentBoundEvent_4366_OnColorClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CustomizationColorPicker_C::BndEvt__BP_MordhauColorPicker_K2Node_ComponentBoundEvent_4366_OnColorClicked__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationColorPicker.BP_CustomizationColorPicker_C.BndEvt__BP_MordhauColorPicker_K2Node_ComponentBoundEvent_4366_OnColorClicked__DelegateSignature");

	UBP_CustomizationColorPicker_C_BndEvt__BP_MordhauColorPicker_K2Node_ComponentBoundEvent_4366_OnColorClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CustomizationColorPicker.BP_CustomizationColorPicker_C.BndEvt__BP_MordhauColorPicker_K2Node_ComponentBoundEvent_4374_OnColorPickerClosed__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                LstSelectedColorIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CustomizationColorPicker_C::BndEvt__BP_MordhauColorPicker_K2Node_ComponentBoundEvent_4374_OnColorPickerClosed__DelegateSignature(int LstSelectedColorIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationColorPicker.BP_CustomizationColorPicker_C.BndEvt__BP_MordhauColorPicker_K2Node_ComponentBoundEvent_4374_OnColorPickerClosed__DelegateSignature");

	UBP_CustomizationColorPicker_C_BndEvt__BP_MordhauColorPicker_K2Node_ComponentBoundEvent_4374_OnColorPickerClosed__DelegateSignature_Params params;
	params.LstSelectedColorIndex = LstSelectedColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CustomizationColorPicker.BP_CustomizationColorPicker_C.ExecuteUbergraph_BP_CustomizationColorPicker
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CustomizationColorPicker_C::ExecuteUbergraph_BP_CustomizationColorPicker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationColorPicker.BP_CustomizationColorPicker_C.ExecuteUbergraph_BP_CustomizationColorPicker");

	UBP_CustomizationColorPicker_C_ExecuteUbergraph_BP_CustomizationColorPicker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CustomizationColorPicker.BP_CustomizationColorPicker_C.OnClosed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CustomizationColorPicker_C::OnClosed__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationColorPicker.BP_CustomizationColorPicker_C.OnClosed__DelegateSignature");

	UBP_CustomizationColorPicker_C_OnClosed__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CustomizationColorPicker.BP_CustomizationColorPicker_C.OnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CustomizationColorPicker_C::OnHovered__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationColorPicker.BP_CustomizationColorPicker_C.OnHovered__DelegateSignature");

	UBP_CustomizationColorPicker_C_OnHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CustomizationColorPicker.BP_CustomizationColorPicker_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ColorIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CustomizationColorPicker_C::OnClicked__DelegateSignature(int ColorIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationColorPicker.BP_CustomizationColorPicker_C.OnClicked__DelegateSignature");

	UBP_CustomizationColorPicker_C_OnClicked__DelegateSignature_Params params;
	params.ColorIndex = ColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
