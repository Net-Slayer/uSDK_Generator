#pragma once

// Name: Mordhau, Version: Patch23


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.Clear
struct UBP_SkillTreeBranch_C_Clear_Params
{
};

// Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.AddNodeToBranch
struct UBP_SkillTreeBranch_C_AddNodeToBranch_Params
{
	TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SkillTreeNode_C*                         Node;                                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.Construct
struct UBP_SkillTreeBranch_C_Construct_Params
{
};

// Function BP_SkillTreeBranch.BP_SkillTreeBranch_C.ExecuteUbergraph_BP_SkillTreeBranch
struct UBP_SkillTreeBranch_C_ExecuteUbergraph_BP_SkillTreeBranch_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
