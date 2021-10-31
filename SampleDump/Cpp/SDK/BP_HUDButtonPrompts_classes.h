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

// WidgetBlueprintGeneratedClass BP_HUDButtonPrompts.BP_HUDButtonPrompts_C
// 0x00D1 (FullSize[0x0301] - InheritedSize[0x0230])
class UBP_HUDButtonPrompts_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Vanish_Spec_Prompts;                                       // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_ButtonPrompt_C*                          BP_ButtonPrompt_PrimarySpecAction;                         // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ButtonPrompt_C*                          BP_ButtonPrompt_SecondarySpecAction;                       // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ButtonPrompt_C*                          BP_ButtonPrompt_TertiarySpecAction;                        // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ButtonPrompt_C*                          BP_ChangeLoadoutPrompt;                                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ButtonPrompt_C*                          BP_ChangeTeamPrompt;                                       // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ButtonPrompt_C*                          BP_CouchPrompt;                                            // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SpawnInfo_C*                             BP_SpawnInfo;                                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_1;                                                 // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_2;                                                 // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_3;                                                 // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_4;                                                 // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_EquipmentPrompts;                                  // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_VehiclePrompts;                                    // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_10;                                            // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_EquipmentPrompts;                              // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_VehiclePrompts;                                // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UBP_ButtonPrompt_C*>                  ActionPrompts;                                             // 0x02C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UBP_ButtonPrompt_C*>                  VehiclePrompts;                                            // 0x02D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UBP_ButtonPrompt_C*>                  SpectatorActionPrompts;                                    // 0x02E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class AMordhauEquipment*                           Right_Hand;                                                // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauEquipment*                           Left_Hand;                                                 // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Should_vanish_spec_prompts;                                // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_HUDButtonPrompts.BP_HUDButtonPrompts_C");
		return ptr;
	}



	UMG_ESlateVisibility GetVisibility_5();
	UMG_ESlateVisibility GetVisibility_4();
	UMG_ESlateVisibility GetVisibility_2();
	UMG_ESlateVisibility Get_BP_ButtonPrompt_PrimarySpecAction_Visibility_1();
	void Clear_Vehicle_Prompts();
	void Add_Vehicle_Prompt(const struct FName& ActionName, const struct FText& DisplayedText);
	UMG_ESlateVisibility Get_Overlay_SpectatorActionPrompts_Visibility_2();
	UMG_ESlateVisibility Get_Overlay_VehiclePrompts_Visibility_1();
	UMG_ESlateVisibility GetVisibility_1();
	void Update_Spectator_Prompts(class AMordhauSpectator* MordhauSpectator);
	UMG_ESlateVisibility Get_Overlay_SpectatorActionPrompts_Visibility_1();
	void Update_Action_Prompts();
	void Clear_Equipment_Prompts();
	void Add_Prompt(const struct FName& ActionName, const struct FText& DisplayedText);
	void Construct();
	void Hide_Equipment_Prompts();
	void Show_Equipment_Prompts();
	void Play_Vanish_Anim();
	void Vanish();
	void ExecuteUbergraph_BP_HUDButtonPrompts(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
