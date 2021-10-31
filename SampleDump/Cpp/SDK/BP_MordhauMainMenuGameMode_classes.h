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

// BlueprintGeneratedClass BP_MordhauMainMenuGameMode.BP_MordhauMainMenuGameMode_C
// 0x0008 (FullSize[0x05A8] - InheritedSize[0x05A0])
class ABP_MordhauMainMenuGameMode_C : public AMordhauGameMode
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauMainMenuGameMode.BP_MordhauMainMenuGameMode_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
