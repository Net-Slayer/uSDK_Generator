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

// BlueprintGeneratedClass BP_SceneProgressActor.BP_SceneProgressActor_C
// 0x0070 (FullSize[0x02E0] - InheritedSize[0x0270])
class ABP_SceneProgressActor_C : public ABP_BaseProgressActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             Holder;                                                    // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  TargetTransform;                                           // 0x0280(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                                  StartTransform;                                            // 0x02B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SceneProgressActor.BP_SceneProgressActor_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ProgressUpdated(float Progress);
	void ExecuteUbergraph_BP_SceneProgressActor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
