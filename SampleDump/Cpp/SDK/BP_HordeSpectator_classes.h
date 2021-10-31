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

// BlueprintGeneratedClass BP_HordeSpectator.BP_HordeSpectator_C
// 0x0008 (FullSize[0x0320] - InheritedSize[0x0318])
class ABP_HordeSpectator_C : public ABP_InstantSpawnSpectator_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0318(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeSpectator.BP_HordeSpectator_C");
		return ptr;
	}



	void GetGrave(class ABP_HordePlayerGrave_C** Grave);
	void InpActEvt_Primary_Spectator_Action_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Secondary_Spectator_Action_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Tertiary_Spectator_Action_K2Node_InputActionEvent_1(const struct FKey& Key);
	void SwitchToFreeCam();
	void ExecuteUbergraph_BP_HordeSpectator(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
