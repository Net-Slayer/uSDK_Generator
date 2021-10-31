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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_MainMenu.BP_MainMenu_C
// 0x02B0 (FullSize[0x04E0] - InheritedSize[0x0230])
class UBP_MainMenu_C : public UBP_BaseMainMenu_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            MainNavReveal;                                             // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_NavButton_C*                             ArmoryButton;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    ArmorySubNav;                                              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SubNavButton_C*                          AudioButton;                                               // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_AudioSettings_C*                         BP_AudioSettings;                                          // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ButtonPrompt_C*                          BP_ButtonPrompt;                                           // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ControlsSettings_C*                      BP_ControlsSettings;                                       // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Credits_C*                               BP_Credits;                                                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_GameSettings_C*                          BP_GameSettings;                                           // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_HomeScoreboardContainer_C*               BP_HomeScoreboardContainer;                                // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_HomeScreen_C*                            BP_HomeScreen;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_KeyBindingsSettings_C*                   BP_KeyBindingsSettings;                                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Leaderboards_C*                          BP_Leaderboards;                                           // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_LocalPlay_C*                             BP_LocalPlay;                                              // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MatchmakingScreen_C*                     BP_MatchmakingScreen;                                      // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MatchmakingSearchWidget_C*               BP_MatchmakingSearchWidget;                                // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ModList_C*                               BP_ModList;                                                // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ProfileCustomization_C*                  BP_MordhauProfileCustomization;                            // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ServerBrowser_C*                         BP_MordhauServerBrowser;                                   // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PlayerMenu_C*                            BP_PlayerMenu;                                             // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_QuitMenu_C*                              BP_QuitMenu;                                               // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SocialMediaMenu_C*                       BP_SocialMediaMenu;                                        // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_TrainingMenu_C*                          BP_TrainingMenu;                                           // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_VideoSettings_C*                         BP_VideoSettings;                                          // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             ContentSwitcher;                                           // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SubNavButton_C*                          ControlsButton;                                            // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SubNavButton_C*                          CreditsButton;                                             // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SubNavButton_C*                          CustomizationButton;                                       // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SubNavButton_C*                          GameButton;                                                // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_NavButton_C*                             HomeButton;                                                // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    HomeSubNav;                                                // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SubNavButton_C*                          HomeSubNavButton;                                          // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SubNavButton_C*                          HordeBRButton;                                             // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_5;                                                   // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SubNavButton_C*                          KeyBindingsButton;                                         // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SubNavButton_C*                          LeaderboardsButton;                                        // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                           Loading;                                                   // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                             LoadingBlur;                                               // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SubNavButton_C*                          LocalMatchButton;                                          // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    MainNav;                                                   // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SubNavButton_C*                          MatchmakingButton;                                         // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_NavButton_C*                             MiscButton;                                                // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    MiscSubNav;                                                // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SubNavButton_C*                          ModsButton;                                                // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_4;                                                 // 0x03A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_NavButton_C*                             PlayButton;                                                // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_NavButton_C*                             PlayerButton;                                              // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    PlayerMenuSubNav;                                          // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SubNavButton_C*                          PlayerSubButton;                                           // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    PlaySubNav;                                                // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_NavButton_C*                             QuitButton;                                                // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    QuitSubNav;                                                // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SubNavButton_C*                          QuitSubNavButton;                                          // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_NavButton_C*                             ReturnButton;                                              // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SubNavButton_C*                          ScoreboardButton;                                          // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SubNavButton_C*                          ServerBrowserButton;                                       // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_NavButton_C*                             SettingsButton;                                            // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    SettingsSubNav;                                            // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SubNavButton_C*                          SocialButton;                                              // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             SubNavSwitcher;                                            // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1;                                               // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SubNavButton_C*                          TrainingButton;                                            // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SubNavButton_C*                          VideoButton;                                               // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UBP_NavButton_C*>                     NavButtons;                                                // 0x0440(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UBP_SubNavButton_C*>                  SubNavButtons;                                             // 0x0450(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_ChoiceDialog_C*                          QuitGameDialog;                                            // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ChoiceDialog_C*                          AgreementDialog;                                           // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ChoiceDialog_C*                          QuitMatchDialog;                                           // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_InformationDialog_C*                     ErrorDialog;                                               // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                QuickJoinDelayTimer;                                       // 0x0480(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_MordhauGameInstance_C*                   GameInstance;                                              // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_NavButton_C*                             SelectedNavButton;                                         // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SubNavButton_C*                          SelectedSubNavButton;                                      // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MordhauCustomizationPlatform_C*          CustomizationPlatform;                                     // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_SubNavButton_C*>                  CurrentSubNavButtons;                                      // 0x04A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UBP_SubNavButton_C*>                  PlaySubNavButtons;                                         // 0x04B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FS_MainMenuNav>                      Nav_Struct;                                                // 0x04C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FDateTime                                   NextPingTime;                                              // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MainMenu.BP_MainMenu_C");
		return ptr;
	}



	void SetNavBarVisibility(UMG_ESlateVisibility InVisibility);
	void Request_Sub_Tab_Navigation(int Direction);
	void Init_Nav_Struct();
	UMG_ESlateVisibility Get_ReturnButton_Visibility_1();
	void IsMenuContentWidgetVisible(class UBP_MenuContentWidget_C* Widget, bool* bIsVisible);
	void Request_Main_Navigation(int Direction);
	UMG_ESlateVisibility Get_ArmorySubNav_Visibility_1();
	void AskHUDToHideUs();
	void HideErrorDialog();
	void ShowErrorDialog(const struct FText& ErrorMessage);
	void CreateErrorDialog();
	void HideQuitMatchDialog();
	void ShowQuitMatchDialog();
	void CreateQuitMatchDialog();
	void QuitGame();
	void HideQuitGameDialog();
	void ShowQuitGameDialog();
	void CreateQuitGameDialog();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void SetContentWidget(class UBP_MenuContentWidget_C* NewWidget);
	void UpdateNavAndSubNavButtons();
	void CleanUpCustomization();
	void Show(TEnumAsByte<E_ArmoryStates_E_ArmoryStates> Armory_State);
	void Hide();
	void OnFailure_03195FFE4CF4F9BC52C6D0A8D1D5E5E7();
	void OnSuccess_03195FFE4CF4F9BC52C6D0A8D1D5E5E7();
	void OnShow(TEnumAsByte<E_ArmoryStates_E_ArmoryStates> Armory_State);
	void Construct();
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_821_OnClick__DelegateSignature();
	void BndEvt__ArmoryButton_K2Node_ComponentBoundEvent_833_OnClick__DelegateSignature();
	void BndEvt__QuitButton_K2Node_ComponentBoundEvent_845_OnClick__DelegateSignature();
	void BndEvt__GameButton_K2Node_ComponentBoundEvent_857_OnClick__DelegateSignature();
	void BndEvt__ControlsButton_K2Node_ComponentBoundEvent_879_OnClick__DelegateSignature();
	void BndEvt__PlayButton_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature();
	void BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_116_OnClick__DelegateSignature();
	void BndEvt__VideoButton_K2Node_ComponentBoundEvent_74_OnClick__DelegateSignature();
	void BndEvt__AudioButton_K2Node_ComponentBoundEvent_55_OnClick__DelegateSignature();
	void BndEvt__HomeButton_K2Node_ComponentBoundEvent_425_OnClick__DelegateSignature();
	void BndEvt__LocalGameButton_K2Node_ComponentBoundEvent_124_OnClick__DelegateSignature();
	void BndEvt__KeyBindingsButton_K2Node_ComponentBoundEvent_111_OnClick__DelegateSignature();
	void QuitMatch();
	void BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void BndEvt__ProgressButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void BndEvt__StatsButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature();
	void BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	void BndEvt__MiscButton_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature();
	void BndEvt__SocialButton_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature();
	void BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature();
	void BndEvt__HordeBRButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void GoToMatchMaking();
	void BndEvt__TrainingButton_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature();
	void BndEvt__ModsButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature();
	void ShowNotConnectedErrorDialog();
	void BndEvt__ReturnButton_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature();
	void BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature();
	void BndEvt__HomeSubNavButton_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature();
	void ShowMainMenu(TEnumAsByte<E_ArmoryStates_E_ArmoryStates> ArmoryState);
	void HideMainMenu();
	void Show_Menu_Scoreboard();
	void SelectPlayTab();
	void SelectSettingsTab();
	void Select_Home_Tab();
	void Select_Armory_Tab();
	void Select_PlayerMenu_Tab();
	void Select_Misc_Tab();
	void Select_Quit_Tab();
	void BndEvt__CustomizationButton_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature();
	void ShowOnlineBanErrorDialog();
	void ExecuteUbergraph_BP_MainMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
