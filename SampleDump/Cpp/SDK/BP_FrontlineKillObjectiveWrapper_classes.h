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

// BlueprintGeneratedClass BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C
// 0x001C (FullSize[0x023C] - InheritedSize[0x0220])
class ABP_FrontlineKillObjectiveWrapper_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_FrontlineKillObjective_C*                KillObjective;                                             // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Weight;                                                    // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlineKillObjectiveWrapper.BP_FrontlineKillObjectiveWrapper_C");
		return ptr;
	}



	void IsInObjectiveArea(const struct FVector& Location, bool* InArea);
	void IsCompleted(bool* Completed);
	void GetObjectiveProgress(float* Progress);
	void OnAnyObjectiveProgressChanged();
	void OnEnemyGainedPrerequisites();
	void OnEnemyLostPrerequisites();
	void OnInitialize(class ABP_CapturePoint_C* Point);
	void OnUpdateUIWidgets();
	void ExecuteUbergraph_BP_FrontlineKillObjectiveWrapper(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
