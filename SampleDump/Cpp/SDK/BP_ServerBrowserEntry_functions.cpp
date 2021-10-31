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
//		Name   -> Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.SetFavoriteServers
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bAddOrRemove                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ServerBrowserEntry_C::SetFavoriteServers(bool bAddOrRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.SetFavoriteServers");

	UBP_ServerBrowserEntry_C_SetFavoriteServers_Params params;
	params.bAddOrRemove = bAddOrRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.Update
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FServerSearchResult                         Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_ServerBrowserEntry_C::Update(const struct FServerSearchResult& Session)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.Update");

	UBP_ServerBrowserEntry_C_Update_Params params;
	params.Session = Session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetServerBrowser
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_ServerBrowser_C*                         ServerBrowser                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ServerBrowserEntry_C::GetServerBrowser(class UBP_ServerBrowser_C** ServerBrowser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetServerBrowser");

	UBP_ServerBrowserEntry_C_GetServerBrowser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ServerBrowser != nullptr)
		*ServerBrowser = params.ServerBrowser;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.Select
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               isSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ServerBrowserEntry_C::Select(bool isSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.Select");

	UBP_ServerBrowserEntry_C_Select_Params params;
	params.isSelected = isSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_ServerBrowserEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.Construct");

	UBP_ServerBrowserEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_386_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ServerBrowserEntry_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_386_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_386_OnButtonClickedEvent__DelegateSignature");

	UBP_ServerBrowserEntry_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_386_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.BndEvt__FavoriteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ServerBrowserEntry_C::BndEvt__FavoriteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.BndEvt__FavoriteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_ServerBrowserEntry_C_BndEvt__FavoriteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.ExecuteUbergraph_BP_ServerBrowserEntry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ServerBrowserEntry_C::ExecuteUbergraph_BP_ServerBrowserEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.ExecuteUbergraph_BP_ServerBrowserEntry");

	UBP_ServerBrowserEntry_C_ExecuteUbergraph_BP_ServerBrowserEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
