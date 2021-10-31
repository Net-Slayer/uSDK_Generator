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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct STRUCT_HordeSquadWaveInfo.STRUCT_HordeSquadWaveInfo
// 0x0018
struct FSTRUCT_HordeSquadWaveInfo
{
	int                                                CompletionReward_13_0FD7AD5C4FB607A3C4C8B094D786F506;      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DifficultyPool_2_4D877D714170A185965FE382067EB4AB;         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USquadInfo*>                          MandatorySquads_9_454E998948F6D68970101F9A7C1AFBA2;        // 0x0008(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
