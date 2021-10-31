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

// BlueprintGeneratedClass BP_FrontlineDestroyable.BP_FrontlineDestroyable_C
// 0x0040 (FullSize[0x04A0] - InheritedSize[0x0460])
class ABP_FrontlineDestroyable_C : public ABP_DestroyableActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMordhauWidgetComponent*                     MordhauWidget;                                             // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_CapturePoint_C*                          CapturePoint;                                              // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauPlayerController*                    LastDamagedByPlayerController;                             // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ScoreAwardedPerDestroy;                                    // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SHUW[0x4];                                     // 0x0484(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             FinalMeshChangeParticle;                                   // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScoreDamageMultiplier;                                     // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDamagePerHit;                                           // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CapturePointObjectivesCompleted;                           // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CGHO[0x3];                                     // 0x0499(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ObjectiveWeight;                                           // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlineDestroyable.BP_FrontlineDestroyable_C");
		return ptr;
	}



	void IsInObjectiveArea(const struct FVector& Location, bool* InArea);
	void IsCompleted(bool* Completed);
	void GetObjectiveProgress(float* Progress);
	void UpdateUIWidgets();
	void EnemyLostPrerequisites();
	void EnemyGainedPrerequisites();
	void Initialize(class ABP_CapturePoint_C* InCapturePoint);
	void ReceiveBeginPlay();
	void OnReplicatedHealthChanged();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnEnemyGainedPrerequisites();
	void OnEnemyLostPrerequisites();
	void OnUpdateUIWidgets();
	void OnInitialize(class ABP_CapturePoint_C* Point);
	void OnAnyObjectiveProgressChanged();
	void ExecuteUbergraph_BP_FrontlineDestroyable(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
