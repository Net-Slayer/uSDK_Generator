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

// Function BP_MainMenu.BP_MainMenu_C.SetNavBarVisibility
struct UBP_MainMenu_C_SetNavBarVisibility_Params
{
	UMG_ESlateVisibility                               InVisibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu.BP_MainMenu_C.Request Sub Tab Navigation
struct UBP_MainMenu_C_Request_Sub_Tab_Navigation_Params
{
	int                                                Direction;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu.BP_MainMenu_C.Init Nav Struct
struct UBP_MainMenu_C_Init_Nav_Struct_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.Get_ReturnButton_Visibility_1
struct UBP_MainMenu_C_Get_ReturnButton_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu.BP_MainMenu_C.IsMenuContentWidgetVisible
struct UBP_MainMenu_C_IsMenuContentWidgetVisible_Params
{
	class UBP_MenuContentWidget_C*                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsVisible;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MainMenu.BP_MainMenu_C.Request Main Navigation
struct UBP_MainMenu_C_Request_Main_Navigation_Params
{
	int                                                Direction;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu.BP_MainMenu_C.Get_ArmorySubNav_Visibility_1
struct UBP_MainMenu_C_Get_ArmorySubNav_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu.BP_MainMenu_C.AskHUDToHideUs
struct UBP_MainMenu_C_AskHUDToHideUs_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.HideErrorDialog
struct UBP_MainMenu_C_HideErrorDialog_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.ShowErrorDialog
struct UBP_MainMenu_C_ShowErrorDialog_Params
{
	struct FText                                       ErrorMessage;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MainMenu.BP_MainMenu_C.CreateErrorDialog
struct UBP_MainMenu_C_CreateErrorDialog_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.HideQuitMatchDialog
struct UBP_MainMenu_C_HideQuitMatchDialog_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.ShowQuitMatchDialog
struct UBP_MainMenu_C_ShowQuitMatchDialog_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.CreateQuitMatchDialog
struct UBP_MainMenu_C_CreateQuitMatchDialog_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.QuitGame
struct UBP_MainMenu_C_QuitGame_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.HideQuitGameDialog
struct UBP_MainMenu_C_HideQuitGameDialog_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.ShowQuitGameDialog
struct UBP_MainMenu_C_ShowQuitGameDialog_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.CreateQuitGameDialog
struct UBP_MainMenu_C_CreateQuitGameDialog_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.OnPreviewKeyDown
struct UBP_MainMenu_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function BP_MainMenu.BP_MainMenu_C.SetContentWidget
struct UBP_MainMenu_C_SetContentWidget_Params
{
	class UBP_MenuContentWidget_C*                     NewWidget;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu.BP_MainMenu_C.UpdateNavAndSubNavButtons
struct UBP_MainMenu_C_UpdateNavAndSubNavButtons_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.CleanUpCustomization
struct UBP_MainMenu_C_CleanUpCustomization_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.Show
struct UBP_MainMenu_C_Show_Params
{
	TEnumAsByte<E_ArmoryStates_E_ArmoryStates>         Armory_State;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu.BP_MainMenu_C.Hide
struct UBP_MainMenu_C_Hide_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.OnFailure_03195FFE4CF4F9BC52C6D0A8D1D5E5E7
struct UBP_MainMenu_C_OnFailure_03195FFE4CF4F9BC52C6D0A8D1D5E5E7_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.OnSuccess_03195FFE4CF4F9BC52C6D0A8D1D5E5E7
struct UBP_MainMenu_C_OnSuccess_03195FFE4CF4F9BC52C6D0A8D1D5E5E7_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.OnShow
struct UBP_MainMenu_C_OnShow_Params
{
	TEnumAsByte<E_ArmoryStates_E_ArmoryStates>         Armory_State;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu.BP_MainMenu_C.Construct
struct UBP_MainMenu_C_Construct_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_821_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_821_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__ArmoryButton_K2Node_ComponentBoundEvent_833_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__ArmoryButton_K2Node_ComponentBoundEvent_833_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_845_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_845_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__GameButton_K2Node_ComponentBoundEvent_857_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__GameButton_K2Node_ComponentBoundEvent_857_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_879_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__ControlsButton_K2Node_ComponentBoundEvent_879_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_116_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_116_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__VideoButton_K2Node_ComponentBoundEvent_74_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__VideoButton_K2Node_ComponentBoundEvent_74_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__AudioButton_K2Node_ComponentBoundEvent_55_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__AudioButton_K2Node_ComponentBoundEvent_55_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__HomeButton_K2Node_ComponentBoundEvent_425_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__HomeButton_K2Node_ComponentBoundEvent_425_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__LocalGameButton_K2Node_ComponentBoundEvent_124_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__LocalGameButton_K2Node_ComponentBoundEvent_124_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__KeyBindingsButton_K2Node_ComponentBoundEvent_111_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__KeyBindingsButton_K2Node_ComponentBoundEvent_111_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.QuitMatch
struct UBP_MainMenu_C_QuitMatch_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__ProgressButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__ProgressButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__StatsButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__StatsButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__MiscButton_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__MiscButton_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__SocialButton_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__SocialButton_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__HordeBRButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__HordeBRButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.Tick
struct UBP_MainMenu_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu.BP_MainMenu_C.GoToMatchMaking
struct UBP_MainMenu_C_GoToMatchMaking_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__TrainingButton_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__TrainingButton_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__ModsButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__ModsButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.ShowNotConnectedErrorDialog
struct UBP_MainMenu_C_ShowNotConnectedErrorDialog_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__ReturnButton_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__ReturnButton_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__HomeSubNavButton_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__HomeSubNavButton_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.ShowMainMenu
struct UBP_MainMenu_C_ShowMainMenu_Params
{
	TEnumAsByte<E_ArmoryStates_E_ArmoryStates>         ArmoryState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MainMenu.BP_MainMenu_C.HideMainMenu
struct UBP_MainMenu_C_HideMainMenu_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.Show Menu Scoreboard
struct UBP_MainMenu_C_Show_Menu_Scoreboard_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.SelectPlayTab
struct UBP_MainMenu_C_SelectPlayTab_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.SelectSettingsTab
struct UBP_MainMenu_C_SelectSettingsTab_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.Select Home Tab
struct UBP_MainMenu_C_Select_Home_Tab_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.Select Armory Tab
struct UBP_MainMenu_C_Select_Armory_Tab_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.Select PlayerMenu Tab
struct UBP_MainMenu_C_Select_PlayerMenu_Tab_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.Select Misc Tab
struct UBP_MainMenu_C_Select_Misc_Tab_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.Select Quit Tab
struct UBP_MainMenu_C_Select_Quit_Tab_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__CustomizationButton_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature
struct UBP_MainMenu_C_BndEvt__CustomizationButton_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.ShowOnlineBanErrorDialog
struct UBP_MainMenu_C_ShowOnlineBanErrorDialog_Params
{
};

// Function BP_MainMenu.BP_MainMenu_C.ExecuteUbergraph_BP_MainMenu
struct UBP_MainMenu_C_ExecuteUbergraph_BP_MainMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
