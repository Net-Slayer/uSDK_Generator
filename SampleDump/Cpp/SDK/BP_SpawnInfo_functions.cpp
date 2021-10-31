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
//		Name   -> Function BP_SpawnInfo.BP_SpawnInfo_C.Get_SpawnInfoText_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_SpawnInfo_C::Get_SpawnInfoText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnInfo.BP_SpawnInfo_C.Get_SpawnInfoText_Text_1");

	UBP_SpawnInfo_C_Get_SpawnInfoText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnInfo.BP_SpawnInfo_C.GetVisibility_2
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_SpawnInfo_C::GetVisibility_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnInfo.BP_SpawnInfo_C.GetVisibility_2");

	UBP_SpawnInfo_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnInfo.BP_SpawnInfo_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_SpawnInfo_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnInfo.BP_SpawnInfo_C.GetVisibility_1");

	UBP_SpawnInfo_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnInfo.BP_SpawnInfo_C.GetSpawnCharacterName
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Name                                                       (Parm, OutParm)
void UBP_SpawnInfo_C::GetSpawnCharacterName(struct FText* Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnInfo.BP_SpawnInfo_C.GetSpawnCharacterName");

	UBP_SpawnInfo_C_GetSpawnCharacterName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnInfo.BP_SpawnInfo_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SpawnInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnInfo.BP_SpawnInfo_C.Tick");

	UBP_SpawnInfo_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnInfo.BP_SpawnInfo_C.ExecuteUbergraph_BP_SpawnInfo
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SpawnInfo_C::ExecuteUbergraph_BP_SpawnInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnInfo.BP_SpawnInfo_C.ExecuteUbergraph_BP_SpawnInfo");

	UBP_SpawnInfo_C_ExecuteUbergraph_BP_SpawnInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
