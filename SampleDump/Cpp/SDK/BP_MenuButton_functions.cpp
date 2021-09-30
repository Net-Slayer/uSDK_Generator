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
//		Name   -> Function BP_MenuButton.BP_MenuButton_C.Get_TextBlock_15_Text_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_MenuButton_C::Get_TextBlock_15_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MenuButton.BP_MenuButton_C.Get_TextBlock_15_Text_1");

	UBP_MenuButton_C_Get_TextBlock_15_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MenuButton.BP_MenuButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MenuButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MenuButton.BP_MenuButton_C.Construct");

	UBP_MenuButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MenuButton.BP_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MenuButton.BP_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature");

	UBP_MenuButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MenuButton.BP_MenuButton_C.ApplyStyle
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MenuButton_C::ApplyStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MenuButton.BP_MenuButton_C.ApplyStyle");

	UBP_MenuButton_C_ApplyStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MenuButton.BP_MenuButton_C.ExecuteUbergraph_BP_MenuButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MenuButton_C::ExecuteUbergraph_BP_MenuButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MenuButton.BP_MenuButton_C.ExecuteUbergraph_BP_MenuButton");

	UBP_MenuButton_C_ExecuteUbergraph_BP_MenuButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MenuButton.BP_MenuButton_C.OnSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_MenuButton_C::OnSelected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MenuButton.BP_MenuButton_C.OnSelected__DelegateSignature");

	UBP_MenuButton_C_OnSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
