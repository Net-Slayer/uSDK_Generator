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

// WidgetBlueprintGeneratedClass BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C
// 0x014F (FullSize[0x037F] - InheritedSize[0x0230])
class UBP_ScoreboardEntryParent_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Rank;                                                      // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W7P4[0x4];                                     // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Assists;                                                   // 0x0240(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Score;                                                     // 0x0258(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Deaths;                                                    // 0x0270(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                PingInt;                                                   // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VPP4[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Ping;                                                      // 0x0290(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     Name;                                                      // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FText                                       Kills;                                                     // 0x02B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AMordhauPlayerState*                         PlayerState;                                               // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Highlight;                                                 // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Dead;                                                      // 0x02D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_ScoreboardEntryTypes_E_ScoreboardEntryTypes> Entry_Type;                                                // 0x02DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_REDG[0x1];                                     // 0x02DB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Index;                                                     // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Refreshed;                                                 // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FPlayFabPlayer                              Player;                                                    // 0x02F0(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UBP_TextInputDialog_C*                       LastTextInputDialog;                                       // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       BanDuration;                                               // 0x0358(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               shouldRefresh;                                             // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JXRC[0x3];                                     // 0x0371(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Team;                                                      // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScoreValue;                                                // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ModeratorBadge;                                            // 0x037C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      DevBadge;                                                  // 0x037D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ChatUserTypes_E_ChatUserTypes>       User_Type;                                                 // 0x037E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ScoreboardEntryParent.BP_ScoreboardEntryParent_C");
		return ptr;
	}



	void InitializeOptions(TMap<struct FString, struct FText>* OptionsMap);
	void Refresh_Entry(class AMordhauPlayerState* PlayerState, TEnumAsByte<E_ScoreboardEntryTypes_E_ScoreboardEntryTypes> Entry_Type);
	void MuteDialogEntered();
	void MuteDialogCanceled();
	void KickDialogEntered();
	void KickDialogCanceled();
	void BanDurationDialogEntered();
	void BanDurationDialogCanceled();
	void ADMIN___Mute();
	void ADMIN___Kick();
	void ADMIN___Ban();
	void BanReasonDialogCanceled();
	void BanReasonDialogEntered();
	void Context_Button_Clicked(int Button_Index);
	void CallContextMenu();
	void VoteKick();
	void Chat_Mute();
	void View_Steam_Profile();
	void Construct();
	void OptionSelected(const struct FString& Option);
	void CreateWrapper(TMap<struct FString, struct FText> InOptions);
	void ADMIN___Message();
	void MessageDialogEntered();
	void MessageDialogCanceled();
	void ExecuteUbergraph_BP_ScoreboardEntryParent(int EntryPoint);
	void Refreshed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
