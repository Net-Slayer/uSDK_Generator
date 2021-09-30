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
//		Name   -> Function BP_BaseGoreMesh.BP_BaseGoreMesh_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseGoreMesh_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BaseGoreMesh.BP_BaseGoreMesh_C.UserConstructionScript");

	ABP_BaseGoreMesh_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BaseGoreMesh.BP_BaseGoreMesh_C.BndEvt__Particle_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UParticleSystemComponent*                    PSystem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseGoreMesh_C::BndEvt__Particle_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BaseGoreMesh.BP_BaseGoreMesh_C.BndEvt__Particle_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature");

	ABP_BaseGoreMesh_C_BndEvt__Particle_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BaseGoreMesh.BP_BaseGoreMesh_C.ExecuteUbergraph_BP_BaseGoreMesh
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseGoreMesh_C::ExecuteUbergraph_BP_BaseGoreMesh(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BaseGoreMesh.BP_BaseGoreMesh_C.ExecuteUbergraph_BP_BaseGoreMesh");

	ABP_BaseGoreMesh_C_ExecuteUbergraph_BP_BaseGoreMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
