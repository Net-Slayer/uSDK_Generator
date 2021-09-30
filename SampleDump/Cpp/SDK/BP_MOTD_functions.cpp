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
//		Name   -> Function BP_MOTD.BP_MOTD_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBP_MOTD_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MOTD.BP_MOTD_C.OnKeyDown");

	UBP_MOTD_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MOTD.BP_MOTD_C.Get_TextBlock_1_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_MOTD_C::Get_TextBlock_1_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MOTD.BP_MOTD_C.Get_TextBlock_1_Text_1");

	UBP_MOTD_C_Get_TextBlock_1_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MOTD.BP_MOTD_C.Hide
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MOTD_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MOTD.BP_MOTD_C.Hide");

	UBP_MOTD_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MOTD.BP_MOTD_C.Show
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MOTD_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MOTD.BP_MOTD_C.Show");

	UBP_MOTD_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MOTD.BP_MOTD_C.OnHideAnimFinish
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MOTD_C::OnHideAnimFinish()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MOTD.BP_MOTD_C.OnHideAnimFinish");

	UBP_MOTD_C_OnHideAnimFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MOTD.BP_MOTD_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MOTD_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MOTD.BP_MOTD_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UBP_MOTD_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MOTD.BP_MOTD_C.ExecuteUbergraph_BP_MOTD
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MOTD_C::ExecuteUbergraph_BP_MOTD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MOTD.BP_MOTD_C.ExecuteUbergraph_BP_MOTD");

	UBP_MOTD_C_ExecuteUbergraph_BP_MOTD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
