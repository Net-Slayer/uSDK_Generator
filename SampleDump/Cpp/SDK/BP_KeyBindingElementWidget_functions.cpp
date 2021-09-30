﻿// Name: Mordhau, Version: 4_25_hotfix

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
//		Name   -> Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.EndEditBinding
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_KeyBindingElementWidget_C::EndEditBinding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.EndEditBinding");

	UBP_KeyBindingElementWidget_C_EndEditBinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.GetActionNameText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_KeyBindingElementWidget_C::GetActionNameText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.GetActionNameText");

	UBP_KeyBindingElementWidget_C_GetActionNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.GetCustomBinding
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsPrimary                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FKey                                        Key                                                        (Parm, OutParm, HasGetValueTypeHash)
void UBP_KeyBindingElementWidget_C::GetCustomBinding(bool bIsPrimary, struct FKey* Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.GetCustomBinding");

	UBP_KeyBindingElementWidget_C_GetCustomBinding_Params params;
	params.bIsPrimary = bIsPrimary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.SetCustomBinding
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		bool                                               bIsPrimary                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_KeyBindingElementWidget_C::SetCustomBinding(const struct FKey& Key, bool bIsPrimary)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.SetCustomBinding");

	UBP_KeyBindingElementWidget_C_SetCustomBinding_Params params;
	params.Key = Key;
	params.bIsPrimary = bIsPrimary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.GetKeyText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		bool                                               bIsEditingBinding                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FText                                       KeyText                                                    (Parm, OutParm)
void UBP_KeyBindingElementWidget_C::GetKeyText(const struct FKey& Key, bool bIsEditingBinding, struct FText* KeyText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.GetKeyText");

	UBP_KeyBindingElementWidget_C_GetKeyText_Params params;
	params.Key = Key;
	params.bIsEditingBinding = bIsEditingBinding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (KeyText != nullptr)
		*KeyText = params.KeyText;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.GetSecondaryKeyText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_KeyBindingElementWidget_C::GetSecondaryKeyText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.GetSecondaryKeyText");

	UBP_KeyBindingElementWidget_C_GetSecondaryKeyText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.GetPrimaryKeyText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_KeyBindingElementWidget_C::GetPrimaryKeyText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.GetPrimaryKeyText");

	UBP_KeyBindingElementWidget_C_GetPrimaryKeyText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.AddCustomBinding
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBP_KeyBindingElementWidget_C::AddCustomBinding(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.AddCustomBinding");

	UBP_KeyBindingElementWidget_C_AddCustomBinding_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.StartEditBinding
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsPrimary                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_KeyBindingElementWidget_C::StartEditBinding(bool bIsPrimary)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.StartEditBinding");

	UBP_KeyBindingElementWidget_C_StartEditBinding_Params params;
	params.bIsPrimary = bIsPrimary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_KeyBindingElementWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.Construct");

	UBP_KeyBindingElementWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_442_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_KeyBindingElementWidget_C::BndEvt__Button_4_K2Node_ComponentBoundEvent_442_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_442_OnButtonClickedEvent__DelegateSignature");

	UBP_KeyBindingElementWidget_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_442_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_460_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_KeyBindingElementWidget_C::BndEvt__Button_5_K2Node_ComponentBoundEvent_460_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_460_OnButtonClickedEvent__DelegateSignature");

	UBP_KeyBindingElementWidget_C_BndEvt__Button_5_K2Node_ComponentBoundEvent_460_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.ExecuteUbergraph_BP_KeyBindingElementWidget
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_KeyBindingElementWidget_C::ExecuteUbergraph_BP_KeyBindingElementWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C.ExecuteUbergraph_BP_KeyBindingElementWidget");

	UBP_KeyBindingElementWidget_C_ExecuteUbergraph_BP_KeyBindingElementWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
