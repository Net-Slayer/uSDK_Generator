#pragma once

// Name: Mordhau, Version: 4_25_hotfix


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_BallistaFix.AB_BallistaFix_C
// 0x06E8 (FullSize[0x0A18] - InheritedSize[0x0330])
class UAB_BallistaFix_C : public UAdvancedCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0338(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x0368(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x0390(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x03B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x03E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x0408(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x0430(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x04A8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x04D8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x0550(0x0030)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                           // 0x0580(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x05C8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x05F8(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x06A8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                                // 0x06C8(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x07D0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x07F0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x08F8(0x0108)
	int                                                State;                                                     // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LookUp;                                                    // 0x0A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Turn;                                                      // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpawnTurnValue;                                            // 0x0A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HasDriverFloat;                                            // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReloadTime;                                                // 0x0A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_BallistaFix.AB_BallistaFix_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ConvertWeaponStateToBallistaState(int WeaponState, int* BallistaState);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_3E29D7084497949F76E9F5918AF91DDC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_29B281684D28C7AF35CCA0B944D2E0DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_E274503849BC207BAA7C548DFD4347B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_SequencePlayer_3CCE4D93491F6E806F32E1926BBFB355();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_CA8A52954199C3DE488FC5B003D5BE99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_ModifyBone_09BD16F548497D6A319D8E8D55BD1BEB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_ModifyBone_7BA49A1B438B3F96C4D37E80AFBE0D9C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_ModifyBone_DAB5C4564263778DC95EE09EF85BDA6B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_33EE963C4FA311C985F8BA888A857377();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void ExecuteUbergraph_AB_BallistaFix(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
