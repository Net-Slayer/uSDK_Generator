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

// BlueprintGeneratedClass BP_AmmoBox.BP_AmmoBox_C
// 0x0010 (FullSize[0x03E8] - InheritedSize[0x03D8])
class ABP_AmmoBox_C : public ABP_LocalInteractableChest_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMordhauWidgetComponent*                     MordhauWidget;                                             // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmmoBox.BP_AmmoBox_C");
		return ptr;
	}



	void UpdateWidgetVisibilityOverride();
	bool CanInteract(class AMordhauCharacter* Character);
	void Restock(class AMordhauCharacter* Character);
	void AvailableInteractionStart(class AMordhauCharacter* Character);
	void Deplete(class APlayerState* PlayerState);
	void Refill();
	void ExecuteUbergraph_BP_AmmoBox(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
