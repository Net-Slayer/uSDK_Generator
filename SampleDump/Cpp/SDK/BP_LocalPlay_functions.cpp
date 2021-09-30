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
//		Name   -> Function BP_LocalPlay.BP_LocalPlay_C.Get_BotSettings_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_LocalPlay_C::Get_BotSettings_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocalPlay.BP_LocalPlay_C.Get_BotSettings_Visibility_1");

	UBP_LocalPlay_C_Get_BotSettings_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LocalPlay.BP_LocalPlay_C.GetPlayerCountText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_LocalPlay_C::GetPlayerCountText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocalPlay.BP_LocalPlay_C.GetPlayerCountText");

	UBP_LocalPlay_C_GetPlayerCountText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LocalPlay.BP_LocalPlay_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_LocalPlay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocalPlay.BP_LocalPlay_C.Construct");

	UBP_LocalPlay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LocalPlay.BP_LocalPlay_C.BndEvt__GameModeComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FText                                       SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LocalPlay_C::BndEvt__GameModeComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocalPlay.BP_LocalPlay_C.BndEvt__GameModeComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	UBP_LocalPlay_C_BndEvt__GameModeComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LocalPlay.BP_LocalPlay_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_173_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_LocalPlay_C::BndEvt__StartButton_K2Node_ComponentBoundEvent_173_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocalPlay.BP_LocalPlay_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_173_OnButtonClickedEvent__DelegateSignature");

	UBP_LocalPlay_C_BndEvt__StartButton_K2Node_ComponentBoundEvent_173_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LocalPlay.BP_LocalPlay_C.ExecuteUbergraph_BP_LocalPlay
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LocalPlay_C::ExecuteUbergraph_BP_LocalPlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocalPlay.BP_LocalPlay_C.ExecuteUbergraph_BP_LocalPlay");

	UBP_LocalPlay_C_ExecuteUbergraph_BP_LocalPlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
