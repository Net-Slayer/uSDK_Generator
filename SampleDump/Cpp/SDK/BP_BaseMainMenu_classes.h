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

// WidgetBlueprintGeneratedClass BP_BaseMainMenu.BP_BaseMainMenu_C
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class UBP_BaseMainMenu_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_BaseMainMenu.BP_BaseMainMenu_C");
		return ptr;
	}



	void HideMainMenu();
	void ShowMainMenu(TEnumAsByte<E_ArmoryStates_E_ArmoryStates> ArmoryState);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
