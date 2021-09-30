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
//		Name   -> Function BP_PerkButton.BP_PerkButton_C.OnMouseMove_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBP_PerkButton_C::OnMouseMove_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerkButton.BP_PerkButton_C.OnMouseMove_1");

	UBP_PerkButton_C_OnMouseMove_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PerkButton.BP_PerkButton_C.GetbIsEnabled_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_PerkButton_C::GetbIsEnabled_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerkButton.BP_PerkButton_C.GetbIsEnabled_1");

	UBP_PerkButton_C_GetbIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PerkButton.BP_PerkButton_C.Get_CurrentPoints_ColorAndOpacity_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateColor UBP_PerkButton_C::Get_CurrentPoints_ColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerkButton.BP_PerkButton_C.Get_CurrentPoints_ColorAndOpacity_1");

	UBP_PerkButton_C_Get_CurrentPoints_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PerkButton.BP_PerkButton_C.Get_CurrentPoints_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_PerkButton_C::Get_CurrentPoints_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerkButton.BP_PerkButton_C.Get_CurrentPoints_Text_1");

	UBP_PerkButton_C_Get_CurrentPoints_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PerkButton.BP_PerkButton_C.GetColorAndOpacity_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateColor UBP_PerkButton_C::GetColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerkButton.BP_PerkButton_C.GetColorAndOpacity_1");

	UBP_PerkButton_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PerkButton.BP_PerkButton_C.GetToolTipText_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_PerkButton_C::GetToolTipText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerkButton.BP_PerkButton_C.GetToolTipText_1");

	UBP_PerkButton_C_GetToolTipText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PerkButton.BP_PerkButton_C.RefreshWidget
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_PerkButton_C::RefreshWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerkButton.BP_PerkButton_C.RefreshWidget");

	UBP_PerkButton_C_RefreshWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PerkButton.BP_PerkButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_PerkButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerkButton.BP_PerkButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");

	UBP_PerkButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PerkButton.BP_PerkButton_C.EntryHover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_PerkButton_C::EntryHover()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerkButton.BP_PerkButton_C.EntryHover");

	UBP_PerkButton_C_EntryHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PerkButton.BP_PerkButton_C.ExecuteUbergraph_BP_PerkButton
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PerkButton_C::ExecuteUbergraph_BP_PerkButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerkButton.BP_PerkButton_C.ExecuteUbergraph_BP_PerkButton");

	UBP_PerkButton_C_ExecuteUbergraph_BP_PerkButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
