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
//		Name   -> Function BP_DestroyableActor.BP_DestroyableActor_C.DetachAttachedProjectiles
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_DestroyableActor_C::DetachAttachedProjectiles()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.DetachAttachedProjectiles");

	ABP_DestroyableActor_C_DetachAttachedProjectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DestroyableActor.BP_DestroyableActor_C.OnRep_Regenerating
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_DestroyableActor_C::OnRep_Regenerating()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.OnRep_Regenerating");

	ABP_DestroyableActor_C_OnRep_Regenerating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DestroyableActor.BP_DestroyableActor_C.OnReplicatedHealthChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_DestroyableActor_C::OnReplicatedHealthChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.OnReplicatedHealthChanged");

	ABP_DestroyableActor_C_OnReplicatedHealthChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DestroyableActor.BP_DestroyableActor_C.StopRegenerating
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_DestroyableActor_C::StopRegenerating()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.StopRegenerating");

	ABP_DestroyableActor_C_StopRegenerating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DestroyableActor.BP_DestroyableActor_C.PlayParticle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_DestroyableActor_C::PlayParticle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.PlayParticle");

	ABP_DestroyableActor_C_PlayParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DestroyableActor.BP_DestroyableActor_C.SetHealth
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NewHealth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AController*                                 Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DestroyableActor_C::SetHealth(float NewHealth, class AController* Instigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.SetHealth");

	ABP_DestroyableActor_C_SetHealth_Params params;
	params.NewHealth = NewHealth;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DestroyableActor.BP_DestroyableActor_C.OnRep_ReplicatedHealth
//		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_DestroyableActor_C::OnRep_ReplicatedHealth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.OnRep_ReplicatedHealth");

	ABP_DestroyableActor_C_OnRep_ReplicatedHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DestroyableActor.BP_DestroyableActor_C.UpdateReplicatedHealth
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_DestroyableActor_C::UpdateReplicatedHealth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.UpdateReplicatedHealth");

	ABP_DestroyableActor_C_UpdateReplicatedHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DestroyableActor.BP_DestroyableActor_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_DestroyableActor_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.UserConstructionScript");

	ABP_DestroyableActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DestroyableActor.BP_DestroyableActor_C.ReceiveAnyDamage
//		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DestroyableActor_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.ReceiveAnyDamage");

	ABP_DestroyableActor_C_ReceiveAnyDamage_Params params;
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
//		Name   -> Function BP_DestroyableActor.BP_DestroyableActor_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_DestroyableActor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.ReceiveBeginPlay");

	ABP_DestroyableActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DestroyableActor.BP_DestroyableActor_C.RegenTickEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_DestroyableActor_C::RegenTickEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.RegenTickEvent");

	ABP_DestroyableActor_C_RegenTickEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DestroyableActor.BP_DestroyableActor_C.StartRegenerating
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_DestroyableActor_C::StartRegenerating()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.StartRegenerating");

	ABP_DestroyableActor_C_StartRegenerating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DestroyableActor.BP_DestroyableActor_C.DetachAfterShortDelay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_DestroyableActor_C::DetachAfterShortDelay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.DetachAfterShortDelay");

	ABP_DestroyableActor_C_DetachAfterShortDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DestroyableActor.BP_DestroyableActor_C.ExecuteUbergraph_BP_DestroyableActor
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DestroyableActor_C::ExecuteUbergraph_BP_DestroyableActor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableActor.BP_DestroyableActor_C.ExecuteUbergraph_BP_DestroyableActor");

	ABP_DestroyableActor_C_ExecuteUbergraph_BP_DestroyableActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
