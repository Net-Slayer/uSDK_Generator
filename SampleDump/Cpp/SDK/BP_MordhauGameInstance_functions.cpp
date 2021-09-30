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
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.GetJoiningText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsFull                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FText                                       Text                                                       (Parm, OutParm)
void UBP_MordhauGameInstance_C::GetJoiningText(bool bIsFull, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.GetJoiningText");

	UBP_MordhauGameInstance_C_GetJoiningText_Params params;
	params.bIsFull = bIsFull;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.GetJoiningTextOld
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FServerSearchResult                         Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Text                                                       (Parm, OutParm)
void UBP_MordhauGameInstance_C::GetJoiningTextOld(const struct FServerSearchResult& Session, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.GetJoiningTextOld");

	UBP_MordhauGameInstance_C_GetJoiningTextOld_Params params;
	params.Session = Session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFailure_EC1BED794FBBC103AFC74FAD71124461
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MordhauGameInstance_C::OnFailure_EC1BED794FBBC103AFC74FAD71124461()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFailure_EC1BED794FBBC103AFC74FAD71124461");

	UBP_MordhauGameInstance_C_OnFailure_EC1BED794FBBC103AFC74FAD71124461_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnSuccess_EC1BED794FBBC103AFC74FAD71124461
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MordhauGameInstance_C::OnSuccess_EC1BED794FBBC103AFC74FAD71124461()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnSuccess_EC1BED794FBBC103AFC74FAD71124461");

	UBP_MordhauGameInstance_C_OnSuccess_EC1BED794FBBC103AFC74FAD71124461_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFailure_E564B5624B7FDB47DBB2E08126C636D7
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MordhauGameInstance_C::OnFailure_E564B5624B7FDB47DBB2E08126C636D7()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFailure_E564B5624B7FDB47DBB2E08126C636D7");

	UBP_MordhauGameInstance_C_OnFailure_E564B5624B7FDB47DBB2E08126C636D7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnSuccess_E564B5624B7FDB47DBB2E08126C636D7
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MordhauGameInstance_C::OnSuccess_E564B5624B7FDB47DBB2E08126C636D7()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnSuccess_E564B5624B7FDB47DBB2E08126C636D7");

	UBP_MordhauGameInstance_C_OnSuccess_E564B5624B7FDB47DBB2E08126C636D7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFailure_4643A5C64229EB24E86C05B71625BDC1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MordhauGameInstance_C::OnFailure_4643A5C64229EB24E86C05B71625BDC1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFailure_4643A5C64229EB24E86C05B71625BDC1");

	UBP_MordhauGameInstance_C_OnFailure_4643A5C64229EB24E86C05B71625BDC1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFull_4643A5C64229EB24E86C05B71625BDC1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MordhauGameInstance_C::OnFull_4643A5C64229EB24E86C05B71625BDC1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFull_4643A5C64229EB24E86C05B71625BDC1");

	UBP_MordhauGameInstance_C_OnFull_4643A5C64229EB24E86C05B71625BDC1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnSuccess_4643A5C64229EB24E86C05B71625BDC1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MordhauGameInstance_C::OnSuccess_4643A5C64229EB24E86C05B71625BDC1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnSuccess_4643A5C64229EB24E86C05B71625BDC1");

	UBP_MordhauGameInstance_C_OnSuccess_4643A5C64229EB24E86C05B71625BDC1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ShowPasswordDialog
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FServerSearchResult                         SearchResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MordhauGameInstance_C::ShowPasswordDialog(const struct FServerSearchResult& SearchResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ShowPasswordDialog");

	UBP_MordhauGameInstance_C_ShowPasswordDialog_Params params;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ShowNetworkErrorDialog
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UBP_MordhauGameInstance_C::ShowNetworkErrorDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ShowNetworkErrorDialog");

	UBP_MordhauGameInstance_C_ShowNetworkErrorDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnErrorOkClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MordhauGameInstance_C::OnErrorOkClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnErrorOkClicked");

	UBP_MordhauGameInstance_C_OnErrorOkClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.CreatePasswordDialog
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MordhauGameInstance_C::CreatePasswordDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.CreatePasswordDialog");

	UBP_MordhauGameInstance_C_CreatePasswordDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.CreateNetworkErrorDialog
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MordhauGameInstance_C::CreateNetworkErrorDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.CreateNetworkErrorDialog");

	UBP_MordhauGameInstance_C_CreateNetworkErrorDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.CreateJoiningDialog
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MordhauGameInstance_C::CreateJoiningDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.CreateJoiningDialog");

	UBP_MordhauGameInstance_C_CreateJoiningDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ShowJoiningDialog
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FServerSearchResult                         SearchResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MordhauGameInstance_C::ShowJoiningDialog(const struct FServerSearchResult& SearchResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ShowJoiningDialog");

	UBP_MordhauGameInstance_C_ShowJoiningDialog_Params params;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnJoiningCancelClick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MordhauGameInstance_C::OnJoiningCancelClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnJoiningCancelClick");

	UBP_MordhauGameInstance_C_OnJoiningCancelClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnPasswordTextEntered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		TEnumAsByte<SlateCore_ETextCommit>                 Commit_Method                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauGameInstance_C::OnPasswordTextEntered(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> Commit_Method)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnPasswordTextEntered");

	UBP_MordhauGameInstance_C_OnPasswordTextEntered_Params params;
	params.Text = Text;
	params.Commit_Method = Commit_Method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.Join
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MordhauGameInstance_C::Join()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.Join");

	UBP_MordhauGameInstance_C_Join_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.JoinSessionSearchResult
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FServerSearchResult                         SearchResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MordhauGameInstance_C::JoinSessionSearchResult(const struct FServerSearchResult& SearchResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.JoinSessionSearchResult");

	UBP_MordhauGameInstance_C_JoinSessionSearchResult_Params params;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnPasswordCancelClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MordhauGameInstance_C::OnPasswordCancelClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnPasswordCancelClicked");

	UBP_MordhauGameInstance_C_OnPasswordCancelClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnPasswordOKClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MordhauGameInstance_C::OnPasswordOKClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnPasswordOKClicked");

	UBP_MordhauGameInstance_C_OnPasswordOKClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ExecuteUbergraph_BP_MordhauGameInstance
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauGameInstance_C::ExecuteUbergraph_BP_MordhauGameInstance(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ExecuteUbergraph_BP_MordhauGameInstance");

	UBP_MordhauGameInstance_C_ExecuteUbergraph_BP_MordhauGameInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
