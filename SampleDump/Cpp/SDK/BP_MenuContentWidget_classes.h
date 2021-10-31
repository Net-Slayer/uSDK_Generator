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

// WidgetBlueprintGeneratedClass BP_MenuContentWidget.BP_MenuContentWidget_C
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class UBP_MenuContentWidget_C : public UUserWidget
{
public:
	class UMordhauDialog*                              LastDialogPopup;                                           // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MenuContentWidget.BP_MenuContentWidget_C");
		return ptr;
	}



	void OnHidden();
	void OnShown();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
