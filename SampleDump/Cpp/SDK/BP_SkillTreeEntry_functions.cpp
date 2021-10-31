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
//		Name   -> Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.Clear Branches
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_SkillTreeEntry_C::Clear_Branches()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.Clear Branches");

	UBP_SkillTreeEntry_C_Clear_Branches_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.AddBranch
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_SkillTreeBranch_C*                       Branch                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SkillTreeEntry_C::AddBranch(class UBP_SkillTreeBranch_C** Branch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.AddBranch");

	UBP_SkillTreeEntry_C_AddBranch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_SkillTreeEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.Construct");

	UBP_SkillTreeEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.ExecuteUbergraph_BP_SkillTreeEntry
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SkillTreeEntry_C::ExecuteUbergraph_BP_SkillTreeEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.ExecuteUbergraph_BP_SkillTreeEntry");

	UBP_SkillTreeEntry_C_ExecuteUbergraph_BP_SkillTreeEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
