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

// WidgetBlueprintGeneratedClass BP_ModDownloadDialog.BP_ModDownloadDialog_C
// 0x0188 (FullSize[0x03B8] - InheritedSize[0x0230])
class UBP_ModDownloadDialog_C : public UMordhauDialog
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_OneButtonDialog_C*                       BP_OneButtonDialog;                                        // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                           Loading;                                                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1;                                               // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                          // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<int>                                        AllModsRequired;                                           // 0x0258(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<int, float>                                   AllModsRequiredFileSizes;                                  // 0x0268(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        PreviouslyDownloadedRequiredMods;                          // 0x02B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    DownloadCompleted;                                         // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<int, int>                                     AllModsRequiredToModFileMap;                               // 0x02D8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              CurrentDownloaded;                                         // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TotalDownloadSize;                                         // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RemainingDownload;                                         // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S263[0x4];                                     // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, int>                                     CurrentlyInstalledModsToLastModFileMap;                    // 0x0338(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AllModsInstalled;                                          // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Finished;                                                  // 0x0389(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Canceled;                                                  // 0x038A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5HFQ[0x5];                                     // 0x038B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    DownloadCanceled;                                          // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    DownloadFailed;                                            // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               DOWNLOADING;                                               // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R40E[0x3];                                     // 0x03B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentlyGettingModInfoIdx;                                // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ModDownloadDialog.BP_ModDownloadDialog_C");
		return ptr;
	}



	void CancelAllModsRequiredDownloads();
	void UpdateCurrentDownloadProgress();
	void UpdateCurrentlyInstalledMods();
	void SetButtonText(const struct FText& ButtonText);
	void SetTitleText(const struct FText& TitleText);
	void OnFailure_2BBA97D647185ABC0293E9A9C5E0925A(int ResponseCode, const struct FModInfo& Mod);
	void OnSuccess_2BBA97D647185ABC0293E9A9C5E0925A(int ResponseCode, const struct FModInfo& Mod);
	void OnFailure_F325FFB4489130F65283CC894D428C76(int ResponseCode, bool bModsAreUpdated);
	void OnSuccess_F325FFB4489130F65283CC894D428C76(int ResponseCode, bool bModsAreUpdated);
	void BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature();
	void Show();
	void Hide();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_BP_ModDownloadDialog(int EntryPoint);
	void DownloadFailed__DelegateSignature();
	void DownloadCanceled__DelegateSignature();
	void DownloadCompleted__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
