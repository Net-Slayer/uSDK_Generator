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

// BlueprintGeneratedClass BP_Catapult2.BP_Catapult2_C
// 0x0018 (FullSize[0x0478] - InheritedSize[0x0460])
class ABP_Catapult2_C : public ACatapult
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Projectile;                                                // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_VehicleCatapult2_C*                      BP_VehicleCatapult2;                                       // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Catapult2.BP_Catapult2_C");
		return ptr;
	}



	void UserConstructionScript();
	void InpActEvt_Cycle_Camera_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Cycle_Camera_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_Look_Up_K2Node_InputAxisEvent_2(float AxisValue);
	void ExecuteUbergraph_BP_Catapult2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
