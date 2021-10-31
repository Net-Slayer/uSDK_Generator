﻿#pragma once

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

// BlueprintGeneratedClass BP_FrontlineObjective.BP_FrontlineObjective_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_FrontlineObjective_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlineObjective.BP_FrontlineObjective_C");
		return ptr;
	}



	void IsInObjectiveArea(const struct FVector& Location, bool* InArea);
	void IsCompleted(bool* Completed);
	void OnAnyObjectiveProgressChanged();
	void OnInitialize(class ABP_CapturePoint_C* Point);
	void OnUpdateUIWidgets();
	void OnEnemyLostPrerequisites();
	void OnEnemyGainedPrerequisites();
	void GetObjectiveProgress(float* Progress);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
