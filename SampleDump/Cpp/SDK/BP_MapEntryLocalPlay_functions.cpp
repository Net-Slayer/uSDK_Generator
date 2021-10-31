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
//		Name   -> Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.Update
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     GameModeMapName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UGameModeMetadata*                           GameModeMetadata                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMapMetadata*                                MapMetadata                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapEntryLocalPlay_C::Update(const struct FString& GameModeMapName, class UGameModeMetadata* GameModeMetadata, class UMapMetadata* MapMetadata)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.Update");

	UBP_MapEntryLocalPlay_C_Update_Params params;
	params.GameModeMapName = GameModeMapName;
	params.GameModeMetadata = GameModeMetadata;
	params.MapMetadata = MapMetadata;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.SetThumbnail
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  Thumbnail                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapEntryLocalPlay_C::SetThumbnail(class UTexture2D* Thumbnail)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.SetThumbnail");

	UBP_MapEntryLocalPlay_C_SetThumbnail_Params params;
	params.Thumbnail = Thumbnail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.SetMapName
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_MapEntryLocalPlay_C::SetMapName(const struct FText& MapName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.SetMapName");

	UBP_MapEntryLocalPlay_C_SetMapName_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.Deselect
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_MapEntryLocalPlay_C::Deselect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.Deselect");

	UBP_MapEntryLocalPlay_C_Deselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.Select
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_MapEntryLocalPlay_C::Select()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.Select");

	UBP_MapEntryLocalPlay_C_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MapEntryLocalPlay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.Construct");

	UBP_MapEntryLocalPlay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MapEntryLocalPlay_C::BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature");

	UBP_MapEntryLocalPlay_C_BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MapEntryLocalPlay_C::BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UBP_MapEntryLocalPlay_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MapEntryLocalPlay_C::BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UBP_MapEntryLocalPlay_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.ExecuteUbergraph_BP_MapEntryLocalPlay
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapEntryLocalPlay_C::ExecuteUbergraph_BP_MapEntryLocalPlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.ExecuteUbergraph_BP_MapEntryLocalPlay");

	UBP_MapEntryLocalPlay_C_ExecuteUbergraph_BP_MapEntryLocalPlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.Selected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_MapEntryLocalPlay_C*                     Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MapEntryLocalPlay_C::Selected__DelegateSignature(class UBP_MapEntryLocalPlay_C* Entry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.Selected__DelegateSignature");

	UBP_MapEntryLocalPlay_C_Selected__DelegateSignature_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
