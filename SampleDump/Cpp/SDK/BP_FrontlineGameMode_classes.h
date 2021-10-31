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

// BlueprintGeneratedClass BP_FrontlineGameMode.BP_FrontlineGameMode_C
// 0x000C (FullSize[0x05D4] - InheritedSize[0x05C8])
class ABP_FrontlineGameMode_C : public ABP_MordhauGameMode_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              DeathTicketCost;                                           // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlineGameMode.BP_FrontlineGameMode_C");
		return ptr;
	}



	void MatchTimeRanOut();
	void OnTeamScoreChanged(int Team, float OldValue);
	void OnKilled(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, Mordhau_EMordhauDamageType Type, unsigned char SubType, class AActor* DamageSource, class AActor* DamageAgent);
	void ExecuteUbergraph_BP_FrontlineGameMode(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
