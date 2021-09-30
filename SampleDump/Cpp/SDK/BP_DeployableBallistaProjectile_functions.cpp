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
//		Name   -> Function BP_DeployableBallistaProjectile.BP_DeployableBallistaProjectile_C.OnUsedToKillOther
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AAdvancedCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Mordhau_EMordhauDamageType                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      SubType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DeployableBallistaProjectile_C::OnUsedToKillOther(class AAdvancedCharacter* Character, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeployableBallistaProjectile.BP_DeployableBallistaProjectile_C.OnUsedToKillOther");

	ABP_DeployableBallistaProjectile_C_OnUsedToKillOther_Params params;
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
//		Name   -> Function BP_DeployableBallistaProjectile.BP_DeployableBallistaProjectile_C.ExecuteUbergraph_BP_DeployableBallistaProjectile
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DeployableBallistaProjectile_C::ExecuteUbergraph_BP_DeployableBallistaProjectile(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeployableBallistaProjectile.BP_DeployableBallistaProjectile_C.ExecuteUbergraph_BP_DeployableBallistaProjectile");

	ABP_DeployableBallistaProjectile_C_ExecuteUbergraph_BP_DeployableBallistaProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
