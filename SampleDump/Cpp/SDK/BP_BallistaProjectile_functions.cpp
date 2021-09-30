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
//		Name   -> Function BP_BallistaProjectile.BP_BallistaProjectile_C.AttachProjectile
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BallistaProjectile_C::AttachProjectile(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BallistaProjectile.BP_BallistaProjectile_C.AttachProjectile");

	ABP_BallistaProjectile_C_AttachProjectile_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BallistaProjectile.BP_BallistaProjectile_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BallistaProjectile_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BallistaProjectile.BP_BallistaProjectile_C.ReceiveTick");

	ABP_BallistaProjectile_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BallistaProjectile.BP_BallistaProjectile_C.OnUsedToKillOther
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AAdvancedCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Mordhau_EMordhauDamageType                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      SubType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BallistaProjectile_C::OnUsedToKillOther(class AAdvancedCharacter* Character, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BallistaProjectile.BP_BallistaProjectile_C.OnUsedToKillOther");

	ABP_BallistaProjectile_C_OnUsedToKillOther_Params params;
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
//		Name   -> Function BP_BallistaProjectile.BP_BallistaProjectile_C.OnPostDismemberedOther
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASeparatedBodyPart*                          Part                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BallistaProjectile_C::OnPostDismemberedOther(const struct FName& bone, class ASeparatedBodyPart* Part)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BallistaProjectile.BP_BallistaProjectile_C.OnPostDismemberedOther");

	ABP_BallistaProjectile_C_OnPostDismemberedOther_Params params;
	params.bone = bone;
	params.Part = Part;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BallistaProjectile.BP_BallistaProjectile_C.OnProjectileHit
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     HitNormal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              BounceForce                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      Surface                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bHasHitWorld                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bHasStopped                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BallistaProjectile_C::OnProjectileHit(const struct FVector& HitLocation, const struct FVector& HitNormal, float BounceForce, unsigned char Surface, bool bHasHitWorld, bool bHasStopped)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BallistaProjectile.BP_BallistaProjectile_C.OnProjectileHit");

	ABP_BallistaProjectile_C_OnProjectileHit_Params params;
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
//		Name   -> Function BP_BallistaProjectile.BP_BallistaProjectile_C.ExecuteUbergraph_BP_BallistaProjectile
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BallistaProjectile_C::ExecuteUbergraph_BP_BallistaProjectile(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BallistaProjectile.BP_BallistaProjectile_C.ExecuteUbergraph_BP_BallistaProjectile");

	ABP_BallistaProjectile_C_ExecuteUbergraph_BP_BallistaProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
