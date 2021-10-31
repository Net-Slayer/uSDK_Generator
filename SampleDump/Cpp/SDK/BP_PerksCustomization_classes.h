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

// WidgetBlueprintGeneratedClass BP_PerksCustomization.BP_PerksCustomization_C
// 0x002C (FullSize[0x0358] - InheritedSize[0x032C])
class UBP_PerksCustomization_C : public UBP_CustomizationTab_C
{
public:
	unsigned char                                      UnknownData_A76H[0x4];                                     // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_2;                                                   // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                           UniformGridPanel_1;                                        // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UBP_PerkButton_C*>                    PerkButtons;                                               // 0x0348(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_PerksCustomization.BP_PerksCustomization_C");
		return ptr;
	}



	void UpdateWidget();
	void RegisterPreviewEvents();
	void OnDrag(float DeltaDistance);
	void OnScroll(float ScrollDelta);
	void UpdateProfileAndPreview();
	void Construct();
	void PerkClicked(unsigned char NewId);
	void SetActive();
	void OnProfileChanged();
	void PerkHovered(int Cost, bool Selected);
	void ExecuteUbergraph_BP_PerksCustomization(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
