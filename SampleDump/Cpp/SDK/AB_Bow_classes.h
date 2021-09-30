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

// AnimBlueprintGeneratedClass AB_Bow.AB_Bow_C
// 0x01B4 (FullSize[0x041C] - InheritedSize[0x0268])
class UAB_Bow_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_2IVE[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x02A8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                                // 0x02F0(0x0018)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                 // 0x0308(0x00C8)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                           // 0x03D0(0x0048)
	float                                              LoadedIn1P;                                                // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Bow.AB_Bow_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AB_Bow(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
