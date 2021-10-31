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

// BlueprintGeneratedClass BP_PushPlayerController.BP_PushPlayerController_C
// 0x000E (FullSize[0x0D88] - InheritedSize[0x0D7A])
class ABP_PushPlayerController_C : public ABP_FrontlinePlayerController_C
{
public:
	unsigned char                                      UnknownData_UO5E[0x6];                                     // 0x0D7A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0D80(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PushPlayerController.BP_PushPlayerController_C");
		return ptr;
	}



	void ShowCurrentObjective(bool PlayHorn);
	void OnAfterPossess(class APawn* APawn);
	void OnReceivedKillScore(class AMordhauCharacter* Killed);
	void OnReceivedAssistScore(float Percentage, class AMordhauCharacter* Killed);
	void ExecuteUbergraph_BP_PushPlayerController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
