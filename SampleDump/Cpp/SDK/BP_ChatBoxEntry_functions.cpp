// Name: Mordhau, Version: 4_25_hotfix

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
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.InitializeOptions
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TMap<struct FString, struct FText>                 OptionsMap                                                 (Parm, OutParm)
void UBP_ChatBoxEntry_C::InitializeOptions(TMap<struct FString, struct FText>* OptionsMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.InitializeOptions");

	UBP_ChatBoxEntry_C_InitializeOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OptionsMap != nullptr)
		*OptionsMap = params.OptionsMap;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.GetToolTipText_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ChatBoxEntry_C::GetToolTipText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.GetToolTipText_1");

	UBP_ChatBoxEntry_C_GetToolTipText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.UpdateEntryMessage
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       New_Message                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FLinearColor                                Text_Color                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChatBoxEntry_C::UpdateEntryMessage(const struct FText& New_Message, const struct FLinearColor& Text_Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.UpdateEntryMessage");

	UBP_ChatBoxEntry_C_UpdateEntryMessage_Params params;
	params.New_Message = New_Message;
	params.Text_Color = Text_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ChatBoxEntry_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.GetVisibility_1");

	UBP_ChatBoxEntry_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.SetupEntry
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FPlayFabPlayer                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Prefix                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FLinearColor                                NameColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<E_ChatUserTypes_E_ChatUserTypes>       Chat_User_Type                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChatBoxEntry_C::SetupEntry(const struct FString& Name, const struct FPlayFabPlayer& Player, const struct FText& Message, const struct FText& Prefix, const struct FLinearColor& NameColor, TEnumAsByte<E_ChatUserTypes_E_ChatUserTypes> Chat_User_Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.SetupEntry");

	UBP_ChatBoxEntry_C_SetupEntry_Params params;
	params.Name = Name;
	params.Player = Player;
	params.Message = Message;
	params.Prefix = Prefix;
	params.NameColor = NameColor;
	params.Chat_User_Type = Chat_User_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.Motivational Mute
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ChatBoxEntry_C::Motivational_Mute()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.Motivational Mute");

	UBP_ChatBoxEntry_C_Motivational_Mute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ClientMute
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ChatBoxEntry_C::ClientMute()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ClientMute");

	UBP_ChatBoxEntry_C_ClientMute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.VoteKick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ChatBoxEntry_C::VoteKick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.VoteKick");

	UBP_ChatBoxEntry_C_VoteKick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ADMIN - Mute
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ChatBoxEntry_C::ADMIN___Mute()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ADMIN - Mute");

	UBP_ChatBoxEntry_C_ADMIN___Mute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.MuteDialogCanceled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ChatBoxEntry_C::MuteDialogCanceled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.MuteDialogCanceled");

	UBP_ChatBoxEntry_C_MuteDialogCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked2
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Button_Index                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChatBoxEntry_C::ContextButtonClicked2(int Button_Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked2");

	UBP_ChatBoxEntry_C_ContextButtonClicked2_Params params;
	params.Button_Index = Button_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ADMIN - Message
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ChatBoxEntry_C::ADMIN___Message()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ADMIN - Message");

	UBP_ChatBoxEntry_C_ADMIN___Message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.MessageDialogEntered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ChatBoxEntry_C::MessageDialogEntered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.MessageDialogEntered");

	UBP_ChatBoxEntry_C_MessageDialogEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.MessageDialogCanceled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ChatBoxEntry_C::MessageDialogCanceled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.MessageDialogCanceled");

	UBP_ChatBoxEntry_C_MessageDialogCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.MuteDialogEntered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ChatBoxEntry_C::MuteDialogEntered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.MuteDialogEntered");

	UBP_ChatBoxEntry_C_MuteDialogEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Button_Index                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChatBoxEntry_C::ContextButtonClicked(int Button_Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked");

	UBP_ChatBoxEntry_C_ContextButtonClicked_Params params;
	params.Button_Index = Button_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ChatBoxEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UBP_ChatBoxEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.OptionSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_ChatBoxEntry_C::OptionSelected(const struct FString& Option)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.OptionSelected");

	UBP_ChatBoxEntry_C_OptionSelected_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.CreateWrapper
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TMap<struct FString, struct FText>                 InOptions                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_ChatBoxEntry_C::CreateWrapper(TMap<struct FString, struct FText> InOptions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.CreateWrapper");

	UBP_ChatBoxEntry_C_CreateWrapper_Params params;
	params.InOptions = InOptions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked3
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Button_Index                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChatBoxEntry_C::ContextButtonClicked3(int Button_Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ContextButtonClicked3");

	UBP_ChatBoxEntry_C_ContextButtonClicked3_Params params;
	params.Button_Index = Button_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.KickDialogEntered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ChatBoxEntry_C::KickDialogEntered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.KickDialogEntered");

	UBP_ChatBoxEntry_C_KickDialogEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.KickDialogCanceled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ChatBoxEntry_C::KickDialogCanceled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.KickDialogCanceled");

	UBP_ChatBoxEntry_C_KickDialogCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BanDurationDialogEntered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ChatBoxEntry_C::BanDurationDialogEntered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BanDurationDialogEntered");

	UBP_ChatBoxEntry_C_BanDurationDialogEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BanDurationDialogCanceled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ChatBoxEntry_C::BanDurationDialogCanceled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BanDurationDialogCanceled");

	UBP_ChatBoxEntry_C_BanDurationDialogCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ADMIN - Kick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ChatBoxEntry_C::ADMIN___Kick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ADMIN - Kick");

	UBP_ChatBoxEntry_C_ADMIN___Kick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ADMIN - Ban
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ChatBoxEntry_C::ADMIN___Ban()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ADMIN - Ban");

	UBP_ChatBoxEntry_C_ADMIN___Ban_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BanReasonDialogCanceled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ChatBoxEntry_C::BanReasonDialogCanceled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BanReasonDialogCanceled");

	UBP_ChatBoxEntry_C_BanReasonDialogCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BanReasonDialogEntered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ChatBoxEntry_C::BanReasonDialogEntered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.BanReasonDialogEntered");

	UBP_ChatBoxEntry_C_BanReasonDialogEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ExecuteUbergraph_BP_ChatBoxEntry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChatBoxEntry_C::ExecuteUbergraph_BP_ChatBoxEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChatBoxEntry.BP_ChatBoxEntry_C.ExecuteUbergraph_BP_ChatBoxEntry");

	UBP_ChatBoxEntry_C_ExecuteUbergraph_BP_ChatBoxEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
