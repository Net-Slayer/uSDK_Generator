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
//		Name   -> Function BP_PaviseShield.BP_PaviseShield_C.CanHeldInteract
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_PaviseShield_C::CanHeldInteract(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaviseShield.BP_PaviseShield_C.CanHeldInteract");

	ABP_PaviseShield_C_CanHeldInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PaviseShield.BP_PaviseShield_C.HandleTakeDamage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PaviseShield_C::HandleTakeDamage(float Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaviseShield.BP_PaviseShield_C.HandleTakeDamage");

	ABP_PaviseShield_C_HandleTakeDamage_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PaviseShield.BP_PaviseShield_C.CanInteract
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_PaviseShield_C::CanInteract(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaviseShield.BP_PaviseShield_C.CanInteract");

	ABP_PaviseShield_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PaviseShield.BP_PaviseShield_C.OnRequestFire
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_PaviseShield_C::OnRequestFire(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaviseShield.BP_PaviseShield_C.OnRequestFire");

	ABP_PaviseShield_C_OnRequestFire_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PaviseShield.BP_PaviseShield_C.ShouldShine
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_PaviseShield_C::ShouldShine()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaviseShield.BP_PaviseShield_C.ShouldShine");

	ABP_PaviseShield_C_ShouldShine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PaviseShield.BP_PaviseShield_C.ValidatePlantSpot
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     PlantLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    CameraRotation1P                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Succeeded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class USceneComponent*                             AttachToComponent                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PaviseShield_C::ValidatePlantSpot(const struct FVector& PlantLocation, const struct FRotator& CameraRotation1P, bool* Succeeded, struct FVector* Location, struct FRotator* Rotation, class USceneComponent** AttachToComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaviseShield.BP_PaviseShield_C.ValidatePlantSpot");

	ABP_PaviseShield_C_ValidatePlantSpot_Params params;
	params.PlantLocation = PlantLocation;
	params.CameraRotation1P = CameraRotation1P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;
	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (AttachToComponent != nullptr)
		*AttachToComponent = params.AttachToComponent;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PaviseShield.BP_PaviseShield_C.FireProjectile
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Origin                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Orientation                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		class AController*                                 OwningController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ExpectedDelay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PaviseShield_C::FireProjectile(const struct FVector& Origin, const struct FRotator& Orientation, class AController* OwningController, float ExpectedDelay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaviseShield.BP_PaviseShield_C.FireProjectile");

	ABP_PaviseShield_C_FireProjectile_Params params;
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
//		Name   -> Function BP_PaviseShield.BP_PaviseShield_C.OnLoadedChanged
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_PaviseShield_C::OnLoadedChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaviseShield.BP_PaviseShield_C.OnLoadedChanged");

	ABP_PaviseShield_C_OnLoadedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PaviseShield.BP_PaviseShield_C.OnInteractionStart
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PaviseShield_C::OnInteractionStart(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaviseShield.BP_PaviseShield_C.OnInteractionStart");

	ABP_PaviseShield_C_OnInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PaviseShield.BP_PaviseShield_C.ReceiveAnyDamage
//		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PaviseShield_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaviseShield.BP_PaviseShield_C.ReceiveAnyDamage");

	ABP_PaviseShield_C_ReceiveAnyDamage_Params params;
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
//		Name   -> Function BP_PaviseShield.BP_PaviseShield_C.BndEvt__MovementBlocker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_PaviseShield_C::BndEvt__MovementBlocker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaviseShield.BP_PaviseShield_C.BndEvt__MovementBlocker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_PaviseShield_C_BndEvt__MovementBlocker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PaviseShield.BP_PaviseShield_C.PlanterDestroyed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAdvancedCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PaviseShield_C::PlanterDestroyed(class AAdvancedCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaviseShield.BP_PaviseShield_C.PlanterDestroyed");

	ABP_PaviseShield_C_PlanterDestroyed_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PaviseShield.BP_PaviseShield_C.PlanterDied
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAdvancedCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PaviseShield_C::PlanterDied(class AAdvancedCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaviseShield.BP_PaviseShield_C.PlanterDied");

	ABP_PaviseShield_C_PlanterDied_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PaviseShield.BP_PaviseShield_C.OnAmmoChanged
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_PaviseShield_C::OnAmmoChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaviseShield.BP_PaviseShield_C.OnAmmoChanged");

	ABP_PaviseShield_C_OnAmmoChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PaviseShield.BP_PaviseShield_C.OnHeldInteractionStart
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PaviseShield_C::OnHeldInteractionStart(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaviseShield.BP_PaviseShield_C.OnHeldInteractionStart");

	ABP_PaviseShield_C_OnHeldInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PaviseShield.BP_PaviseShield_C.UpdateEquipmentState
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PaviseShield_C::UpdateEquipmentState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaviseShield.BP_PaviseShield_C.UpdateEquipmentState");

	ABP_PaviseShield_C_UpdateEquipmentState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PaviseShield.BP_PaviseShield_C.ExecuteUbergraph_BP_PaviseShield
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PaviseShield_C::ExecuteUbergraph_BP_PaviseShield(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaviseShield.BP_PaviseShield_C.ExecuteUbergraph_BP_PaviseShield");

	ABP_PaviseShield_C_ExecuteUbergraph_BP_PaviseShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
