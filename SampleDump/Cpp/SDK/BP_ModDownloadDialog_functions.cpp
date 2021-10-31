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
//		Name   -> Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.CancelAllModsRequiredDownloads
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ModDownloadDialog_C::CancelAllModsRequiredDownloads()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.CancelAllModsRequiredDownloads");

	UBP_ModDownloadDialog_C_CancelAllModsRequiredDownloads_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.UpdateCurrentDownloadProgress
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ModDownloadDialog_C::UpdateCurrentDownloadProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.UpdateCurrentDownloadProgress");

	UBP_ModDownloadDialog_C_UpdateCurrentDownloadProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.UpdateCurrentlyInstalledMods
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ModDownloadDialog_C::UpdateCurrentlyInstalledMods()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.UpdateCurrentlyInstalledMods");

	UBP_ModDownloadDialog_C_UpdateCurrentlyInstalledMods_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.SetButtonText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ButtonText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_ModDownloadDialog_C::SetButtonText(const struct FText& ButtonText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.SetButtonText");

	UBP_ModDownloadDialog_C_SetButtonText_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.SetTitleText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       TitleText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_ModDownloadDialog_C::SetTitleText(const struct FText& TitleText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.SetTitleText");

	UBP_ModDownloadDialog_C_SetTitleText_Params params;
	params.TitleText = TitleText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnFailure_2BBA97D647185ABC0293E9A9C5E0925A
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ResponseCode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FModInfo                                    Mod                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_ModDownloadDialog_C::OnFailure_2BBA97D647185ABC0293E9A9C5E0925A(int ResponseCode, const struct FModInfo& Mod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnFailure_2BBA97D647185ABC0293E9A9C5E0925A");

	UBP_ModDownloadDialog_C_OnFailure_2BBA97D647185ABC0293E9A9C5E0925A_Params params;
	params.ResponseCode = ResponseCode;
	params.Mod = Mod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnSuccess_2BBA97D647185ABC0293E9A9C5E0925A
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ResponseCode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FModInfo                                    Mod                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_ModDownloadDialog_C::OnSuccess_2BBA97D647185ABC0293E9A9C5E0925A(int ResponseCode, const struct FModInfo& Mod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnSuccess_2BBA97D647185ABC0293E9A9C5E0925A");

	UBP_ModDownloadDialog_C_OnSuccess_2BBA97D647185ABC0293E9A9C5E0925A_Params params;
	params.ResponseCode = ResponseCode;
	params.Mod = Mod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnFailure_F325FFB4489130F65283CC894D428C76
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ResponseCode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bModsAreUpdated                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ModDownloadDialog_C::OnFailure_F325FFB4489130F65283CC894D428C76(int ResponseCode, bool bModsAreUpdated)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnFailure_F325FFB4489130F65283CC894D428C76");

	UBP_ModDownloadDialog_C_OnFailure_F325FFB4489130F65283CC894D428C76_Params params;
	params.ResponseCode = ResponseCode;
	params.bModsAreUpdated = bModsAreUpdated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnSuccess_F325FFB4489130F65283CC894D428C76
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ResponseCode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bModsAreUpdated                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ModDownloadDialog_C::OnSuccess_F325FFB4489130F65283CC894D428C76(int ResponseCode, bool bModsAreUpdated)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnSuccess_F325FFB4489130F65283CC894D428C76");

	UBP_ModDownloadDialog_C_OnSuccess_F325FFB4489130F65283CC894D428C76_Params params;
	params.ResponseCode = ResponseCode;
	params.bModsAreUpdated = bModsAreUpdated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ModDownloadDialog_C::BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature");

	UBP_ModDownloadDialog_C_BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Show
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UBP_ModDownloadDialog_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Show");

	UBP_ModDownloadDialog_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Hide
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UBP_ModDownloadDialog_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Hide");

	UBP_ModDownloadDialog_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ModDownloadDialog_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Tick");

	UBP_ModDownloadDialog_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.ExecuteUbergraph_BP_ModDownloadDialog
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ModDownloadDialog_C::ExecuteUbergraph_BP_ModDownloadDialog(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.ExecuteUbergraph_BP_ModDownloadDialog");

	UBP_ModDownloadDialog_C_ExecuteUbergraph_BP_ModDownloadDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadFailed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_ModDownloadDialog_C::DownloadFailed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadFailed__DelegateSignature");

	UBP_ModDownloadDialog_C_DownloadFailed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadCanceled__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_ModDownloadDialog_C::DownloadCanceled__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadCanceled__DelegateSignature");

	UBP_ModDownloadDialog_C_DownloadCanceled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadCompleted__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_ModDownloadDialog_C::DownloadCompleted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadCompleted__DelegateSignature");

	UBP_ModDownloadDialog_C_DownloadCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
