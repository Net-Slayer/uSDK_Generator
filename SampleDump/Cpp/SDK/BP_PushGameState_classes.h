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

// BlueprintGeneratedClass BP_PushGameState.BP_PushGameState_C
// 0x0020 (FullSize[0x0900] - InheritedSize[0x08E0])
class ABP_PushGameState_C : public ABP_FrontlineGameState_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x08E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ForwardSpawnUntil;                                         // 0x08E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KRTR[0x4];                                     // 0x08EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      TimeLeftPerCompletedStage;                                 // 0x08F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PushGameState.BP_PushGameState_C");
		return ptr;
	}



	void GetScoreboardTimeInProgress(struct FTimespan* Time);
	void GetScoreboardObjectiveName(struct FText* NewParam);
	void GetScoreboardTeamObjectiveValue(int Team, struct FString* Output);
	void HandleMatchEndInfo();
	void ExecuteUbergraph_BP_PushGameState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
