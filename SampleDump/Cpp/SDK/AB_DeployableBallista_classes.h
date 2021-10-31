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
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_DeployableBallista.AB_DeployableBallista_C
// 0x07E8 (FullSize[0x0B18] - InheritedSize[0x0330])
class UAB_DeployableBallista_C : public UAdvancedCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0338(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x0368(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x0390(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x03B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x03E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x0408(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x0430(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x0458(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x0480(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x04F8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x0528(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x05A0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x05D0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x0648(0x0030)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                           // 0x0678(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x06C0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x06F0(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x07A0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                                // 0x07C0(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x08C8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x08E8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x09F0(0x0108)
	float                                              ReloadTime;                                                // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HasDriverFloat;                                            // 0x0AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LookUp;                                                    // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                State;                                                     // 0x0B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpawnTurnValue;                                            // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Turn;                                                      // 0x0B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Roll;                                                      // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Pitch;                                                     // 0x0B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_DeployableBallista.AB_DeployableBallista_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void CovertWeaponStateToDeployableBallistaState(unsigned char WeaponState, int* BallistaState);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_TransitionResult_C83393044E04E2A35725CEB1DDFA6DE2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_TransitionResult_552B54FC4BC1B95C9D965D87C54EE0A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_TransitionResult_52BE36854EF87D1CD3A735846FBB2A1A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_TransitionResult_A3BE9F424378D3E6FBC1AC9CC07ED668();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_TransitionResult_21CA53CB456341CCC7BD78AE0BE969A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_SequencePlayer_6B0C0AF64AD59F37C07E89A9A170B98F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_TransitionResult_8EA24580488520CBB422EDBE3A398502();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_ModifyBone_C9E6681A49176647A00FCBB075B7E964();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_ModifyBone_79668771469D6679C325ACA4FAF0ACA7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_ModifyBone_6B45609945BD6DCDFE02E59283A9A956();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_DeployableBallista_AnimGraphNode_TransitionResult_FEBC7B2A464D1EAC733E9F9E13D536B4();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void ExecuteUbergraph_AB_DeployableBallista(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
