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
//		Name   -> Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.CloseMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_ContextPopupWrapper_Interface_C::CloseMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.CloseMenu");

	UBP_ContextPopupWrapper_Interface_C_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ContextPopupWrapper_Interface_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.GetVisibility_1");

	UBP_ContextPopupWrapper_Interface_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.ConstructContextMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TMap<struct FString, struct FText>                 Options                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_ContextPopupWrapper_Interface_C::ConstructContextMenu(TMap<struct FString, struct FText> Options)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.ConstructContextMenu");

	UBP_ContextPopupWrapper_Interface_C_ConstructContextMenu_Params params;
	params.Options = Options;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.OpenMenu
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TMap<struct FString, struct FText>                 Options                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_ContextPopupWrapper_Interface_C::OpenMenu(TMap<struct FString, struct FText> Options)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.OpenMenu");

	UBP_ContextPopupWrapper_Interface_C_OpenMenu_Params params;
	params.Options = Options;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.OnGetMenuContent_1
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UBP_ContextPopupWrapper_Interface_C::OnGetMenuContent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.OnGetMenuContent_1");

	UBP_ContextPopupWrapper_Interface_C_OnGetMenuContent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ContextPopupWrapper_Interface_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UBP_ContextPopupWrapper_Interface_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.ExecuteUbergraph_BP_ContextPopupWrapper_Interface
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ContextPopupWrapper_Interface_C::ExecuteUbergraph_BP_ContextPopupWrapper_Interface(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper_Interface.BP_ContextPopupWrapper_Interface_C.ExecuteUbergraph_BP_ContextPopupWrapper_Interface");

	UBP_ContextPopupWrapper_Interface_C_ExecuteUbergraph_BP_ContextPopupWrapper_Interface_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
