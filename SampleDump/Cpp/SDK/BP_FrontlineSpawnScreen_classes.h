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

// WidgetBlueprintGeneratedClass BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C
// 0x004C (FullSize[0x02D4] - InheritedSize[0x0288])
class UBP_FrontlineSpawnScreen_C : public UBP_SpawnScreen_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_ButtonPrompt_C*                          BP_ButtonPrompt;                                           // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                CanvasPanel_2;                                             // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ChangeLoadoutButton;                                       // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_3;                                               // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       LoadoutName;                                               // 0x02B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Best_Token;                                                // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C");
		return ptr;
	}



	void AddSpawnScreenPoint(class ABP_CapturePoint_C* InCapturePoint, class ABP_DeployableSpawn_C* InDeployableSpawn, class UBP_SpawnScreenPoint_C** NewPoint);
	void ShowFrontlineSpawnScreen();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__ChangeLoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Show();
	void Construct();
	void Show_Loadout_Selection();
	void ExecuteUbergraph_BP_FrontlineSpawnScreen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
