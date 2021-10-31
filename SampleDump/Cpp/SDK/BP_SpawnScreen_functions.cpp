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
//		Name   -> Function BP_SpawnScreen.BP_SpawnScreen_C.GetText_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_SpawnScreen_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.GetText_1");

	UBP_SpawnScreen_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnScreen.BP_SpawnScreen_C.SetColor
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UImage*                                      Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FLinearColor>                        Team_Color_Array                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		unsigned char                                      Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SpawnScreen_C::SetColor(class UImage* Image, TArray<struct FLinearColor> Team_Color_Array, unsigned char Team, class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.SetColor");

	UBP_SpawnScreen_C_SetColor_Params params;
	params.Image = Image;
	params.Team_Color_Array = Team_Color_Array;
	params.Team = Team;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnScreen.BP_SpawnScreen_C.UpdateSpawnScreenIcons
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UCanvasPanel*                                Canvas_Panel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SpawnScreen_C::UpdateSpawnScreenIcons(class UCanvasPanel* Canvas_Panel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.UpdateSpawnScreenIcons");

	UBP_SpawnScreen_C_UpdateSpawnScreenIcons_Params params;
	params.Canvas_Panel = Canvas_Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnScreen.BP_SpawnScreen_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBP_SpawnScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.OnKeyDown");

	UBP_SpawnScreen_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnScreen.BP_SpawnScreen_C.UpdateSpawnPointWidgets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_SpawnScreen_C::UpdateSpawnPointWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.UpdateSpawnPointWidgets");

	UBP_SpawnScreen_C_UpdateSpawnPointWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnScreen.BP_SpawnScreen_C.Show
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_SpawnScreen_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.Show");

	UBP_SpawnScreen_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnScreen.BP_SpawnScreen_C.Hide
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_SpawnScreen_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.Hide");

	UBP_SpawnScreen_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnScreen.BP_SpawnScreen_C.ExecuteUbergraph_BP_SpawnScreen
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SpawnScreen_C::ExecuteUbergraph_BP_SpawnScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.ExecuteUbergraph_BP_SpawnScreen");

	UBP_SpawnScreen_C_ExecuteUbergraph_BP_SpawnScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnScreen.BP_SpawnScreen_C.Open Loadout Selection__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_SpawnScreen_C::Open_Loadout_Selection__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.Open Loadout Selection__DelegateSignature");

	UBP_SpawnScreen_C_Open_Loadout_Selection__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnScreen.BP_SpawnScreen_C.Updated Spawn Point Widgets__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_SpawnScreenPoint_C*                      Selected_Screen_Point                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SpawnScreen_C::Updated_Spawn_Point_Widgets__DelegateSignature(class UBP_SpawnScreenPoint_C* Selected_Screen_Point)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnScreen.BP_SpawnScreen_C.Updated Spawn Point Widgets__DelegateSignature");

	UBP_SpawnScreen_C_Updated_Spawn_Point_Widgets__DelegateSignature_Params params;
	params.Selected_Screen_Point = Selected_Screen_Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
