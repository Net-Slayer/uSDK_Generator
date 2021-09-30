﻿#pragma once

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

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetVisibility_1
struct UBP_EquipmentSlotCustomization_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ColorHovered
struct UBP_EquipmentSlotCustomization_C_ColorHovered_Params
{
	int                                                Idx;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ColorId;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.PartSelectionHovered
struct UBP_EquipmentSlotCustomization_C_PartSelectionHovered_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.PartSelectionClicked
struct UBP_EquipmentSlotCustomization_C_PartSelectionClicked_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ShowPartChoiceList
struct UBP_EquipmentSlotCustomization_C_ShowPartChoiceList_Params
{
	int                                                CurrentEquipmentId;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentSkinId;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentPartType;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentPartId;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.SkinSelectionHovered
struct UBP_EquipmentSlotCustomization_C_SkinSelectionHovered_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.SkinSelectionClicked
struct UBP_EquipmentSlotCustomization_C_SkinSelectionClicked_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ShowSkinChoiceList
struct UBP_EquipmentSlotCustomization_C_ShowSkinChoiceList_Params
{
	int                                                CurrentEquipmentId;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentSkinId;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetEquipmentPart
struct UBP_EquipmentSlotCustomization_C_GetEquipmentPart_Params
{
	TArray<class UClass*>                              Parts;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	int                                                PartIdx;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMordhauEquipmentPart*                       EquipmentPart;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.IsAnySkinAvailable
struct UBP_EquipmentSlotCustomization_C_IsAnySkinAvailable_Params
{
	TArray<struct FEquipmentSkinEntry>                 Skins;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                               IsAnySkinAvailable;                                        // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_LengthText_Text_1
struct UBP_EquipmentSlotCustomization_C_Get_LengthText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_AdvancedButton_Visibility_1
struct UBP_EquipmentSlotCustomization_C_Get_AdvancedButton_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_BackButton2_Visibility_1
struct UBP_EquipmentSlotCustomization_C_Get_BackButton2_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_StatsPanel_Visibility_2
struct UBP_EquipmentSlotCustomization_C_Get_StatsPanel_Visibility_2_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetText_1
struct UBP_EquipmentSlotCustomization_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_GravityScaleText_Text_1
struct UBP_EquipmentSlotCustomization_C_Get_GravityScaleText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_ProjectileSpeedText_Text_1
struct UBP_EquipmentSlotCustomization_C_Get_ProjectileSpeedText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_TextBlock_7_Text_1
struct UBP_EquipmentSlotCustomization_C_Get_TextBlock_7_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_DamageBar_Visibility_1
struct UBP_EquipmentSlotCustomization_C_Get_DamageBar_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_DamageBarText_Text_1
struct UBP_EquipmentSlotCustomization_C_Get_DamageBarText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_StatsPanel_Visibility_1
struct UBP_EquipmentSlotCustomization_C_Get_StatsPanel_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_ReachBarText_Text_1
struct UBP_EquipmentSlotCustomization_C_Get_ReachBarText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_AttackTypeButtons_Visibility_1
struct UBP_EquipmentSlotCustomization_C_Get_AttackTypeButtons_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetRangedWeaponValues
struct UBP_EquipmentSlotCustomization_C_GetRangedWeaponValues_Params
{
	class AMordhauEquipment*                           Equipment_Ref;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WoodDamage;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StoneDamage;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T0_Head;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T0_Torso;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T0_Legs;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T1_Head;                                                   // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T1Torso;                                                   // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T1_Legs;                                                   // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T2_Head;                                                   // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T2_Torso;                                                  // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T2_Legs;                                                   // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T3_Head;                                                   // 0x0034(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T3_Torso;                                                  // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T3_Legs;                                                   // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Reload_Time;                                               // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AutoReload_Time;                                           // 0x0044(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      MaxAmmo;                                                   // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RangedDrawTime;                                            // 0x004C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Should_Flinch;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_SpeedBarText_Text_1
struct UBP_EquipmentSlotCustomization_C_Get_SpeedBarText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_StatsHeaderText_Text_1
struct UBP_EquipmentSlotCustomization_C_Get_StatsHeaderText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetVisibility_2
struct UBP_EquipmentSlotCustomization_C_GetVisibility_2_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_AltModeCheckboxVisibility_1
struct UBP_EquipmentSlotCustomization_C_Get_AltModeCheckboxVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.EquipmentSelectionCanceled
struct UBP_EquipmentSlotCustomization_C_EquipmentSelectionCanceled_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_CostText_ColorAndOpacity_1
struct UBP_EquipmentSlotCustomization_C_Get_CostText_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                               // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_ReachBar_Percent_1
struct UBP_EquipmentSlotCustomization_C_Get_ReachBar_Percent_1_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_SpeedBar_Percent
struct UBP_EquipmentSlotCustomization_C_Get_SpeedBar_Percent_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_DamageBar_Percent
struct UBP_EquipmentSlotCustomization_C_Get_DamageBar_Percent_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetHitKnockbackText
struct UBP_EquipmentSlotCustomization_C_GetHitKnockbackText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetMorphCostText
struct UBP_EquipmentSlotCustomization_C_GetMorphCostText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetShouldFlinchText
struct UBP_EquipmentSlotCustomization_C_GetShouldFlinchText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetProjectileValues
struct UBP_EquipmentSlotCustomization_C_GetProjectileValues_Params
{
	class UClass*                                      Projectile_Class;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WoodDamage;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StoneDamage;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T0_Head;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T0_Torso;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T0_Legs;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T1_Head;                                                   // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T1Torso;                                                   // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T1_Legs;                                                   // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T2_Head;                                                   // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T2_Torso;                                                  // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T2_Legs;                                                   // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T3_Head;                                                   // 0x0034(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T3_Torso;                                                  // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T3_Legs;                                                   // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Should_Flinch;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetRangedDrawText
struct UBP_EquipmentSlotCustomization_C_GetRangedDrawText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetMaxAmmoText
struct UBP_EquipmentSlotCustomization_C_GetMaxAmmoText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ShowElements
struct UBP_EquipmentSlotCustomization_C_ShowElements_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetEquipmentValues
struct UBP_EquipmentSlotCustomization_C_GetEquipmentValues_Params
{
	class AMordhauEquipment*                           Equipment_Ref;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Max_Ammo;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Ranged_Draw_Time;                                          // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Wood_Damage;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Stone_Damage;                                              // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T0_Head;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T0_Torso;                                                  // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T0_Legs;                                                   // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T1_Head;                                                   // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T1_Torso;                                                  // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T1_Legs;                                                   // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T2_Head;                                                   // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T2_Torso;                                                  // 0x0034(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T2_Legs;                                                   // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T3_Head;                                                   // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T3_Torso;                                                  // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T3_Legs;                                                   // 0x0044(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Should_Flinch;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetParryViewToleranceYMaxText
struct UBP_EquipmentSlotCustomization_C_GetParryViewToleranceYMaxText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetParryViewToleranceYMinText
struct UBP_EquipmentSlotCustomization_C_GetParryViewToleranceYMinText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetParryViewToleranceXMaxText
struct UBP_EquipmentSlotCustomization_C_GetParryViewToleranceXMaxText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetParryViewToleranceXMinText
struct UBP_EquipmentSlotCustomization_C_GetParryViewToleranceXMinText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetBlockMovementRestrictionText
struct UBP_EquipmentSlotCustomization_C_GetBlockMovementRestrictionText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetIsParryHeldText
struct UBP_EquipmentSlotCustomization_C_GetIsParryHeldText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetShieldValues
struct UBP_EquipmentSlotCustomization_C_GetShieldValues_Params
{
	class AMordhauEquipment*                           Equipment_Ref;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurnCap_X;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurnCap_Y;                                                 // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ParryStaminaNegation;                                      // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              View_Tolerance_XMin;                                       // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              View_Tolerance_Xmax;                                       // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              View_Tolerance_Ymin;                                       // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              View_Tolerance_Ymax;                                       // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Block_Movement_Restriction;                                // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsParryHeld;                                               // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetWeaponValues
struct UBP_EquipmentSlotCustomization_C_GetWeaponValues_Params
{
	Mordhau_EAttackMove                                AttackMove;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauEquipment*                           Equipment_Ref;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Windup;                                                    // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Combo_Windup;                                              // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Release;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MissRecovery;                                              // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FeintCost;                                                 // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MorphCost;                                                 // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaminaDrain;                                              // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MissStaminaCost;                                           // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WoodDamage;                                                // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StoneDamage;                                               // 0x0034(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCanCombo;                                                 // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bStopOnHit;                                                // 0x0039(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              T0_Head;                                                   // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T0_Torso;                                                  // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T0_Legs;                                                   // 0x0044(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T1_Head;                                                   // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T1Torso;                                                   // 0x004C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T1_Legs;                                                   // 0x0050(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T2_Head;                                                   // 0x0054(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T2_Torso;                                                  // 0x0058(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T2_Legs;                                                   // 0x005C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T3_Head;                                                   // 0x0060(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T3_Torso;                                                  // 0x0064(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T3_Legs;                                                   // 0x0068(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              X;                                                         // 0x006C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0070(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Parry_Stamina_Negation;                                    // 0x0074(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              View_Tolerance_XMin;                                       // 0x0078(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              View_Tolerance_Xmax;                                       // 0x007C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              View_Tolerance_Ymin;                                       // 0x0080(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              View_Tolerance_Ymax;                                       // 0x0084(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Block_Movement_Restriction;                                // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Is_Parry_Held;                                             // 0x0089(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Hit_Knockback;                                             // 0x008C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldFlinch;                                              // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetParryNegationText
struct UBP_EquipmentSlotCustomization_C_GetParryNegationText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetStoneDamageText
struct UBP_EquipmentSlotCustomization_C_GetStoneDamageText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetWoodDamageText
struct UBP_EquipmentSlotCustomization_C_GetWoodDamageText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetCanComboText
struct UBP_EquipmentSlotCustomization_C_GetCanComboText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetHitStopText
struct UBP_EquipmentSlotCustomization_C_GetHitStopText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetStaminaDrainText
struct UBP_EquipmentSlotCustomization_C_GetStaminaDrainText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetFeintCostText
struct UBP_EquipmentSlotCustomization_C_GetFeintCostText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetMissStaminaText
struct UBP_EquipmentSlotCustomization_C_GetMissStaminaText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetYTurnCapText
struct UBP_EquipmentSlotCustomization_C_GetYTurnCapText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetXTurnCapText
struct UBP_EquipmentSlotCustomization_C_GetXTurnCapText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetMissRecoveryText
struct UBP_EquipmentSlotCustomization_C_GetMissRecoveryText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetReleaseText
struct UBP_EquipmentSlotCustomization_C_GetReleaseText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetComboText
struct UBP_EquipmentSlotCustomization_C_GetComboText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetWindupText
struct UBP_EquipmentSlotCustomization_C_GetWindupText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r2c3_text_T3Legs
struct UBP_EquipmentSlotCustomization_C_Get_cell_r2c3_text_T3Legs_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r1c3_text_T3Torso
struct UBP_EquipmentSlotCustomization_C_Get_cell_r1c3_text_T3Torso_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r2c2_text_T2Legs
struct UBP_EquipmentSlotCustomization_C_Get_cell_r2c2_text_T2Legs_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r1c2_text_T2Torso
struct UBP_EquipmentSlotCustomization_C_Get_cell_r1c2_text_T2Torso_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r0c2_text_T2Head
struct UBP_EquipmentSlotCustomization_C_Get_cell_r0c2_text_T2Head_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r2c1_text_T1Legs
struct UBP_EquipmentSlotCustomization_C_Get_cell_r2c1_text_T1Legs_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r1c1_text_T1Torso
struct UBP_EquipmentSlotCustomization_C_Get_cell_r1c1_text_T1Torso_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r0c1_text_T1Head
struct UBP_EquipmentSlotCustomization_C_Get_cell_r0c1_text_T1Head_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r2c0_text_T0Legs
struct UBP_EquipmentSlotCustomization_C_Get_cell_r2c0_text_T0Legs_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r1c0_text_T0Torso
struct UBP_EquipmentSlotCustomization_C_Get_cell_r1c0_text_T0Torso_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r0c0_text_T0Head
struct UBP_EquipmentSlotCustomization_C_Get_cell_r0c0_text_T0Head_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.SetDamageTableColors
struct UBP_EquipmentSlotCustomization_C_SetDamageTableColors_Params
{
	float                                              Damage_Value;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Cell_Bg;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  Cell_Text;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetCurrentValues
struct UBP_EquipmentSlotCustomization_C_GetCurrentValues_Params
{
	class AMordhauEquipment*                           Equipment;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Mordhau_EEquipmentType                             EquipmentUIType;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Windup;                                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Combo_Windup;                                              // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Release;                                                   // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Miss_Recovery;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Feint_Cost;                                                // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Morph_Cost;                                                // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaminaDrain;                                              // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Miss_Stamina_Cost;                                         // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Wood_Damage;                                               // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Stone_Damage;                                              // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanCombo;                                                  // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Stop_on_Hit;                                               // 0x0035(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              T0Head;                                                    // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T0Torso;                                                   // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T0Legs;                                                    // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T1Head;                                                    // 0x0044(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T1Torso;                                                   // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T1Legs;                                                    // 0x004C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T2Head;                                                    // 0x0050(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T2Torso;                                                   // 0x0054(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T2Legs;                                                    // 0x0058(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T3Head;                                                    // 0x005C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T3Torso;                                                   // 0x0060(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              T3Legs;                                                    // 0x0064(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              X_TurnCap;                                                 // 0x0068(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y_TurnCap;                                                 // 0x006C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ParryStaminaNegation;                                      // 0x0070(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              View_Tolerance_XMin;                                       // 0x0074(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              View_Tolerance_Xmax;                                       // 0x0078(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              View_Tolerance_Ymin;                                       // 0x007C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              View_Tolerance_Ymax;                                       // 0x0080(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Block_Movement_Restriction;                                // 0x0084(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Is_Parry_Held;                                             // 0x0085(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HitKnockback;                                              // 0x0088(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Reload_Time;                                               // 0x008C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Auto_Reload_Time;                                          // 0x0090(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      MaxAmmo;                                                   // 0x0094(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Ranged_Draw_Time;                                          // 0x0098(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Should_Flinch;                                             // 0x009C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.UpdateStrikeStabButtonColors
struct UBP_EquipmentSlotCustomization_C_UpdateStrikeStabButtonColors_Params
{
	class UImage*                                      Selected_Icon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     Selected_Button;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r0c3_text_T3Head
struct UBP_EquipmentSlotCustomization_C_Get_cell_r0c3_text_T3Head_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetCurrentEquipment
struct UBP_EquipmentSlotCustomization_C_GetCurrentEquipment_Params
{
	class AMordhauEquipment*                           Equipment;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Mordhau_EEquipmentType                             EquipmentUIType;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetToolTipText_1
struct UBP_EquipmentSlotCustomization_C_GetToolTipText_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.EquipmentSelectionHovered
struct UBP_EquipmentSlotCustomization_C_EquipmentSelectionHovered_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.EquipmentSelectionClicked
struct UBP_EquipmentSlotCustomization_C_EquipmentSelectionClicked_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ShowEquipmentChoiceList
struct UBP_EquipmentSlotCustomization_C_ShowEquipmentChoiceList_Params
{
	int                                                CurrentId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetPatternsVisibility
struct UBP_EquipmentSlotCustomization_C_GetPatternsVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetColor3Visibility
struct UBP_EquipmentSlotCustomization_C_GetColor3Visibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetColor2Visibility
struct UBP_EquipmentSlotCustomization_C_GetColor2Visibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetColor1Visibility
struct UBP_EquipmentSlotCustomization_C_GetColor1Visibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetPart3Visibility
struct UBP_EquipmentSlotCustomization_C_GetPart3Visibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetPart2Visibility
struct UBP_EquipmentSlotCustomization_C_GetPart2Visibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetPart1Visibility
struct UBP_EquipmentSlotCustomization_C_GetPart1Visibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetSkinsVisibility
struct UBP_EquipmentSlotCustomization_C_GetSkinsVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetValues
struct UBP_EquipmentSlotCustomization_C_GetValues_Params
{
	struct FText                                       EquipmentWearableName;                                     // 0x0000(0x0018)  (Parm, OutParm)
	int                                                Part1Count;                                                // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Part2Count;                                                // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Part3Count;                                                // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Part1Index;                                                // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Part2Index;                                                // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Part3Index;                                                // 0x0026(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Color1Index;                                               // 0x0027(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Color2Index;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Color3Index;                                               // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Pattern;                                                   // 0x002A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PatternCount;                                              // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              EquipmentColorTable1;                                      // 0x0030(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	TArray<class UClass*>                              EquipmentColorTable2;                                      // 0x0040(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	TArray<class UClass*>                              EquipmentColorTable3;                                      // 0x0050(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	TArray<struct FEquipmentSkinEntry>                 Skins;                                                     // 0x0060(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	int                                                Skin;                                                      // 0x0070(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasColor1;                                                 // 0x0074(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HasColor2;                                                 // 0x0075(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HasColor3;                                                 // 0x0076(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Part1Name;                                                 // 0x0078(0x0018)  (Parm, OutParm)
	struct FText                                       Part2Name;                                                 // 0x0090(0x0018)  (Parm, OutParm)
	struct FText                                       Part3Name;                                                 // 0x00A8(0x0018)  (Parm, OutParm)
	struct FText                                       Part1Type;                                                 // 0x00C0(0x0018)  (Parm, OutParm)
	struct FText                                       Part2Type;                                                 // 0x00D8(0x0018)  (Parm, OutParm)
	struct FText                                       Part3Type;                                                 // 0x00F0(0x0018)  (Parm, OutParm)
	int                                                Cost;                                                      // 0x0108(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.UpdateWidgets
struct UBP_EquipmentSlotCustomization_C_UpdateWidgets_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.OnDrag
struct UBP_EquipmentSlotCustomization_C_OnDrag_Params
{
	float                                              DeltaDistance;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.RegisterPreviewEvents
struct UBP_EquipmentSlotCustomization_C_RegisterPreviewEvents_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.OnScroll
struct UBP_EquipmentSlotCustomization_C_OnScroll_Params
{
	float                                              ScrollDelta;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.UpdateEquipmentColor
struct UBP_EquipmentSlotCustomization_C_UpdateEquipmentColor_Params
{
	int                                                ColorIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ColorValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.UpdateEquipmentPattern
struct UBP_EquipmentSlotCustomization_C_UpdateEquipmentPattern_Params
{
	int                                                Pattern;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_3591_OnClicked__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_3591_OnClicked__DelegateSignature_Params
{
	int                                                ColorIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_4489_OnClicked__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_4489_OnClicked__DelegateSignature_Params
{
	int                                                ColorIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_4500_OnClicked__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_4500_OnClicked__DelegateSignature_Params
{
	int                                                ColorIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_10561_OnHovered__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_10561_OnHovered__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_10574_OnHovered__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_10574_OnHovered__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_10588_OnHovered__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_10588_OnHovered__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_10725_OnClosed__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_10725_OnClosed__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_10762_OnClosed__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_10762_OnClosed__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_10776_OnClosed__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_10776_OnClosed__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Refresh
struct UBP_EquipmentSlotCustomization_C_Refresh_Params
{
	bool                                               UpdateWidgets;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__Pattern_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__Pattern_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.SetActive
struct UBP_EquipmentSlotCustomization_C_SetActive_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1690_OnButtonClickedEvent__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1690_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__PickEquipmentButton_K2Node_ComponentBoundEvent_1744_OnButtonClickedEvent__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__PickEquipmentButton_K2Node_ComponentBoundEvent_1744_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.OnProfileChanged
struct UBP_EquipmentSlotCustomization_C_OnProfileChanged_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__StrikeButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__StrikeButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__ThrustButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__ThrustButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Construct
struct UBP_EquipmentSlotCustomization_C_Construct_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__BP_AltModeCheckbox_K2Node_ComponentBoundEvent_1809_OnCheckStateChanged__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__BP_AltModeCheckbox_K2Node_ComponentBoundEvent_1809_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__Button_8_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__AdvancedButton_K2Node_ComponentBoundEvent_984_OnButtonClickedEvent__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__AdvancedButton_K2Node_ComponentBoundEvent_984_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__Part1Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__Part1Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__Part2Button_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__Part2Button_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__Part3Button_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
struct UBP_EquipmentSlotCustomization_C_BndEvt__Part3Button_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ExecuteUbergraph_BP_EquipmentSlotCustomization
struct UBP_EquipmentSlotCustomization_C_ExecuteUbergraph_BP_EquipmentSlotCustomization_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
