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
//		Name   -> Function BP_FireBombProjectile.BP_FireBombProjectile_C.OnProjectileHit
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     HitNormal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              BounceForce                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      Surface                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bHasHitWorld                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bHasStopped                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FireBombProjectile_C::OnProjectileHit(const struct FVector& HitLocation, const struct FVector& HitNormal, float BounceForce, unsigned char Surface, bool bHasHitWorld, bool bHasStopped)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FireBombProjectile.BP_FireBombProjectile_C.OnProjectileHit");

	ABP_FireBombProjectile_C_OnProjectileHit_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.BounceForce = BounceForce;
	params.Surface = Surface;
	params.bHasHitWorld = bHasHitWorld;
	params.bHasStopped = bHasStopped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FireBombProjectile.BP_FireBombProjectile_C.ExecuteUbergraph_BP_FireBombProjectile
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FireBombProjectile_C::ExecuteUbergraph_BP_FireBombProjectile(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FireBombProjectile.BP_FireBombProjectile_C.ExecuteUbergraph_BP_FireBombProjectile");

	ABP_FireBombProjectile_C_ExecuteUbergraph_BP_FireBombProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
