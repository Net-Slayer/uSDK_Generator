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
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.InitializeOptions
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TMap<struct FString, struct FText>                 OptionsMap                                                 (Parm, OutParm)
void UBP_ScoreboardEntryParent_C::InitializeOptions(TMap<struct FString, struct FText>* OptionsMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.InitializeOptions");

	UBP_ScoreboardEntryParent_C_InitializeOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OptionsMap != nullptr)
		*OptionsMap = params.OptionsMap;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Refresh Entry
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauPlayerState*                         PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<E_ScoreboardEntryTypes_E_ScoreboardEntryTypes> Entry_Type                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreboardEntryParent_C::Refresh_Entry(class AMordhauPlayerState* PlayerState, TEnumAsByte<E_ScoreboardEntryTypes_E_ScoreboardEntryTypes> Entry_Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Refresh Entry");

	UBP_ScoreboardEntryParent_C_Refresh_Entry_Params params;
	params.PlayerState = PlayerState;
	params.Entry_Type = Entry_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.MuteDialogEntered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ScoreboardEntryParent_C::MuteDialogEntered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.MuteDialogEntered");

	UBP_ScoreboardEntryParent_C_MuteDialogEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.MuteDialogCanceled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ScoreboardEntryParent_C::MuteDialogCanceled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.MuteDialogCanceled");

	UBP_ScoreboardEntryParent_C_MuteDialogCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.KickDialogEntered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ScoreboardEntryParent_C::KickDialogEntered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.KickDialogEntered");

	UBP_ScoreboardEntryParent_C_KickDialogEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.KickDialogCanceled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ScoreboardEntryParent_C::KickDialogCanceled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.KickDialogCanceled");

	UBP_ScoreboardEntryParent_C_KickDialogCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.BanDurationDialogEntered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ScoreboardEntryParent_C::BanDurationDialogEntered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.BanDurationDialogEntered");

	UBP_ScoreboardEntryParent_C_BanDurationDialogEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.BanDurationDialogCanceled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ScoreboardEntryParent_C::BanDurationDialogCanceled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.BanDurationDialogCanceled");

	UBP_ScoreboardEntryParent_C_BanDurationDialogCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ADMIN - Mute
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ScoreboardEntryParent_C::ADMIN___Mute()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ADMIN - Mute");

	UBP_ScoreboardEntryParent_C_ADMIN___Mute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ADMIN - Kick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ScoreboardEntryParent_C::ADMIN___Kick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ADMIN - Kick");

	UBP_ScoreboardEntryParent_C_ADMIN___Kick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ADMIN - Ban
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ScoreboardEntryParent_C::ADMIN___Ban()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ADMIN - Ban");

	UBP_ScoreboardEntryParent_C_ADMIN___Ban_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.BanReasonDialogCanceled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ScoreboardEntryParent_C::BanReasonDialogCanceled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.BanReasonDialogCanceled");

	UBP_ScoreboardEntryParent_C_BanReasonDialogCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.BanReasonDialogEntered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ScoreboardEntryParent_C::BanReasonDialogEntered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.BanReasonDialogEntered");

	UBP_ScoreboardEntryParent_C_BanReasonDialogEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Context Button Clicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Button_Index                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreboardEntryParent_C::Context_Button_Clicked(int Button_Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Context Button Clicked");

	UBP_ScoreboardEntryParent_C_Context_Button_Clicked_Params params;
	params.Button_Index = Button_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.CallContextMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ScoreboardEntryParent_C::CallContextMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.CallContextMenu");

	UBP_ScoreboardEntryParent_C_CallContextMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.VoteKick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ScoreboardEntryParent_C::VoteKick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.VoteKick");

	UBP_ScoreboardEntryParent_C_VoteKick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Chat Mute
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ScoreboardEntryParent_C::Chat_Mute()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Chat Mute");

	UBP_ScoreboardEntryParent_C_Chat_Mute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.View Steam Profile
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ScoreboardEntryParent_C::View_Steam_Profile()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.View Steam Profile");

	UBP_ScoreboardEntryParent_C_View_Steam_Profile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_ScoreboardEntryParent_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Construct");

	UBP_ScoreboardEntryParent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.OptionSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_ScoreboardEntryParent_C::OptionSelected(const struct FString& Option)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.OptionSelected");

	UBP_ScoreboardEntryParent_C_OptionSelected_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.CreateWrapper
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TMap<struct FString, struct FText>                 InOptions                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_ScoreboardEntryParent_C::CreateWrapper(TMap<struct FString, struct FText> InOptions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.CreateWrapper");

	UBP_ScoreboardEntryParent_C_CreateWrapper_Params params;
	params.InOptions = InOptions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ADMIN - Message
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ScoreboardEntryParent_C::ADMIN___Message()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ADMIN - Message");

	UBP_ScoreboardEntryParent_C_ADMIN___Message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.MessageDialogEntered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ScoreboardEntryParent_C::MessageDialogEntered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.MessageDialogEntered");

	UBP_ScoreboardEntryParent_C_MessageDialogEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.MessageDialogCanceled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ScoreboardEntryParent_C::MessageDialogCanceled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.MessageDialogCanceled");

	UBP_ScoreboardEntryParent_C_MessageDialogCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ExecuteUbergraph_BP_ScoreboardEntryParent
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreboardEntryParent_C::ExecuteUbergraph_BP_ScoreboardEntryParent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.ExecuteUbergraph_BP_ScoreboardEntryParent");

	UBP_ScoreboardEntryParent_C_ExecuteUbergraph_BP_ScoreboardEntryParent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Refreshed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_ScoreboardEntryParent_C::Refreshed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C.Refreshed__DelegateSignature");

	UBP_ScoreboardEntryParent_C_Refreshed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
