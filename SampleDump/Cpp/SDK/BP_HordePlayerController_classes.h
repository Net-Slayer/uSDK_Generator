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

// BlueprintGeneratedClass BP_HordePlayerController.BP_HordePlayerController_C
// 0x00C8 (FullSize[0x0E31] - InheritedSize[0x0D69])
class ABP_HordePlayerController_C : public ABP_MordhauPlayerController_C
{
public:
	unsigned char                                      UnknownData_03BG[0x7];                                     // 0x0D69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0D70(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      PurchaseTrigger;                                           // 0x0D78(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S677[0x7];                                     // 0x0D79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TEnumAsByte<E_HordeSkill_E_HordeSkill>, TEnumAsByte<E_HordeSkill_E_HordeSkill>> SkillPrerequisites;                                        // 0x0D80(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<TEnumAsByte<E_HordeSkill_E_HordeSkill>, struct FSTRUCT_HordeSkillInfo> SkillInfo;                                                 // 0x0DD0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AvoidScattershotRecursion;                                 // 0x0E20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      BackstabCounter;                                           // 0x0E21(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      CriticalCounter;                                           // 0x0E22(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E0U1[0x1];                                     // 0x0E23(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NextSpecialTime;                                           // 0x0E24(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_HordeSkill_E_HordeSkill>             SpecialSkill;                                              // 0x0E28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UJDC[0x3];                                     // 0x0E29(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpecialTriggeredTime;                                      // 0x0E2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NewHorde;                                                  // 0x0E30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordePlayerController.BP_HordePlayerController_C");
		return ptr;
	}



	void GetScaledSkillLevelParams(TEnumAsByte<E_HordeSkill_E_HordeSkill> Skill, int Bias, float* PercentA, float* PercentB, int* IntegerA, float* TimeA);
	void OnRep_NextSpecialTime();
	void OnRep_CriticalCounter();
	void OnRep_BackstabCounter();
	void GetDiscountedPrice(int BasePrice, int* DiscountedPrice);
	void AssignFireArrowValues(class AActor* Arrow);
	void TryScatterShot(class AMordhauProjectile* SourceProjectile);
	void TryFletcherRestock();
	void GetSkillLevelFloat(TEnumAsByte<E_HordeSkill_E_HordeSkill> Skill, float* SkillLevel);
	void SkillsUpdated();
	void HasPrerequisite(TEnumAsByte<E_HordeSkill_E_HordeSkill> Skill, bool* Result);
	void GetSkillLevel(TEnumAsByte<E_HordeSkill_E_HordeSkill> Skill, unsigned char* Level);
	void UpgradeSkill(TEnumAsByte<E_HordeSkill_E_HordeSkill> Skill, bool* Success);
	void CustomizeEquipment(class AMordhauEquipment* Equipment);
	void OnRep_PurchaseTrigger();
	void InpActEvt_Battlecry_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Battlecry_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Show_Profile_Select_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void OnAfterPossess(class APawn* APawn);
	void OnBuilt(class AActor* Structure);
	void RequestUpgradeSkill(TEnumAsByte<E_HordeSkill_E_HordeSkill> Skill);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_HordePlayerController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
