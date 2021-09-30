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

// WidgetBlueprintGeneratedClass BP_PlayerBanner.BP_PlayerBanner_C
// 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
class UBP_PlayerBanner_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      BannerImage;                                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                                   Image_Size;                                                // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_PlayerBanner.BP_PlayerBanner_C");
		return ptr;
	}



	void Update(int Badge_ID);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BP_PlayerBanner(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
