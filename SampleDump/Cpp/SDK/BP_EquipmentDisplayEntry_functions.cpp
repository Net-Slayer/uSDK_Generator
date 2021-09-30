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
//		Name   -> Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Get_SlotNumber_Text
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_EquipmentDisplayEntry_C::Get_SlotNumber_Text()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Get_SlotNumber_Text");

	UBP_EquipmentDisplayEntry_C_Get_SlotNumber_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.GetColorAndOpacity_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateColor UBP_EquipmentDisplayEntry_C::GetColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.GetColorAndOpacity_1");

	UBP_EquipmentDisplayEntry_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.GetEntryTypeAndName
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Name                                                       (Parm, OutParm)
void UBP_EquipmentDisplayEntry_C::GetEntryTypeAndName(int* Type, struct FText* Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.GetEntryTypeAndName");

	UBP_EquipmentDisplayEntry_C_GetEntryTypeAndName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
	if (Name != nullptr)
		*Name = params.Name;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Get_EquipmentName_Text
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_EquipmentDisplayEntry_C::Get_EquipmentName_Text()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Get_EquipmentName_Text");

	UBP_EquipmentDisplayEntry_C_Get_EquipmentName_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_EquipmentDisplayEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Tick");

	UBP_EquipmentDisplayEntry_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_EquipmentDisplayEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Construct");

	UBP_EquipmentDisplayEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Update Prompt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_EquipmentDisplayEntry_C::Update_Prompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Update Prompt");

	UBP_EquipmentDisplayEntry_C_Update_Prompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.ExecuteUbergraph_BP_EquipmentDisplayEntry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_EquipmentDisplayEntry_C::ExecuteUbergraph_BP_EquipmentDisplayEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.ExecuteUbergraph_BP_EquipmentDisplayEntry");

	UBP_EquipmentDisplayEntry_C_ExecuteUbergraph_BP_EquipmentDisplayEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
