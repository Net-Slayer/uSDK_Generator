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

// BlueprintGeneratedClass BTTask_FLKillObjectiveFindPatrolSpot.BTTask_FLKillObjectiveFindPatrolSpot_C
// 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
class UBTTask_FLKillObjectiveFindPatrolSpot_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      TargetLocation;                                            // 0x00B0(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_FLKillObjectiveFindPatrolSpot.BTTask_FLKillObjectiveFindPatrolSpot_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_FLKillObjectiveFindPatrolSpot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
