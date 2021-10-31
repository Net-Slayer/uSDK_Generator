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

// Function BP_SkillTree.BP_SkillTree_C.RefreshNodes
struct UBP_SkillTree_C_RefreshNodes_Params
{
};

// Function BP_SkillTree.BP_SkillTree_C.GetAllChildren
struct UBP_SkillTree_C_GetAllChildren_Params
{
	TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TEnumAsByte<E_HordeSkill_E_HordeSkill>>     OutChildren;                                               // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_SkillTree.BP_SkillTree_C.GetImmediateChildren
struct UBP_SkillTree_C_GetImmediateChildren_Params
{
	TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TEnumAsByte<E_HordeSkill_E_HordeSkill>>     OutChildren;                                               // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_SkillTree.BP_SkillTree_C.Hide
struct UBP_SkillTree_C_Hide_Params
{
};

// Function BP_SkillTree.BP_SkillTree_C.OnPreviewKeyDown
struct UBP_SkillTree_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function BP_SkillTree.BP_SkillTree_C.Show
struct UBP_SkillTree_C_Show_Params
{
};

// Function BP_SkillTree.BP_SkillTree_C.Get_SkillPoints_Text_1
struct UBP_SkillTree_C_Get_SkillPoints_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_SkillTree.BP_SkillTree_C.Construct
struct UBP_SkillTree_C_Construct_Params
{
};

// Function BP_SkillTree.BP_SkillTree_C.On Node Hover
struct UBP_SkillTree_C_On_Node_Hover_Params
{
	class UBP_SkillTreeNode_C*                         Ref;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SkillTree.BP_SkillTree_C.On Node Clicked
struct UBP_SkillTree_C_On_Node_Clicked_Params
{
	class UBP_SkillTreeNode_C*                         Ref;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SkillTree.BP_SkillTree_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_SkillTree_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_SkillTree.BP_SkillTree_C.ExecuteUbergraph_BP_SkillTree
struct UBP_SkillTree_C_ExecuteUbergraph_BP_SkillTree_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
