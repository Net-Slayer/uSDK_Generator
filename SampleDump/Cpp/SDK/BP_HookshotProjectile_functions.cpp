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
//		Name   -> Function BP_HookshotProjectile.BP_HookshotProjectile_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HookshotProjectile_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HookshotProjectile.BP_HookshotProjectile_C.ReceiveTick");

	ABP_HookshotProjectile_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HookshotProjectile.BP_HookshotProjectile_C.OnProjectileDamagedDamagable
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class UDamageableComponent*                        DamagableComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bWillKill                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     WorldLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HookshotProjectile_C::OnProjectileDamagedDamagable(class UDamageableComponent* DamagableComp, bool bWillKill, const struct FVector& WorldLocation, const struct FName& bone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HookshotProjectile.BP_HookshotProjectile_C.OnProjectileDamagedDamagable");

	ABP_HookshotProjectile_C_OnProjectileDamagedDamagable_Params params;
	params.DamagableComp = DamagableComp;
	params.bWillKill = bWillKill;
	params.WorldLocation = WorldLocation;
	params.bone = bone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HookshotProjectile.BP_HookshotProjectile_C.ExecuteUbergraph_BP_HookshotProjectile
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HookshotProjectile_C::ExecuteUbergraph_BP_HookshotProjectile(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HookshotProjectile.BP_HookshotProjectile_C.ExecuteUbergraph_BP_HookshotProjectile");

	ABP_HookshotProjectile_C_ExecuteUbergraph_BP_HookshotProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
