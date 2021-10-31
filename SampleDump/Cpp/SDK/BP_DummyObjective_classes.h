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

// BlueprintGeneratedClass BP_DummyObjective.BP_DummyObjective_C
// 0x0038 (FullSize[0x03B0] - InheritedSize[0x0378])
class ABP_DummyObjective_C : public AMordhauActor
{
public:
	unsigned char                                      UnknownData_52KZ[0x8];                                     // 0x0378(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Sphere;                                                    // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMordhauWidgetComponent*                     MordhauWidget;                                             // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_CapturePoint_C*                          CapturePoint;                                              // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  AttackerIcon;                                              // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  DefenderIcon;                                              // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DummyObjective.BP_DummyObjective_C");
		return ptr;
	}



	void IsInObjectiveArea(const struct FVector& Location, bool* InArea);
	void IsCompleted(bool* Completed);
	void GetObjectiveProgress(float* Progress);
	void AnyObjectiveProgressChanged();
	void IsCapturePointDone(bool* IsDone);
	void EnemyLostPrerequisites();
	void EnemyGainedPrerequisites();
	void Initialize(class ABP_CapturePoint_C* CapturePoint);
	void Disable();
	void Activate();
	void OnInitialize(class ABP_CapturePoint_C* Point);
	void OnEnemyGainedPrerequisites();
	void OnEnemyLostPrerequisites();
	void OnUpdateUIWidgets();
	void OnAnyObjectiveProgressChanged();
	void ExecuteUbergraph_BP_DummyObjective(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
