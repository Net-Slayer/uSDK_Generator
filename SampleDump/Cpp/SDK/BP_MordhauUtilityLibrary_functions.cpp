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
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.Get Key Info from Action Name_Secondary
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ActionName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FKey                                        Secondary_Key                                              (Parm, OutParm, HasGetValueTypeHash)
//		struct FText                                       Secondary_Key_Display_Name                                 (Parm, OutParm)
void UBP_MordhauUtilityLibrary_C::STATIC_Get_Key_Info_from_Action_Name_Secondary(const struct FName& ActionName, class UObject* __WorldContext, class UTexture2D** Icon, struct FKey* Secondary_Key, struct FText* Secondary_Key_Display_Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.Get Key Info from Action Name_Secondary");

	UBP_MordhauUtilityLibrary_C_Get_Key_Info_from_Action_Name_Secondary_Params params;
	params.ActionName = ActionName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
	if (Secondary_Key != nullptr)
		*Secondary_Key = params.Secondary_Key;
	if (Secondary_Key_Display_Name != nullptr)
		*Secondary_Key_Display_Name = params.Secondary_Key_Display_Name;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.Get Key Info from Action Name_Primary
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ActionName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FKey                                        Key                                                        (Parm, OutParm, HasGetValueTypeHash)
//		struct FText                                       Key_Display_Name                                           (Parm, OutParm)
void UBP_MordhauUtilityLibrary_C::STATIC_Get_Key_Info_from_Action_Name_Primary(const struct FName& ActionName, class UObject* __WorldContext, class UTexture2D** Icon, struct FKey* Key, struct FText* Key_Display_Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.Get Key Info from Action Name_Primary");

	UBP_MordhauUtilityLibrary_C_Get_Key_Info_from_Action_Name_Primary_Params params;
	params.ActionName = ActionName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
	if (Key != nullptr)
		*Key = params.Key;
	if (Key_Display_Name != nullptr)
		*Key_Display_Name = params.Key_Display_Name;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateContextPopup_Interface
//		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TMap<struct FString, struct FText>                 Option_Map                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauUtilityLibrary_C::STATIC_CreateContextPopup_Interface(TMap<struct FString, struct FText> Option_Map, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateContextPopup_Interface");

	UBP_MordhauUtilityLibrary_C_CreateContextPopup_Interface_Params params;
	params.Option_Map = Option_Map;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.Set Spawn Loadout
//		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           Player_Controller                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauUtilityLibrary_C::STATIC_Set_Spawn_Loadout(class APlayerController* Player_Controller, int ID, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.Set Spawn Loadout");

	UBP_MordhauUtilityLibrary_C_Set_Spawn_Loadout_Params params;
	params.Player_Controller = Player_Controller;
	params.ID = ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetLoadoutFromSingleton
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FCharacterProfile                           Profile                                                    (Parm, OutParm)
//		bool                                               is_Default_Profile                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MordhauUtilityLibrary_C::STATIC_GetLoadoutFromSingleton(int ID, class UObject* __WorldContext, struct FCharacterProfile* Profile, bool* is_Default_Profile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetLoadoutFromSingleton");

	UBP_MordhauUtilityLibrary_C_GetLoadoutFromSingleton_Params params;
	params.ID = ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Profile != nullptr)
		*Profile = params.Profile;
	if (is_Default_Profile != nullptr)
		*is_Default_Profile = params.is_Default_Profile;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetTeamColor
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Output__Linear_                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSlateColor                                 Output__Slate_                                             (Parm, OutParm)
void UBP_MordhauUtilityLibrary_C::STATIC_GetTeamColor(int Team, class UObject* __WorldContext, struct FLinearColor* Output__Linear_, struct FSlateColor* Output__Slate_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetTeamColor");

	UBP_MordhauUtilityLibrary_C_GetTeamColor_Params params;
	params.Team = Team;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output__Linear_ != nullptr)
		*Output__Linear_ = params.Output__Linear_;
	if (Output__Slate_ != nullptr)
		*Output__Slate_ = params.Output__Slate_;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.Get3v3MMRFromStats
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MMR                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauUtilityLibrary_C::STATIC_Get3v3MMRFromStats(class UObject* __WorldContext, int* MMR)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.Get3v3MMRFromStats");

	UBP_MordhauUtilityLibrary_C_Get3v3MMRFromStats_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MMR != nullptr)
		*MMR = params.MMR;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.OpenSteamProfile
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     SteamId                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauUtilityLibrary_C::STATIC_OpenSteamProfile(const struct FString& SteamId, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.OpenSteamProfile");

	UBP_MordhauUtilityLibrary_C_OpenSteamProfile_Params params;
	params.SteamId = SteamId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetPlayerStateFromActor
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AMordhauPlayerState*                         PlayerState                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauUtilityLibrary_C::STATIC_GetPlayerStateFromActor(class AActor* Actor, class UObject* __WorldContext, class AMordhauPlayerState** PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetPlayerStateFromActor");

	UBP_MordhauUtilityLibrary_C_GetPlayerStateFromActor_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerState != nullptr)
		*PlayerState = params.PlayerState;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetKeyInfoFromKey
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Key_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FKey                                        Key                                                        (Parm, OutParm, HasGetValueTypeHash)
//		struct FText                                       Key_Display_Name                                           (Parm, OutParm)
void UBP_MordhauUtilityLibrary_C::STATIC_GetKeyInfoFromKey(const struct FKey& Key_, class UObject* __WorldContext, class UTexture2D** Icon, struct FKey* Key, struct FText* Key_Display_Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetKeyInfoFromKey");

	UBP_MordhauUtilityLibrary_C_GetKeyInfoFromKey_Params params;
	params.Key_ = Key_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
	if (Key != nullptr)
		*Key = params.Key;
	if (Key_Display_Name != nullptr)
		*Key_Display_Name = params.Key_Display_Name;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetRank
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Rank                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauUtilityLibrary_C::STATIC_GetRank(class UObject* __WorldContext, int* Rank)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetRank");

	UBP_MordhauUtilityLibrary_C_GetRank_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rank != nullptr)
		*Rank = params.Rank;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.Get1v1MMRFromStats
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MMR                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauUtilityLibrary_C::STATIC_Get1v1MMRFromStats(class UObject* __WorldContext, int* MMR)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.Get1v1MMRFromStats");

	UBP_MordhauUtilityLibrary_C_Get1v1MMRFromStats_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MMR != nullptr)
		*MMR = params.MMR;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateContextPopup
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TMap<struct FString, struct FText>                 Option_Map                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UBP_ContextPopupWrapper_C*                   Context_Popup_Wrapper                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauUtilityLibrary_C::STATIC_CreateContextPopup(TMap<struct FString, struct FText> Option_Map, class UObject* __WorldContext, class UBP_ContextPopupWrapper_C** Context_Popup_Wrapper)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateContextPopup");

	UBP_MordhauUtilityLibrary_C_CreateContextPopup_Params params;
	params.Option_Map = Option_Map;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context_Popup_Wrapper != nullptr)
		*Context_Popup_Wrapper = params.Context_Popup_Wrapper;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetGoldAndRankUnlockRequirement
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<int>                                        ItemDefIDs                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Gold                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Rank                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauUtilityLibrary_C::STATIC_GetGoldAndRankUnlockRequirement(TArray<int>* ItemDefIDs, class UObject* __WorldContext, int* Gold, int* Rank)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetGoldAndRankUnlockRequirement");

	UBP_MordhauUtilityLibrary_C_GetGoldAndRankUnlockRequirement_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemDefIDs != nullptr)
		*ItemDefIDs = params.ItemDefIDs;
	if (Gold != nullptr)
		*Gold = params.Gold;
	if (Rank != nullptr)
		*Rank = params.Rank;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetUnlockTooltipText
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<int>                                        ItemDefIDs                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ToolTipText                                                (Parm, OutParm)
void UBP_MordhauUtilityLibrary_C::STATIC_GetUnlockTooltipText(TArray<int>* ItemDefIDs, class UObject* __WorldContext, struct FText* ToolTipText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetUnlockTooltipText");

	UBP_MordhauUtilityLibrary_C_GetUnlockTooltipText_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemDefIDs != nullptr)
		*ItemDefIDs = params.ItemDefIDs;
	if (ToolTipText != nullptr)
		*ToolTipText = params.ToolTipText;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateInformationDialog
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           OwningPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       TitleText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       InformationText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       ButtonText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UBP_InformationDialog_C*                     InformationDialog                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauUtilityLibrary_C::STATIC_CreateInformationDialog(class APlayerController* OwningPlayer, const struct FText& TitleText, const struct FText& InformationText, const struct FText& ButtonText, class UObject* __WorldContext, class UBP_InformationDialog_C** InformationDialog)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateInformationDialog");

	UBP_MordhauUtilityLibrary_C_CreateInformationDialog_Params params;
	params.OwningPlayer = OwningPlayer;
	params.TitleText = TitleText;
	params.InformationText = InformationText;
	params.ButtonText = ButtonText;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InformationDialog != nullptr)
		*InformationDialog = params.InformationDialog;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateChoiceDialog
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           OwningPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       TitleText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       ChoiceText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       LeftButtonText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       RightButtonText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UBP_ChoiceDialog_C*                          ChoiceDialog                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauUtilityLibrary_C::STATIC_CreateChoiceDialog(class APlayerController* OwningPlayer, const struct FText& TitleText, const struct FText& ChoiceText, const struct FText& LeftButtonText, const struct FText& RightButtonText, class UObject* __WorldContext, class UBP_ChoiceDialog_C** ChoiceDialog)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateChoiceDialog");

	UBP_MordhauUtilityLibrary_C_CreateChoiceDialog_Params params;
	params.OwningPlayer = OwningPlayer;
	params.TitleText = TitleText;
	params.ChoiceText = ChoiceText;
	params.LeftButtonText = LeftButtonText;
	params.RightButtonText = RightButtonText;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ChoiceDialog != nullptr)
		*ChoiceDialog = params.ChoiceDialog;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateTextInputDialog
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           OwningPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       TitleText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       HintText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       LeftButtonText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       RightButtonText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               bIsPassword                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UBP_TextInputDialog_C*                       TextInputDialog                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauUtilityLibrary_C::STATIC_CreateTextInputDialog(class APlayerController* OwningPlayer, const struct FText& TitleText, const struct FText& HintText, const struct FText& LeftButtonText, const struct FText& RightButtonText, bool bIsPassword, class UObject* __WorldContext, class UBP_TextInputDialog_C** TextInputDialog)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateTextInputDialog");

	UBP_MordhauUtilityLibrary_C_CreateTextInputDialog_Params params;
	params.OwningPlayer = OwningPlayer;
	params.TitleText = TitleText;
	params.HintText = HintText;
	params.LeftButtonText = LeftButtonText;
	params.RightButtonText = RightButtonText;
	params.bIsPassword = bIsPassword;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextInputDialog != nullptr)
		*TextInputDialog = params.TextInputDialog;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.ComputeRagdollForce
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Agent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      DamageSubType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      RandomByte                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Receiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Force                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauUtilityLibrary_C::STATIC_ComputeRagdollForce(class AActor* Agent, unsigned char DamageType, unsigned char DamageSubType, unsigned char RandomByte, class AActor* Receiver, class UObject* __WorldContext, struct FVector* Force)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.ComputeRagdollForce");

	UBP_MordhauUtilityLibrary_C_ComputeRagdollForce_Params params;
	params.Agent = Agent;
	params.DamageType = DamageType;
	params.DamageSubType = DamageSubType;
	params.RandomByte = RandomByte;
	params.Receiver = Receiver;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Force != nullptr)
		*Force = params.Force;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetSelectedIndex
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UComboBoxText*                               ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                SelectedIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauUtilityLibrary_C::STATIC_GetSelectedIndex(class UComboBoxText* ComboBox, class UObject* __WorldContext, int* SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetSelectedIndex");

	UBP_MordhauUtilityLibrary_C_GetSelectedIndex_Params params;
	params.ComboBox = ComboBox;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.SelectFirstComboBoxOption
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UComboBoxText*                               ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauUtilityLibrary_C::STATIC_SelectFirstComboBoxOption(class UComboBoxText* ComboBox, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.SelectFirstComboBoxOption");

	UBP_MordhauUtilityLibrary_C_SelectFirstComboBoxOption_Params params;
	params.ComboBox = ComboBox;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.IsProfileNameValid
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ProfiletName                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MordhauUtilityLibrary_C::STATIC_IsProfileNameValid(const struct FText& ProfiletName, class UObject* __WorldContext, bool* IsValid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.IsProfileNameValid");

	UBP_MordhauUtilityLibrary_C_IsProfileNameValid_Params params;
	params.ProfiletName = ProfiletName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.IsFirstOptionSelected
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UComboBoxText*                               ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_MordhauUtilityLibrary_C::STATIC_IsFirstOptionSelected(class UComboBoxText* ComboBox, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.IsFirstOptionSelected");

	UBP_MordhauUtilityLibrary_C_IsFirstOptionSelected_Params params;
	params.ComboBox = ComboBox;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.SelectLastComboBoxOption
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UComboBoxText*                               ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauUtilityLibrary_C::STATIC_SelectLastComboBoxOption(class UComboBoxText* ComboBox, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.SelectLastComboBoxOption");

	UBP_MordhauUtilityLibrary_C_SelectLastComboBoxOption_Params params;
	params.ComboBox = ComboBox;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetLastComboBoxOption
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UComboBoxText*                               ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Option                                                     (Parm, OutParm)
void UBP_MordhauUtilityLibrary_C::STATIC_GetLastComboBoxOption(class UComboBoxText* ComboBox, class UObject* __WorldContext, struct FText* Option)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetLastComboBoxOption");

	UBP_MordhauUtilityLibrary_C_GetLastComboBoxOption_Params params;
	params.ComboBox = ComboBox;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Option != nullptr)
		*Option = params.Option;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
