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

// BlueprintGeneratedClass BP_FrontlinePlayerController.BP_FrontlinePlayerController_C
// 0x0011 (FullSize[0x0D7A] - InheritedSize[0x0D69])
class ABP_FrontlinePlayerController_C : public ABP_MordhauPlayerController_C
{
public:
	unsigned char                                      UnknownData_E075[0x7];                                     // 0x0D69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0D70(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               DeclinedObjectiveParticipation;                            // 0x0D78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               OfferedParticipation;                                      // 0x0D79(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlinePlayerController.BP_FrontlinePlayerController_C");
		return ptr;
	}



	void InpActEvt_Show_Team_Select_K2Node_InputActionEvent_1(const struct FKey& Key);
	void OnAfterPossess(class APawn* APawn);
	void NotifyOfferedParticipation();
	void DeclineParticipation();
	void ExecuteUbergraph_BP_FrontlinePlayerController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
