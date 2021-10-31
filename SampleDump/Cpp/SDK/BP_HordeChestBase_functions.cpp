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
//		Name   -> Function BP_HordeChestBase.BP_HordeChestBase_C.UpdateVisuals
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeChestBase_C::UpdateVisuals()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeChestBase.BP_HordeChestBase_C.UpdateVisuals");

	ABP_HordeChestBase_C_UpdateVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeChestBase.BP_HordeChestBase_C.SetAvailability
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               NewAvailable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HordeChestBase_C::SetAvailability(bool NewAvailable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeChestBase.BP_HordeChestBase_C.SetAvailability");

	ABP_HordeChestBase_C_SetAvailability_Params params;
	params.NewAvailable = NewAvailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeChestBase.BP_HordeChestBase_C.CanInteract
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HordeChestBase_C::CanInteract(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeChestBase.BP_HordeChestBase_C.CanInteract");

	ABP_HordeChestBase_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeChestBase.BP_HordeChestBase_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_HordeChestBase_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeChestBase.BP_HordeChestBase_C.ReceiveBeginPlay");

	ABP_HordeChestBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeChestBase.BP_HordeChestBase_C.OnInteractionStart
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeChestBase_C::OnInteractionStart(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeChestBase.BP_HordeChestBase_C.OnInteractionStart");

	ABP_HordeChestBase_C_OnInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeChestBase.BP_HordeChestBase_C.ReceiveAnyDamage
//		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeChestBase_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeChestBase.BP_HordeChestBase_C.ReceiveAnyDamage");

	ABP_HordeChestBase_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeChestBase.BP_HordeChestBase_C.ExecuteUbergraph_BP_HordeChestBase
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeChestBase_C::ExecuteUbergraph_BP_HordeChestBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeChestBase.BP_HordeChestBase_C.ExecuteUbergraph_BP_HordeChestBase");

	ABP_HordeChestBase_C_ExecuteUbergraph_BP_HordeChestBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
