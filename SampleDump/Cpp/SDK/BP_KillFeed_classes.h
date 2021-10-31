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

// WidgetBlueprintGeneratedClass BP_KillFeed.BP_KillFeed_C
// 0x002C (FullSize[0x025C] - InheritedSize[0x0230])
class UBP_KillFeed_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                Entries;                                                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UBP_KillFeedEntry_C*>                 EntriesArray;                                              // 0x0240(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	float                                              TimeForKillFeedToDisappear;                                // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxEntries;                                                // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LoopingIndex;                                              // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_KillFeed.BP_KillFeed_C");
		return ptr;
	}



	void AddEntry(class APlayerState* Killer, const struct FText& KilledBy, class APlayerState* Victim);
	void OnMessageReceived(class APlayerState* Killer, const struct FText& KilledBy, class APlayerState* Victim);
	void Construct();
	void HideAfterSomeTime();
	void HideCallback();
	void ExecuteUbergraph_BP_KillFeed(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
