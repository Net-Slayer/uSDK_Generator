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
//		Name   -> Function BP_CatapultProjectile.BP_CatapultProjectile_C.SetProjectileInitialSpeed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      InByte                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CatapultProjectile_C::SetProjectileInitialSpeed(unsigned char InByte)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CatapultProjectile.BP_CatapultProjectile_C.SetProjectileInitialSpeed");

	ABP_CatapultProjectile_C_SetProjectileInitialSpeed_Params params;
	params.InByte = InByte;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CatapultProjectile.BP_CatapultProjectile_C.OnProjectileHit
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     HitNormal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              BounceForce                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      Surface                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bHasHitWorld                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bHasStopped                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CatapultProjectile_C::OnProjectileHit(const struct FVector& HitLocation, const struct FVector& HitNormal, float BounceForce, unsigned char Surface, bool bHasHitWorld, bool bHasStopped)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CatapultProjectile.BP_CatapultProjectile_C.OnProjectileHit");

	ABP_CatapultProjectile_C_OnProjectileHit_Params params;
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
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CatapultProjectile.BP_CatapultProjectile_C.Fire
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_CatapultProjectile_C::Fire()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CatapultProjectile.BP_CatapultProjectile_C.Fire");

	ABP_CatapultProjectile_C_Fire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CatapultProjectile.BP_CatapultProjectile_C.ExecuteUbergraph_BP_CatapultProjectile
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CatapultProjectile_C::ExecuteUbergraph_BP_CatapultProjectile(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CatapultProjectile.BP_CatapultProjectile_C.ExecuteUbergraph_BP_CatapultProjectile");

	ABP_CatapultProjectile_C_ExecuteUbergraph_BP_CatapultProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
