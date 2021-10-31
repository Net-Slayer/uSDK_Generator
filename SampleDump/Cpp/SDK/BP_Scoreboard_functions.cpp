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
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.Open Menu Scoreboard
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_Scoreboard_C::Open_Menu_Scoreboard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Open Menu Scoreboard");

	UBP_Scoreboard_C_Open_Menu_Scoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.Get Team Color
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Output__Linear_                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSlateColor                                 Output__Slate_                                             (Parm, OutParm)
void UBP_Scoreboard_C::Get_Team_Color(int Team, struct FLinearColor* Output__Linear_, struct FSlateColor* Output__Slate_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Get Team Color");

	UBP_Scoreboard_C_Get_Team_Color_Params params;
	params.Team = Team;

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
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.Update
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_Scoreboard_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Update");

	UBP_Scoreboard_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.Refresh
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauPlayerState*                         PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Scoreboard_C::Refresh(class AMordhauPlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Refresh");

	UBP_Scoreboard_C_Refresh_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.GetMaxPlayers
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                DivideBy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Text                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Scoreboard_C::GetMaxPlayers(int DivideBy, int* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetMaxPlayers");

	UBP_Scoreboard_C_GetMaxPlayers_Params params;
	params.DivideBy = DivideBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.GetServerName
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       Text                                                       (Parm, OutParm)
void UBP_Scoreboard_C::GetServerName(struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetServerName");

	UBP_Scoreboard_C_GetServerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.GetMapName
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       Text                                                       (Parm, OutParm)
void UBP_Scoreboard_C::GetMapName(struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetMapName");

	UBP_Scoreboard_C_GetMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.GetTeamObjectiveValue
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (Parm, OutParm)
void UBP_Scoreboard_C::GetTeamObjectiveValue(int Team, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeamObjectiveValue");

	UBP_Scoreboard_C_GetTeamObjectiveValue_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2ObjectiveValue
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       Text                                                       (Parm, OutParm)
void UBP_Scoreboard_C::GetTeam2ObjectiveValue(struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2ObjectiveValue");

	UBP_Scoreboard_C_GetTeam2ObjectiveValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1ObjectiveValue
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       Text                                                       (Parm, OutParm)
void UBP_Scoreboard_C::GetTeam1ObjectiveValue(struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1ObjectiveValue");

	UBP_Scoreboard_C_GetTeam1ObjectiveValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.GetObjectiveName
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       Text                                                       (Parm, OutParm)
void UBP_Scoreboard_C::GetObjectiveName(struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetObjectiveName");

	UBP_Scoreboard_C_GetObjectiveName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.GetGameModeName
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       Text                                                       (Parm, OutParm)
void UBP_Scoreboard_C::GetGameModeName(struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetGameModeName");

	UBP_Scoreboard_C_GetGameModeName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2Players
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       Text                                                       (Parm, OutParm)
void UBP_Scoreboard_C::GetTeam2Players(struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2Players");

	UBP_Scoreboard_C_GetTeam2Players_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1Players
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       Text                                                       (Parm, OutParm)
void UBP_Scoreboard_C::GetTeam1Players(struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1Players");

	UBP_Scoreboard_C_GetTeam1Players_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.GetTeamPlayers
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (Parm, OutParm)
void UBP_Scoreboard_C::GetTeamPlayers(int Team, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeamPlayers");

	UBP_Scoreboard_C_GetTeamPlayers_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2Name
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       Text                                                       (Parm, OutParm)
void UBP_Scoreboard_C::GetTeam2Name(struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeam2Name");

	UBP_Scoreboard_C_GetTeam2Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.GetTeamName
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (Parm, OutParm)
void UBP_Scoreboard_C::GetTeamName(int Team, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeamName");

	UBP_Scoreboard_C_GetTeamName_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1Name
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       Text                                                       (Parm, OutParm)
void UBP_Scoreboard_C::GetTeam1Name(struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetTeam1Name");

	UBP_Scoreboard_C_GetTeam1Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.GetScoreboardTime
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       Time                                                       (Parm, OutParm)
void UBP_Scoreboard_C::GetScoreboardTime(struct FText* Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetScoreboardTime");

	UBP_Scoreboard_C_GetScoreboardTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.Hide
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_Scoreboard_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Hide");

	UBP_Scoreboard_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.Show
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_Scoreboard_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Show");

	UBP_Scoreboard_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.Refresh Players Array
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_Scoreboard_C::Refresh_Players_Array()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Refresh Players Array");

	UBP_Scoreboard_C_Refresh_Players_Array_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_Scoreboard_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Construct");

	UBP_Scoreboard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Scoreboard.BP_Scoreboard_C.ExecuteUbergraph_BP_Scoreboard
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Scoreboard_C::ExecuteUbergraph_BP_Scoreboard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.ExecuteUbergraph_BP_Scoreboard");

	UBP_Scoreboard_C_ExecuteUbergraph_BP_Scoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
