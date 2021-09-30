#pragma once

// Name: Mordhau, Version: 4_25_hotfix


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_DestroyableActor.BP_DestroyableActor_C.DetachAttachedProjectiles
struct ABP_DestroyableActor_C_DetachAttachedProjectiles_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.OnRep_Regenerating
struct ABP_DestroyableActor_C_OnRep_Regenerating_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.OnReplicatedHealthChanged
struct ABP_DestroyableActor_C_OnReplicatedHealthChanged_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.StopRegenerating
struct ABP_DestroyableActor_C_StopRegenerating_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.PlayParticle
struct ABP_DestroyableActor_C_PlayParticle_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.SetHealth
struct ABP_DestroyableActor_C_SetHealth_Params
{
	float                                              NewHealth;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 Instigator;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.OnRep_ReplicatedHealth
struct ABP_DestroyableActor_C_OnRep_ReplicatedHealth_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.UpdateReplicatedHealth
struct ABP_DestroyableActor_C_UpdateReplicatedHealth_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.UserConstructionScript
struct ABP_DestroyableActor_C_UserConstructionScript_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.ReceiveAnyDamage
struct ABP_DestroyableActor_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.ReceiveBeginPlay
struct ABP_DestroyableActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.RegenTickEvent
struct ABP_DestroyableActor_C_RegenTickEvent_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.StartRegenerating
struct ABP_DestroyableActor_C_StartRegenerating_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.DetachAfterShortDelay
struct ABP_DestroyableActor_C_DetachAfterShortDelay_Params
{
};

// Function BP_DestroyableActor.BP_DestroyableActor_C.ExecuteUbergraph_BP_DestroyableActor
struct ABP_DestroyableActor_C_ExecuteUbergraph_BP_DestroyableActor_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
