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

// AnimBlueprintGeneratedClass AB_Catapult.AB_Catapult_C
// 0x0B2C (FullSize[0x0E6C] - InheritedSize[0x0340])
class UAB_Catapult_C : public UWheeledVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0348(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                                // 0x0378(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                                // 0x0480(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x0588(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                                // 0x05A8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                                // 0x06B0(0x0108)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                               // 0x07B8(0x00C8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x0880(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x08A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x08D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x08F8(0x0028)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_2;                              // 0x0920(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x0938(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x0968(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x09E0(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0A10(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x0A30(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x0A50(0x0108)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose;                                // 0x0B58(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x0B70(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x0BA0(0x00B0)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose;                                 // 0x0C50(0x0010)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x0C60(0x0108)
	struct FAnimNode_RotateAroundPivot                 AnimGraphNode_RotateAroundPivot;                           // 0x0D68(0x00F8)
	unsigned char                                      State;                                                     // 0x0E60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V229[0x3];                                     // 0x0E61(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Wheels;                                                    // 0x0E64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Arm;                                                       // 0x0E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Catapult.AB_Catapult_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Catapult_AnimGraphNode_TransitionResult_7273B278483518FF1DB798B016314A32();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Catapult_AnimGraphNode_TransitionResult_6155FBAD424DC5C683D4ADB17AB34213();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Catapult_AnimGraphNode_TransitionResult_1E6F76D64F95614AF00DFEA3F67D3874();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Catapult_AnimGraphNode_ModifyBone_8F6F160B4DA1166B68AEED82AF7616EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Catapult_AnimGraphNode_ModifyBone_F5F2C8AA4499B116587BB7ACF226A888();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Catapult_AnimGraphNode_ModifyBone_83512B50414A15EFBA914DA6D7CB4E2F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Catapult_AnimGraphNode_ModifyBone_6868BA13429991587A91F28A3491FC48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Catapult_AnimGraphNode_TransitionResult_9FD49D60415C8539C8D40A92BDB80AB9();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AB_Catapult(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
