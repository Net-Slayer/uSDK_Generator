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

// WidgetBlueprintGeneratedClass BP_BaseSpawnScreen.BP_BaseSpawnScreen_C
// 0x0001 (FullSize[0x0231] - InheritedSize[0x0230])
class UBP_BaseSpawnScreen_C : public UUserWidget
{
public:
	bool                                               IsActive;                                                  // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_BaseSpawnScreen.BP_BaseSpawnScreen_C");
		return ptr;
	}



	void Hide();
	void Show();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
