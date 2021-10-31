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
// Parameters
//---------------------------------------------------------------------------

// Function BP_ClientSkinModule.BP_ClientSkinModule_C.LoadBaseWearable
struct ABP_ClientSkinModule_C_LoadBaseWearable_Params
{
	class UMordhauWearable*                            Original;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMordhauWearable*                            Mod;                                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ClientSkinModule.BP_ClientSkinModule_C.LoadArmorMod
struct ABP_ClientSkinModule_C_LoadArmorMod_Params
{
	class UClass*                                      Original;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Modded;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ClientSkinModule.BP_ClientSkinModule_C.LoadEquipmentMod
struct ABP_ClientSkinModule_C_LoadEquipmentMod_Params
{
	class UClass*                                      Original;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Modded;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UsesEquipmentParts;                                        // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ClientSkinModule.BP_ClientSkinModule_C.OnLoaded_7CA5D0824242E059BD51108157053CF2
struct ABP_ClientSkinModule_C_OnLoaded_7CA5D0824242E059BD51108157053CF2_Params
{
	class UClass*                                      Loaded;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ClientSkinModule.BP_ClientSkinModule_C.OnLoaded_9D71FB2249394B73E0244BADAB9B1DF0
struct ABP_ClientSkinModule_C_OnLoaded_9D71FB2249394B73E0244BADAB9B1DF0_Params
{
	class UClass*                                      Loaded;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ClientSkinModule.BP_ClientSkinModule_C.ReceiveBeginPlay
struct ABP_ClientSkinModule_C_ReceiveBeginPlay_Params
{
};

// Function BP_ClientSkinModule.BP_ClientSkinModule_C.ExecuteUbergraph_BP_ClientSkinModule
struct ABP_ClientSkinModule_C_ExecuteUbergraph_BP_ClientSkinModule_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
