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

// BlueprintGeneratedClass BP_MordhauGameInstance.BP_MordhauGameInstance_C
// 0x0143 (FullSize[0x0CC3] - InheritedSize[0x0B80])
class UBP_MordhauGameInstance_C : public UMordhauGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0B80(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_TextInputDialog_C*                       PasswordDialog;                                            // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_InformationDialog_C*                     NetworkErrorDialog;                                        // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_InformationDialog_C*                     JoiningDialog;                                             // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              JoinDelay;                                                 // 0x0BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2DRU[0x4];                                     // 0x0BA4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                JoinDelayTimer;                                            // 0x0BA8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FServerSearchResult                         SessionToJoin;                                             // 0x0BB0(0x0110) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               WantsCasualRequeue;                                        // 0x0CC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WantsRankedRequeue;                                        // 0x0CC1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BackendConnectionTimeout;                                  // 0x0CC2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauGameInstance.BP_MordhauGameInstance_C");
		return ptr;
	}



	void GetJoiningText(bool bIsFull, struct FText* Text);
	void GetJoiningTextOld(const struct FServerSearchResult& Session, struct FText* Text);
	void OnFailure_EC1BED794FBBC103AFC74FAD71124461();
	void OnSuccess_EC1BED794FBBC103AFC74FAD71124461();
	void OnFailure_E564B5624B7FDB47DBB2E08126C636D7();
	void OnSuccess_E564B5624B7FDB47DBB2E08126C636D7();
	void OnFailure_4643A5C64229EB24E86C05B71625BDC1();
	void OnFull_4643A5C64229EB24E86C05B71625BDC1();
	void OnSuccess_4643A5C64229EB24E86C05B71625BDC1();
	void ShowPasswordDialog(const struct FServerSearchResult& SearchResult);
	void ShowNetworkErrorDialog();
	void OnErrorOkClicked();
	void CreatePasswordDialog();
	void CreateNetworkErrorDialog();
	void CreateJoiningDialog();
	void ShowJoiningDialog(const struct FServerSearchResult& SearchResult);
	void OnJoiningCancelClick();
	void OnPasswordTextEntered(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> Commit_Method);
	void Join();
	void JoinSessionSearchResult(const struct FServerSearchResult& SearchResult);
	void OnPasswordCancelClicked();
	void OnPasswordOKClicked();
	void ExecuteUbergraph_BP_MordhauGameInstance(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
