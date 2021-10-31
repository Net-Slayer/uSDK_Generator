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

// Function BP_ChatBox.BP_ChatBox_C.OnRep_bIsChatPaused
struct UBP_ChatBox_C_OnRep_bIsChatPaused_Params
{
};

// Function BP_ChatBox.BP_ChatBox_C.GetText_2
struct UBP_ChatBox_C_GetText_2_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_ChatBox.BP_ChatBox_C.GetVisibility_4
struct UBP_ChatBox_C_GetVisibility_4_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChatBox.BP_ChatBox_C.GetVisibility_3
struct UBP_ChatBox_C_GetVisibility_3_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChatBox.BP_ChatBox_C.Get_TextArea_bIsEnabled_1
struct UBP_ChatBox_C_Get_TextArea_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_ChatBox.BP_ChatBox_C.GetVisibility_2
struct UBP_ChatBox_C_GetVisibility_2_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChatBox.BP_ChatBox_C.Repopulate Muted Player List
struct UBP_ChatBox_C_Repopulate_Muted_Player_List_Params
{
};

// Function BP_ChatBox.BP_ChatBox_C.RemovePlayerFromMutedMap
struct UBP_ChatBox_C_RemovePlayerFromMutedMap_Params
{
	struct FPlayFabPlayer                              Player;                                                    // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int                                                Player_Index;                                              // 0x0060(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChatBox.BP_ChatBox_C.IsPlayerMuted
struct UBP_ChatBox_C_IsPlayerMuted_Params
{
	struct FPlayFabPlayer                              Player;                                                    // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TEnumAsByte<E_ChatMuteTypes_E_ChatMuteTypes>       Mute_Type;                                                 // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsMuted;                                                   // 0x0061(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ChatBox.BP_ChatBox_C.AddPlayerToMutedMap
struct UBP_ChatBox_C_AddPlayerToMutedMap_Params
{
	struct FPlayFabPlayer                              Player;                                                    // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TEnumAsByte<E_ChatMuteTypes_E_ChatMuteTypes>       Mute_Type;                                                 // 0x0060(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChatBox.BP_ChatBox_C.Get Keys From Value
struct UBP_ChatBox_C_Get_Keys_From_Value_Params
{
	TMap<class UBP_ChatBoxEntry_C*, struct FString>    PreviousMessagesMap;                                       // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FString                                     Value__SteamID_;                                           // 0x0050(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<class UBP_ChatBoxEntry_C*>                  Keys;                                                      // 0x0060(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_ChatBox.BP_ChatBox_C.UnmutePlayer
struct UBP_ChatBox_C_UnmutePlayer_Params
{
	struct FPlayFabPlayer                              Player;                                                    // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_ChatBox.BP_ChatBox_C.MutePlayer
struct UBP_ChatBox_C_MutePlayer_Params
{
	TEnumAsByte<E_ChatMuteTypes_E_ChatMuteTypes>       MuteType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabPlayer                              Player;                                                    // 0x0008(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_ChatBox.BP_ChatBox_C.GetVisibility_1
struct UBP_ChatBox_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChatBox.BP_ChatBox_C.ResetThreshold
struct UBP_ChatBox_C_ResetThreshold_Params
{
};

// Function BP_ChatBox.BP_ChatBox_C.GetText_1
struct UBP_ChatBox_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_ChatBox.BP_ChatBox_C.AddViewModeEntry
struct UBP_ChatBox_C_AddViewModeEntry_Params
{
	class UBP_ChatBoxEntry_C*                          Entry;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChatBox.BP_ChatBox_C.AddEntriesEntry
struct UBP_ChatBox_C_AddEntriesEntry_Params
{
	class UBP_ChatBoxEntry_C*                          Entry;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChatBox.BP_ChatBox_C.GetEntriesVisibility
struct UBP_ChatBox_C_GetEntriesVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChatBox.BP_ChatBox_C.GetChatBoxVisibility
struct UBP_ChatBox_C_GetChatBoxVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChatBox.BP_ChatBox_C.OnEscape
struct UBP_ChatBox_C_OnEscape_Params
{
};

// Function BP_ChatBox.BP_ChatBox_C.OnMessageReceived
struct UBP_ChatBox_C_OnMessageReceived_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerState*                                Player;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Prefix;                                                    // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ChatBox.BP_ChatBox_C.OnEnter
struct UBP_ChatBox_C_OnEnter_Params
{
};

// Function BP_ChatBox.BP_ChatBox_C.GoToChatMode
struct UBP_ChatBox_C_GoToChatMode_Params
{
	bool                                               Team;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ChatBox.BP_ChatBox_C.GetViewModeVisibility
struct UBP_ChatBox_C_GetViewModeVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChatBox.BP_ChatBox_C.GetInputContainerVisibility
struct UBP_ChatBox_C_GetInputContainerVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChatBox.BP_ChatBox_C.OnPreviewKeyDown
struct UBP_ChatBox_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function BP_ChatBox.BP_ChatBox_C.AddEntry
struct UBP_ChatBox_C_AddEntry_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       Message;                                                   // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                NameColor;                                                 // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Prefix;                                                    // 0x0038(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPlayFabPlayer                              Player;                                                    // 0x0050(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TEnumAsByte<E_ChatUserTypes_E_ChatUserTypes>       Chat_User_Type;                                            // 0x00B0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChatBox.BP_ChatBox_C.BndEvt__TextArea_K2Node_ComponentBoundEvent_594_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
struct UBP_ChatBox_C_BndEvt__TextArea_K2Node_ComponentBoundEvent_594_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ChatBox.BP_ChatBox_C.OnMouseLeave
struct UBP_ChatBox_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ChatBox.BP_ChatBox_C.OnMouseEnter
struct UBP_ChatBox_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ChatBox.BP_ChatBox_C.Tick
struct UBP_ChatBox_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChatBox.BP_ChatBox_C.GoToViewMode
struct UBP_ChatBox_C_GoToViewMode_Params
{
};

// Function BP_ChatBox.BP_ChatBox_C.GoToViewModeCallback
struct UBP_ChatBox_C_GoToViewModeCallback_Params
{
};

// Function BP_ChatBox.BP_ChatBox_C.Construct
struct UBP_ChatBox_C_Construct_Params
{
};

// Function BP_ChatBox.BP_ChatBox_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
struct UBP_ChatBox_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ChatBox.BP_ChatBox_C.OnServerRestrictionInfoReceived
struct UBP_ChatBox_C_OnServerRestrictionInfoReceived_Params
{
	struct FServerRestrictionInfo                      ServerRestrictionInfo;                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function BP_ChatBox.BP_ChatBox_C.BndEvt__PauseChatCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
struct UBP_ChatBox_C_BndEvt__PauseChatCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ChatBox.BP_ChatBox_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UBP_ChatBox_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_ChatBox.BP_ChatBox_C.ExecuteUbergraph_BP_ChatBox
struct UBP_ChatBox_C_ExecuteUbergraph_BP_ChatBox_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
