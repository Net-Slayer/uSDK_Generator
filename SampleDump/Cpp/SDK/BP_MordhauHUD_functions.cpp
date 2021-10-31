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
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateContextPopupWrapper_Interface
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateContextPopupWrapper_Interface()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateContextPopupWrapper_Interface");

	ABP_MordhauHUD_C_CreateContextPopupWrapper_Interface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateHUDButtonPrompts
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateHUDButtonPrompts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateHUDButtonPrompts");

	ABP_MordhauHUD_C_CreateHUDButtonPrompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ShowMOTD
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauHUD_C::ShowMOTD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowMOTD");

	ABP_MordhauHUD_C_ShowMOTD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateMOTD
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateMOTD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateMOTD");

	ABP_MordhauHUD_C_CreateMOTD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateContextPopupWrapper
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateContextPopupWrapper()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateContextPopupWrapper");

	ABP_MordhauHUD_C_CreateContextPopupWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.HideVoteKickMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauHUD_C::HideVoteKickMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.HideVoteKickMenu");

	ABP_MordhauHUD_C_HideVoteKickMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ShowVoteKickMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauHUD_C::ShowVoteKickMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowVoteKickMenu");

	ABP_MordhauHUD_C_ShowVoteKickMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateVoteKickMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateVoteKickMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateVoteKickMenu");

	ABP_MordhauHUD_C_CreateVoteKickMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ShowMatchResult
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsVictory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FText                                       MainText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Subtext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void ABP_MordhauHUD_C::ShowMatchResult(bool IsVictory, const struct FText& MainText, const struct FText& Subtext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowMatchResult");

	ABP_MordhauHUD_C_ShowMatchResult_Params params;
	params.IsVictory = IsVictory;
	params.MainText = MainText;
	params.Subtext = Subtext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ShowEndScreen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauHUD_C::ShowEndScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowEndScreen");

	ABP_MordhauHUD_C_ShowEndScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEndScreen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateEndScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEndScreen");

	ABP_MordhauHUD_C_CreateEndScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ShowKilledBy
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauPlayerState*                         Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauHUD_C::ShowKilledBy(class AMordhauPlayerState* Killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowKilledBy");

	ABP_MordhauHUD_C_ShowKilledBy_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateKilledByPanelWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateKilledByPanelWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateKilledByPanelWidget");

	ABP_MordhauHUD_C_CreateKilledByPanelWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ShowObjectiveWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Header                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauHUD_C::ShowObjectiveWidget(const struct FText& Description, const struct FText& Header, class UTexture2D* Icon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowObjectiveWidget");

	ABP_MordhauHUD_C_ShowObjectiveWidget_Params params;
	params.Description = Description;
	params.Header = Header;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateObjectiveWidget
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_Objectives_C*                            Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauHUD_C::CreateObjectiveWidget(class UBP_Objectives_C** Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateObjectiveWidget");

	ABP_MordhauHUD_C_CreateObjectiveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.HideSpawnScreen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::HideSpawnScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.HideSpawnScreen");

	ABP_MordhauHUD_C_HideSpawnScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ShowSpawnScreen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::ShowSpawnScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowSpawnScreen");

	ABP_MordhauHUD_C_ShowSpawnScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateSpawnScreen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateSpawnScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateSpawnScreen");

	ABP_MordhauHUD_C_CreateSpawnScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ShowVoiceMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauHUD_C::ShowVoiceMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowVoiceMenu");

	ABP_MordhauHUD_C_ShowVoiceMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateVoiceMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateVoiceMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateVoiceMenu");

	ABP_MordhauHUD_C_CreateVoiceMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEquipmentInfoDisplay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateEquipmentInfoDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEquipmentInfoDisplay");

	ABP_MordhauHUD_C_CreateEquipmentInfoDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateScoreFeed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateScoreFeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateScoreFeed");

	ABP_MordhauHUD_C_CreateScoreFeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ShowTips
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauHUD_C::ShowTips()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowTips");

	ABP_MordhauHUD_C_ShowTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateTips
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateTips()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateTips");

	ABP_MordhauHUD_C_CreateTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ShowEquipment
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauHUD_C::ShowEquipment()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowEquipment");

	ABP_MordhauHUD_C_ShowEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEquipmentDisplay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateEquipmentDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEquipmentDisplay");

	ABP_MordhauHUD_C_CreateEquipmentDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateNetIndicator
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateNetIndicator()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateNetIndicator");

	ABP_MordhauHUD_C_CreateNetIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateMainMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateMainMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateMainMenu");

	ABP_MordhauHUD_C_CreateMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.IsMainMenuVisible
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsVisible                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MordhauHUD_C::IsMainMenuVisible(bool* bIsVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.IsMainMenuVisible");

	ABP_MordhauHUD_C_IsMainMenuVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsVisible != nullptr)
		*bIsVisible = params.bIsVisible;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.HideMainMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::HideMainMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.HideMainMenu");

	ABP_MordhauHUD_C_HideMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ProcessQueuedDialogs
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::ProcessQueuedDialogs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ProcessQueuedDialogs");

	ABP_MordhauHUD_C_ProcessQueuedDialogs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.EnqueueDialog
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMordhauDialog*                              Dialog                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauHUD_C::EnqueueDialog(class UMordhauDialog* Dialog)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.EnqueueDialog");

	ABP_MordhauHUD_C_EnqueueDialog_Params params;
	params.Dialog = Dialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateWatermark
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateWatermark()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateWatermark");

	ABP_MordhauHUD_C_CreateWatermark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ShowAnnouncement
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Subtext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<E_AnnouncementType_E_AnnouncementType> Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauHUD_C::ShowAnnouncement(const struct FText& Text, const struct FText& Subtext, float Duration, TEnumAsByte<E_AnnouncementType_E_AnnouncementType> Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowAnnouncement");

	ABP_MordhauHUD_C_ShowAnnouncement_Params params;
	params.Text = Text;
	params.Subtext = Subtext;
	params.Duration = Duration;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateAnnouncement
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateAnnouncement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateAnnouncement");

	ABP_MordhauHUD_C_CreateAnnouncement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ShowEmoteMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauHUD_C::ShowEmoteMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowEmoteMenu");

	ABP_MordhauHUD_C_ShowEmoteMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEmoteMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateEmoteMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateEmoteMenu");

	ABP_MordhauHUD_C_CreateEmoteMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ShowTeamSelect
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::ShowTeamSelect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowTeamSelect");

	ABP_MordhauHUD_C_ShowTeamSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateTeamSelect
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateTeamSelect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateTeamSelect");

	ABP_MordhauHUD_C_CreateTeamSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ShowProfileSelect
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauHUD_C::ShowProfileSelect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowProfileSelect");

	ABP_MordhauHUD_C_ShowProfileSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateProfileSelect
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateProfileSelect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateProfileSelect");

	ABP_MordhauHUD_C_CreateProfileSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateChatBox
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateChatBox()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateChatBox");

	ABP_MordhauHUD_C_CreateChatBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateStatusBar
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateStatusBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateStatusBar");

	ABP_MordhauHUD_C_CreateStatusBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateCrosshair
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateCrosshair()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateCrosshair");

	ABP_MordhauHUD_C_CreateCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateKillFeed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateKillFeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateKillFeed");

	ABP_MordhauHUD_C_CreateKillFeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.CreateTargetInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::CreateTargetInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.CreateTargetInfo");

	ABP_MordhauHUD_C_CreateTargetInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.UseFullHUD
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauHUD_C::UseFullHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.UseFullHUD");

	ABP_MordhauHUD_C_UseFullHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.UseMinimalHUD
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauHUD_C::UseMinimalHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.UseMinimalHUD");

	ABP_MordhauHUD_C_UseMinimalHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ShowMainMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_ArmoryStates_E_ArmoryStates>         Armory_State                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauHUD_C::ShowMainMenu(TEnumAsByte<E_ArmoryStates_E_ArmoryStates> Armory_State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowMainMenu");

	ABP_MordhauHUD_C_ShowMainMenu_Params params;
	params.Armory_State = Armory_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.SendMessageToKillFeed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       KilledBy                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		class APlayerState*                                Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauHUD_C::SendMessageToKillFeed(class APlayerState* Killer, const struct FText& KilledBy, class APlayerState* Victim)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.SendMessageToKillFeed");

	ABP_MordhauHUD_C_SendMessageToKillFeed_Params params;
	params.Killer = Killer;
	params.KilledBy = KilledBy;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.SendMessageToChatbox
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       CharacterName                                              (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void ABP_MordhauHUD_C::SendMessageToChatbox(const struct FText& CharacterName, const struct FText& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.SendMessageToChatbox");

	ABP_MordhauHUD_C_SendMessageToChatbox_Params params;
	params.CharacterName = CharacterName;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ShowChatBox
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MordhauHUD_C::ShowChatBox(bool Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowChatBox");

	ABP_MordhauHUD_C_ShowChatBox_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.HideScoreboard
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauHUD_C::HideScoreboard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.HideScoreboard");

	ABP_MordhauHUD_C_HideScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ShowScoreboard
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauHUD_C::ShowScoreboard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ShowScoreboard");

	ABP_MordhauHUD_C_ShowScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_MordhauHUD_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ReceiveBeginPlay");

	ABP_MordhauHUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauHUD_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ReceiveTick");

	ABP_MordhauHUD_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.EnqueueMordhauDialog
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMordhauDialog*                              Dialog                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauHUD_C::EnqueueMordhauDialog(class UMordhauDialog* Dialog)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.EnqueueMordhauDialog");

	ABP_MordhauHUD_C_EnqueueMordhauDialog_Params params;
	params.Dialog = Dialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.On Player Killed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauHUD_C::On_Player_Killed(class APlayerState* Victim)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.On Player Killed");

	ABP_MordhauHUD_C_On_Player_Killed_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.ExecuteUbergraph_BP_MordhauHUD
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauHUD_C::ExecuteUbergraph_BP_MordhauHUD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.ExecuteUbergraph_BP_MordhauHUD");

	ABP_MordhauHUD_C_ExecuteUbergraph_BP_MordhauHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauHUD.BP_MordhauHUD_C.On Player Killed Event__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauHUD_C::On_Player_Killed_Event__DelegateSignature(class APlayerState* Victim)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauHUD.BP_MordhauHUD_C.On Player Killed Event__DelegateSignature");

	ABP_MordhauHUD_C_On_Player_Killed_Event__DelegateSignature_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
