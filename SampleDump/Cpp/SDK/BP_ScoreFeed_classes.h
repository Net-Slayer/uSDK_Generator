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

// WidgetBlueprintGeneratedClass BP_ScoreFeed.BP_ScoreFeed_C
// 0x00AC (FullSize[0x02DC] - InheritedSize[0x0230])
class UBP_ScoreFeed_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            NegativeAnim_917;                                          // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            PositiveAnim;                                              // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            NegativeAnim;                                              // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Anim;                                                      // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeAnim;                                                  // 0x0258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                     Border_1;                                                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  CollectedPointText;                                        // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Line;                                                      // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ScrollBox_55;                                              // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_3;                                             // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              CurrentPoints;                                             // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2JS2[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FText>                               RandomSuicideTextList;                                     // 0x0290(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FText>                               RandomKillTextList;                                        // 0x02A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UBP_ScoreEntry_C*>                    Entries;                                                   // 0x02B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FText                                       CurrentPointsText;                                         // 0x02C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              NewPoints;                                                 // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ScoreFeed.BP_ScoreFeed_C");
		return ptr;
	}



	void AddStructureDamage(float Points);
	void AddVehicleDamage(float Points);
	void AddVehicleTeamDamage(float Points);
	void AddRepair(float Points);
	void AddObjective(float Points);
	void AddWaveCleared(float Points);
	void AddHeal(float Points);
	void AddNeutralized(float Points);
	void AddNeutralizing(float Points);
	void AddCaptured(float Points);
	void AddCapturing(float Points);
	void AddHeadshot(float Points);
	void UpdateCurrentPointsText();
	void UpdateComboVisibility(bool ShouldHide);
	void RemoveFromFeed(class UBP_ScoreEntry_C* ToRemove);
	void AddTeamDamage(float Points);
	void AddDamage(float Points, int HitZone);
	void CollectPoints(float Points);
	void AddSuicide(float Points);
	void AddTeamKill(float Points, const struct FString& Name);
	void AddAssist(float Points);
	void AddKill(float Points, const struct FString& Name);
	void AddEntry(float Points, const struct FString& PlayerName, const struct FText& Label, bool CanGroup);
	void Construct();
	void WidgetAnimationEvt_FadeAnim_K2Node_WidgetAnimationEvent_1();
	void ExecuteUbergraph_BP_ScoreFeed(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
