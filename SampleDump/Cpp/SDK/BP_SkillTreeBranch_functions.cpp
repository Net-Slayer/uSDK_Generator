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
//		Name   -> Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.Clear
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_SkillTreeBranch_C::Clear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.Clear");

	UBP_SkillTreeBranch_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.AddNodeToBranch
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UBP_SkillTreeNode_C*                         Node                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SkillTreeBranch_C::AddNodeToBranch(TEnumAsByte<E_HordeSkill_E_HordeSkill> Skill, class UBP_SkillTreeNode_C** Node)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.AddNodeToBranch");

	UBP_SkillTreeBranch_C_AddNodeToBranch_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Node != nullptr)
		*Node = params.Node;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_SkillTreeBranch_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.Construct");

	UBP_SkillTreeBranch_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.ExecuteUbergraph_BP_SkillTreeBranch
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SkillTreeBranch_C::ExecuteUbergraph_BP_SkillTreeBranch(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.ExecuteUbergraph_BP_SkillTreeBranch");

	UBP_SkillTreeBranch_C_ExecuteUbergraph_BP_SkillTreeBranch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
