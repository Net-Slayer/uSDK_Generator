#pragma once

// Name: Mordhau, Version: Patch23


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

// Function BP_DeployableSpawn.BP_DeployableSpawn_C.OnPlayedParticle
struct ABP_DeployableSpawn_C_OnPlayedParticle_Params
{
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DeployableSpawn.BP_DeployableSpawn_C.UpdateSpawnActive
struct ABP_DeployableSpawn_C_UpdateSpawnActive_Params
{
};

// Function BP_DeployableSpawn.BP_DeployableSpawn_C.OnMeshChanged
struct ABP_DeployableSpawn_C_OnMeshChanged_Params
{
};

// Function BP_DeployableSpawn.BP_DeployableSpawn_C.OnStoppedRegenerating
struct ABP_DeployableSpawn_C_OnStoppedRegenerating_Params
{
};

// Function BP_DeployableSpawn.BP_DeployableSpawn_C.OnSpawnUsed
struct ABP_DeployableSpawn_C_OnSpawnUsed_Params
{
	class AController*                                 Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DeployableSpawn.BP_DeployableSpawn_C.UserConstructionScript
struct ABP_DeployableSpawn_C_UserConstructionScript_Params
{
};

// Function BP_DeployableSpawn.BP_DeployableSpawn_C.ReceiveBeginPlay
struct ABP_DeployableSpawn_C_ReceiveBeginPlay_Params
{
};

// Function BP_DeployableSpawn.BP_DeployableSpawn_C.ReceiveDestroyed
struct ABP_DeployableSpawn_C_ReceiveDestroyed_Params
{
};

// Function BP_DeployableSpawn.BP_DeployableSpawn_C.CheckEnemyProximity
struct ABP_DeployableSpawn_C_CheckEnemyProximity_Params
{
};

// Function BP_DeployableSpawn.BP_DeployableSpawn_C.EnterCooldown
struct ABP_DeployableSpawn_C_EnterCooldown_Params
{
};

// Function BP_DeployableSpawn.BP_DeployableSpawn_C.ReceiveAnyDamage
struct ABP_DeployableSpawn_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DeployableSpawn.BP_DeployableSpawn_C.ExecuteUbergraph_BP_DeployableSpawn
struct ABP_DeployableSpawn_C_ExecuteUbergraph_BP_DeployableSpawn_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
