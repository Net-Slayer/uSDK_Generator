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
//		Name   -> Function BP_PartyMembers.BP_PartyMembers_C.Update
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FPlayFabPlayer>                      Members                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UBP_PartyMembers_C::Update(TArray<struct FPlayFabPlayer>* Members)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PartyMembers.BP_PartyMembers_C.Update");

	UBP_PartyMembers_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Members != nullptr)
		*Members = params.Members;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
