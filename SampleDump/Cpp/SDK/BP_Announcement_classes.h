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

// WidgetBlueprintGeneratedClass BP_Announcement.BP_Announcement_C
// 0x00A9 (FullSize[0x02D9] - InheritedSize[0x0230])
class UBP_Announcement_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Exit_Anim;                                                 // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Entry_Anim;                                                // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_3;                                                 // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_5;                                                 // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1;                                               // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_2;                                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0270(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Subtext;                                                   // 0x0288(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ShowingAnnouncement;                                       // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RMGE[0x7];                                     // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ReceivedAnnouncementText;                                  // 0x02A8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ReceivedAnnouncementSubtext;                               // 0x02C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ShowingOutOfBounds;                                        // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Announcement.BP_Announcement_C");
		return ptr;
	}



	UMG_ESlateVisibility GetVisibility_1();
	UMG_ESlateVisibility GetAnnouncementBoxVisibility();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TimerEvent();
	void Show(const struct FText& Text, const struct FText& Subtext, float Duration, TEnumAsByte<E_AnnouncementType_E_AnnouncementType> Type);
	void Construct();
	void OnExitAnimFinish();
	void ExecuteUbergraph_BP_Announcement(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
