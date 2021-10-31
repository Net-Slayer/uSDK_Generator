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

// WidgetBlueprintGeneratedClass BP_RankIcon.BP_RankIcon_C
// 0x011C (FullSize[0x034C] - InheritedSize[0x0230])
class UBP_RankIcon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_1;                                                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                Rank_Index;                                                // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ImageSize;                                                 // 0x0244(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QTKN[0x4];                                     // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 RankImage;                                                 // 0x0250(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               RankNames;                                                 // 0x02D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FSlateBrush>                         RankImages;                                                // 0x02E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FText                                       Rank_Title;                                                // 0x02F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 Division_Color;                                            // 0x0310(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSlateColor>                         TitleColors;                                               // 0x0338(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                Rank_MMR;                                                  // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_RankIcon.BP_RankIcon_C");
		return ptr;
	}



	void GetRankIndexFromMMR(int MMR, int* Rank_Index);
	void Update_Widget_with_Rank_Index(int Rank_Index_, const struct FVector2D& Image_Size);
	void UpdateRankIndexFromMMR(int MMR, int* Rank_Index);
	void GetRankDivisionColorFromIndex(int Rank_Index, struct FSlateColor* Text_Color);
	void Update_Widget_with_MMR(int Rank_MMR, const struct FVector2D& Image_Size);
	void Construct();
	void ExecuteUbergraph_BP_RankIcon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
