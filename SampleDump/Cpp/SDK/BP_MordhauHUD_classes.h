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

// BlueprintGeneratedClass BP_MordhauHUD.BP_MordhauHUD_C
// 0x0148 (FullSize[0x0470] - InheritedSize[0x0328])
class ABP_MordhauHUD_C : public AMordhauHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                         Widgets;                                                   // 0x0338(0x0010) (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_HUDWidget_C*                             HUD;                                                       // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Scoreboard_C*                            Scoreboard;                                                // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ChatBox_C*                               ChatBox;                                                   // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_KillFeed_C*                              KillFeed;                                                  // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_StatusBar_C*                             StatusBar;                                                 // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_BaseMainMenu_C*                          MainMenu;                                                  // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHUDMinimal;                                              // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RLQS[0x7];                                     // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBP_Crosshair_C*                             Crosshair;                                                 // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_TargetInfo_C*                            TargetInfo;                                                // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ProfileSelect_C*                         ProfileSelect;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_TeamSelect_C*                            TeamSelect;                                                // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_EmoteMenu_C*                             EmoteMenu;                                                 // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Announcement_C*                          Announcement;                                              // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Watermark_C*                             Watermark;                                                 // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShowWatermark;                                            // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UK85[0x7];                                     // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMordhauDialog*>                      QueuedDialogs;                                             // 0x03C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class UMordhauDialog*                              CurrentDialog;                                             // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_EquipmentDisplay_C*                      EquipmentDisplay;                                          // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SpawnInfo_C*                             SpawnInfo;                                                 // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_NetIndicator_C*                          NetIndicator;                                              // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Tips_C*                                  Tips;                                                      // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ScoreFeed_C*                             ScoreFeed;                                                 // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_EquipmentInfoDisplay_C*                  EquipmentInfoDisplay;                                      // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_VoiceMenu_C*                             VoiceMenu;                                                 // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_BaseSpawnScreen_C*                       SpawnScreen;                                               // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Objectives_C*                            Objectives;                                                // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_KilledByPanel_C*                         KilledByPanel;                                             // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      SpawnScreenWidgetClass;                                    // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_GenericEndScreen_C*                      End_Screen;                                                // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_VoteKickMenu_C*                          VoteKickMenu;                                              // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ContextPopupWrapper_C*                   ContextPopupWrapper;                                       // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MOTD_C*                                  MOTD;                                                      // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_HUDButtonPrompts_C*                      HUDButtonPrompts;                                          // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    On_Player_Killed_Event;                                    // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_ContextPopupWrapper_Interface_C*         ContextPopupWrapper_Interface;                             // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauHUD.BP_MordhauHUD_C");
		return ptr;
	}



	void CreateContextPopupWrapper_Interface();
	void CreateHUDButtonPrompts();
	void ShowMOTD();
	void CreateMOTD();
	void CreateContextPopupWrapper();
	void HideVoteKickMenu();
	void ShowVoteKickMenu();
	void CreateVoteKickMenu();
	void ShowMatchResult(bool IsVictory, const struct FText& MainText, const struct FText& Subtext);
	void ShowEndScreen();
	void CreateEndScreen();
	void ShowKilledBy(class AMordhauPlayerState* Killer);
	void CreateKilledByPanelWidget();
	void ShowObjectiveWidget(const struct FText& Description, const struct FText& Header, class UTexture2D* Icon);
	void CreateObjectiveWidget(class UBP_Objectives_C** Widget);
	void HideSpawnScreen();
	void ShowSpawnScreen();
	void CreateSpawnScreen();
	void ShowVoiceMenu();
	void CreateVoiceMenu();
	void CreateEquipmentInfoDisplay();
	void CreateScoreFeed();
	void ShowTips();
	void CreateTips();
	void ShowEquipment();
	void CreateEquipmentDisplay();
	void CreateNetIndicator();
	void CreateMainMenu();
	void IsMainMenuVisible(bool* bIsVisible);
	void HideMainMenu();
	void ProcessQueuedDialogs();
	void EnqueueDialog(class UMordhauDialog* Dialog);
	void CreateWatermark();
	void ShowAnnouncement(const struct FText& Text, const struct FText& Subtext, float Duration, TEnumAsByte<E_AnnouncementType_E_AnnouncementType> Type);
	void CreateAnnouncement();
	void ShowEmoteMenu();
	void CreateEmoteMenu();
	void ShowTeamSelect();
	void CreateTeamSelect();
	void ShowProfileSelect();
	void CreateProfileSelect();
	void CreateChatBox();
	void CreateStatusBar();
	void CreateCrosshair();
	void CreateKillFeed();
	void CreateTargetInfo();
	void UseFullHUD();
	void UseMinimalHUD();
	void ShowMainMenu(TEnumAsByte<E_ArmoryStates_E_ArmoryStates> Armory_State);
	void SendMessageToKillFeed(class APlayerState* Killer, const struct FText& KilledBy, class APlayerState* Victim);
	void SendMessageToChatbox(const struct FText& CharacterName, const struct FText& Message);
	void ShowChatBox(bool Team);
	void HideScoreboard();
	void ShowScoreboard();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void EnqueueMordhauDialog(class UMordhauDialog* Dialog);
	void On_Player_Killed(class APlayerState* Victim);
	void ExecuteUbergraph_BP_MordhauHUD(int EntryPoint);
	void On_Player_Killed_Event__DelegateSignature(class APlayerState* Victim);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
