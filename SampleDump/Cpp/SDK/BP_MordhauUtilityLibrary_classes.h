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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_MordhauUtilityLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C");
		return ptr;
	}



	void STATIC_CreateContextPopup_Interface(TMap<struct FString, struct FText> Option_Map, class UObject* __WorldContext);
	void STATIC_Set_Spawn_Loadout(class APlayerController* Player_Controller, int ID, class UObject* __WorldContext);
	void STATIC_GetLoadoutFromSingleton(int ID, class UObject* __WorldContext, struct FCharacterProfile* Profile, bool* is_Default_Profile);
	void STATIC_GetTeamColor(int Team, class UObject* __WorldContext, struct FLinearColor* Output__Linear_, struct FSlateColor* Output__Slate_);
	void STATIC_Get3v3MMRFromStats(class UObject* __WorldContext, int* MMR);
	void STATIC_OpenSteamProfile(const struct FString& SteamId, class UObject* __WorldContext);
	void STATIC_GetPlayerStateFromActor(class AActor* Actor, class UObject* __WorldContext, class AMordhauPlayerState** PlayerState);
	void STATIC_GetKeyInfoFromKey(const struct FKey& Key_, class UObject* __WorldContext, class UTexture2D** Icon, struct FKey* Key, struct FText* Key_Display_Name);
	void STATIC_GetKeyInfoFromActionName(const struct FName& Action_Name, class UObject* __WorldContext, class UTexture2D** Icon, struct FKey* Key, struct FText* Key_Display_Name);
	void STATIC_GetRank(class UObject* __WorldContext, int* Rank);
	void STATIC_Get1v1MMRFromStats(class UObject* __WorldContext, int* MMR);
	void STATIC_CreateContextPopup(TMap<struct FString, struct FText> Option_Map, class UObject* __WorldContext, class UBP_ContextPopupWrapper_C** Context_Popup_Wrapper);
	void STATIC_GetGoldAndRankUnlockRequirement(TArray<int>* ItemDefIDs, class UObject* __WorldContext, int* Gold, int* Rank);
	void STATIC_GetUnlockTooltipText(TArray<int>* ItemDefIDs, class UObject* __WorldContext, struct FText* ToolTipText);
	void STATIC_CreateInformationDialog(class APlayerController* OwningPlayer, const struct FText& TitleText, const struct FText& InformationText, const struct FText& ButtonText, class UObject* __WorldContext, class UBP_InformationDialog_C** InformationDialog);
	void STATIC_CreateChoiceDialog(class APlayerController* OwningPlayer, const struct FText& TitleText, const struct FText& ChoiceText, const struct FText& LeftButtonText, const struct FText& RightButtonText, class UObject* __WorldContext, class UBP_ChoiceDialog_C** ChoiceDialog);
	void STATIC_CreateTextInputDialog(class APlayerController* OwningPlayer, const struct FText& TitleText, const struct FText& HintText, const struct FText& LeftButtonText, const struct FText& RightButtonText, bool bIsPassword, class UObject* __WorldContext, class UBP_TextInputDialog_C** TextInputDialog);
	void STATIC_ComputeRagdollForce(class AActor* Agent, unsigned char DamageType, unsigned char DamageSubType, unsigned char RandomByte, class AActor* Receiver, class UObject* __WorldContext, struct FVector* Force);
	void STATIC_GetSelectedIndex(class UComboBoxText* ComboBox, class UObject* __WorldContext, int* SelectedIndex);
	void STATIC_SelectFirstComboBoxOption(class UComboBoxText* ComboBox, class UObject* __WorldContext);
	void STATIC_IsProfileNameValid(const struct FText& ProfiletName, class UObject* __WorldContext, bool* IsValid);
	bool STATIC_IsFirstOptionSelected(class UComboBoxText* ComboBox, class UObject* __WorldContext);
	void STATIC_SelectLastComboBoxOption(class UComboBoxText* ComboBox, class UObject* __WorldContext);
	void STATIC_GetLastComboBoxOption(class UComboBoxText* ComboBox, class UObject* __WorldContext, struct FText* Option);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
