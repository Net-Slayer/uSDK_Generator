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

// WidgetBlueprintGeneratedClass BP_CapPointWidgetBox.BP_CapPointWidgetBox_C
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class UBP_CapPointWidgetBox_C : public UUserWidget
{
public:
	class UVerticalBox*                                VerticalBox_1;                                             // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_CapPointWidgetBox.BP_CapPointWidgetBox_C");
		return ptr;
	}



	void Initialize(TArray<class AControlPoint*>* Points, bool is_Base_Point);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
