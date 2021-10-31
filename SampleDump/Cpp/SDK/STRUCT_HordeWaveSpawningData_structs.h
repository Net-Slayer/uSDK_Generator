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

// UserDefinedStruct STRUCT_HordeWaveSpawningData.STRUCT_HordeWaveSpawningData
// 0x0038
struct FSTRUCT_HordeWaveSpawningData
{
	TArray<int>                                        SpawnedEnemiesPerSpawner_17_9EA3B0994DFEB36374BD98B66202A5C8; // 0x0000(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<int>                                        SpawnedSquadsPerSpawner_18_34F460284BD50B27FC6E5588808DECAD; // 0x0010(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	int                                                TotalEnemiesToSpawnInWave_7_F677A3474155F97658A6EDA8E05C9A18; // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalSquadsToSpawnInWave_9_B5B6D0E74F5209D840CD5DACA18BBCC7; // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalEnemiesSpawned_11_2A98D46043271B5EED82E6B4CA88531E;   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalSquadSpawned_13_1B69434F404E18765B9CDDB4A7E424BC;     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeAtLastSquadSpawn_16_9DA673B24BC0F7764BF87E84576BB997;  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentSquadIndex_21_E4A8167143DBA59462BE2CAB196FABB1;     // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
