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

// AnimBlueprintGeneratedClass AB_Chest.AB_Chest_C
// 0x0441 (FullSize[0x06A9] - InheritedSize[0x0268])
class UAB_Chest_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_I566[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0030)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose;                                 // 0x02A8(0x0010)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                                // 0x02B8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x03C0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x04C8(0x0108)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x05D0(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0670(0x0020)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                                // 0x0690(0x0018)
	bool                                               Opened;                                                    // 0x06A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Chest.AB_Chest_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AB_Chest(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
