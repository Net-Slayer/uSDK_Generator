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

// BlueprintGeneratedClass BP_MordhauPlayerController.BP_MordhauPlayerController_C
// 0x01C8 (FullSize[0x0D50] - InheritedSize[0x0B88])
class ABP_MordhauPlayerController_C : public AMordhauPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0B88(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcess;                                               // 0x0B90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    BloodOverlayMI;                                            // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MordhauHUD_C*                            HUD;                                                       // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeToBlackCounter;                                        // 0x0BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z38O[0x4];                                     // 0x0BAC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 FadeToBlackCurve;                                          // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                           OutlineMI;                                                 // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    DeathMI;                                                   // 0x0BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WantsFadeToBlack;                                          // 0x0BC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DPKG[0x3];                                     // 0x0BC9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BloodOverlayTarget;                                        // 0x0BCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     LastAnnouncement;                                          // 0x0BD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              LowStaminaVignetteExtra;                                   // 0x0BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaminaOverlayTarget;                                      // 0x0BE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseVignetteAmount;                                        // 0x0BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaminaOverlay;                                            // 0x0BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 LowStaminaOverlayCurve;                                    // 0x0BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LowStaminaGrainExtra;                                      // 0x0BF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SaturationTarget;                                          // 0x0BFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Saturation;                                                // 0x0C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               QueueShowTeamSelect;                                       // 0x0C04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I1VP[0x3];                                     // 0x0C05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UBP_ChoiceMenu_C*>                    ChoiceMenuStack;                                           // 0x0C08(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	float                                              SmokeOverlay;                                              // 0x0C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TXAC[0x4];                                     // 0x0C1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    SmokeOverlayMI;                                            // 0x0C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SmokeOverlayTarget;                                        // 0x0C28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8RKA[0x4];                                     // 0x0C2C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    OnFireOverlayMI;                                           // 0x0C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OnFireTarget;                                              // 0x0C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NearFireTarget;                                            // 0x0C3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OnFire;                                                    // 0x0C40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NearFire;                                                  // 0x0C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SpawnedWithToolbox;                                        // 0x0C48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JHR1[0x7];                                     // 0x0C49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMordhauPlayerState*                         QueuedKiller;                                              // 0x0C50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              QueuedKillerTime;                                          // 0x0C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2I8V[0x4];                                     // 0x0C5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ABP_AmmoBox_C*>                       Ammoboxes;                                                 // 0x0C60(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	unsigned char                                      ReplicatedAmmoBoxCooldown;                                 // 0x0C70(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                               AmmoBoxesOnCooldown;                                       // 0x0C71(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CFKW[0x2];                                     // 0x0C72(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NextAmmoBoxAvailableTime;                                  // 0x0C74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableTeamSelection;                                      // 0x0C78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UI9K[0x7];                                     // 0x0C79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMordhauPlayerState*                         LastForgiveCandidate;                                      // 0x0C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LastForgiveWasFilteredKill;                                // 0x0C88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AYX9[0x3];                                     // 0x0C89(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastForgiveDamage;                                         // 0x0C8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOnMainMenuMap;                                           // 0x0C90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8ZOH[0x7];                                     // 0x0C91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, struct FArrayOfActor>           PlaceableArrays;                                           // 0x0C98(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BloodOverlaySineTime;                                      // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1GVT[0x4];                                     // 0x0CEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, unsigned char>                  PlaceablesMap;                                             // 0x0CF0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    EventOnPlaceablesUpdate;                                   // 0x0D40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauPlayerController.BP_MordhauPlayerController_C");
		return ptr;
	}



	void NewFunction_1();
	void OnWipePlaceablesClient();
	void OnUpdatePlaceablesClient(const struct FName& PlaceableName, unsigned char PlaceableAmount);
	void UpdateBloodOverlayPostProcess(float DeltaTime, float BloodOverlayIntensity);
	void Get_Blood_Overlay_Sine_Value(float BloodOverlayIntensity, float* BloodOverlaySineValue);
	void UpdateBloodOverlaySineTime(float DeltaTime, float Period);
	void OnCommandFailedReceived(class UBP_ChatBox_C* ChatBox, const struct FString& FailureType, class APlayerState* Sender);
	void OnHelpMessageReceived(class UBP_ChatBox_C* ChatBox, class APlayerState* Sender);
	void OnAdminChatReceived(class UBP_ChatBox_C* ChatBox, const struct FString& Message, class APlayerState* Sender);
	void OnAdminAnnouncementReceived(class UBP_ChatBox_C* ChatBox, const struct FString& Message, class APlayerState* Sender);
	void OnAdminSayReceived(class UBP_ChatBox_C* ChatBox, const struct FString& Message, class APlayerState* Sender);
	void OnAdminPopupReceived(class UBP_ChatBox_C* ChatBox, const struct FString& Message, class APlayerState* Sender);
	void OnAdminWhisperReceived(class UBP_ChatBox_C* ChatBox, const struct FString& Message, class APlayerState* Sender);
	void OnWhisperReceived(class UBP_ChatBox_C* ChatBox, const struct FString& WhisperMessage, class APlayerState* Sender);
	void OnBuilt(class AActor* Structure);
	void HandleTeamKill(class AMordhauPlayerState* KilledBy, class AActor* Agent, float Damage);
	void OnRep_ReplicatedAmmoBoxCooldown();
	void WipePlaceables(const struct FName& Key);
	void RemoveFromPlaceableArray(const struct FName& NameKey, class AActor* Object);
	void PlaceInPlaceableArray(const struct FName& NameKey, class AActor* ToPlace, int MaxOfSame, class AActor** RemovedActor);
	void ChangeFireOverlay(float NewOnFireValue, float NewNearFireValue);
	void ChangeSmokeOverlay(float NewValue);
	void UpdateViewTargetEffects();
	void ChangeFadeToBlackCounter(float NewValue);
	void InpActEvt_Show_Main_Menu_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_Show_Chat_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_Show_Scoreboard_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_Show_Scoreboard_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_Show_Profile_Select_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_Show_Team_Select_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_Show_Emote_Menu_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_Show_Emote_Menu_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_Show_Team_Chat_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_Show_Voice_Menu_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Show_Voice_Menu_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Battlecry_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Battlecry_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Mute_Target_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Vote_Yes_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Vote_No_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Toggle_UI_Markers_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void RequestChatMessage(const struct FString& Message, bool Team);
	void OnHighlightStart(class AActor* Actor);
	void OnHighlightEnd(class AActor* Actor);
	void OnSpectatorAction(unsigned char Action);
	void DisplayMessage(class APlayerState* SenderPlayerState, const struct FString& S, const struct FName& Type, float MsgLifeTime);
	void ShowEquipment();
	void ShowTips();
	void ChoiceMenuOptionSelected(int Choice);
	void ClientReceiveScoreBP(Mordhau_EScoreFeedReason Reason, unsigned char ReasonParam, float ScoreAmount, class AMordhauPlayerState* AssociatedPlayer);
	void OnAfterPossess(class APawn* APawn);
	void OnActionFailed(const struct FName& Reason);
	void ReceiveDestroyed();
	void OnMordhauCharacterSpawned(class AMordhauCharacter* SpawnedCharacter);
	void OnSpectatorCmd(const struct FString& Cmd, const struct FString& Param);
	void OnIsAnythingRestockableChanged();
	void OnAFKTimeExceededMaximum();
	void PerformAFKKick();
	void OnAmmoChanged(class AMordhauEquipment* Equipment, int AmmoDifference);
	void OnRequestVoteKick(class AMordhauPlayerState* TargetPlayer);
	void ServerRequestVoteKick(class AMordhauPlayerState* Player);
	void OnRequestCancelVoteKick();
	void ServerRequestCancelVoteKick();
	void ServerVoteKickVote(bool VotedYes);
	void HandleTeamSelect();
	void ForgivePlayer();
	void ReceiveOfferToForgive(class AMordhauPlayerState* Candidate);
	void DoBattlecry();
	void ParryThis();
	void ServerGiveGuns();
	void HandleShowProfileSelect();
	void DisplayAnnouncement(const struct FString& Text, const struct FString& Subtext, float Duration);
	void UpdatePlaceablesOnClient(const struct FName& PlaceableName, unsigned char PlaceableAmount);
	void WipePlaceablesOnClient();
	void ExecuteUbergraph_BP_MordhauPlayerController(int EntryPoint);
	void EventOnPlaceablesUpdate__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
