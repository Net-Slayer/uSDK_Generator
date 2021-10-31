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

// WidgetBlueprintGeneratedClass BP_ChatBoxEntry.BP_ChatBoxEntry_C
// 0x0178 (FullSize[0x03A8] - InheritedSize[0x0230])
class UBP_ChatBoxEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            EntryAnim;                                                 // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  All;                                                       // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_1;                                                  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_5;                                                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_15;                                                  // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_ChatNameIcon;                                        // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_ChatIcon;                                          // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableTextBox*                   Text;                                                      // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  usernameText;                                              // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Message;                                                   // 0x0280(0x0018) (Edit, BlueprintVisible)
	struct FLinearColor                                Username_Color;                                            // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Prefix;                                                    // 0x02A8(0x0018) (Edit, BlueprintVisible)
	bool                                               HidePrefixAndName;                                         // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1SDB[0x7];                                     // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBP_ChatBox_C*                               Chat_Box_Ref;                                              // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_TextInputDialog_C*                       LastTextInputDialog;                                       // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabPlayer                              Player;                                                    // 0x02D8(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<struct FString, struct FText>                 OptionMap;                                                 // 0x0338(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<E_ChatUserTypes_E_ChatUserTypes>       Chat_User_Type;                                            // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QAUK[0x7];                                     // 0x0389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       BanDuration;                                               // 0x0390(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ChatBoxEntry.BP_ChatBoxEntry_C");
		return ptr;
	}



	void InitializeOptions(TMap<struct FString, struct FText>* OptionsMap);
	struct FText GetToolTipText_1();
	void UpdateEntryMessage(const struct FText& New_Message, const struct FLinearColor& Text_Color);
	UMG_ESlateVisibility GetVisibility_1();
	void SetupEntry(const struct FString& Name, const struct FPlayFabPlayer& Player, const struct FText& Message, const struct FText& Prefix, const struct FLinearColor& NameColor, TEnumAsByte<E_ChatUserTypes_E_ChatUserTypes> Chat_User_Type);
	void Motivational_Mute();
	void ClientMute();
	void VoteKick();
	void ADMIN___Mute();
	void MuteDialogCanceled();
	void ContextButtonClicked2(int Button_Index);
	void ADMIN___Message();
	void MessageDialogEntered();
	void MessageDialogCanceled();
	void MuteDialogEntered();
	void ContextButtonClicked(int Button_Index);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void OptionSelected(const struct FString& Option);
	void CreateWrapper(TMap<struct FString, struct FText> InOptions);
	void ContextButtonClicked3(int Button_Index);
	void KickDialogEntered();
	void KickDialogCanceled();
	void BanDurationDialogEntered();
	void BanDurationDialogCanceled();
	void ADMIN___Kick();
	void ADMIN___Ban();
	void BanReasonDialogCanceled();
	void BanReasonDialogEntered();
	void ExecuteUbergraph_BP_ChatBoxEntry(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
