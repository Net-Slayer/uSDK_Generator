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
//		Name   -> Function BP_MapVote.BP_MapVote_C.UpdateVoteCount
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapVote_C::UpdateVoteCount(unsigned char Count, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapVote.BP_MapVote_C.UpdateVoteCount");

	UBP_MapVote_C_UpdateVoteCount_Params params;
	params.Count = Count;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapVote.BP_MapVote_C.OnEntrySelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_MapEntry_C*                              Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapVote_C::OnEntrySelected(class UBP_MapEntry_C* Entry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapVote.BP_MapVote_C.OnEntrySelected");

	UBP_MapVote_C_OnEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapVote.BP_MapVote_C.AddEntry
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     GameModeMapName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UGameModeMetadata*                           GameModeMetadata                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMapMetadata*                                MapMetadata                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapVote_C::AddEntry(const struct FString& GameModeMapName, class UGameModeMetadata* GameModeMetadata, class UMapMetadata* MapMetadata)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapVote.BP_MapVote_C.AddEntry");

	UBP_MapVote_C_AddEntry_Params params;
	params.GameModeMapName = GameModeMapName;
	params.GameModeMetadata = GameModeMetadata;
	params.MapMetadata = MapMetadata;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapVote.BP_MapVote_C.ClearEntries
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapVote_C::ClearEntries()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapVote.BP_MapVote_C.ClearEntries");

	UBP_MapVote_C_ClearEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapVote.BP_MapVote_C.Init
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MapVote_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapVote.BP_MapVote_C.Init");

	UBP_MapVote_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapVote.BP_MapVote_C.UpdateVotes
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MapVote_C::UpdateVotes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapVote.BP_MapVote_C.UpdateVotes");

	UBP_MapVote_C_UpdateVotes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapVote.BP_MapVote_C.ExecuteUbergraph_BP_MapVote
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapVote_C::ExecuteUbergraph_BP_MapVote(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapVote.BP_MapVote_C.ExecuteUbergraph_BP_MapVote");

	UBP_MapVote_C_ExecuteUbergraph_BP_MapVote_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapVote.BP_MapVote_C.Voted__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_MapVote_C::Voted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapVote.BP_MapVote_C.Voted__DelegateSignature");

	UBP_MapVote_C_Voted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
