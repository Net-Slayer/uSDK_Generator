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
//		Name   -> Function BP_EmoteMenu.BP_EmoteMenu_C.DoEmote
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_EmoteMenu_C::DoEmote(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EmoteMenu.BP_EmoteMenu_C.DoEmote");

	UBP_EmoteMenu_C_DoEmote_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EmoteMenu.BP_EmoteMenu_C.OptionChosen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Choice                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_EmoteMenu_C::OptionChosen(int Choice)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EmoteMenu.BP_EmoteMenu_C.OptionChosen");

	UBP_EmoteMenu_C_OptionChosen_Params params;
	params.Choice = Choice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EmoteMenu.BP_EmoteMenu_C.Show
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_EmoteMenu_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EmoteMenu.BP_EmoteMenu_C.Show");

	UBP_EmoteMenu_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EmoteMenu.BP_EmoteMenu_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_EmoteMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EmoteMenu.BP_EmoteMenu_C.Tick");

	UBP_EmoteMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EmoteMenu.BP_EmoteMenu_C.RebuildEmoteList
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_EmoteMenu_C::RebuildEmoteList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EmoteMenu.BP_EmoteMenu_C.RebuildEmoteList");

	UBP_EmoteMenu_C_RebuildEmoteList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EmoteMenu.BP_EmoteMenu_C.ExecuteUbergraph_BP_EmoteMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_EmoteMenu_C::ExecuteUbergraph_BP_EmoteMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EmoteMenu.BP_EmoteMenu_C.ExecuteUbergraph_BP_EmoteMenu");

	UBP_EmoteMenu_C_ExecuteUbergraph_BP_EmoteMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
