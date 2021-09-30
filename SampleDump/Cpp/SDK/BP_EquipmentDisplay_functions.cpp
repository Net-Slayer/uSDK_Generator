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
//		Name   -> Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_EquipmentDisplay_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.GetVisibility_1");

	UBP_EquipmentDisplay_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Find Shield
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class AMordhauEquipment*>                   Equipment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		bool                                               Found_Shield_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_EquipmentDisplay_C::Find_Shield(TArray<class AMordhauEquipment*>* Equipment, bool* Found_Shield_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Find Shield");

	UBP_EquipmentDisplay_C_Find_Shield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Equipment != nullptr)
		*Equipment = params.Equipment;
	if (Found_Shield_ != nullptr)
		*Found_Shield_ = params.Found_Shield_;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Show
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_EquipmentDisplay_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Show");

	UBP_EquipmentDisplay_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Hide
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_EquipmentDisplay_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Hide");

	UBP_EquipmentDisplay_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_EquipmentDisplay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Tick");

	UBP_EquipmentDisplay_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.ExecuteUbergraph_BP_EquipmentDisplay
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_EquipmentDisplay_C::ExecuteUbergraph_BP_EquipmentDisplay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.ExecuteUbergraph_BP_EquipmentDisplay");

	UBP_EquipmentDisplay_C_ExecuteUbergraph_BP_EquipmentDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
