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

// BlueprintGeneratedClass BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C
// 0x0030 (FullSize[0x03B0] - InheritedSize[0x0380])
class ABP_LocalCooldownInteractable_C : public ABP_MordhauActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               IsDepleted;                                                // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_75J4[0x3];                                     // 0x0389(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RefillDelay;                                               // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerState*>                        InCooldown;                                                // 0x0390(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, HasGetValueTypeHash)
	TArray<float>                                      InCooldownEndTime;                                         // 0x03A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C");
		return ptr;
	}



	void UpdateValue();
	bool CanInteract(class AMordhauCharacter* Character);
	void OnInteractionStart(class AMordhauCharacter* Character);
	void AvailableInteractionStart(class AMordhauCharacter* Character);
	void NotAvailableInteractionStart(class AMordhauCharacter* Character);
	void Depleted();
	void Refilled();
	void Deplete(class APlayerState* PlayerState);
	void PopCooldown();
	void ExecuteUbergraph_BP_LocalCooldownInteractable(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
