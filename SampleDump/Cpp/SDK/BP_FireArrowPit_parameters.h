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

// Function BP_FireArrowPit.BP_FireArrowPit_C.SetOnFire
struct ABP_FireArrowPit_C_SetOnFire_Params
{
	class UProjectileArmShooterComponent*              ProjectileArmComponent;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProjectileTurretShooterComponent*           ProjectileTurretComponent;                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FireArrowPit.BP_FireArrowPit_C.ReceiveBeginPlay
struct ABP_FireArrowPit_C_ReceiveBeginPlay_Params
{
};

// Function BP_FireArrowPit.BP_FireArrowPit_C.GiveBuffs
struct ABP_FireArrowPit_C_GiveBuffs_Params
{
};

// Function BP_FireArrowPit.BP_FireArrowPit_C.ExecuteUbergraph_BP_FireArrowPit
struct ABP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
