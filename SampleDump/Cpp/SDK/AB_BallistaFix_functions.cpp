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
//		Name   -> Function AB_BallistaFix.AB_BallistaFix_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UAB_BallistaFix_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_BallistaFix.AB_BallistaFix_C.AnimGraph");

	UAB_BallistaFix_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function AB_BallistaFix.AB_BallistaFix_C.ConvertWeaponStateToBallistaState
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                WeaponState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BallistaState                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_BallistaFix_C::ConvertWeaponStateToBallistaState(int WeaponState, int* BallistaState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_BallistaFix.AB_BallistaFix_C.ConvertWeaponStateToBallistaState");

	UAB_BallistaFix_C_ConvertWeaponStateToBallistaState_Params params;
	params.WeaponState = WeaponState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BallistaState != nullptr)
		*BallistaState = params.BallistaState;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function AB_BallistaFix.AB_BallistaFix_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_3E29D7084497949F76E9F5918AF91DDC
//		Flags  -> (BlueprintEvent)
void UAB_BallistaFix_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_3E29D7084497949F76E9F5918AF91DDC()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_BallistaFix.AB_BallistaFix_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_3E29D7084497949F76E9F5918AF91DDC");

	UAB_BallistaFix_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_3E29D7084497949F76E9F5918AF91DDC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function AB_BallistaFix.AB_BallistaFix_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_29B281684D28C7AF35CCA0B944D2E0DD
//		Flags  -> (BlueprintEvent)
void UAB_BallistaFix_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_29B281684D28C7AF35CCA0B944D2E0DD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_BallistaFix.AB_BallistaFix_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_29B281684D28C7AF35CCA0B944D2E0DD");

	UAB_BallistaFix_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_29B281684D28C7AF35CCA0B944D2E0DD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function AB_BallistaFix.AB_BallistaFix_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_E274503849BC207BAA7C548DFD4347B1
//		Flags  -> (BlueprintEvent)
void UAB_BallistaFix_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_E274503849BC207BAA7C548DFD4347B1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_BallistaFix.AB_BallistaFix_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_E274503849BC207BAA7C548DFD4347B1");

	UAB_BallistaFix_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_E274503849BC207BAA7C548DFD4347B1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function AB_BallistaFix.AB_BallistaFix_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_SequencePlayer_3CCE4D93491F6E806F32E1926BBFB355
//		Flags  -> (BlueprintEvent)
void UAB_BallistaFix_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_SequencePlayer_3CCE4D93491F6E806F32E1926BBFB355()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_BallistaFix.AB_BallistaFix_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_SequencePlayer_3CCE4D93491F6E806F32E1926BBFB355");

	UAB_BallistaFix_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_SequencePlayer_3CCE4D93491F6E806F32E1926BBFB355_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function AB_BallistaFix.AB_BallistaFix_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_CA8A52954199C3DE488FC5B003D5BE99
//		Flags  -> (BlueprintEvent)
void UAB_BallistaFix_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_CA8A52954199C3DE488FC5B003D5BE99()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_BallistaFix.AB_BallistaFix_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_CA8A52954199C3DE488FC5B003D5BE99");

	UAB_BallistaFix_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_CA8A52954199C3DE488FC5B003D5BE99_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function AB_BallistaFix.AB_BallistaFix_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_ModifyBone_09BD16F548497D6A319D8E8D55BD1BEB
//		Flags  -> (BlueprintEvent)
void UAB_BallistaFix_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_ModifyBone_09BD16F548497D6A319D8E8D55BD1BEB()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_BallistaFix.AB_BallistaFix_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_ModifyBone_09BD16F548497D6A319D8E8D55BD1BEB");

	UAB_BallistaFix_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_ModifyBone_09BD16F548497D6A319D8E8D55BD1BEB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function AB_BallistaFix.AB_BallistaFix_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_ModifyBone_7BA49A1B438B3F96C4D37E80AFBE0D9C
//		Flags  -> (BlueprintEvent)
void UAB_BallistaFix_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_ModifyBone_7BA49A1B438B3F96C4D37E80AFBE0D9C()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_BallistaFix.AB_BallistaFix_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_ModifyBone_7BA49A1B438B3F96C4D37E80AFBE0D9C");

	UAB_BallistaFix_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_ModifyBone_7BA49A1B438B3F96C4D37E80AFBE0D9C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function AB_BallistaFix.AB_BallistaFix_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_ModifyBone_DAB5C4564263778DC95EE09EF85BDA6B
//		Flags  -> (BlueprintEvent)
void UAB_BallistaFix_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_ModifyBone_DAB5C4564263778DC95EE09EF85BDA6B()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_BallistaFix.AB_BallistaFix_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_ModifyBone_DAB5C4564263778DC95EE09EF85BDA6B");

	UAB_BallistaFix_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_ModifyBone_DAB5C4564263778DC95EE09EF85BDA6B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function AB_BallistaFix.AB_BallistaFix_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_33EE963C4FA311C985F8BA888A857377
//		Flags  -> (BlueprintEvent)
void UAB_BallistaFix_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_33EE963C4FA311C985F8BA888A857377()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_BallistaFix.AB_BallistaFix_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_33EE963C4FA311C985F8BA888A857377");

	UAB_BallistaFix_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_33EE963C4FA311C985F8BA888A857377_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function AB_BallistaFix.AB_BallistaFix_C.BlueprintUpdateAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_BallistaFix_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_BallistaFix.AB_BallistaFix_C.BlueprintUpdateAnimation");

	UAB_BallistaFix_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function AB_BallistaFix.AB_BallistaFix_C.BlueprintBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UAB_BallistaFix_C::BlueprintBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_BallistaFix.AB_BallistaFix_C.BlueprintBeginPlay");

	UAB_BallistaFix_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function AB_BallistaFix.AB_BallistaFix_C.ExecuteUbergraph_AB_BallistaFix
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_BallistaFix_C::ExecuteUbergraph_AB_BallistaFix(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_BallistaFix.AB_BallistaFix_C.ExecuteUbergraph_AB_BallistaFix");

	UAB_BallistaFix_C_ExecuteUbergraph_AB_BallistaFix_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
