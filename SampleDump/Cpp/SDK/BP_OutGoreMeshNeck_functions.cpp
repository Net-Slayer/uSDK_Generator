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
//		Name   -> Function BP_OutGoreMeshNeck.BP_OutGoreMeshNeck_C.BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FName                                       EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              EmitterTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ParticleTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Velocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Normal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPhysicalMaterial*                           PhysMat                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_OutGoreMeshNeck_C::BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OutGoreMeshNeck.BP_OutGoreMeshNeck_C.BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature");

	ABP_OutGoreMeshNeck_C_BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;
	params.Normal = Normal;
	params.BoneName = BoneName;
	params.PhysMat = PhysMat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_OutGoreMeshNeck.BP_OutGoreMeshNeck_C.ExecuteUbergraph_BP_OutGoreMeshNeck
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_OutGoreMeshNeck_C::ExecuteUbergraph_BP_OutGoreMeshNeck(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OutGoreMeshNeck.BP_OutGoreMeshNeck_C.ExecuteUbergraph_BP_OutGoreMeshNeck");

	ABP_OutGoreMeshNeck_C_ExecuteUbergraph_BP_OutGoreMeshNeck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
