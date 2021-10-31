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

// WidgetBlueprintGeneratedClass BP_ColorPickerWrapper.BP_ColorPickerWrapper_C
// 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
class UBP_ColorPickerWrapper_C : public UUserWidget
{
public:
	class UImage*                                      Image_1796;                                                // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ColorPickerContainer_C*                  ColorPickerContainer;                                      // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ColorPickerWrapper.BP_ColorPickerWrapper_C");
		return ptr;
	}



	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
