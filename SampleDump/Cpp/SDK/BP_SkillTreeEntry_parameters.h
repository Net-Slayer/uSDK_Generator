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

// Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.Clear Branches
struct UBP_SkillTreeEntry_C_Clear_Branches_Params
{
};

// Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.AddBranch
struct UBP_SkillTreeEntry_C_AddBranch_Params
{
	class UBP_SkillTreeBranch_C*                       Branch;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.Construct
struct UBP_SkillTreeEntry_C_Construct_Params
{
};

// Function BP_SkillTreeEntry.BP_SkillTreeEntry_C.ExecuteUbergraph_BP_SkillTreeEntry
struct UBP_SkillTreeEntry_C_ExecuteUbergraph_BP_SkillTreeEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
