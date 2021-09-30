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
// Parameters
//---------------------------------------------------------------------------

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.NewFunction_1
struct ABP_MordhauPlayerController_C_NewFunction_1_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnWipePlaceablesClient
struct ABP_MordhauPlayerController_C_OnWipePlaceablesClient_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnUpdatePlaceablesClient
struct ABP_MordhauPlayerController_C_OnUpdatePlaceablesClient_Params
{
	struct FName                                       PlaceableName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PlaceableAmount;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.UpdateBloodOverlayPostProcess
struct ABP_MordhauPlayerController_C_UpdateBloodOverlayPostProcess_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BloodOverlayIntensity;                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.Get Blood Overlay Sine Value
struct ABP_MordhauPlayerController_C_Get_Blood_Overlay_Sine_Value_Params
{
	float                                              BloodOverlayIntensity;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BloodOverlaySineValue;                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.UpdateBloodOverlaySineTime
struct ABP_MordhauPlayerController_C_UpdateBloodOverlaySineTime_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Period;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnCommandFailedReceived
struct ABP_MordhauPlayerController_C_OnCommandFailedReceived_Params
{
	class UBP_ChatBox_C*                               ChatBox;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     FailureType;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class APlayerState*                                Sender;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnHelpMessageReceived
struct ABP_MordhauPlayerController_C_OnHelpMessageReceived_Params
{
	class UBP_ChatBox_C*                               ChatBox;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                                Sender;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAdminChatReceived
struct ABP_MordhauPlayerController_C_OnAdminChatReceived_Params
{
	class UBP_ChatBox_C*                               ChatBox;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Message;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class APlayerState*                                Sender;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAdminAnnouncementReceived
struct ABP_MordhauPlayerController_C_OnAdminAnnouncementReceived_Params
{
	class UBP_ChatBox_C*                               ChatBox;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Message;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class APlayerState*                                Sender;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAdminSayReceived
struct ABP_MordhauPlayerController_C_OnAdminSayReceived_Params
{
	class UBP_ChatBox_C*                               ChatBox;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Message;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class APlayerState*                                Sender;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAdminPopupReceived
struct ABP_MordhauPlayerController_C_OnAdminPopupReceived_Params
{
	class UBP_ChatBox_C*                               ChatBox;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Message;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class APlayerState*                                Sender;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAdminWhisperReceived
struct ABP_MordhauPlayerController_C_OnAdminWhisperReceived_Params
{
	class UBP_ChatBox_C*                               ChatBox;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Message;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class APlayerState*                                Sender;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnWhisperReceived
struct ABP_MordhauPlayerController_C_OnWhisperReceived_Params
{
	class UBP_ChatBox_C*                               ChatBox;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     WhisperMessage;                                            // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class APlayerState*                                Sender;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnBuilt
struct ABP_MordhauPlayerController_C_OnBuilt_Params
{
	class AActor*                                      Structure;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.HandleTeamKill
struct ABP_MordhauPlayerController_C_HandleTeamKill_Params
{
	class AMordhauPlayerState*                         KilledBy;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Agent;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnRep_ReplicatedAmmoBoxCooldown
struct ABP_MordhauPlayerController_C_OnRep_ReplicatedAmmoBoxCooldown_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.WipePlaceables
struct ABP_MordhauPlayerController_C_WipePlaceables_Params
{
	struct FName                                       Key;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.RemoveFromPlaceableArray
struct ABP_MordhauPlayerController_C_RemoveFromPlaceableArray_Params
{
	struct FName                                       NameKey;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Object;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.PlaceInPlaceableArray
struct ABP_MordhauPlayerController_C_PlaceInPlaceableArray_Params
{
	struct FName                                       NameKey;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ToPlace;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxOfSame;                                                 // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      RemovedActor;                                              // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChangeFireOverlay
struct ABP_MordhauPlayerController_C_ChangeFireOverlay_Params
{
	float                                              NewOnFireValue;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewNearFireValue;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChangeSmokeOverlay
struct ABP_MordhauPlayerController_C_ChangeSmokeOverlay_Params
{
	float                                              NewValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.UpdateViewTargetEffects
struct ABP_MordhauPlayerController_C_UpdateViewTargetEffects_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChangeFadeToBlackCounter
struct ABP_MordhauPlayerController_C_ChangeFadeToBlackCounter_Params
{
	float                                              NewValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Main Menu_K2Node_InputActionEvent_17
struct ABP_MordhauPlayerController_C_InpActEvt_Show_Main_Menu_K2Node_InputActionEvent_17_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Chat_K2Node_InputActionEvent_16
struct ABP_MordhauPlayerController_C_InpActEvt_Show_Chat_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Scoreboard_K2Node_InputActionEvent_15
struct ABP_MordhauPlayerController_C_InpActEvt_Show_Scoreboard_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Scoreboard_K2Node_InputActionEvent_14
struct ABP_MordhauPlayerController_C_InpActEvt_Show_Scoreboard_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Profile Select_K2Node_InputActionEvent_13
struct ABP_MordhauPlayerController_C_InpActEvt_Show_Profile_Select_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Team Select_K2Node_InputActionEvent_12
struct ABP_MordhauPlayerController_C_InpActEvt_Show_Team_Select_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Emote Menu_K2Node_InputActionEvent_11
struct ABP_MordhauPlayerController_C_InpActEvt_Show_Emote_Menu_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Emote Menu_K2Node_InputActionEvent_10
struct ABP_MordhauPlayerController_C_InpActEvt_Show_Emote_Menu_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Team Chat_K2Node_InputActionEvent_9
struct ABP_MordhauPlayerController_C_InpActEvt_Show_Team_Chat_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Voice Menu_K2Node_InputActionEvent_8
struct ABP_MordhauPlayerController_C_InpActEvt_Show_Voice_Menu_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Voice Menu_K2Node_InputActionEvent_7
struct ABP_MordhauPlayerController_C_InpActEvt_Show_Voice_Menu_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Battlecry_K2Node_InputActionEvent_6
struct ABP_MordhauPlayerController_C_InpActEvt_Battlecry_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Battlecry_K2Node_InputActionEvent_5
struct ABP_MordhauPlayerController_C_InpActEvt_Battlecry_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Mute Target_K2Node_InputActionEvent_4
struct ABP_MordhauPlayerController_C_InpActEvt_Mute_Target_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Vote Yes_K2Node_InputActionEvent_3
struct ABP_MordhauPlayerController_C_InpActEvt_Vote_Yes_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Vote No_K2Node_InputActionEvent_2
struct ABP_MordhauPlayerController_C_InpActEvt_Vote_No_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Toggle UI Markers_K2Node_InputActionEvent_1
struct ABP_MordhauPlayerController_C_InpActEvt_Toggle_UI_Markers_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveBeginPlay
struct ABP_MordhauPlayerController_C_ReceiveBeginPlay_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveTick
struct ABP_MordhauPlayerController_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.RequestChatMessage
struct ABP_MordhauPlayerController_C_RequestChatMessage_Params
{
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Team;                                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnHighlightStart
struct ABP_MordhauPlayerController_C_OnHighlightStart_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnHighlightEnd
struct ABP_MordhauPlayerController_C_OnHighlightEnd_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnSpectatorAction
struct ABP_MordhauPlayerController_C_OnSpectatorAction_Params
{
	unsigned char                                      Action;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.DisplayMessage
struct ABP_MordhauPlayerController_C_DisplayMessage_Params
{
	class APlayerState*                                SenderPlayerState;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     S;                                                         // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FName                                       Type;                                                      // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MsgLifeTime;                                               // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ShowEquipment
struct ABP_MordhauPlayerController_C_ShowEquipment_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ShowTips
struct ABP_MordhauPlayerController_C_ShowTips_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChoiceMenuOptionSelected
struct ABP_MordhauPlayerController_C_ChoiceMenuOptionSelected_Params
{
	int                                                Choice;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ClientReceiveScoreBP
struct ABP_MordhauPlayerController_C_ClientReceiveScoreBP_Params
{
	Mordhau_EScoreFeedReason                           Reason;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ReasonParam;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScoreAmount;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauPlayerState*                         AssociatedPlayer;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAfterPossess
struct ABP_MordhauPlayerController_C_OnAfterPossess_Params
{
	class APawn*                                       APawn;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnActionFailed
struct ABP_MordhauPlayerController_C_OnActionFailed_Params
{
	struct FName                                       Reason;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveDestroyed
struct ABP_MordhauPlayerController_C_ReceiveDestroyed_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnMordhauCharacterSpawned
struct ABP_MordhauPlayerController_C_OnMordhauCharacterSpawned_Params
{
	class AMordhauCharacter*                           SpawnedCharacter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnSpectatorCmd
struct ABP_MordhauPlayerController_C_OnSpectatorCmd_Params
{
	struct FString                                     Cmd;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Param;                                                     // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnIsAnythingRestockableChanged
struct ABP_MordhauPlayerController_C_OnIsAnythingRestockableChanged_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAFKTimeExceededMaximum
struct ABP_MordhauPlayerController_C_OnAFKTimeExceededMaximum_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.PerformAFKKick
struct ABP_MordhauPlayerController_C_PerformAFKKick_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAmmoChanged
struct ABP_MordhauPlayerController_C_OnAmmoChanged_Params
{
	class AMordhauEquipment*                           Equipment;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AmmoDifference;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnRequestVoteKick
struct ABP_MordhauPlayerController_C_OnRequestVoteKick_Params
{
	class AMordhauPlayerState*                         TargetPlayer;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerRequestVoteKick
struct ABP_MordhauPlayerController_C_ServerRequestVoteKick_Params
{
	class AMordhauPlayerState*                         Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnRequestCancelVoteKick
struct ABP_MordhauPlayerController_C_OnRequestCancelVoteKick_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerRequestCancelVoteKick
struct ABP_MordhauPlayerController_C_ServerRequestCancelVoteKick_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerVoteKickVote
struct ABP_MordhauPlayerController_C_ServerVoteKickVote_Params
{
	bool                                               VotedYes;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.HandleTeamSelect
struct ABP_MordhauPlayerController_C_HandleTeamSelect_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ForgivePlayer
struct ABP_MordhauPlayerController_C_ForgivePlayer_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveOfferToForgive
struct ABP_MordhauPlayerController_C_ReceiveOfferToForgive_Params
{
	class AMordhauPlayerState*                         Candidate;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.DoBattlecry
struct ABP_MordhauPlayerController_C_DoBattlecry_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ParryThis
struct ABP_MordhauPlayerController_C_ParryThis_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerGiveGuns
struct ABP_MordhauPlayerController_C_ServerGiveGuns_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.HandleShowProfileSelect
struct ABP_MordhauPlayerController_C_HandleShowProfileSelect_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.DisplayAnnouncement
struct ABP_MordhauPlayerController_C_DisplayAnnouncement_Params
{
	struct FString                                     Text;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Subtext;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.UpdatePlaceablesOnClient
struct ABP_MordhauPlayerController_C_UpdatePlaceablesOnClient_Params
{
	struct FName                                       PlaceableName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PlaceableAmount;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.WipePlaceablesOnClient
struct ABP_MordhauPlayerController_C_WipePlaceablesOnClient_Params
{
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ExecuteUbergraph_BP_MordhauPlayerController
struct ABP_MordhauPlayerController_C_ExecuteUbergraph_BP_MordhauPlayerController_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.EventOnPlaceablesUpdate__DelegateSignature
struct ABP_MordhauPlayerController_C_EventOnPlaceablesUpdate__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
