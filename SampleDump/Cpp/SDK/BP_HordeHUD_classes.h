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

// BlueprintGeneratedClass BP_HordeHUD.BP_HordeHUD_C
// 0x0018 (FullSize[0x0488] - InheritedSize[0x0470])
class ABP_HordeHUD_C : public ABP_MordhauHUD_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_HordeHUDWidget_C*                        HordeHUDWidget;                                            // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SkillTree_C*                             SkillTree;                                                 // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeHUD.BP_HordeHUD_C");
		return ptr;
	}



	void ShowSkillTree();
	void CreateSkillTree();
	void ReceiveBeginPlay();
	void UseMinimalHUD();
	void UseFullHUD();
	void OnGameStateReplicated();
	void HideMainMenu();
	void ShowMainMenu(TEnumAsByte<E_ArmoryStates_E_ArmoryStates> Armory_State);
	void ExecuteUbergraph_BP_HordeHUD(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
