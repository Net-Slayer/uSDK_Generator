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
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.Get_Defaults_Text_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_LoadoutPicker_C::Get_Defaults_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.Get_Defaults_Text_1");

	UBP_LoadoutPicker_C_Get_Defaults_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.GetDefaultOrCustomProfileFromSingleton
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                SelectedIdx                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FCharacterProfile                           Profile                                                    (Parm, OutParm)
void UBP_LoadoutPicker_C::GetDefaultOrCustomProfileFromSingleton(int SelectedIdx, struct FCharacterProfile* Profile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.GetDefaultOrCustomProfileFromSingleton");

	UBP_LoadoutPicker_C_GetDefaultOrCustomProfileFromSingleton_Params params;
	params.SelectedIdx = SelectedIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Profile != nullptr)
		*Profile = params.Profile;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.GetSelectedIDInCustomProfiles
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                SelectedId                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LoadoutPicker_C::GetSelectedIDInCustomProfiles(int* SelectedId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.GetSelectedIDInCustomProfiles");

	UBP_LoadoutPicker_C_GetSelectedIDInCustomProfiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SelectedId != nullptr)
		*SelectedId = params.SelectedId;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.Set Spawn Loadout
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Selected_Character_Profile                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LoadoutPicker_C::Set_Spawn_Loadout(int ID, int* Selected_Character_Profile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.Set Spawn Loadout");

	UBP_LoadoutPicker_C_Set_Spawn_Loadout_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Selected_Character_Profile != nullptr)
		*Selected_Character_Profile = params.Selected_Character_Profile;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.Move Entry
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID_to_move                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                New_ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LoadoutPicker_C::Move_Entry(int ID_to_move, int New_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.Move Entry");

	UBP_LoadoutPicker_C_Move_Entry_Params params;
	params.ID_to_move = ID_to_move;
	params.New_ID = New_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.Remove Entry
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LoadoutPicker_C::Remove_Entry(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.Remove Entry");

	UBP_LoadoutPicker_C_Remove_Entry_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.Add Entry
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LoadoutPicker_C::Add_Entry(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.Add Entry");

	UBP_LoadoutPicker_C_Add_Entry_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.Set Selected Entry
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Selected_ID                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UBP_LoadoutEntry_C*                          Selected_Loadout_Entry                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FCharacterProfile                           Selected_Profile                                           (Parm, OutParm)
void UBP_LoadoutPicker_C::Set_Selected_Entry(int ID, int* Selected_ID, class UBP_LoadoutEntry_C** Selected_Loadout_Entry, struct FCharacterProfile* Selected_Profile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.Set Selected Entry");

	UBP_LoadoutPicker_C_Set_Selected_Entry_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Selected_ID != nullptr)
		*Selected_ID = params.Selected_ID;
	if (Selected_Loadout_Entry != nullptr)
		*Selected_Loadout_Entry = params.Selected_Loadout_Entry;
	if (Selected_Profile != nullptr)
		*Selected_Profile = params.Selected_Profile;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.Clear Entry Widgets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_LoadoutPicker_C::Clear_Entry_Widgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.Clear Entry Widgets");

	UBP_LoadoutPicker_C_Clear_Entry_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.Generate Entry Widgets
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_LoadoutPicker_C::Generate_Entry_Widgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.Generate Entry Widgets");

	UBP_LoadoutPicker_C_Generate_Entry_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.UpdateWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_LoadoutPicker_C::UpdateWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.UpdateWidget");

	UBP_LoadoutPicker_C_UpdateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.RegisterPreviewEvents
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_LoadoutPicker_C::RegisterPreviewEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.RegisterPreviewEvents");

	UBP_LoadoutPicker_C_RegisterPreviewEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnDrag
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaDistance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LoadoutPicker_C::OnDrag(float DeltaDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnDrag");

	UBP_LoadoutPicker_C_OnDrag_Params params;
	params.DeltaDistance = DeltaDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnScroll
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ScrollDelta                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LoadoutPicker_C::OnScroll(float ScrollDelta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnScroll");

	UBP_LoadoutPicker_C_OnScroll_Params params;
	params.ScrollDelta = ScrollDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.UpdatePreviewDoll
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCharacterProfile                           New_Profile                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_LoadoutPicker_C::UpdatePreviewDoll(const struct FCharacterProfile& New_Profile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.UpdatePreviewDoll");

	UBP_LoadoutPicker_C_UpdatePreviewDoll_Params params;
	params.New_Profile = New_Profile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.SetActive
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_LoadoutPicker_C::SetActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.SetActive");

	UBP_LoadoutPicker_C_SetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnClick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Listen_for_Double_Click                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Entry_Id                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LoadoutPicker_C::OnClick(bool Listen_for_Double_Click, int Entry_Id)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnClick");

	UBP_LoadoutPicker_C_OnClick_Params params;
	params.Listen_for_Double_Click = Listen_for_Double_Click;
	params.Entry_Id = Entry_Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnHover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Entry_Id                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LoadoutPicker_C::OnHover(int Entry_Id)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnHover");

	UBP_LoadoutPicker_C_OnHover_Params params;
	params.Entry_Id = Entry_Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LoadoutPicker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.Tick");

	UBP_LoadoutPicker_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_LoadoutPicker_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.Construct");

	UBP_LoadoutPicker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.BndEvt__ToggleDefaultLoadouts_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_LoadoutPicker_C::BndEvt__ToggleDefaultLoadouts_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.BndEvt__ToggleDefaultLoadouts_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_LoadoutPicker_C_BndEvt__ToggleDefaultLoadouts_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.ToggleShowDefaultLoadouts
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_LoadoutPicker_C::ToggleShowDefaultLoadouts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.ToggleShowDefaultLoadouts");

	UBP_LoadoutPicker_C_ToggleShowDefaultLoadouts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LoadoutPicker.BP_LoadoutPicker_C.ExecuteUbergraph_BP_LoadoutPicker
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LoadoutPicker_C::ExecuteUbergraph_BP_LoadoutPicker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.ExecuteUbergraph_BP_LoadoutPicker");

	UBP_LoadoutPicker_C_ExecuteUbergraph_BP_LoadoutPicker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
