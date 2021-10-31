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

// WidgetBlueprintGeneratedClass BP_LoadoutEntry.BP_LoadoutEntry_C
// 0x0672 (FullSize[0x08EA] - InheritedSize[0x0278])
class UBP_LoadoutEntry_C : public UBP_CustomizationItemEntry_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            MovedAnim;                                                 // 0x0280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      BannedIndicator;                                           // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ButtonEntry;                                               // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  CurrentPoints;                                             // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      DownArrow;                                                 // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     DownButton;                                                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    EquipmentPoints;                                           // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_30;                                                  // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Index;                                                     // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  NameText;                                                  // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_8;                                                 // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      UpArrow;                                                   // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     UpButton;                                                  // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                      EquipmentClass;                                            // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NotEnoughPoints;                                           // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0H03[0x7];                                     // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Cost;                                                      // 0x02F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                CharacterPointsLeft;                                       // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PointsCost;                                                // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterProfile                           Profile;                                                   // 0x0318(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_LoadoutPicker_C*                         LoadoutPicker;                                             // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   UpButtonPosition;                                          // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FButtonStyle                                EditButtonSelectedStyle;                                   // 0x03E0(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                                EditButtonNormalStyle;                                     // 0x0658(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BannedTooltipText;                                         // 0x08D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasBannedEquipment;                                        // 0x08E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasBannedPerks;                                            // 0x08E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_LoadoutEntry.BP_LoadoutEntry_C");
		return ptr;
	}



	void UpdateBannedIndicators();
	UMG_ESlateVisibility GetVisibility_1();
	struct FSlateColor Get_NameText_ColorAndOpacity_1();
	UMG_ESlateVisibility Get_MenuToggleButtonOverlay_Visibility_1();
	UMG_ESlateVisibility Get_EquipmentPoints_Visibility_1();
	struct FText Get_TotalPoints_Text_1();
	struct FText Get_DownButton_ToolTipText_1();
	struct FText Get_UpButton_ToolTipText_1();
	struct FText Get_AvailablePointsText_Text_1();
	struct FText Get_Index_Text_1();
	struct FSlateColor Get_CostText_ColorAndOpacity_1();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void Refresh_Widget();
	void BndEvt__UpButton_K2Node_ComponentBoundEvent_128_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__DownButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MenuToggleButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_85_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature();
	void Initialize();
	void ExecuteUbergraph_BP_LoadoutEntry(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
