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

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Get_Defaults_Text_1
struct UBP_LoadoutPicker_C_Get_Defaults_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.GetDefaultOrCustomProfileFromSingleton
struct UBP_LoadoutPicker_C_GetDefaultOrCustomProfileFromSingleton_Params
{
	int                                                SelectedIdx;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterProfile                           Profile;                                                   // 0x0008(0x00B8)  (Parm, OutParm)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.GetSelectedIDInCustomProfiles
struct UBP_LoadoutPicker_C_GetSelectedIDInCustomProfiles_Params
{
	int                                                SelectedId;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Set Spawn Loadout
struct UBP_LoadoutPicker_C_Set_Spawn_Loadout_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Selected_Character_Profile;                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Move Entry
struct UBP_LoadoutPicker_C_Move_Entry_Params
{
	int                                                ID_to_move;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                New_ID;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Remove Entry
struct UBP_LoadoutPicker_C_Remove_Entry_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Add Entry
struct UBP_LoadoutPicker_C_Add_Entry_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Set Selected Entry
struct UBP_LoadoutPicker_C_Set_Selected_Entry_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Selected_ID;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_LoadoutEntry_C*                          Selected_Loadout_Entry;                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterProfile                           Selected_Profile;                                          // 0x0010(0x00B8)  (Parm, OutParm)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Clear Entry Widgets
struct UBP_LoadoutPicker_C_Clear_Entry_Widgets_Params
{
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Generate Entry Widgets
struct UBP_LoadoutPicker_C_Generate_Entry_Widgets_Params
{
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.UpdateWidget
struct UBP_LoadoutPicker_C_UpdateWidget_Params
{
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.RegisterPreviewEvents
struct UBP_LoadoutPicker_C_RegisterPreviewEvents_Params
{
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnDrag
struct UBP_LoadoutPicker_C_OnDrag_Params
{
	float                                              DeltaDistance;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnScroll
struct UBP_LoadoutPicker_C_OnScroll_Params
{
	float                                              ScrollDelta;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.UpdatePreviewDoll
struct UBP_LoadoutPicker_C_UpdatePreviewDoll_Params
{
	struct FCharacterProfile                           New_Profile;                                               // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.SetActive
struct UBP_LoadoutPicker_C_SetActive_Params
{
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnClick
struct UBP_LoadoutPicker_C_OnClick_Params
{
	bool                                               Listen_for_Double_Click;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Entry_Id;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnHover
struct UBP_LoadoutPicker_C_OnHover_Params
{
	int                                                Entry_Id;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Tick
struct UBP_LoadoutPicker_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Construct
struct UBP_LoadoutPicker_C_Construct_Params
{
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.BndEvt__ToggleDefaultLoadouts_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_LoadoutPicker_C_BndEvt__ToggleDefaultLoadouts_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.ToggleShowDefaultLoadouts
struct UBP_LoadoutPicker_C_ToggleShowDefaultLoadouts_Params
{
};

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.ExecuteUbergraph_BP_LoadoutPicker
struct UBP_LoadoutPicker_C_ExecuteUbergraph_BP_LoadoutPicker_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
