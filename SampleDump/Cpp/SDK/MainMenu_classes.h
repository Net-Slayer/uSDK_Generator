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

// BlueprintGeneratedClass MainMenu.MainMenu_C
// 0x00C8 (FullSize[0x02F0] - InheritedSize[0x0228])
class AMainMenu_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      CursorActor;                                               // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_CharacterDoll_C*>                 Characters;                                                // 0x0238(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	class UBP_MordhauGameInstance_C*                   GameInstance;                                              // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PartySizeOverride;                                         // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B1LC[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTransform>                          PawnTransforms;                                            // 0x0258(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<float>                                      FocalDistances;                                            // 0x0268(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               TestingModeEnabled;                                        // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_21L7[0x3];                                     // 0x0279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                UpdateAllMeshesAtFrame;                                    // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RandomPoseInt;                                             // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowingHalloween;                                          // 0x0284(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A5H4[0x3];                                     // 0x0285(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_CharacterDoll_C*                         BP_CharacterDoll_2_ExecuteUbergraph_MainMenu_RefProperty;  // 0x0288(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CharacterDoll_C*                         BP_CharacterDoll2_ExecuteUbergraph_MainMenu_RefProperty;   // 0x0290(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CharacterDoll_C*                         BP_CharacterDoll3_ExecuteUbergraph_MainMenu_RefProperty;   // 0x0298(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_RandomProfileDoll_C*                     BP_RandomProfileDoll_507_ExecuteUbergraph_MainMenu_RefProperty; // 0x02A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MordhauMainMenuPawn_C*                   BP_MordhauMainMenuPawn_64_ExecuteUbergraph_MainMenu_RefProperty; // 0x02A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CharacterDoll_C*                         BP_CharacterDoll4_ExecuteUbergraph_MainMenu_RefProperty;   // 0x02B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CharacterDoll_C*                         BP_CharacterDoll5_ExecuteUbergraph_MainMenu_RefProperty;   // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                                _2Players_ExecuteUbergraph_MainMenu_RefProperty;           // 0x02C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                                _3Players_ExecuteUbergraph_MainMenu_RefProperty;           // 0x02C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                                _4Players_ExecuteUbergraph_MainMenu_RefProperty;           // 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                                _5Players_ExecuteUbergraph_MainMenu_RefProperty;           // 0x02D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                                _6Players_ExecuteUbergraph_MainMenu_RefProperty;           // 0x02E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Halloween_EdGraph_1_RefProperty;                           // 0x02E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MainMenu.MainMenu_C");
		return ptr;
	}



	void ShowHalloween();
	void SetNewsVisibility(bool Visible);
	void ReceiveTick(float DeltaSeconds);
	void OnPartyUpdated(TArray<struct FPlayFabPlayer> PartyMembers);
	void AddTestCharacter();
	void ExecuteUbergraph_MainMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
