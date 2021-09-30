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
//		Name   -> Function BP_FireArrowPit.BP_FireArrowPit_C.SetOnFire
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UProjectileArmShooterComponent*              ProjectileArmComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UProjectileTurretShooterComponent*           ProjectileTurretComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FireArrowPit_C::SetOnFire(class UProjectileArmShooterComponent* ProjectileArmComponent, class UProjectileTurretShooterComponent* ProjectileTurretComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FireArrowPit.BP_FireArrowPit_C.SetOnFire");

	ABP_FireArrowPit_C_SetOnFire_Params params;
	params.ProjectileArmComponent = ProjectileArmComponent;
	params.ProjectileTurretComponent = ProjectileTurretComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FireArrowPit.BP_FireArrowPit_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_FireArrowPit_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FireArrowPit.BP_FireArrowPit_C.ReceiveBeginPlay");

	ABP_FireArrowPit_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FireArrowPit.BP_FireArrowPit_C.GiveBuffs
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_FireArrowPit_C::GiveBuffs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FireArrowPit.BP_FireArrowPit_C.GiveBuffs");

	ABP_FireArrowPit_C_GiveBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FireArrowPit.BP_FireArrowPit_C.ExecuteUbergraph_BP_FireArrowPit
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FireArrowPit_C::ExecuteUbergraph_BP_FireArrowPit(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FireArrowPit.BP_FireArrowPit_C.ExecuteUbergraph_BP_FireArrowPit");

	ABP_FireArrowPit_C_ExecuteUbergraph_BP_FireArrowPit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
