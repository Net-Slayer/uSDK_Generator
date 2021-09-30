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

// AnimBlueprintGeneratedClass Crossbow_AB.Crossbow_AB_C
// 0x01E4 (FullSize[0x044C] - InheritedSize[0x0268])
class UCrossbow_AB_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_42V8[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x02A8(0x0048)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                 // 0x02F0(0x00C8)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_2;                         // 0x03B8(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                           // 0x0400(0x0048)
	float                                              Loaded;                                                    // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Crossbow_AB.Crossbow_AB_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Crossbow_AB(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
