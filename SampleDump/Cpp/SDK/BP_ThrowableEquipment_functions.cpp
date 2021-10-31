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
//		Name   -> Function BP_ThrowableEquipment.BP_ThrowableEquipment_C.AssignCustomizationToProjectile
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauProjectile*                          Projectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ThrowableEquipment_C::AssignCustomizationToProjectile(class AMordhauProjectile* Projectile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ThrowableEquipment.BP_ThrowableEquipment_C.AssignCustomizationToProjectile");

	ABP_ThrowableEquipment_C_AssignCustomizationToProjectile_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ThrowableEquipment.BP_ThrowableEquipment_C.ExecuteUbergraph_BP_ThrowableEquipment
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ThrowableEquipment_C::ExecuteUbergraph_BP_ThrowableEquipment(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ThrowableEquipment.BP_ThrowableEquipment_C.ExecuteUbergraph_BP_ThrowableEquipment");

	ABP_ThrowableEquipment_C_ExecuteUbergraph_BP_ThrowableEquipment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
