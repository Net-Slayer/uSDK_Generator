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
//		Name   -> Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.HandleCollision
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAdvancedCharacter*                          Char                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Velocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DamageFactor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DestroyableDeploySpikeWall_C::HandleCollision(class AAdvancedCharacter* Char, float Velocity, float DamageFactor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.HandleCollision");

	ABP_DestroyableDeploySpikeWall_C_HandleCollision_Params params;
	params.Char = Char;
	params.Velocity = Velocity;
	params.DamageFactor = DamageFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.Impale
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAdvancedCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DestroyableDeploySpikeWall_C::Impale(class AAdvancedCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.Impale");

	ABP_DestroyableDeploySpikeWall_C_Impale_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.OnUsedToKillOther
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AAdvancedCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Mordhau_EMordhauDamageType                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      SubType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DestroyableDeploySpikeWall_C::OnUsedToKillOther(class AAdvancedCharacter* Character, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.OnUsedToKillOther");

	ABP_DestroyableDeploySpikeWall_C_OnUsedToKillOther_Params params;
	params.Character = Character;
	params.Type = Type;
	params.SubType = SubType;
	params.bone = bone;
	params.Point = Point;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_DestroyableDeploySpikeWall_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_DestroyableDeploySpikeWall_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.OnReplicatedHealthChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_DestroyableDeploySpikeWall_C::OnReplicatedHealthChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.OnReplicatedHealthChanged");

	ABP_DestroyableDeploySpikeWall_C_OnReplicatedHealthChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.ExecuteUbergraph_BP_DestroyableDeploySpikeWall
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DestroyableDeploySpikeWall_C::ExecuteUbergraph_BP_DestroyableDeploySpikeWall(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.ExecuteUbergraph_BP_DestroyableDeploySpikeWall");

	ABP_DestroyableDeploySpikeWall_C_ExecuteUbergraph_BP_DestroyableDeploySpikeWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
