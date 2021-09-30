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
//		Name   -> Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ContextPopupWrapper_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.GetVisibility_1");

	UBP_ContextPopupWrapper_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.OnGetMenuContent_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UBP_ContextPopupWrapper_C::OnGetMenuContent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.OnGetMenuContent_1");

	UBP_ContextPopupWrapper_C_OnGetMenuContent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.Close Menu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_ContextPopupWrapper_C::Close_Menu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.Close Menu");

	UBP_ContextPopupWrapper_C_Close_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.Open Menu
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ContextPopupWrapper_C::Open_Menu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.Open Menu");

	UBP_ContextPopupWrapper_C_Open_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.Construct Context Menu
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TMap<struct FString, struct FText>                 Option_Map                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UBP_ContextPopupWrapper_C*                   Wrapper                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ContextPopupWrapper_C::Construct_Context_Menu(TMap<struct FString, struct FText> Option_Map, class UBP_ContextPopupWrapper_C** Wrapper)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.Construct Context Menu");

	UBP_ContextPopupWrapper_C_Construct_Context_Menu_Params params;
	params.Option_Map = Option_Map;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Wrapper != nullptr)
		*Wrapper = params.Wrapper;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ContextPopupWrapper_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UBP_ContextPopupWrapper_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.ExecuteUbergraph_BP_ContextPopupWrapper
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ContextPopupWrapper_C::ExecuteUbergraph_BP_ContextPopupWrapper(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.ExecuteUbergraph_BP_ContextPopupWrapper");

	UBP_ContextPopupWrapper_C_ExecuteUbergraph_BP_ContextPopupWrapper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.ContextButtonClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Button_Index                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ContextPopupWrapper_C::ContextButtonClicked__DelegateSignature(int Button_Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupWrapper.BP_ContextPopupWrapper_C.ContextButtonClicked__DelegateSignature");

	UBP_ContextPopupWrapper_C_ContextButtonClicked__DelegateSignature_Params params;
	params.Button_Index = Button_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
