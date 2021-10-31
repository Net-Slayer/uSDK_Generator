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
//		Name   -> Function BP_WoodSplash.BP_WoodSplash_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UParticleSystemComponent*                    PSystem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WoodSplash_C::BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WoodSplash.BP_WoodSplash_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature");

	ABP_WoodSplash_C_BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_WoodSplash.BP_WoodSplash_C.ExecuteUbergraph_BP_WoodSplash
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WoodSplash_C::ExecuteUbergraph_BP_WoodSplash(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WoodSplash.BP_WoodSplash_C.ExecuteUbergraph_BP_WoodSplash");

	ABP_WoodSplash_C_ExecuteUbergraph_BP_WoodSplash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
