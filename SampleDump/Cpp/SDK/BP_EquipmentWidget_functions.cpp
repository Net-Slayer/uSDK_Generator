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
//		Name   -> Function BP_EquipmentWidget.BP_EquipmentWidget_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_EquipmentWidget_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentWidget.BP_EquipmentWidget_C.GetVisibility_1");

	UBP_EquipmentWidget_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentWidget.BP_EquipmentWidget_C.UpdateEquipmentReason
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_EquipmentWidget_C::UpdateEquipmentReason(const struct FString& Reason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentWidget.BP_EquipmentWidget_C.UpdateEquipmentReason");

	UBP_EquipmentWidget_C_UpdateEquipmentReason_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentWidget.BP_EquipmentWidget_C.UpdateEquipmentText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_EquipmentWidget_C::UpdateEquipmentText(const struct FName& Name, int Amount, int MaxAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentWidget.BP_EquipmentWidget_C.UpdateEquipmentText");

	UBP_EquipmentWidget_C_UpdateEquipmentText_Params params;
	params.Name = Name;
	params.Amount = Amount;
	params.MaxAmount = MaxAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentWidget.BP_EquipmentWidget_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_EquipmentWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentWidget.BP_EquipmentWidget_C.Construct");

	UBP_EquipmentWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentWidget.BP_EquipmentWidget_C.ExecuteUbergraph_BP_EquipmentWidget
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_EquipmentWidget_C::ExecuteUbergraph_BP_EquipmentWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentWidget.BP_EquipmentWidget_C.ExecuteUbergraph_BP_EquipmentWidget");

	UBP_EquipmentWidget_C_ExecuteUbergraph_BP_EquipmentWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
