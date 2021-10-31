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

// BlueprintGeneratedClass BP_FrontlinePushable.BP_FrontlinePushable_C
// 0x0034 (FullSize[0x0460] - InheritedSize[0x042C])
class ABP_FrontlinePushable_C : public ABP_SplinePushableActor_C
{
public:
	unsigned char                                      UnknownData_IE2K[0x4];                                     // 0x042C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                             AreaDecal;                                                 // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMordhauWidgetComponent*                     MordhauWidget;                                             // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_CapturePoint_C*                          CapturePoint;                                              // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ObjectiveWeight;                                           // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CNOT[0x4];                                     // 0x0454(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture*                                    PushIcon;                                                  // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlinePushable.BP_FrontlinePushable_C");
		return ptr;
	}



	void IsInObjectiveArea(const struct FVector& Location, bool* InArea);
	void IsCompleted(bool* Completed);
	void GetObjectiveProgress(float* Progress);
	void UpdateUIWidgets();
	void EnemyLostPrerequisites();
	void EnemyGainedPrerequisites();
	void Initialize(class ABP_CapturePoint_C* CapturePoint);
	void OnProgressUpdated(float OldProgress);
	void OnInitialize(class ABP_CapturePoint_C* Point);
	void OnEnemyLostPrerequisites();
	void OnEnemyGainedPrerequisites();
	void OnUpdateUIWidgets();
	void PushableArrivedAtDestination();
	void OnAnyObjectiveProgressChanged();
	void ExecuteUbergraph_BP_FrontlinePushable(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
