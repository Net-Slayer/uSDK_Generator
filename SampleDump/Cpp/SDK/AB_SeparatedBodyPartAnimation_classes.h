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

// AnimBlueprintGeneratedClass AB_SeparatedBodyPartAnimation.AB_SeparatedBodyPartAnimation_C
// 0x1868 (FullSize[0x1AF8] - InheritedSize[0x0290])
class UAB_SeparatedBodyPartAnimation_C : public USeparatedBodyPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0298(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_22;                               // 0x02C8(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x03D0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_21;                               // 0x03F0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_20;                               // 0x04F8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_19;                               // 0x0600(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_18;                               // 0x0708(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_17;                               // 0x0810(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_16;                               // 0x0918(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_15;                               // 0x0A20(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_14;                               // 0x0B28(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_13;                               // 0x0C30(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_12;                               // 0x0D38(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_11;                               // 0x0E40(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_10;                               // 0x0F48(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9;                                // 0x1050(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8;                                // 0x1158(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7;                                // 0x1260(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                                // 0x1368(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                                // 0x1470(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x1578(0x0020)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                            // 0x1598(0x0140) (ContainsInstancedReference)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                                // 0x16D8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                                // 0x17E0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x18E8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x19F0(0x0108)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_SeparatedBodyPartAnimation.AB_SeparatedBodyPartAnimation_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_97B9A53A40B24B1A5BD9BCA78752A1FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_E4E2620A4C7E5FB60956C8898B81C841();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_4874E7A04D0B5B6F896B7B824E392529();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_5A6D6B314896FA9A711CECBD5BDF9710();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_DCC4E1234B517907BB2B628F69A4F982();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_B6B5F82E413CCFBEF987DABC3F4BD389();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_03225C0A4496309F454D7D874B04B2B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_69B7BD1C47756C7972809DA58246A1DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_9D602F84464C3C2480868286C1D1A17C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_2FE1030745A992B635EB97B22A759148();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_1874784A4B48E2EEE4D6179488FAFC2A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_036A97B549840FAEB44CBA811F253241();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_822820C944C991A7D0BA3790042313F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_25E663404C43DF66B5083A84D5181AFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_6BF708FA4D891639A51EA99A7967F8E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_930C3B6441A6A7ECA383F18CBD6E4537();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_60A469C64C8D0B97675B22B6FA7A305F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_57F8EEB4490129965E95BFB605EBD796();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_19AC3A2D472A063391936984092453E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_CC7342EE4E85EF327E83B28DFF90547D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_B63440E24C48A2A1E9444A8B022A39F0();
	void ExecuteUbergraph_AB_SeparatedBodyPartAnimation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
