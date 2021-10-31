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

// WidgetBlueprintGeneratedClass BP_ButtonPrompt.BP_ButtonPrompt_C
// 0x0172 (FullSize[0x03A2] - InheritedSize[0x0230])
class UBP_ButtonPrompt_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              HorizontalBox_1;                                           // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Icon;                                                      // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    IconSizeBox;                                               // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_2;                                                 // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  PromptText;                                                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1;                                               // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_3;                                               // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    TextSizeBox_Left;                                          // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    TextSizeBox_Right;                                         // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                                 DisplayedIcon;                                             // 0x0288(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       Action_Name;                                               // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Left_Text;                                                 // 0x0318(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Right_Text;                                                // 0x0330(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Prompt_Icon_Text;                                          // 0x0348(0x0018) (Edit, BlueprintVisible)
	struct FVector2D                                   Icon_Size;                                                 // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Use_Forced_Key_;                                           // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T2A1[0x7];                                     // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKey                                        Forced_Key;                                                // 0x0370(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FKey                                        Forced_Key_Gamepad;                                        // 0x0388(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                               Use_Secondary_If_Using_Controller;                         // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Using_Controller;                                          // 0x03A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ButtonPrompt.BP_ButtonPrompt_C");
		return ptr;
	}



	void Initialize(const struct FName& Action_Name, const struct FText& Displayed_Text);
	void Update_from_Action_bind();
	void Update_from_forced_key();
	void RefreshIcon();
	void Update();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BP_ButtonPrompt(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
