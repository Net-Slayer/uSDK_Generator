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

// BlueprintGeneratedClass BP_SwitchInteractable.BP_SwitchInteractable_C
// 0x0011 (FullSize[0x0391] - InheritedSize[0x0380])
class ABP_SwitchInteractable_C : public ABP_MordhauActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Value;                                                     // 0x0388(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_8R96[0x3];                                     // 0x0389(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinDelayBetweenUses;                                       // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StartInverted;                                             // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SwitchInteractable.BP_SwitchInteractable_C");
		return ptr;
	}



	void OnRep_Value();
	void ReceiveBeginPlay();
	void OnInteractionStart(class AMordhauCharacter* Character);
	void PreventInteraction();
	void OnValueToggled();
	void ToggleValue();
	void ExecuteUbergraph_BP_SwitchInteractable(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
