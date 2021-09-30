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
//		Name   -> Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.Deselect
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_ReusableNavTabButton_C::Deselect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.Deselect");

	UBP_ReusableNavTabButton_C_Deselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.Select
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_ReusableNavTabButton_C::Select()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.Select");

	UBP_ReusableNavTabButton_C_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_ReusableNavTabButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.Construct");

	UBP_ReusableNavTabButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ReusableNavTabButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_ReusableNavTabButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ReusableNavTabButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.PreConstruct");

	UBP_ReusableNavTabButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.ExecuteUbergraph_BP_ReusableNavTabButton
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ReusableNavTabButton_C::ExecuteUbergraph_BP_ReusableNavTabButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.ExecuteUbergraph_BP_ReusableNavTabButton");

	UBP_ReusableNavTabButton_C_ExecuteUbergraph_BP_ReusableNavTabButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.ButtonDeselected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_ReusableNavTabButton_C::ButtonDeselected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.ButtonDeselected__DelegateSignature");

	UBP_ReusableNavTabButton_C_ButtonDeselected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.ButtonSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_ReusableNavTabButton_C::ButtonSelected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReusableNavTabButton.BP_ReusableNavTabButton_C.ButtonSelected__DelegateSignature");

	UBP_ReusableNavTabButton_C_ButtonSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
