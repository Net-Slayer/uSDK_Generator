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
//		Name   -> Function BP_SkillTree.BP_SkillTree_C.RefreshNodes
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_SkillTree_C::RefreshNodes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkillTree.BP_SkillTree_C.RefreshNodes");

	UBP_SkillTree_C_RefreshNodes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SkillTree.BP_SkillTree_C.GetAllChildren
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<TEnumAsByte<E_HordeSkill_E_HordeSkill>>     OutChildren                                                (Parm, OutParm, HasGetValueTypeHash)
void UBP_SkillTree_C::GetAllChildren(TEnumAsByte<E_HordeSkill_E_HordeSkill> Skill, TArray<TEnumAsByte<E_HordeSkill_E_HordeSkill>>* OutChildren)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkillTree.BP_SkillTree_C.GetAllChildren");

	UBP_SkillTree_C_GetAllChildren_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutChildren != nullptr)
		*OutChildren = params.OutChildren;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SkillTree.BP_SkillTree_C.GetImmediateChildren
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<TEnumAsByte<E_HordeSkill_E_HordeSkill>>     OutChildren                                                (Parm, OutParm, HasGetValueTypeHash)
void UBP_SkillTree_C::GetImmediateChildren(TEnumAsByte<E_HordeSkill_E_HordeSkill> Skill, TArray<TEnumAsByte<E_HordeSkill_E_HordeSkill>>* OutChildren)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkillTree.BP_SkillTree_C.GetImmediateChildren");

	UBP_SkillTree_C_GetImmediateChildren_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutChildren != nullptr)
		*OutChildren = params.OutChildren;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SkillTree.BP_SkillTree_C.Hide
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_SkillTree_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkillTree.BP_SkillTree_C.Hide");

	UBP_SkillTree_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SkillTree.BP_SkillTree_C.OnPreviewKeyDown
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBP_SkillTree_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkillTree.BP_SkillTree_C.OnPreviewKeyDown");

	UBP_SkillTree_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SkillTree.BP_SkillTree_C.Show
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_SkillTree_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkillTree.BP_SkillTree_C.Show");

	UBP_SkillTree_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SkillTree.BP_SkillTree_C.Get_SkillPoints_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_SkillTree_C::Get_SkillPoints_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkillTree.BP_SkillTree_C.Get_SkillPoints_Text_1");

	UBP_SkillTree_C_Get_SkillPoints_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SkillTree.BP_SkillTree_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_SkillTree_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkillTree.BP_SkillTree_C.Construct");

	UBP_SkillTree_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SkillTree.BP_SkillTree_C.On Node Hover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_SkillTreeNode_C*                         Ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SkillTree_C::On_Node_Hover(class UBP_SkillTreeNode_C* Ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkillTree.BP_SkillTree_C.On Node Hover");

	UBP_SkillTree_C_On_Node_Hover_Params params;
	params.Ref = Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SkillTree.BP_SkillTree_C.On Node Clicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_SkillTreeNode_C*                         Ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SkillTree_C::On_Node_Clicked(class UBP_SkillTreeNode_C* Ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkillTree.BP_SkillTree_C.On Node Clicked");

	UBP_SkillTree_C_On_Node_Clicked_Params params;
	params.Ref = Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SkillTree.BP_SkillTree_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_SkillTree_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkillTree.BP_SkillTree_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_SkillTree_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SkillTree.BP_SkillTree_C.ExecuteUbergraph_BP_SkillTree
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SkillTree_C::ExecuteUbergraph_BP_SkillTree(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SkillTree.BP_SkillTree_C.ExecuteUbergraph_BP_SkillTree");

	UBP_SkillTree_C_ExecuteUbergraph_BP_SkillTree_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
