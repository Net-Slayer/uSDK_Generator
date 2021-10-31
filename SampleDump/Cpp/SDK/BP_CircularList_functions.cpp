// Name: Mordhau, Version: Patch23

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
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CircularList.BP_CircularList_C.Initialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                StartValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CircularList_C::Initialize(int StartValue, int MaxValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CircularList.BP_CircularList_C.Initialize");

	UBP_CircularList_C_Initialize_Params params;
	params.StartValue = StartValue;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CircularList.BP_CircularList_C.BndEvt__Next_K2Node_ComponentBoundEvent_125_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_CircularList_C::BndEvt__Next_K2Node_ComponentBoundEvent_125_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CircularList.BP_CircularList_C.BndEvt__Next_K2Node_ComponentBoundEvent_125_OnButtonClickedEvent__DelegateSignature");

	UBP_CircularList_C_BndEvt__Next_K2Node_ComponentBoundEvent_125_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CircularList.BP_CircularList_C.BndEvt__Prev_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_CircularList_C::BndEvt__Prev_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CircularList.BP_CircularList_C.BndEvt__Prev_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature");

	UBP_CircularList_C_BndEvt__Prev_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CircularList.BP_CircularList_C.ExecuteUbergraph_BP_CircularList
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CircularList_C::ExecuteUbergraph_BP_CircularList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CircularList.BP_CircularList_C.ExecuteUbergraph_BP_CircularList");

	UBP_CircularList_C_ExecuteUbergraph_BP_CircularList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CircularList.BP_CircularList_C.OnValueChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CircularList_C::OnValueChanged__DelegateSignature(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CircularList.BP_CircularList_C.OnValueChanged__DelegateSignature");

	UBP_CircularList_C_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
