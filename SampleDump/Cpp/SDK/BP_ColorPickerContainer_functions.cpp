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
//		Name   -> Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.SetOriginCorner
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Corner                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ColorPickerContainer_C::SetOriginCorner(int Corner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.SetOriginCorner");

	UBP_ColorPickerContainer_C_SetOriginCorner_Params params;
	params.Corner = Corner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.GetColorPickerApproximateWidth
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ColorPickerContainer_C::GetColorPickerApproximateWidth(float* Width)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.GetColorPickerApproximateWidth");

	UBP_ColorPickerContainer_C_GetColorPickerApproximateWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.GetColorPickerApproximateHeight
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ColorPickerContainer_C::GetColorPickerApproximateHeight(float* Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.GetColorPickerApproximateHeight");

	UBP_ColorPickerContainer_C_GetColorPickerApproximateHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.SetColors
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UClass*>                              Colors                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UBP_ColorPickerContainer_C::SetColors(TArray<class UClass*>* Colors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.SetColors");

	UBP_ColorPickerContainer_C_SetColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.Show
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ColorPickerContainer_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.Show");

	UBP_ColorPickerContainer_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.ExecuteUbergraph_BP_ColorPickerContainer
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ColorPickerContainer_C::ExecuteUbergraph_BP_ColorPickerContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPickerContainer.BP_ColorPickerContainer_C.ExecuteUbergraph_BP_ColorPickerContainer");

	UBP_ColorPickerContainer_C_ExecuteUbergraph_BP_ColorPickerContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
