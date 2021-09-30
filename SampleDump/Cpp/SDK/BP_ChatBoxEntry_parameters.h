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

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.InitializeOptions
struct UBP_ChatBoxEntry_C_InitializeOptions_Params
{
	TMap<struct FString, struct FText>                 OptionsMap;                                                // 0x0000(0x0050)  (Parm, OutParm)
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.GetToolTipText_1
struct UBP_ChatBoxEntry_C_GetToolTipText_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.UpdateEntryMessage
struct UBP_ChatBoxEntry_C_UpdateEntryMessage_Params
{
	struct FText                                       New_Message;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                Text_Color;                                                // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.GetVisibility_1
struct UBP_ChatBoxEntry_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.SetupEntry
struct UBP_ChatBoxEntry_C_SetupEntry_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPlayFabPlayer                              Player;                                                    // 0x0010(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FText                                       Message;                                                   // 0x0070(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Prefix;                                                    // 0x0088(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                NameColor;                                                 // 0x00A0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ChatUserTypes_E_ChatUserTypes>       Chat_User_Type;                                            // 0x00B0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.Motivational Mute
struct UBP_ChatBoxEntry_C_Motivational_Mute_Params
{
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ClientMute
struct UBP_ChatBoxEntry_C_ClientMute_Params
{
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.VoteKick
struct UBP_ChatBoxEntry_C_VoteKick_Params
{
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ADMIN - Mute
struct UBP_ChatBoxEntry_C_ADMIN___Mute_Params
{
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.MuteDialogCanceled
struct UBP_ChatBoxEntry_C_MuteDialogCanceled_Params
{
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked2
struct UBP_ChatBoxEntry_C_ContextButtonClicked2_Params
{
	int                                                Button_Index;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ADMIN - Message
struct UBP_ChatBoxEntry_C_ADMIN___Message_Params
{
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.MessageDialogEntered
struct UBP_ChatBoxEntry_C_MessageDialogEntered_Params
{
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.MessageDialogCanceled
struct UBP_ChatBoxEntry_C_MessageDialogCanceled_Params
{
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.MuteDialogEntered
struct UBP_ChatBoxEntry_C_MuteDialogEntered_Params
{
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked
struct UBP_ChatBoxEntry_C_ContextButtonClicked_Params
{
	int                                                Button_Index;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UBP_ChatBoxEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.OptionSelected
struct UBP_ChatBoxEntry_C_OptionSelected_Params
{
	struct FString                                     Option;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.CreateWrapper
struct UBP_ChatBoxEntry_C_CreateWrapper_Params
{
	TMap<struct FString, struct FText>                 InOptions;                                                 // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked3
struct UBP_ChatBoxEntry_C_ContextButtonClicked3_Params
{
	int                                                Button_Index;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.KickDialogEntered
struct UBP_ChatBoxEntry_C_KickDialogEntered_Params
{
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.KickDialogCanceled
struct UBP_ChatBoxEntry_C_KickDialogCanceled_Params
{
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BanDurationDialogEntered
struct UBP_ChatBoxEntry_C_BanDurationDialogEntered_Params
{
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BanDurationDialogCanceled
struct UBP_ChatBoxEntry_C_BanDurationDialogCanceled_Params
{
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ADMIN - Kick
struct UBP_ChatBoxEntry_C_ADMIN___Kick_Params
{
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ADMIN - Ban
struct UBP_ChatBoxEntry_C_ADMIN___Ban_Params
{
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BanReasonDialogCanceled
struct UBP_ChatBoxEntry_C_BanReasonDialogCanceled_Params
{
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BanReasonDialogEntered
struct UBP_ChatBoxEntry_C_BanReasonDialogEntered_Params
{
};

// Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ExecuteUbergraph_BP_ChatBoxEntry
struct UBP_ChatBoxEntry_C_ExecuteUbergraph_BP_ChatBoxEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
