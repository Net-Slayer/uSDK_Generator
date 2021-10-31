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

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.Get Key Info from Action Name_Secondary
struct UBP_MordhauUtilityLibrary_C_Get_Key_Info_from_Action_Name_Secondary_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Icon;                                                      // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        Secondary_Key;                                             // 0x0018(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	struct FText                                       Secondary_Key_Display_Name;                                // 0x0030(0x0018)  (Parm, OutParm)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.Get Key Info from Action Name_Primary
struct UBP_MordhauUtilityLibrary_C_Get_Key_Info_from_Action_Name_Primary_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Icon;                                                      // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        Key;                                                       // 0x0018(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	struct FText                                       Key_Display_Name;                                          // 0x0030(0x0018)  (Parm, OutParm)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateContextPopup_Interface
struct UBP_MordhauUtilityLibrary_C_CreateContextPopup_Interface_Params
{
	TMap<struct FString, struct FText>                 Option_Map;                                                // 0x0010(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                            // 0x0060(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.Set Spawn Loadout
struct UBP_MordhauUtilityLibrary_C_Set_Spawn_Loadout_Params
{
	class APlayerController*                           Player_Controller;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID;                                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetLoadoutFromSingleton
struct UBP_MordhauUtilityLibrary_C_GetLoadoutFromSingleton_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterProfile                           Profile;                                                   // 0x0010(0x00B8)  (Parm, OutParm)
	bool                                               is_Default_Profile;                                        // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetTeamColor
struct UBP_MordhauUtilityLibrary_C_GetTeamColor_Params
{
	int                                                Team;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Output__Linear_;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 Output__Slate_;                                            // 0x0020(0x0028)  (Parm, OutParm)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.Get3v3MMRFromStats
struct UBP_MordhauUtilityLibrary_C_Get3v3MMRFromStats_Params
{
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MMR;                                                       // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.OpenSteamProfile
struct UBP_MordhauUtilityLibrary_C_OpenSteamProfile_Params
{
	struct FString                                     SteamId;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetPlayerStateFromActor
struct UBP_MordhauUtilityLibrary_C_GetPlayerStateFromActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauPlayerState*                         PlayerState;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetKeyInfoFromKey
struct UBP_MordhauUtilityLibrary_C_GetKeyInfoFromKey_Params
{
	struct FKey                                        Key_;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Icon;                                                      // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        Key;                                                       // 0x0028(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	struct FText                                       Key_Display_Name;                                          // 0x0040(0x0018)  (Parm, OutParm)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetRank
struct UBP_MordhauUtilityLibrary_C_GetRank_Params
{
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Rank;                                                      // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.Get1v1MMRFromStats
struct UBP_MordhauUtilityLibrary_C_Get1v1MMRFromStats_Params
{
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MMR;                                                       // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateContextPopup
struct UBP_MordhauUtilityLibrary_C_CreateContextPopup_Params
{
	TMap<struct FString, struct FText>                 Option_Map;                                                // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                            // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ContextPopupWrapper_C*                   Context_Popup_Wrapper;                                     // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetGoldAndRankUnlockRequirement
struct UBP_MordhauUtilityLibrary_C_GetGoldAndRankUnlockRequirement_Params
{
	TArray<int>                                        ItemDefIDs;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Gold;                                                      // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Rank;                                                      // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetUnlockTooltipText
struct UBP_MordhauUtilityLibrary_C_GetUnlockTooltipText_Params
{
	TArray<int>                                        ItemDefIDs;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ToolTipText;                                               // 0x0018(0x0018)  (Parm, OutParm)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateInformationDialog
struct UBP_MordhauUtilityLibrary_C_CreateInformationDialog_Params
{
	class APlayerController*                           OwningPlayer;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       TitleText;                                                 // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       InformationText;                                           // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ButtonText;                                                // 0x0038(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                            // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_InformationDialog_C*                     InformationDialog;                                         // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateChoiceDialog
struct UBP_MordhauUtilityLibrary_C_CreateChoiceDialog_Params
{
	class APlayerController*                           OwningPlayer;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       TitleText;                                                 // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ChoiceText;                                                // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       LeftButtonText;                                            // 0x0038(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       RightButtonText;                                           // 0x0050(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                            // 0x0068(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ChoiceDialog_C*                          ChoiceDialog;                                              // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.CreateTextInputDialog
struct UBP_MordhauUtilityLibrary_C_CreateTextInputDialog_Params
{
	class APlayerController*                           OwningPlayer;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       TitleText;                                                 // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       HintText;                                                  // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       LeftButtonText;                                            // 0x0038(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       RightButtonText;                                           // 0x0050(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bIsPassword;                                               // 0x0068(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_TextInputDialog_C*                       TextInputDialog;                                           // 0x0078(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.ComputeRagdollForce
struct UBP_MordhauUtilityLibrary_C_ComputeRagdollForce_Params
{
	class AActor*                                      Agent;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      DamageType;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      DamageSubType;                                             // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      RandomByte;                                                // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Receiver;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Force;                                                     // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetSelectedIndex
struct UBP_MordhauUtilityLibrary_C_GetSelectedIndex_Params
{
	class UComboBoxText*                               ComboBox;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SelectedIndex;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.SelectFirstComboBoxOption
struct UBP_MordhauUtilityLibrary_C_SelectFirstComboBoxOption_Params
{
	class UComboBoxText*                               ComboBox;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.IsProfileNameValid
struct UBP_MordhauUtilityLibrary_C_IsProfileNameValid_Params
{
	struct FText                                       ProfiletName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsValid;                                                   // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.IsFirstOptionSelected
struct UBP_MordhauUtilityLibrary_C_IsFirstOptionSelected_Params
{
	class UComboBoxText*                               ComboBox;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.SelectLastComboBoxOption
struct UBP_MordhauUtilityLibrary_C_SelectLastComboBoxOption_Params
{
	class UComboBoxText*                               ComboBox;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauUtilityLibrary.BP_MordhauUtilityLibrary_C.GetLastComboBoxOption
struct UBP_MordhauUtilityLibrary_C_GetLastComboBoxOption_Params
{
	class UComboBoxText*                               ComboBox;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Option;                                                    // 0x0010(0x0018)  (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
