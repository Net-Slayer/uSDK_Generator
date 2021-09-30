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
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.OnRep_PlanterState
//		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_BearTrap_C::OnRep_PlanterState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.OnRep_PlanterState");

	ABP_BearTrap_C_OnRep_PlanterState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.CanHeldInteract
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BearTrap_C::CanHeldInteract(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.CanHeldInteract");

	ABP_BearTrap_C_CanHeldInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.ShouldShine
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BearTrap_C::ShouldShine()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.ShouldShine");

	ABP_BearTrap_C_ShouldShine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.CanInteract
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BearTrap_C::CanInteract(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.CanInteract");

	ABP_BearTrap_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.DealDamage
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAdvancedCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BearTrap_C::DealDamage(class AAdvancedCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.DealDamage");

	ABP_BearTrap_C_DealDamage_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.ValidatePlantSpot
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     CameraLocation1P                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    CameraRotattion1P                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Succeeded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class USceneComponent*                             AttachToComponent                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BearTrap_C::ValidatePlantSpot(const struct FVector& CameraLocation1P, const struct FRotator& CameraRotattion1P, bool* Succeeded, struct FVector* Location, struct FRotator* Rotation, class USceneComponent** AttachToComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.ValidatePlantSpot");

	ABP_BearTrap_C_ValidatePlantSpot_Params params;
	params.CameraLocation1P = CameraLocation1P;
	params.CameraRotattion1P = CameraRotattion1P;

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
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.OnRequestFire
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BearTrap_C::OnRequestFire(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.OnRequestFire");

	ABP_BearTrap_C_OnRequestFire_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.OnLoadedChanged
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_BearTrap_C::OnLoadedChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.OnLoadedChanged");

	ABP_BearTrap_C_OnLoadedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.ReceiveActorBeginOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BearTrap_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.ReceiveActorBeginOverlap");

	ABP_BearTrap_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.FireProjectile
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Origin                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Orientation                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		class AController*                                 OwningController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ExpectedDelay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BearTrap_C::FireProjectile(const struct FVector& Origin, const struct FRotator& Orientation, class AController* OwningController, float ExpectedDelay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.FireProjectile");

	ABP_BearTrap_C_FireProjectile_Params params;
	params.Origin = Origin;
	params.Orientation = Orientation;
	params.OwningController = OwningController;
	params.ExpectedDelay = ExpectedDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.ReceiveAnyDamage
//		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BearTrap_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.ReceiveAnyDamage");

	ABP_BearTrap_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.OnUsedToKillOther
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AAdvancedCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Mordhau_EMordhauDamageType                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      SubType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BearTrap_C::OnUsedToKillOther(class AAdvancedCharacter* Character, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.OnUsedToKillOther");

	ABP_BearTrap_C_OnUsedToKillOther_Params params;
	params.Character = Character;
	params.Type = Type;
	params.SubType = SubType;
	params.bone = bone;
	params.Point = Point;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.OnPostDismemberedOther
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASeparatedBodyPart*                          Part                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BearTrap_C::OnPostDismemberedOther(const struct FName& bone, class ASeparatedBodyPart* Part)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.OnPostDismemberedOther");

	ABP_BearTrap_C_OnPostDismemberedOther_Params params;
	params.bone = bone;
	params.Part = Part;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.OnAmmoChanged
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_BearTrap_C::OnAmmoChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.OnAmmoChanged");

	ABP_BearTrap_C_OnAmmoChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.PlanterDied
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAdvancedCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BearTrap_C::PlanterDied(class AAdvancedCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.PlanterDied");

	ABP_BearTrap_C_PlanterDied_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.PlanterDestroyed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAdvancedCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BearTrap_C::PlanterDestroyed(class AAdvancedCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.PlanterDestroyed");

	ABP_BearTrap_C_PlanterDestroyed_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.OnInteractionStart
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BearTrap_C::OnInteractionStart(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.OnInteractionStart");

	ABP_BearTrap_C_OnInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.OnHeldInteractionStart
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BearTrap_C::OnHeldInteractionStart(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.OnHeldInteractionStart");

	ABP_BearTrap_C_OnHeldInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.UpdateEquipmentState
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_BearTrap_C::UpdateEquipmentState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.UpdateEquipmentState");

	ABP_BearTrap_C_UpdateEquipmentState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.LocalPlayerLateTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BearTrap_C::LocalPlayerLateTick(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.LocalPlayerLateTick");

	ABP_BearTrap_C_LocalPlayerLateTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BearTrap.BP_BearTrap_C.ExecuteUbergraph_BP_BearTrap
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BearTrap_C::ExecuteUbergraph_BP_BearTrap(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BearTrap.BP_BearTrap_C.ExecuteUbergraph_BP_BearTrap");

	ABP_BearTrap_C_ExecuteUbergraph_BP_BearTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
