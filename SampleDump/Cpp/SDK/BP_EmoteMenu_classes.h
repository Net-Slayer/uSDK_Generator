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

// WidgetBlueprintGeneratedClass BP_EmoteMenu.BP_EmoteMenu_C
// 0x0018 (FullSize[0x02E0] - InheritedSize[0x02C8])
class UBP_EmoteMenu_C : public UBP_ChoiceMenu_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FEmoteEntry>                         Emotes;                                                    // 0x02D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_EmoteMenu.BP_EmoteMenu_C");
		return ptr;
	}



	void DoEmote(int Index);
	void OptionChosen(int Choice);
	void Show();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void RebuildEmoteList();
	void ExecuteUbergraph_BP_EmoteMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
