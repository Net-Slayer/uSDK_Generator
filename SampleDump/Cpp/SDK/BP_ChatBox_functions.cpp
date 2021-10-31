// Name: Mordhau, Version: Patch23

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.OnRep_bIsChatPaused
//		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ChatBox_C::OnRep_bIsChatPaused()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.OnRep_bIsChatPaused");

	UBP_ChatBox_C_OnRep_bIsChatPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.GetText_2
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ChatBox_C::GetText_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GetText_2");

	UBP_ChatBox_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.GetVisibility_4
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ChatBox_C::GetVisibility_4()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GetVisibility_4");

	UBP_ChatBox_C_GetVisibility_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.GetVisibility_3
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ChatBox_C::GetVisibility_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GetVisibility_3");

	UBP_ChatBox_C_GetVisibility_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.Get_TextArea_bIsEnabled_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_ChatBox_C::Get_TextArea_bIsEnabled_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.Get_TextArea_bIsEnabled_1");

	UBP_ChatBox_C_Get_TextArea_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.GetVisibility_2
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ChatBox_C::GetVisibility_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GetVisibility_2");

	UBP_ChatBox_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.Repopulate Muted Player List
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ChatBox_C::Repopulate_Muted_Player_List()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.Repopulate Muted Player List");

	UBP_ChatBox_C_Repopulate_Muted_Player_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.RemovePlayerFromMutedMap
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabPlayer                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		int                                                Player_Index                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChatBox_C::RemovePlayerFromMutedMap(const struct FPlayFabPlayer& Player, int* Player_Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.RemovePlayerFromMutedMap");

	UBP_ChatBox_C_RemovePlayerFromMutedMap_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Player_Index != nullptr)
		*Player_Index = params.Player_Index;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.IsPlayerMuted
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabPlayer                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		TEnumAsByte<E_ChatMuteTypes_E_ChatMuteTypes>       Mute_Type                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsMuted                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ChatBox_C::IsPlayerMuted(const struct FPlayFabPlayer& Player, TEnumAsByte<E_ChatMuteTypes_E_ChatMuteTypes>* Mute_Type, bool* IsMuted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.IsPlayerMuted");

	UBP_ChatBox_C_IsPlayerMuted_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mute_Type != nullptr)
		*Mute_Type = params.Mute_Type;
	if (IsMuted != nullptr)
		*IsMuted = params.IsMuted;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.AddPlayerToMutedMap
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabPlayer                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		TEnumAsByte<E_ChatMuteTypes_E_ChatMuteTypes>       Mute_Type                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChatBox_C::AddPlayerToMutedMap(const struct FPlayFabPlayer& Player, TEnumAsByte<E_ChatMuteTypes_E_ChatMuteTypes> Mute_Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.AddPlayerToMutedMap");

	UBP_ChatBox_C_AddPlayerToMutedMap_Params params;
	params.Player = Player;
	params.Mute_Type = Mute_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.Get Keys From Value
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TMap<class UBP_ChatBoxEntry_C*, struct FString>    PreviousMessagesMap                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
//		struct FString                                     Value__SteamID_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TArray<class UBP_ChatBoxEntry_C*>                  Keys                                                       (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UBP_ChatBox_C::Get_Keys_From_Value(TMap<class UBP_ChatBoxEntry_C*, struct FString> PreviousMessagesMap, const struct FString& Value__SteamID_, TArray<class UBP_ChatBoxEntry_C*>* Keys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.Get Keys From Value");

	UBP_ChatBox_C_Get_Keys_From_Value_Params params;
	params.PreviousMessagesMap = PreviousMessagesMap;
	params.Value__SteamID_ = Value__SteamID_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Keys != nullptr)
		*Keys = params.Keys;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.UnmutePlayer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabPlayer                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBP_ChatBox_C::UnmutePlayer(const struct FPlayFabPlayer& Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.UnmutePlayer");

	UBP_ChatBox_C_UnmutePlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.MutePlayer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_ChatMuteTypes_E_ChatMuteTypes>       MuteType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FPlayFabPlayer                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBP_ChatBox_C::MutePlayer(TEnumAsByte<E_ChatMuteTypes_E_ChatMuteTypes> MuteType, const struct FPlayFabPlayer& Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.MutePlayer");

	UBP_ChatBox_C_MutePlayer_Params params;
	params.MuteType = MuteType;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ChatBox_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GetVisibility_1");

	UBP_ChatBox_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.ResetThreshold
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_ChatBox_C::ResetThreshold()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.ResetThreshold");

	UBP_ChatBox_C_ResetThreshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.GetText_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ChatBox_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GetText_1");

	UBP_ChatBox_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.AddViewModeEntry
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_ChatBoxEntry_C*                          Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChatBox_C::AddViewModeEntry(class UBP_ChatBoxEntry_C* Entry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.AddViewModeEntry");

	UBP_ChatBox_C_AddViewModeEntry_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.AddEntriesEntry
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_ChatBoxEntry_C*                          Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChatBox_C::AddEntriesEntry(class UBP_ChatBoxEntry_C* Entry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.AddEntriesEntry");

	UBP_ChatBox_C_AddEntriesEntry_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.GetEntriesVisibility
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ChatBox_C::GetEntriesVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GetEntriesVisibility");

	UBP_ChatBox_C_GetEntriesVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.GetChatBoxVisibility
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ChatBox_C::GetChatBoxVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GetChatBoxVisibility");

	UBP_ChatBox_C_GetChatBoxVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.OnEscape
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ChatBox_C::OnEscape()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.OnEscape");

	UBP_ChatBox_C_OnEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.OnMessageReceived
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		class APlayerState*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Prefix                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_ChatBox_C::OnMessageReceived(const struct FText& Message, class APlayerState* Player, const struct FText& Prefix)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.OnMessageReceived");

	UBP_ChatBox_C_OnMessageReceived_Params params;
	params.Message = Message;
	params.Player = Player;
	params.Prefix = Prefix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.OnEnter
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ChatBox_C::OnEnter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.OnEnter");

	UBP_ChatBox_C_OnEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.GoToChatMode
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ChatBox_C::GoToChatMode(bool Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GoToChatMode");

	UBP_ChatBox_C_GoToChatMode_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.GetViewModeVisibility
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ChatBox_C::GetViewModeVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GetViewModeVisibility");

	UBP_ChatBox_C_GetViewModeVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.GetInputContainerVisibility
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ChatBox_C::GetInputContainerVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GetInputContainerVisibility");

	UBP_ChatBox_C_GetInputContainerVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.OnPreviewKeyDown
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBP_ChatBox_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.OnPreviewKeyDown");

	UBP_ChatBox_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.AddEntry
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FLinearColor                                NameColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Prefix                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FPlayFabPlayer                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		TEnumAsByte<E_ChatUserTypes_E_ChatUserTypes>       Chat_User_Type                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChatBox_C::AddEntry(const struct FString& Name, const struct FText& Message, const struct FLinearColor& NameColor, const struct FText& Prefix, const struct FPlayFabPlayer& Player, TEnumAsByte<E_ChatUserTypes_E_ChatUserTypes> Chat_User_Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.AddEntry");

	UBP_ChatBox_C_AddEntry_Params params;
	params.Name = Name;
	params.Message = Message;
	params.NameColor = NameColor;
	params.Prefix = Prefix;
	params.Player = Player;
	params.Chat_User_Type = Chat_User_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.BndEvt__TextArea_K2Node_ComponentBoundEvent_594_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_ChatBox_C::BndEvt__TextArea_K2Node_ComponentBoundEvent_594_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.BndEvt__TextArea_K2Node_ComponentBoundEvent_594_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	UBP_ChatBox_C_BndEvt__TextArea_K2Node_ComponentBoundEvent_594_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.OnMouseLeave
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_ChatBox_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.OnMouseLeave");

	UBP_ChatBox_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.OnMouseEnter
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_ChatBox_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.OnMouseEnter");

	UBP_ChatBox_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChatBox_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.Tick");

	UBP_ChatBox_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.GoToViewMode
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ChatBox_C::GoToViewMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GoToViewMode");

	UBP_ChatBox_C_GoToViewMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.GoToViewModeCallback
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ChatBox_C::GoToViewModeCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.GoToViewModeCallback");

	UBP_ChatBox_C_GoToViewModeCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_ChatBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.Construct");

	UBP_ChatBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ChatBox_C::BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	UBP_ChatBox_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.OnServerRestrictionInfoReceived
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FServerRestrictionInfo                      ServerRestrictionInfo                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UBP_ChatBox_C::OnServerRestrictionInfoReceived(const struct FServerRestrictionInfo& ServerRestrictionInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.OnServerRestrictionInfoReceived");

	UBP_ChatBox_C_OnServerRestrictionInfoReceived_Params params;
	params.ServerRestrictionInfo = ServerRestrictionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.BndEvt__PauseChatCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ChatBox_C::BndEvt__PauseChatCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.BndEvt__PauseChatCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	UBP_ChatBox_C_BndEvt__PauseChatCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ChatBox_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UBP_ChatBox_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChatBox.BP_ChatBox_C.ExecuteUbergraph_BP_ChatBox
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChatBox_C::ExecuteUbergraph_BP_ChatBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBox.BP_ChatBox_C.ExecuteUbergraph_BP_ChatBox");

	UBP_ChatBox_C_ExecuteUbergraph_BP_ChatBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
