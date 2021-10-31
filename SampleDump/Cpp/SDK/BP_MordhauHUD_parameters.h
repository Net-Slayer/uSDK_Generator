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
// Parameters
//---------------------------------------------------------------------------

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateContextPopupWrapper_Interface
struct ABP_MordhauHUD_C_CreateContextPopupWrapper_Interface_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateHUDButtonPrompts
struct ABP_MordhauHUD_C_CreateHUDButtonPrompts_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowMOTD
struct ABP_MordhauHUD_C_ShowMOTD_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateMOTD
struct ABP_MordhauHUD_C_CreateMOTD_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateContextPopupWrapper
struct ABP_MordhauHUD_C_CreateContextPopupWrapper_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.HideVoteKickMenu
struct ABP_MordhauHUD_C_HideVoteKickMenu_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowVoteKickMenu
struct ABP_MordhauHUD_C_ShowVoteKickMenu_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateVoteKickMenu
struct ABP_MordhauHUD_C_CreateVoteKickMenu_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowMatchResult
struct ABP_MordhauHUD_C_ShowMatchResult_Params
{
	bool                                               IsVictory;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       MainText;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Subtext;                                                   // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowEndScreen
struct ABP_MordhauHUD_C_ShowEndScreen_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEndScreen
struct ABP_MordhauHUD_C_CreateEndScreen_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowKilledBy
struct ABP_MordhauHUD_C_ShowKilledBy_Params
{
	class AMordhauPlayerState*                         Killer;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateKilledByPanelWidget
struct ABP_MordhauHUD_C_CreateKilledByPanelWidget_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowObjectiveWidget
struct ABP_MordhauHUD_C_ShowObjectiveWidget_Params
{
	struct FText                                       Description;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Header;                                                    // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Icon;                                                      // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateObjectiveWidget
struct ABP_MordhauHUD_C_CreateObjectiveWidget_Params
{
	class UBP_Objectives_C*                            Widget;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.HideSpawnScreen
struct ABP_MordhauHUD_C_HideSpawnScreen_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowSpawnScreen
struct ABP_MordhauHUD_C_ShowSpawnScreen_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateSpawnScreen
struct ABP_MordhauHUD_C_CreateSpawnScreen_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowVoiceMenu
struct ABP_MordhauHUD_C_ShowVoiceMenu_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateVoiceMenu
struct ABP_MordhauHUD_C_CreateVoiceMenu_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEquipmentInfoDisplay
struct ABP_MordhauHUD_C_CreateEquipmentInfoDisplay_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateScoreFeed
struct ABP_MordhauHUD_C_CreateScoreFeed_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowTips
struct ABP_MordhauHUD_C_ShowTips_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateTips
struct ABP_MordhauHUD_C_CreateTips_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowEquipment
struct ABP_MordhauHUD_C_ShowEquipment_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEquipmentDisplay
struct ABP_MordhauHUD_C_CreateEquipmentDisplay_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateNetIndicator
struct ABP_MordhauHUD_C_CreateNetIndicator_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateMainMenu
struct ABP_MordhauHUD_C_CreateMainMenu_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.IsMainMenuVisible
struct ABP_MordhauHUD_C_IsMainMenuVisible_Params
{
	bool                                               bIsVisible;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.HideMainMenu
struct ABP_MordhauHUD_C_HideMainMenu_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ProcessQueuedDialogs
struct ABP_MordhauHUD_C_ProcessQueuedDialogs_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.EnqueueDialog
struct ABP_MordhauHUD_C_EnqueueDialog_Params
{
	class UMordhauDialog*                              Dialog;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateWatermark
struct ABP_MordhauHUD_C_CreateWatermark_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowAnnouncement
struct ABP_MordhauHUD_C_ShowAnnouncement_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Subtext;                                                   // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Duration;                                                  // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AnnouncementType_E_AnnouncementType> Type;                                                      // 0x0034(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateAnnouncement
struct ABP_MordhauHUD_C_CreateAnnouncement_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowEmoteMenu
struct ABP_MordhauHUD_C_ShowEmoteMenu_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEmoteMenu
struct ABP_MordhauHUD_C_CreateEmoteMenu_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowTeamSelect
struct ABP_MordhauHUD_C_ShowTeamSelect_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateTeamSelect
struct ABP_MordhauHUD_C_CreateTeamSelect_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowProfileSelect
struct ABP_MordhauHUD_C_ShowProfileSelect_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateProfileSelect
struct ABP_MordhauHUD_C_CreateProfileSelect_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateChatBox
struct ABP_MordhauHUD_C_CreateChatBox_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateStatusBar
struct ABP_MordhauHUD_C_CreateStatusBar_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateCrosshair
struct ABP_MordhauHUD_C_CreateCrosshair_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateKillFeed
struct ABP_MordhauHUD_C_CreateKillFeed_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.CreateTargetInfo
struct ABP_MordhauHUD_C_CreateTargetInfo_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.UseFullHUD
struct ABP_MordhauHUD_C_UseFullHUD_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.UseMinimalHUD
struct ABP_MordhauHUD_C_UseMinimalHUD_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowMainMenu
struct ABP_MordhauHUD_C_ShowMainMenu_Params
{
	TEnumAsByte<E_ArmoryStates_E_ArmoryStates>         Armory_State;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.SendMessageToKillFeed
struct ABP_MordhauHUD_C_SendMessageToKillFeed_Params
{
	class APlayerState*                                Killer;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       KilledBy;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerState*                                Victim;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.SendMessageToChatbox
struct ABP_MordhauHUD_C_SendMessageToChatbox_Params
{
	struct FText                                       CharacterName;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Message;                                                   // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowChatBox
struct ABP_MordhauHUD_C_ShowChatBox_Params
{
	bool                                               Team;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.HideScoreboard
struct ABP_MordhauHUD_C_HideScoreboard_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ShowScoreboard
struct ABP_MordhauHUD_C_ShowScoreboard_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ReceiveBeginPlay
struct ABP_MordhauHUD_C_ReceiveBeginPlay_Params
{
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ReceiveTick
struct ABP_MordhauHUD_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.EnqueueMordhauDialog
struct ABP_MordhauHUD_C_EnqueueMordhauDialog_Params
{
	class UMordhauDialog*                              Dialog;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.On Player Killed
struct ABP_MordhauHUD_C_On_Player_Killed_Params
{
	class APlayerState*                                Victim;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.ExecuteUbergraph_BP_MordhauHUD
struct ABP_MordhauHUD_C_ExecuteUbergraph_BP_MordhauHUD_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauHUD.BP_MordhauHUD_C.On Player Killed Event__DelegateSignature
struct ABP_MordhauHUD_C_On_Player_Killed_Event__DelegateSignature_Params
{
	class APlayerState*                                Victim;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
