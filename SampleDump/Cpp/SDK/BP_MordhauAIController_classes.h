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

// BlueprintGeneratedClass BP_MordhauAIController.BP_MordhauAIController_C
// 0x0038 (FullSize[0x0638] - InheritedSize[0x0600])
class ABP_MordhauAIController_C : public AMordhauAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0600(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       PerceivesEnemyKey;                                         // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PerceivesAllyKey;                                          // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       MoveDestinationKey;                                        // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       TargetLocationKey;                                         // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                               BehaviorTree;                                              // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauCharacter*                           LastPossessedCharacter;                                    // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauAIController.BP_MordhauAIController_C");
		return ptr;
	}



	void GetTeamFilterClass(class UClass** FilterClass);
	void ReceivePossess(class APawn* PossessedPawn);
	void OnAfterUnPossess();
	void ReceiveBeginPlay();
	void OnStartedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, const struct FPerceptionInfo& PerceptionInfo);
	void OnStoppedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, const struct FPerceptionInfo& PerceptionInfo);
	void ExecuteUbergraph_BP_MordhauAIController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
