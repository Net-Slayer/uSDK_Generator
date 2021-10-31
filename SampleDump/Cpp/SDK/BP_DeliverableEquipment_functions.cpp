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
//		Name   -> Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.CanInteract
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_DeliverableEquipment_C::CanInteract(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.CanInteract");

	ABP_DeliverableEquipment_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.CanHeldInteract
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_DeliverableEquipment_C::CanHeldInteract(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.CanHeldInteract");

	ABP_DeliverableEquipment_C_CanHeldInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.Break
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_DeliverableEquipment_C::Break()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.Break");

	ABP_DeliverableEquipment_C_Break_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnRep_Broke
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_DeliverableEquipment_C::OnRep_Broke()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnRep_Broke");

	ABP_DeliverableEquipment_C_OnRep_Broke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.Consume
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_DeliverableEquipment_C::Consume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.Consume");

	ABP_DeliverableEquipment_C_Consume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_DeliverableEquipment_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.UserConstructionScript");

	ABP_DeliverableEquipment_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnThud
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_DeliverableEquipment_C::OnThud()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnThud");

	ABP_DeliverableEquipment_C_OnThud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.FireProjectile
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Origin                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Orientation                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		class AController*                                 OwningController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ExpectedDelay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DeliverableEquipment_C::FireProjectile(const struct FVector& Origin, const struct FRotator& Orientation, class AController* OwningController, float ExpectedDelay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.FireProjectile");

	ABP_DeliverableEquipment_C_FireProjectile_Params params;
	params.Origin = Origin;
	params.Orientation = Orientation;
	params.OwningController = OwningController;
	params.ExpectedDelay = ExpectedDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnPickedUp
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DeliverableEquipment_C::OnPickedUp(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnPickedUp");

	ABP_DeliverableEquipment_C_OnPickedUp_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnBroken
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_DeliverableEquipment_C::OnBroken()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnBroken");

	ABP_DeliverableEquipment_C_OnBroken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnHeldInteractionStart
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DeliverableEquipment_C::OnHeldInteractionStart(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.OnHeldInteractionStart");

	ABP_DeliverableEquipment_C_OnHeldInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.ExecuteUbergraph_BP_DeliverableEquipment
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DeliverableEquipment_C::ExecuteUbergraph_BP_DeliverableEquipment(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeliverableEquipment.BP_DeliverableEquipment_C.ExecuteUbergraph_BP_DeliverableEquipment");

	ABP_DeliverableEquipment_C_ExecuteUbergraph_BP_DeliverableEquipment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
