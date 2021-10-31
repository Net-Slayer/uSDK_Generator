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

// WidgetBlueprintGeneratedClass BP_MatchmakingScreen.BP_MatchmakingScreen_C
// 0x0335 (FullSize[0x056D] - InheritedSize[0x0238])
class UBP_MatchmakingScreen_C : public UBP_MenuContentWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_GameModeEntry_C*                         BP_BrawlGameModeEntry;                                     // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GameModeEntry_C*                         BP_DuelGameModeEntry;                                      // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Leaderboards_C*                          BP_DuelLeaderboards;                                       // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GameModeEntry_C*                         BP_FrontlineGameModeEntry;                                 // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GameModeEntry_C*                         BP_HordeGameModeEntry;                                     // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GameModeEntry_C*                         BP_InvasionGameModeEntry;                                  // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_OfficialRules_C*                         BP_OfficialRules;                                          // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GameModeCategory_C*                      BP_QuickPlayCategory;                                      // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GameModeCategory_C*                      BP_RankedCategory;                                         // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GameModeEntry_C*                         BP_TeamfightGameModeEntry;                                 // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Leaderboards_C*                          BP_TeamfightLeaderboards;                                  // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_1;                                                  // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_Rules;                                              // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ButtonText;                                                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    CasualModes;                                               // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxText*                               CasualRegionComboBox;                                      // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableTextBox*                   DebugTextBox;                                              // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              GeneralCategories;                                         // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_3;                                                   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_4;                                                   // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableTextBox*                   MultiLineEditableTextBox_1;                                // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_5;                                                 // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    RankedModes;                                               // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxText*                               RankedRegionComboBox;                                      // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Rules;                                                     // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     SearchButton;                                              // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_10;                                                // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1;                                               // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_2;                                               // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_4;                                               // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_5;                                               // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                          // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_Leaderboards;                               // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MainMenu_C*                              MainMenu;                                                  // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsSearching;                                              // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AMUA[0x7];                                     // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBP_MordhauGameInstance_C*                   GameInstance;                                              // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                SearchTimer;                                               // 0x0370(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabPlayer                              PartyLeader;                                               // 0x0378(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                PartySize;                                                 // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Mordhau_EMatchmakingState                          PartyState;                                                // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPartyReady;                                              // 0x03DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsJoining;                                                 // 0x03DE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsRankedTab;                                               // 0x03DF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FDateTime                                   TimeoutStartTime;                                          // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<struct FString, struct FString>               Tickets;                                                   // 0x03E8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             QueueNames;                                                // 0x0438(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     PartyGroupID;                                              // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     MatchQueueName;                                            // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     MatchOwnerID;                                              // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UBP_InformationDialog_C*                     SearchFailureDialog;                                       // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCancellingSearch;                                         // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bCanTickSearch;                                            // 0x0481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0KEW[0x2];                                     // 0x0482(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumHandledQueues;                                          // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             TicketQueueNames;                                          // 0x0488(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               bIsRankedSearch;                                           // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VDE5[0x7];                                     // 0x0499(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<MordhauOnlineSubsystem_EServerLocation>     LocationPreference;                                        // 0x04A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                ServerIdx;                                                 // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MatchmakingSearchState_E_MatchmakingSearchState> SearchState;                                               // 0x04B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7AMB[0x3];                                     // 0x04B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             PartyMembers;                                              // 0x04B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FPlayFabPlayerEntity>                PartyMemberEntities;                                       // 0x04C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               bFailedToReserveSlots;                                     // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bCreatedTicket;                                            // 0x04D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9S3A[0x6];                                     // 0x04DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FPlayFabMatchmakingMatch> Matches;                                                   // 0x04E0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             MatchQueueNames;                                           // 0x0530(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FPlayFabMatchmakingPlayer>           MatchMembers;                                              // 0x0540(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               bHasPendingMatches;                                        // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bNeedsWidgetsUpdate;                                       // 0x0551(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bEncounteredError;                                         // 0x0552(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4IAW[0x1];                                     // 0x0553(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimerValue;                                                // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bDidSelectRegion;                                          // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_01X8[0x7];                                     // 0x0559(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   BanEndTime;                                                // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                MemberIdx;                                                 // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bStartingSearch;                                           // 0x056C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MatchmakingScreen.BP_MatchmakingScreen_C");
		return ptr;
	}



	UMG_ESlateVisibility Get_Rules_Visibility_1();
	void CreatePartyMatch(const struct FString& QueueName);
	void GetPartyMatchmakingTickts(TMap<struct FString, struct FString>* Tickets_);
	void GetQueuesToJoin(TArray<struct FString>* QueueNames);
	UMG_ESlateVisibility GetBackButtonVisibility();
	UMG_ESlateVisibility GetSearchButtonVisibility();
	void IsMatchLeaderInParty(bool* IsInParty);
	void GetGameModeAndSlotCount(const struct FString& QueueName, struct FString* GameMode, int* SlotCount);
	void GetQueueNames(TArray<struct FString>* _);
	void GetPlayerCounts(const struct FString& GameMode, TArray<int>* _);
	void SetMatchmakingGameModes(TArray<struct FString>* Input);
	void GetMatchmakingGameModes(TArray<struct FString>* Return_Value);
	UMG_ESlateVisibility GetDebugTextBoxVisibility();
	void IsPlayerPartyLeader(bool* IsLeader);
	struct FText GetSearchFailureReason();
	void AddDebugMessage(const struct FString& Message, bool bEnabled);
	void GetSelectedGameModes(TArray<struct FString>* GameModes);
	void CanPlayerSearch(bool* bCanSearch);
	void OnFailure_672628444615C28A9006F0ACD500AEE3(const struct FPlayFabMatchmakingMatch& Match);
	void OnSuccess_672628444615C28A9006F0ACD500AEE3(const struct FPlayFabMatchmakingMatch& Match);
	void OnFailure_672628444615C28A9006F0AC56DE6ED4(const struct FPlayFabMatchmakingMatch& Match);
	void OnSuccess_672628444615C28A9006F0AC56DE6ED4(const struct FPlayFabMatchmakingMatch& Match);
	void OnFailure_344C14AC4FC53B61568784B01C6B576E(const struct FString& QueueName);
	void OnSuccess_344C14AC4FC53B61568784B01C6B576E(const struct FString& QueueName);
	void OnFailure_60F7531743547A48C86D09A814CDA395(const struct FPlayFabMatchmakingMatch& Match);
	void OnSuccess_60F7531743547A48C86D09A814CDA395(const struct FPlayFabMatchmakingMatch& Match);
	void OnFailure_8E9A20E64A29269662D6C4B29B196A96(const struct FPlayFabMatchmakingMatch& Match);
	void OnSuccess_8E9A20E64A29269662D6C4B29B196A96(const struct FPlayFabMatchmakingMatch& Match);
	void OnFailure_0F9B3B6544DF9CE6B1EFA7B4E638F24A(const struct FPlayFabMatchmakingMatch& Match);
	void OnSuccess_0F9B3B6544DF9CE6B1EFA7B4E638F24A(const struct FPlayFabMatchmakingMatch& Match);
	void OnFailure_672628444615C28A9006F0ACCA1EB912(const struct FPlayFabMatchmakingMatch& Match);
	void OnSuccess_672628444615C28A9006F0ACCA1EB912(const struct FPlayFabMatchmakingMatch& Match);
	void OnFailure_672628444615C28A9006F0AC1A1DFF46(const struct FPlayFabMatchmakingMatch& Match);
	void OnSuccess_672628444615C28A9006F0AC1A1DFF46(const struct FPlayFabMatchmakingMatch& Match);
	void OnFailure_8E9A20E64A29269662D6C4B2D5D232B2(const struct FPlayFabMatchmakingMatch& Match);
	void OnSuccess_8E9A20E64A29269662D6C4B2D5D232B2(const struct FPlayFabMatchmakingMatch& Match);
	void OnFailure_67F6983E4A4400B48FA2EA924013F6EF(const struct FPlayFabMatchmakingMatch& Match);
	void OnSuccess_67F6983E4A4400B48FA2EA924013F6EF(const struct FPlayFabMatchmakingMatch& Match);
	void OnFailure_B0A1AA9741161B5376ACF5B7683DAF0E(const struct FPlayFabPlayerEntity& PlayerEntity, int LeaveCount, const struct FDateTime& LeaveTime, const struct FDateTime& BanEndTime);
	void OnSuccess_B0A1AA9741161B5376ACF5B7683DAF0E(const struct FPlayFabPlayerEntity& PlayerEntity, int LeaveCount, const struct FDateTime& LeaveTime, const struct FDateTime& BanEndTime);
	void OnFailure_C9398F5545CC7EBA29C50D98595DDA52(const struct FString& QueueName);
	void OnSuccess_C9398F5545CC7EBA29C50D98595DDA52(const struct FString& QueueName);
	void OnFailure_803BB389473F1682ABB0D18EB08C27B6();
	void OnSuccess_803BB389473F1682ABB0D18EB08C27B6();
	void OnFailure_EAE6415A4E9D4278139810AFF2CA6E91(const struct FString& QueueName);
	void OnSuccess_EAE6415A4E9D4278139810AFF2CA6E91(const struct FString& QueueName);
	void OnFailure_769A86204547BF36B6EE2F887D997169(const struct FString& QueueName, const struct FString& TicketId, MordhauOnlineSubsystem_EPlayFabTicketStatus TicketStatus, const struct FString& CancellationReason, const struct FString& MatchId);
	void OnSuccess_769A86204547BF36B6EE2F887D997169(const struct FString& QueueName, const struct FString& TicketId, MordhauOnlineSubsystem_EPlayFabTicketStatus TicketStatus, const struct FString& CancellationReason, const struct FString& MatchId);
	void OnFailure_593B3DE445187D64F38A78AC7464E5BF(const struct FPlayFabMatchmakingMatch& Match);
	void OnSuccess_593B3DE445187D64F38A78AC7464E5BF(const struct FPlayFabMatchmakingMatch& Match);
	void OnFailure_850913F04E7E28DE6BBF3BB67BE5C4E5(const struct FString& QueueName);
	void OnSuccess_850913F04E7E28DE6BBF3BB67BE5C4E5(const struct FString& QueueName);
	void OnFailure_0698FD2E4159E23FE2230DA18E150DBD(const struct FString& QueueName, const struct FString& TicketId);
	void OnSuccess_0698FD2E4159E23FE2230DA18E150DBD(const struct FString& QueueName, const struct FString& TicketId);
	void OnFailure_E36938C940390430D770FA897A0E77CD(const struct FString& QueueName);
	void OnSuccess_E36938C940390430D770FA897A0E77CD(const struct FString& QueueName);
	void OnFailure_B742674A43952F3CD1897591AB8CAF21(const struct FString& QueueName, const struct FString& TicketId);
	void OnSuccess_B742674A43952F3CD1897591AB8CAF21(const struct FString& QueueName, const struct FString& TicketId);
	void OnFailure_527F32434AB11E7ADC849FB48EB7AE48();
	void OnFull_527F32434AB11E7ADC849FB48EB7AE48();
	void OnSuccess_527F32434AB11E7ADC849FB48EB7AE48();
	void OnFailure_F52C3F6641F7B816D62418B84AA964CB(TArray<struct FPlayFabGameServer> Servers);
	void OnSuccess_F52C3F6641F7B816D62418B84AA964CB(TArray<struct FPlayFabGameServer> Servers);
	void OnFailure_A776E9454B061B5288E2CFA61D35F10E();
	void OnSuccess_A776E9454B061B5288E2CFA61D35F10E();
	void BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void UpdateWidgets();
	void Construct();
	void StartSearch();
	void CancelSearch();
	void StartSearchTimer();
	void TickSearch();
	void BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
	void UpdatePartyValues();
	void OnSelectionChanged(bool bIsSelected);
	void OnPartyUpdated(TArray<struct FPlayFabPlayer> PartyMembers);
	void OnOkClicked();
	void OnMatchmakingRegionsDetermined(MordhauOnlineSubsystem_EServerRegion CasualMatchmakingRegion, MordhauOnlineSubsystem_EServerRegion RankedMatchmakingRegion);
	void OnSearchFailureDialogOkClicked();
	void BndEvt__BP_GameModeCategory_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature();
	void BndEvt__BP_GameModeCategory_0_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature();
	void Switch_to_ranked_tab();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BP_DuelGameModeEntry_K2Node_ComponentBoundEvent_7_OnHover__DelegateSignature();
	void BndEvt__BP_TeamFightGameModeEntry_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature();
	void RestartSearch();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__RankedRegionComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
	void ExecuteUbergraph_BP_MatchmakingScreen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
