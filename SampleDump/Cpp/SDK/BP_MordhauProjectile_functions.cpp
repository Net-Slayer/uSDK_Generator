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
//		Name   -> Function BP_MordhauProjectile.BP_MordhauProjectile_C.OnProjectileDamagedCharacter
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class AAdvancedCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bWillKill                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     WorldLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauProjectile_C::OnProjectileDamagedCharacter(class AAdvancedCharacter* Character, bool bWillKill, const struct FVector& WorldLocation, const struct FName& bone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauProjectile.BP_MordhauProjectile_C.OnProjectileDamagedCharacter");

	ABP_MordhauProjectile_C_OnProjectileDamagedCharacter_Params params;
	params.Character = Character;
	params.bWillKill = bWillKill;
	params.WorldLocation = WorldLocation;
	params.bone = bone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MordhauProjectile.BP_MordhauProjectile_C.ExecuteUbergraph_BP_MordhauProjectile
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauProjectile_C::ExecuteUbergraph_BP_MordhauProjectile(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauProjectile.BP_MordhauProjectile_C.ExecuteUbergraph_BP_MordhauProjectile");

	ABP_MordhauProjectile_C_ExecuteUbergraph_BP_MordhauProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
