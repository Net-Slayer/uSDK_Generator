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
//		Name   -> Function BP_TeamSelect.BP_TeamSelect_C.OnPreviewKeyDown
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBP_TeamSelect_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TeamSelect.BP_TeamSelect_C.OnPreviewKeyDown");

	UBP_TeamSelect_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_TeamSelect.BP_TeamSelect_C.Hide
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_TeamSelect_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TeamSelect.BP_TeamSelect_C.Hide");

	UBP_TeamSelect_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_TeamSelect.BP_TeamSelect_C.GetMapName
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     NewParam                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_TeamSelect_C::GetMapName(struct FString* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TeamSelect.BP_TeamSelect_C.GetMapName");

	UBP_TeamSelect_C_GetMapName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_TeamSelect.BP_TeamSelect_C.GetGameModeName
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (Parm, OutParm)
void UBP_TeamSelect_C::GetGameModeName(struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TeamSelect.BP_TeamSelect_C.GetGameModeName");

	UBP_TeamSelect_C_GetGameModeName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_TeamSelect.BP_TeamSelect_C.Show
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_TeamSelect_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TeamSelect.BP_TeamSelect_C.Show");

	UBP_TeamSelect_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_TeamSelect.BP_TeamSelect_C.SelectTeam
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_TeamSelect_C::SelectTeam(int Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TeamSelect.BP_TeamSelect_C.SelectTeam");

	UBP_TeamSelect_C_SelectTeam_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
