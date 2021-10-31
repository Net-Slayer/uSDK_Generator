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

// BlueprintGeneratedClass BP_MordhauSpectator.BP_MordhauSpectator_C
// 0x0048 (FullSize[0x0318] - InheritedSize[0x02D0])
class ABP_MordhauSpectator_C : public AMordhauSpectator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCineCameraComponent*                        CineCamera;                                                // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedChangeDelta;                                          // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_USNK[0x4];                                     // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<Engine_EObjectTypeQuery>>       FocusOnObjectTypes;                                        // 0x02E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              CameraFocus;                                               // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FocusChangeDelta;                                          // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    CameraRotation;                                            // 0x0300(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     CameraLocation;                                            // 0x030C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauSpectator.BP_MordhauSpectator_C");
		return ptr;
	}



	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_F_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_I_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_G_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_H_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_T_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_R_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_O_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ExecuteUbergraph_BP_MordhauSpectator(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
