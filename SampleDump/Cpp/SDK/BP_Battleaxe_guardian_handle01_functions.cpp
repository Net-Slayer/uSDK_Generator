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
//		Name   -> Function BP_Battleaxe_guardian_handle01.BP_Battleaxe_guardian_handle01_C.UserConstructionScript
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Battleaxe_guardian_handle01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Battleaxe_guardian_handle01.BP_Battleaxe_guardian_handle01_C.UserConstructionScript");

	UBP_Battleaxe_guardian_handle01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
