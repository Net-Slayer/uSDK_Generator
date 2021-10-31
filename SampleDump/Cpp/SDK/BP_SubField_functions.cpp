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
//		Name   -> Function BP_SubField.BP_SubField_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SubField_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubField.BP_SubField_C.UserConstructionScript");

	ABP_SubField_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SubField.BP_SubField_C.BeginSubFieldDeactivation
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SubField_C::BeginSubFieldDeactivation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubField.BP_SubField_C.BeginSubFieldDeactivation");

	ABP_SubField_C_BeginSubFieldDeactivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SubField.BP_SubField_C.SetSubFieldHidden
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SubField_C::SetSubFieldHidden(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubField.BP_SubField_C.SetSubFieldHidden");

	ABP_SubField_C_SetSubFieldHidden_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SubField.BP_SubField_C.DeactivateSubField
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SubField_C::DeactivateSubField()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubField.BP_SubField_C.DeactivateSubField");

	ABP_SubField_C_DeactivateSubField_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SubField.BP_SubField_C.ExecuteUbergraph_BP_SubField
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SubField_C::ExecuteUbergraph_BP_SubField(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubField.BP_SubField_C.ExecuteUbergraph_BP_SubField");

	ABP_SubField_C_ExecuteUbergraph_BP_SubField_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
