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

// BlueprintGeneratedClass BP_CapturePoint.BP_CapturePoint_C
// 0x0100 (FullSize[0x0438] - InheritedSize[0x0338])
class ABP_CapturePoint_C : public AControlPoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0338(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                             Decal;                                                     // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        CaptureAreaCollision;                                      // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMordhauWidgetComponent*                     MordhauWidget;                                             // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_CapPointWidget_C*                        TopBar_Cap_Point_Widget;                                   // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_CapPointTeamBaseWidget_C*                TopBar_Cap_Point_TeamBase_Widget;                          // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Objectives[0x10];                                          // 0x0368(0x0010) UNKNOWN PROPERTY: ArrayProperty
	TArray<class ABP_FrontlineDestroyable_C*>          Destroyables;                                              // 0x0378(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<class ABP_ItemDeliverySpot_C*>              DeliverySpots;                                             // 0x0388(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<class ABP_FrontlinePushable_C*>             Pushables;                                                 // 0x0398(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<class ABP_FrontlineInteractable_C*>         Interactables;                                             // 0x03A8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<class ABP_FrontlineKillObjectiveWrapper_C*> Kill;                                                      // 0x03B8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<class ABP_DummyObjective_C*>                Dummy;                                                     // 0x03C8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	float                                              ObjectiveProgress;                                         // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4RLN[0x4];                                     // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBP_CapPointWidget_C*                        SpawnPointWidget;                                          // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_FloatingCapPointWidget_C*                FloaterWidget;                                             // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowAnnouncements;                                         // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5FL2[0x7];                                     // 0x03F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  Icon;                                                      // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ObjectiveAttack;                                           // 0x0400(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ObjectiveDefend;                                           // 0x0418(0x0018) (Edit, BlueprintVisible)
	float                                              ObjectiveWinDelay;                                         // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPushPoint;                                               // 0x0434(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ObjectivesCompleted;                                       // 0x0435(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FlashShouldOnlyPulse;                                      // 0x0436(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HideOnSpawnScreen;                                         // 0x0437(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_CapturePoint.BP_CapturePoint_C");
		return ptr;
	}



	void OnObjectivesCompleted();
	void ShowPushDefenderAnnouncement();
	void ShowPushAttackerAnnouncement();
	void ObjectivesChanged();
	void Set_Cap_Point_Widget_Colors(const struct FLinearColor& Fill_Color, const struct FLinearColor& Progress_Bar_Color);
	void GetTeamRelevance(unsigned char Team, int* Relevance);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnCapturingTeamChanged();
	void OnOwningTeamChanged();
	void EnemyGainedPrerequisites();
	void EnemyLostPrerequisites();
	void UpdateUIWidgets();
	void OnStartedFlashing();
	void OnStoppedFlashing();
	void TriggerWinDelayed();
	void Pulse();
	void ExecuteUbergraph_BP_CapturePoint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
