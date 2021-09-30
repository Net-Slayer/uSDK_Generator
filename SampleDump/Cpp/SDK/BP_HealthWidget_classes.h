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

// WidgetBlueprintGeneratedClass BP_HealthWidget.BP_HealthWidget_C
// 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
class UBP_HealthWidget_C : public UMordhauUserWidget
{
public:
	class UImage*                                      Image_1;                                                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_HealthWidget.BP_HealthWidget_C");
		return ptr;
	}



	UMG_ESlateVisibility GetVisibility_1();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
