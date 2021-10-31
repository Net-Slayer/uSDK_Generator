#pragma once

// Name: Mordhau, Version: Patch23


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

// Function BP_ServerBrowser.BP_ServerBrowser_C.CheckIfValidBeforeAddingEntries
struct UBP_ServerBrowser_C_CheckIfValidBeforeAddingEntries_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.UpdateListings
struct UBP_ServerBrowser_C_UpdateListings_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.UpdateArrowVisibilities
struct UBP_ServerBrowser_C_UpdateArrowVisibilities_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.OnRep_ServerSort
struct UBP_ServerBrowser_C_OnRep_ServerSort_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.ToggleArrowVisibilities
struct UBP_ServerBrowser_C_ToggleArrowVisibilities_Params
{
	unsigned char                                      Index;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.OnFailure_BBC3547C49248E80E0006694F0879DC3
struct UBP_ServerBrowser_C_OnFailure_BBC3547C49248E80E0006694F0879DC3_Params
{
	TArray<struct FServerSearchResult>                 Results;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.OnSuccess_BBC3547C49248E80E0006694F0879DC3
struct UBP_ServerBrowser_C_OnSuccess_BBC3547C49248E80E0006694F0879DC3_Params
{
	TArray<struct FServerSearchResult>                 Results;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.OnFailure_0D81799A475BE46000BC0A8D4385A93C
struct UBP_ServerBrowser_C_OnFailure_0D81799A475BE46000BC0A8D4385A93C_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.OnSuccess_0D81799A475BE46000BC0A8D4385A93C
struct UBP_ServerBrowser_C_OnSuccess_0D81799A475BE46000BC0A8D4385A93C_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.Construct
struct UBP_ServerBrowser_C_Construct_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.Refresh
struct UBP_ServerBrowser_C_Refresh_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.Join
struct UBP_ServerBrowser_C_Join_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_111_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__RefreshButton_K2Node_ComponentBoundEvent_111_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__JoinButton_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__AllButton_K2Node_ComponentBoundEvent_289_OnSelected__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__AllButton_K2Node_ComponentBoundEvent_289_OnSelected__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_290_OnSelected__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__FriendsButton_K2Node_ComponentBoundEvent_290_OnSelected__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__FavoritesButton_K2Node_ComponentBoundEvent_294_OnSelected__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__FavoritesButton_K2Node_ComponentBoundEvent_294_OnSelected__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__RecentButton_K2Node_ComponentBoundEvent_299_OnSelected__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__RecentButton_K2Node_ComponentBoundEvent_299_OnSelected__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__LanButton_K2Node_ComponentBoundEvent_305_OnSelected__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__LanButton_K2Node_ComponentBoundEvent_305_OnSelected__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__NotFullCheckbox_K2Node_ComponentBoundEvent_178_OnCheckStateChanged__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__NotFullCheckbox_K2Node_ComponentBoundEvent_178_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__HasPlayersCheckbox_K2Node_ComponentBoundEvent_186_OnCheckStateChanged__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__HasPlayersCheckbox_K2Node_ComponentBoundEvent_186_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__NoPasswordCheckbox_K2Node_ComponentBoundEvent_195_OnCheckStateChanged__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__NoPasswordCheckbox_K2Node_ComponentBoundEvent_195_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__DevBuildCheckbox_K2Node_ComponentBoundEvent_308_OnCheckStateChanged__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__DevBuildCheckbox_K2Node_ComponentBoundEvent_308_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.CreateMismatchDialog
struct UBP_ServerBrowser_C_CreateMismatchDialog_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.HideMismatchDialog
struct UBP_ServerBrowser_C_HideMismatchDialog_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.ShowMismatchDialog
struct UBP_ServerBrowser_C_ShowMismatchDialog_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.ContinueJoin
struct UBP_ServerBrowser_C_ContinueJoin_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__RentServerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__RentServerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.OnShown
struct UBP_ServerBrowser_C_OnShown_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__GameModeComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__GameModeComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FText                                       SelectedItem;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__ServerNameFilter_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__ServerNameFilter_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__MaxPingEntry_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__MaxPingEntry_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.ShowModDownloadDialog
struct UBP_ServerBrowser_C_ShowModDownloadDialog_Params
{
	TArray<int>                                        ModsRequired;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.ModDownloadCanceled
struct UBP_ServerBrowser_C_ModDownloadCanceled_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.ModDownloadFailed
struct UBP_ServerBrowser_C_ModDownloadFailed_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.ModDownloadCompleted
struct UBP_ServerBrowser_C_ModDownloadCompleted_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.OnOkClicked
struct UBP_ServerBrowser_C_OnOkClicked_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.JoinSession
struct UBP_ServerBrowser_C_JoinSession_Params
{
	struct FServerSearchResult                         Session;                                                   // 0x0000(0x0110)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__ServNameDescendSort_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__ServNameDescendSort_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__ServNameAscendSort_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__ServNameAscendSort_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__PingAscendSort_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__PingAscendSort_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__PingDescendSort_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__PingDescendSort_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__MapNameDescendSort_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__MapNameDescendSort_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__MapNameAscendSort_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__MapNameAscendSort_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__CountAscendSort_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__CountAscendSort_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__CountDescendSort_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__CountDescendSort_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__MapNameButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__MapNameButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__PlayersButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__PlayersButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__PingButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__PingButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__ServerNameFilter_K2Node_ComponentBoundEvent_18_OnEditableTextBoxChangedEvent__DelegateSignature
struct UBP_ServerBrowser_C_BndEvt__ServerNameFilter_K2Node_ComponentBoundEvent_18_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.OnPartyUpdated
struct UBP_ServerBrowser_C_OnPartyUpdated_Params
{
	TArray<struct FPlayFabPlayer>                      PartyMembers;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function BP_ServerBrowser.BP_ServerBrowser_C.ExecuteUbergraph_BP_ServerBrowser
struct UBP_ServerBrowser_C_ExecuteUbergraph_BP_ServerBrowser_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
