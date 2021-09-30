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
//		Name   -> Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.GetText_2
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_EquipmentInfoDisplay_C::GetText_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.GetText_2");

	UBP_EquipmentInfoDisplay_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_EquipmentInfoDisplay_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.GetVisibility_1");

	UBP_EquipmentInfoDisplay_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.GetText_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_EquipmentInfoDisplay_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.GetText_1");

	UBP_EquipmentInfoDisplay_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_EquipmentInfoDisplay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.Construct");

	UBP_EquipmentInfoDisplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.OnRestockedAmmo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauEquipment*                           Equipment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_EquipmentInfoDisplay_C::OnRestockedAmmo(class AMordhauEquipment* Equipment, int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.OnRestockedAmmo");

	UBP_EquipmentInfoDisplay_C_OnRestockedAmmo_Params params;
	params.Equipment = Equipment;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.On AddAmmoAnim Finish
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_EquipmentInfoDisplay_C::On_AddAmmoAnim_Finish()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.On AddAmmoAnim Finish");

	UBP_EquipmentInfoDisplay_C_On_AddAmmoAnim_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.ExecuteUbergraph_BP_EquipmentInfoDisplay
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_EquipmentInfoDisplay_C::ExecuteUbergraph_BP_EquipmentInfoDisplay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.ExecuteUbergraph_BP_EquipmentInfoDisplay");

	UBP_EquipmentInfoDisplay_C_ExecuteUbergraph_BP_EquipmentInfoDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
