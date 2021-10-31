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

// BlueprintGeneratedClass BP_FrontlineInteractable.BP_FrontlineInteractable_C
// 0x0040 (FullSize[0x03B8] - InheritedSize[0x0378])
class ABP_FrontlineInteractable_C : public AMordhauActor
{
public:
	unsigned char                                      UnknownData_59MF[0x8];                                     // 0x0378(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                             Decal;                                                     // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMordhauWidgetComponent*                     MordhauWidget;                                             // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Interactions;                                              // 0x0398(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      RequiredInteractions;                                      // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RU3L[0x6];                                     // 0x039A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_CapturePoint_C*                          CapturePoint;                                              // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  ObjectiveIcon;                                             // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ScoreAwardPerInteract;                                     // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ObjectiveWeight;                                           // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlineInteractable.BP_FrontlineInteractable_C");
		return ptr;
	}



	void IsInObjectiveArea(const struct FVector& Location, bool* InArea);
	void IsCompleted(bool* Completed);
	void GetObjectiveProgress(float* Progress);
	void UpdateUIWidgets();
	bool CanHeldInteract(class AMordhauCharacter* Character);
	bool CanInteract(class AMordhauCharacter* Character);
	void IncrementInteractions(class AController* Interactor);
	void OnRep_Interactions();
	void EnemyLostPrerequisites();
	void EnemyGainedPrerequisites();
	void Initialize(class ABP_CapturePoint_C* CapturePoint);
	void Disable();
	void Activate();
	void OnInitialize(class ABP_CapturePoint_C* Point);
	void OnEnemyGainedPrerequisites();
	void OnEnemyLostPrerequisites();
	void OnUpdateUIWidgets();
	void OnInteractionsChanged();
	void ProgressVisualStage();
	void OnHeldInteractionStart(class AMordhauCharacter* Character);
	void OnAnyObjectiveProgressChanged();
	void OnInteractionStart(class AMordhauCharacter* Character);
	void ExecuteUbergraph_BP_FrontlineInteractable(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
