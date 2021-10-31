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

// BlueprintGeneratedClass BP_HordeTask.BP_HordeTask_C
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class ABP_HordeTask_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0220(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeTask.BP_HordeTask_C");
		return ptr;
	}



	void GetLocationTarget(class ABP_HordeEnemy_C* Character, struct FVector* Target);
	void IsTaskValidFor(class ABP_HordeEnemy_C* Character, bool* IsValid);
	void TaskTriggered(class ABP_HordeEnemy_C* Character);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
