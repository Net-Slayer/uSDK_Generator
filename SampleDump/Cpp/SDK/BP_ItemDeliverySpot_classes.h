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

// BlueprintGeneratedClass BP_ItemDeliverySpot.BP_ItemDeliverySpot_C
// 0x0099 (FullSize[0x0411] - InheritedSize[0x0378])
class ABP_ItemDeliverySpot_C : public AMordhauActor
{
public:
	unsigned char                                      UnknownData_CDXU[0x8];                                     // 0x0378(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMordhauWidgetComponent*                     MordhauWidget;                                             // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                             Decal;                                                     // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Area;                                                      // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Deliverables;                                              // 0x03A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      RequiredDeliveries;                                        // 0x03A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CD2V[0x6];                                     // 0x03A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_CapturePoint_C*                          CapturePoint;                                              // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_ItemDeliverySpawn_C*>             DeliverySpawns;                                            // 0x03B0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<class AActor*>                              DeliveryProgressSpots;                                     // 0x03C0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<class USoundCue*>                           DeliveryProgressSound;                                     // 0x03D0(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class UParticleSystem*>                     DeliveryProgressParticles;                                 // 0x03E0(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	int                                                VisualStage;                                               // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxVisualStage;                                            // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  DeliverySpotDeliverIcon;                                   // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ScoreAwardPerDelivery;                                     // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FlipProgressBar;                                           // 0x0404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_REKS[0x3];                                     // 0x0405(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ObjectiveWeight;                                           // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Progress;                                                  // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OriginalFlipProgressBar;                                   // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemDeliverySpot.BP_ItemDeliverySpot_C");
		return ptr;
	}



	void IsInObjectiveArea(const struct FVector& Location, bool* InArea);
	void IsCompleted(bool* Completed);
	void GetObjectiveProgress(float* Progress);
	void UpdateFlipProgressBarState();
	void UpdateFloater();
	void AnyObjectiveProgressChanged();
	void IsCapturePointDone(bool* IsDone);
	void ActivateSpawns();
	void DisableSpawns();
	void UpdateDeliverySpotVisuals();
	void EnemyLostPrerequisites();
	void EnemyGainedPrerequisites();
	void Initialize(class ABP_CapturePoint_C* CapturePoint);
	void Disable(bool SlowDisable);
	void Activate();
	void OnRep_Deliverables();
	void UserConstructionScript();
	void BndEvt__Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnInitialize(class ABP_CapturePoint_C* Point);
	void OnEnemyGainedPrerequisites();
	void OnEnemyLostPrerequisites();
	void OnUpdateUIWidgets();
	void OnDeliverablesChanged();
	void ProgressVisualStage();
	void OnAnyObjectiveProgressChanged();
	void ExecuteUbergraph_BP_ItemDeliverySpot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
