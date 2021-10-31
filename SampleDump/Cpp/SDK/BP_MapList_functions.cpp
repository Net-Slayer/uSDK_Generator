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
//		Name   -> Function BP_MapList.BP_MapList_C.GetSelectedEntry
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_MapEntryLocalPlay_C*                     SelectedEntry                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapList_C::GetSelectedEntry(class UBP_MapEntryLocalPlay_C** SelectedEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapList.BP_MapList_C.GetSelectedEntry");

	UBP_MapList_C_GetSelectedEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SelectedEntry != nullptr)
		*SelectedEntry = params.SelectedEntry;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapList.BP_MapList_C.SelectFirstEntry
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_MapList_C::SelectFirstEntry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapList.BP_MapList_C.SelectFirstEntry");

	UBP_MapList_C_SelectFirstEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapList.BP_MapList_C.OnEntrySelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_MapEntryLocalPlay_C*                     Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapList_C::OnEntrySelected(class UBP_MapEntryLocalPlay_C* Entry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapList.BP_MapList_C.OnEntrySelected");

	UBP_MapList_C_OnEntrySelected_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapList.BP_MapList_C.AddEntry
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     GameModeMapName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UGameModeMetadata*                           GameModeMetadata                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMapMetadata*                                MapMetadata                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapList_C::AddEntry(const struct FString& GameModeMapName, class UGameModeMetadata* GameModeMetadata, class UMapMetadata* MapMetadata)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapList.BP_MapList_C.AddEntry");

	UBP_MapList_C_AddEntry_Params params;
	params.GameModeMapName = GameModeMapName;
	params.GameModeMetadata = GameModeMetadata;
	params.MapMetadata = MapMetadata;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapList.BP_MapList_C.ClearEntries
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_MapList_C::ClearEntries()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapList.BP_MapList_C.ClearEntries");

	UBP_MapList_C_ClearEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
