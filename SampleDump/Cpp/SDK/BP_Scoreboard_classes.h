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

// WidgetBlueprintGeneratedClass BP_Scoreboard.BP_Scoreboard_C
// 0x004C (FullSize[0x027C] - InheritedSize[0x0230])
class UBP_Scoreboard_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UBP_ScoreboardTeamEntries_C*>         TeamEntries;                                               // 0x0238(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UHorizontalBox*>                      TeamBoxes;                                                 // 0x0248(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<int>                                        PlayerCounts;                                              // 0x0258(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class AMordhauPlayerState*>                 Players;                                                   // 0x0268(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TEnumAsByte<E_ScoreboardEntryTypes_E_ScoreboardEntryTypes> Scoreboard_Entry_Type;                                     // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               Use_Gamestate_Entry_Type;                                  // 0x0279(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               Should_Keep_Local_Entry_in_View;                           // 0x027A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               isShowing;                                                 // 0x027B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Scoreboard.BP_Scoreboard_C");
		return ptr;
	}



	void Open_Menu_Scoreboard();
	void Get_Team_Color(int Team, struct FLinearColor* Output__Linear_, struct FSlateColor* Output__Slate_);
	void Update();
	void Refresh(class AMordhauPlayerState* PlayerState);
	void GetMaxPlayers(int DivideBy, int* Text);
	void GetServerName(struct FText* Text);
	void GetMapName(struct FText* Text);
	void GetTeamObjectiveValue(int Team, struct FText* Text);
	void GetTeam2ObjectiveValue(struct FText* Text);
	void GetTeam1ObjectiveValue(struct FText* Text);
	void GetObjectiveName(struct FText* Text);
	void GetGameModeName(struct FText* Text);
	void GetTeam2Players(struct FText* Text);
	void GetTeam1Players(struct FText* Text);
	void GetTeamPlayers(int Team, struct FText* Text);
	void GetTeam2Name(struct FText* Text);
	void GetTeamName(int Team, struct FText* Text);
	void GetTeam1Name(struct FText* Text);
	void GetScoreboardTime(struct FText* Time);
	void Hide();
	void Show();
	void Refresh_Players_Array();
	void Construct();
	void ExecuteUbergraph_BP_Scoreboard(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
