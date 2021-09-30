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
//		Name   -> Function BP_PommelProjectile.BP_PommelProjectile_C.OnProjectileFired
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_PommelProjectile_C::OnProjectileFired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PommelProjectile.BP_PommelProjectile_C.OnProjectileFired");

	ABP_PommelProjectile_C_OnProjectileFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PommelProjectile.BP_PommelProjectile_C.ExecuteUbergraph_BP_PommelProjectile
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PommelProjectile_C::ExecuteUbergraph_BP_PommelProjectile(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PommelProjectile.BP_PommelProjectile_C.ExecuteUbergraph_BP_PommelProjectile");

	ABP_PommelProjectile_C_ExecuteUbergraph_BP_PommelProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
