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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C
// 0x096C (FullSize[0x0C98] - InheritedSize[0x032C])
class UBP_EquipmentSlotCustomization_C : public UBP_CustomizationTab_C
{
public:
	unsigned char                                      UnknownData_YW37[0x4];                                     // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     AdvancedButton;                                            // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    AdvancedStats;                                             // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              AttackTypeButtons;                                         // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  AttackTypeText;                                            // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     BackButton;                                                // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     BackButton2;                                               // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    BasicStats;                                                // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     Border_1;                                                  // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Checkbox_C*                              BP_AltModeCheckbox;                                        // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_1;                                                  // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_2;                                                  // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_3;                                                  // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_4;                                                  // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_5;                                                  // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_6;                                                  // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_7;                                                  // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_8;                                                  // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      cell_r0c0_bg;                                              // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  cell_r0c0_text;                                            // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      cell_r0c1_bg;                                              // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  cell_r0c1_text;                                            // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      cell_r0c2_bg;                                              // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  cell_r0c2_text;                                            // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      cell_r0c3_bg;                                              // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  cell_r0c3_text;                                            // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      cell_r1c0_bg;                                              // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  cell_r1c0_text;                                            // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      cell_r1c1_bg;                                              // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  cell_r1c1_text;                                            // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      cell_r1c2_bg;                                              // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  cell_r1c2_text;                                            // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      cell_r1c3_bg;                                              // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  cell_r1c3_text;                                            // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      cell_r2c0_bg;                                              // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  cell_r2c0_text;                                            // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      cell_r2c1_bg;                                              // 0x0450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  cell_r2c1_text;                                            // 0x0458(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      cell_r2c2_bg;                                              // 0x0460(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  cell_r2c2_text;                                            // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      cell_r2c3_bg;                                              // 0x0470(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  cell_r2c3_text;                                            // 0x0478(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  CostText;                                                  // 0x0480(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                                DamageBar;                                                 // 0x0488(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  DamageBarText;                                             // 0x0490(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  EntriesTitle;                                              // 0x0498(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CustomizationColorPicker_C*              EquipmentColorPicker1;                                     // 0x04A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CustomizationColorPicker_C*              EquipmentColorPicker2;                                     // 0x04A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CustomizationColorPicker_C*              EquipmentColorPicker3;                                     // 0x04B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  GravityScaleText;                                          // 0x04B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ic_head;                                                   // 0x04C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ic_legs;                                                   // 0x04C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ic_strike;                                                 // 0x04D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ic_thrust;                                                 // 0x04D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ic_torso;                                                  // 0x04E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_19;                                                  // 0x04E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ItemEntriesBox;                                            // 0x04F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  LengthText;                                                // 0x04F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      lvl0;                                                      // 0x0500(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      lvl1;                                                      // 0x0508(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      lvl2;                                                      // 0x0510(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      lvl3;                                                      // 0x0518(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             MainWidgetSwitcher;                                        // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_3;                                                 // 0x0528(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Part1;                                                     // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Part1Button;                                               // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Part1Type;                                                 // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Part2;                                                     // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Part2Button;                                               // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Part2Type;                                                 // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Part3;                                                     // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Part3Button;                                               // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Part3Type;                                                 // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CircularList_C*                          Pattern;                                                   // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     PickEquipmentButton;                                       // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ProjectileSpeedText;                                       // 0x0588(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                                ReachBar;                                                  // 0x0590(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ReachBarText;                                              // 0x0598(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ScrollBox_4;                                               // 0x05A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Skin;                                                      // 0x05A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     SkinButton;                                                // 0x05B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                                SpeedBar;                                                  // 0x05B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SpeedBarText;                                              // 0x05C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatControls;                                              // 0x05C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatEntry_CanCombo;                                        // 0x05D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                StatEntry_DamageTable;                                     // 0x05D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatEntry_FeintCost;                                       // 0x05E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatEntry_HeldBlock;                                       // 0x05E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatEntry_HitKnockback;                                    // 0x05F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatEntry_HitStop;                                         // 0x05F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatEntry_Length;                                          // 0x0600(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatEntry_MaxAmmo;                                         // 0x0608(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatEntry_MeleeSpeed;                                      // 0x0610(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatEntry_MissCost;                                        // 0x0618(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatEntry_MorphCost;                                       // 0x0620(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatEntry_MovementRestriction;                             // 0x0628(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatEntry_ParryNegation;                                   // 0x0630(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatEntry_ProjectileGravityScale;                          // 0x0638(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatEntry_ProjectileSpeed;                                 // 0x0640(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatEntry_RangedSpeed;                                     // 0x0648(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatEntry_ShouldFlinch;                                    // 0x0650(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatEntry_StamDrain;                                       // 0x0658(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatEntry_StoneDamage;                                     // 0x0660(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatEntry_TurnCap;                                         // 0x0668(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatEntry_WoodDamage;                                      // 0x0670(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  StatsHeaderText;                                           // 0x0678(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                StatsPanel;                                                // 0x0680(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             StatsWidgetSwitcher;                                       // 0x0688(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     StrikeButton;                                              // 0x0690(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1;                                               // 0x0698(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_5;                                               // 0x06A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_7;                                               // 0x06A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_8;                                               // 0x06B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_9;                                               // 0x06B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_11;                                              // 0x06C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_14;                                              // 0x06C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_20;                                              // 0x06D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_24;                                              // 0x06D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_26;                                              // 0x06E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_28;                                              // 0x06E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_30;                                              // 0x06F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_33;                                              // 0x06F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_35;                                              // 0x0700(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_36;                                              // 0x0708(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_37;                                              // 0x0710(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_38;                                              // 0x0718(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_42;                                              // 0x0720(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_44;                                              // 0x0728(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_48;                                              // 0x0730(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_66;                                              // 0x0738(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_74;                                              // 0x0740(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_76;                                              // 0x0748(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_78;                                              // 0x0750(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_80;                                              // 0x0758(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ThrustButton;                                              // 0x0760(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    TierIconBackground;                                        // 0x0768(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                EquipmentIndex;                                            // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasSkins;                                                  // 0x0774(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasPart1;                                                  // 0x0775(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasPart2;                                                  // 0x0776(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasPart3;                                                  // 0x0777(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasColor1;                                                 // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasColor2;                                                 // 0x0779(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasColor3;                                                 // 0x077A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasPatterns;                                               // 0x077B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VW34[0x4];                                     // 0x077C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       EquipmentName;                                             // 0x0780(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Cost;                                                      // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsStrikeButtonActive;                                      // 0x079C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I02D[0x3];                                     // 0x079D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FButtonStyle                                AdvancedButtonPressed;                                     // 0x07A0(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                                BasicButtonPressed;                                        // 0x0A18(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               isAltMode;                                                 // 0x0C90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7JH1[0x3];                                     // 0x0C91(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentlySelectingPartType;                                // 0x0C94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C");
		return ptr;
	}



	UMG_ESlateVisibility GetVisibility_1();
	void ColorHovered(int Idx, int ColorId);
	void PartSelectionHovered(int ID);
	void PartSelectionClicked(int ID);
	void ShowPartChoiceList(int CurrentEquipmentId, int CurrentSkinId, int CurrentPartType, int CurrentPartId);
	void SkinSelectionHovered(int ID);
	void SkinSelectionClicked(int ID);
	void ShowSkinChoiceList(int CurrentEquipmentId, int CurrentSkinId);
	void GetEquipmentPart(TArray<class UClass*>* Parts, int PartIdx, class UMordhauEquipmentPart** EquipmentPart);
	void IsAnySkinAvailable(TArray<struct FEquipmentSkinEntry>* Skins, bool* IsAnySkinAvailable);
	struct FText Get_LengthText_Text_1();
	UMG_ESlateVisibility Get_AdvancedButton_Visibility_1();
	UMG_ESlateVisibility Get_BackButton2_Visibility_1();
	UMG_ESlateVisibility Get_StatsPanel_Visibility_2();
	struct FText GetText_1();
	struct FText Get_GravityScaleText_Text_1();
	struct FText Get_ProjectileSpeedText_Text_1();
	struct FText Get_TextBlock_7_Text_1();
	UMG_ESlateVisibility Get_DamageBar_Visibility_1();
	struct FText Get_DamageBarText_Text_1();
	UMG_ESlateVisibility Get_StatsPanel_Visibility_1();
	struct FText Get_ReachBarText_Text_1();
	UMG_ESlateVisibility Get_AttackTypeButtons_Visibility_1();
	void GetRangedWeaponValues(class AMordhauEquipment* Equipment_Ref, float* WoodDamage, float* StoneDamage, float* T0_Head, float* T0_Torso, float* T0_Legs, float* T1_Head, float* T1Torso, float* T1_Legs, float* T2_Head, float* T2_Torso, float* T2_Legs, float* T3_Head, float* T3_Torso, float* T3_Legs, float* Reload_Time, float* AutoReload_Time, unsigned char* MaxAmmo, float* RangedDrawTime, bool* Should_Flinch);
	struct FText Get_SpeedBarText_Text_1();
	struct FText Get_StatsHeaderText_Text_1();
	UMG_ESlateVisibility GetVisibility_2();
	UMG_ESlateVisibility Get_AltModeCheckboxVisibility_1();
	void EquipmentSelectionCanceled();
	struct FSlateColor Get_CostText_ColorAndOpacity_1();
	float Get_ReachBar_Percent_1();
	float Get_SpeedBar_Percent();
	float Get_DamageBar_Percent();
	struct FText GetHitKnockbackText();
	struct FText GetMorphCostText();
	struct FText GetShouldFlinchText();
	void GetProjectileValues(class UClass* Projectile_Class, float* WoodDamage, float* StoneDamage, float* T0_Head, float* T0_Torso, float* T0_Legs, float* T1_Head, float* T1Torso, float* T1_Legs, float* T2_Head, float* T2_Torso, float* T2_Legs, float* T3_Head, float* T3_Torso, float* T3_Legs, bool* Should_Flinch);
	struct FText GetRangedDrawText();
	struct FText GetMaxAmmoText();
	void ShowElements();
	void GetEquipmentValues(class AMordhauEquipment* Equipment_Ref, unsigned char* Max_Ammo, float* Ranged_Draw_Time, float* Wood_Damage, float* Stone_Damage, float* T0_Head, float* T0_Torso, float* T0_Legs, float* T1_Head, float* T1_Torso, float* T1_Legs, float* T2_Head, float* T2_Torso, float* T2_Legs, float* T3_Head, float* T3_Torso, float* T3_Legs, bool* Should_Flinch);
	struct FText GetParryViewToleranceYMaxText();
	struct FText GetParryViewToleranceYMinText();
	struct FText GetParryViewToleranceXMaxText();
	struct FText GetParryViewToleranceXMinText();
	struct FText GetBlockMovementRestrictionText();
	struct FText GetIsParryHeldText();
	void GetShieldValues(class AMordhauEquipment* Equipment_Ref, float* TurnCap_X, float* TurnCap_Y, float* ParryStaminaNegation, float* View_Tolerance_XMin, float* View_Tolerance_Xmax, float* View_Tolerance_Ymin, float* View_Tolerance_Ymax, unsigned char* Block_Movement_Restriction, bool* IsParryHeld);
	void GetWeaponValues(Mordhau_EAttackMove AttackMove, class AMordhauEquipment* Equipment_Ref, float* Windup, float* Combo_Windup, float* Release, float* MissRecovery, int* FeintCost, int* MorphCost, float* StaminaDrain, float* MissStaminaCost, float* WoodDamage, float* StoneDamage, bool* bCanCombo, bool* bStopOnHit, float* T0_Head, float* T0_Torso, float* T0_Legs, float* T1_Head, float* T1Torso, float* T1_Legs, float* T2_Head, float* T2_Torso, float* T2_Legs, float* T3_Head, float* T3_Torso, float* T3_Legs, float* X, float* Y, float* Parry_Stamina_Negation, float* View_Tolerance_XMin, float* View_Tolerance_Xmax, float* View_Tolerance_Ymin, float* View_Tolerance_Ymax, unsigned char* Block_Movement_Restriction, bool* Is_Parry_Held, float* Hit_Knockback, bool* ShouldFlinch);
	struct FText GetParryNegationText();
	struct FText GetStoneDamageText();
	struct FText GetWoodDamageText();
	struct FText GetCanComboText();
	struct FText GetHitStopText();
	struct FText GetStaminaDrainText();
	struct FText GetFeintCostText();
	struct FText GetMissStaminaText();
	struct FText GetYTurnCapText();
	struct FText GetXTurnCapText();
	struct FText GetMissRecoveryText();
	struct FText GetReleaseText();
	struct FText GetComboText();
	struct FText GetWindupText();
	struct FText Get_cell_r2c3_text_T3Legs();
	struct FText Get_cell_r1c3_text_T3Torso();
	struct FText Get_cell_r2c2_text_T2Legs();
	struct FText Get_cell_r1c2_text_T2Torso();
	struct FText Get_cell_r0c2_text_T2Head();
	struct FText Get_cell_r2c1_text_T1Legs();
	struct FText Get_cell_r1c1_text_T1Torso();
	struct FText Get_cell_r0c1_text_T1Head();
	struct FText Get_cell_r2c0_text_T0Legs();
	struct FText Get_cell_r1c0_text_T0Torso();
	struct FText Get_cell_r0c0_text_T0Head();
	void SetDamageTableColors(float Damage_Value, class UImage* Cell_Bg, class UTextBlock* Cell_Text);
	void GetCurrentValues(class AMordhauEquipment* Equipment, Mordhau_EEquipmentType EquipmentUIType, float* Windup, float* Combo_Windup, float* Release, float* Miss_Recovery, int* Feint_Cost, int* Morph_Cost, float* StaminaDrain, float* Miss_Stamina_Cost, float* Wood_Damage, float* Stone_Damage, bool* CanCombo, bool* Stop_on_Hit, float* T0Head, float* T0Torso, float* T0Legs, float* T1Head, float* T1Torso, float* T1Legs, float* T2Head, float* T2Torso, float* T2Legs, float* T3Head, float* T3Torso, float* T3Legs, float* X_TurnCap, float* Y_TurnCap, float* ParryStaminaNegation, float* View_Tolerance_XMin, float* View_Tolerance_Xmax, float* View_Tolerance_Ymin, float* View_Tolerance_Ymax, unsigned char* Block_Movement_Restriction, bool* Is_Parry_Held, float* HitKnockback, float* Reload_Time, float* Auto_Reload_Time, unsigned char* MaxAmmo, float* Ranged_Draw_Time, bool* Should_Flinch);
	void UpdateStrikeStabButtonColors(class UImage* Selected_Icon, class UButton* Selected_Button);
	struct FText Get_cell_r0c3_text_T3Head();
	void GetCurrentEquipment(class AMordhauEquipment** Equipment, Mordhau_EEquipmentType* EquipmentUIType);
	struct FText GetToolTipText_1();
	void EquipmentSelectionHovered(int ID);
	void EquipmentSelectionClicked(int ID);
	void ShowEquipmentChoiceList(int CurrentId);
	UMG_ESlateVisibility GetPatternsVisibility();
	UMG_ESlateVisibility GetColor3Visibility();
	UMG_ESlateVisibility GetColor2Visibility();
	UMG_ESlateVisibility GetColor1Visibility();
	UMG_ESlateVisibility GetPart3Visibility();
	UMG_ESlateVisibility GetPart2Visibility();
	UMG_ESlateVisibility GetPart1Visibility();
	UMG_ESlateVisibility GetSkinsVisibility();
	void GetValues(struct FText* EquipmentWearableName, int* Part1Count, int* Part2Count, int* Part3Count, unsigned char* Part1Index, unsigned char* Part2Index, unsigned char* Part3Index, unsigned char* Color1Index, unsigned char* Color2Index, unsigned char* Color3Index, unsigned char* Pattern, int* PatternCount, TArray<class UClass*>* EquipmentColorTable1, TArray<class UClass*>* EquipmentColorTable2, TArray<class UClass*>* EquipmentColorTable3, TArray<struct FEquipmentSkinEntry>* Skins, int* Skin, bool* HasColor1, bool* HasColor2, bool* HasColor3, struct FText* Part1Name, struct FText* Part2Name, struct FText* Part3Name, struct FText* Part1Type, struct FText* Part2Type, struct FText* Part3Type, int* Cost);
	void UpdateWidgets();
	void OnDrag(float DeltaDistance);
	void RegisterPreviewEvents();
	void OnScroll(float ScrollDelta);
	void UpdateEquipmentColor(int ColorIndex, int ColorValue);
	void UpdateEquipmentPattern(int Pattern);
	void BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_3591_OnClicked__DelegateSignature(int ColorIndex);
	void BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_4489_OnClicked__DelegateSignature(int ColorIndex);
	void BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_4500_OnClicked__DelegateSignature(int ColorIndex);
	void BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_10561_OnHovered__DelegateSignature(int Index);
	void BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_10574_OnHovered__DelegateSignature(int Index);
	void BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_10588_OnHovered__DelegateSignature(int Index);
	void BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_10725_OnClosed__DelegateSignature(int Index);
	void BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_10762_OnClosed__DelegateSignature(int Index);
	void BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_10776_OnClosed__DelegateSignature(int Index);
	void Refresh(bool UpdateWidgets);
	void BndEvt__Pattern_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(int Value);
	void SetActive();
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_1690_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PickEquipmentButton_K2Node_ComponentBoundEvent_1744_OnButtonClickedEvent__DelegateSignature();
	void OnProfileChanged();
	void BndEvt__StrikeButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ThrustButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void Construct();
	void BndEvt__BP_AltModeCheckbox_K2Node_ComponentBoundEvent_1809_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Button_8_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__AdvancedButton_K2Node_ComponentBoundEvent_984_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SkinButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Part1Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Part2Button_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Part3Button_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_BP_EquipmentSlotCustomization(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
