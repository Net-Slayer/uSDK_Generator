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

// WidgetBlueprintGeneratedClass BP_SpawnScreen.BP_SpawnScreen_C
// 0x0057 (FullSize[0x0288] - InheritedSize[0x0231])
class UBP_SpawnScreen_C : public UBP_BaseSpawnScreen_C
{
public:
	unsigned char                                      UnknownData_FZTU[0x7];                                     // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UBP_SpawnScreenPoint_C*>              SpawnScreenPoint;                                          // 0x0240(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UBP_SpawnScreenIcon_C*>               SpawnScreenIcons;                                          // 0x0250(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Updated_Spawn_Point_Widgets;                               // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_SpawnScreenPoint_C*                      SelectedScreenPoint;                                       // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Open_Loadout_Selection;                                    // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_SpawnScreen.BP_SpawnScreen_C");
		return ptr;
	}



	struct FText GetText_1();
	void SetColor(class UImage* Image, TArray<struct FLinearColor> Team_Color_Array, unsigned char Team, class APlayerState* PlayerState);
	void UpdateSpawnScreenIcons(class UCanvasPanel* Canvas_Panel);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void UpdateSpawnPointWidgets();
	void Show();
	void Hide();
	void ExecuteUbergraph_BP_SpawnScreen(int EntryPoint);
	void Open_Loadout_Selection__DelegateSignature();
	void Updated_Spawn_Point_Widgets__DelegateSignature(class UBP_SpawnScreenPoint_C* Selected_Screen_Point);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
