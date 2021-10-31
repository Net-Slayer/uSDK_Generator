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
//		Name   -> Function BP_CharacterDoll.BP_CharacterDoll_C.AssumePreviewPose
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Random                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CharacterDoll_C::AssumePreviewPose(int Random)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharacterDoll.BP_CharacterDoll_C.AssumePreviewPose");

	ABP_CharacterDoll_C_AssumePreviewPose_Params params;
	params.Random = Random;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CharacterDoll.BP_CharacterDoll_C.GiveFists
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_CharacterDoll_C::GiveFists()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharacterDoll.BP_CharacterDoll_C.GiveFists");

	ABP_CharacterDoll_C_GiveFists_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CharacterDoll.BP_CharacterDoll_C.ExecuteUbergraph_BP_CharacterDoll
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CharacterDoll_C::ExecuteUbergraph_BP_CharacterDoll(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CharacterDoll.BP_CharacterDoll_C.ExecuteUbergraph_BP_CharacterDoll");

	ABP_CharacterDoll_C_ExecuteUbergraph_BP_CharacterDoll_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
