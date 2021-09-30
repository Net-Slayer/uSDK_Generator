// Name: Mordhau, Version: 4_25_hotfix

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ClientSkinModule.BP_ClientSkinModule_C.LoadBaseWearable
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMordhauWearable*                            Original                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMordhauWearable*                            Mod                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ClientSkinModule_C::LoadBaseWearable(class UMordhauWearable* Original, class UMordhauWearable* Mod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ClientSkinModule.BP_ClientSkinModule_C.LoadBaseWearable");

	ABP_ClientSkinModule_C_LoadBaseWearable_Params params;
	params.Original = Original;
	params.Mod = Mod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ClientSkinModule.BP_ClientSkinModule_C.LoadArmorMod
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Original                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      Modded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ClientSkinModule_C::LoadArmorMod(class UClass* Original, class UClass* Modded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ClientSkinModule.BP_ClientSkinModule_C.LoadArmorMod");

	ABP_ClientSkinModule_C_LoadArmorMod_Params params;
	params.Original = Original;
	params.Modded = Modded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ClientSkinModule.BP_ClientSkinModule_C.LoadEquipmentMod
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Original                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      Modded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               UsesEquipmentParts                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ClientSkinModule_C::LoadEquipmentMod(class UClass* Original, class UClass* Modded, bool UsesEquipmentParts)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ClientSkinModule.BP_ClientSkinModule_C.LoadEquipmentMod");

	ABP_ClientSkinModule_C_LoadEquipmentMod_Params params;
	params.Original = Original;
	params.Modded = Modded;
	params.UsesEquipmentParts = UsesEquipmentParts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ClientSkinModule.BP_ClientSkinModule_C.OnLoaded_7CA5D0824242E059BD51108157053CF2
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ClientSkinModule_C::OnLoaded_7CA5D0824242E059BD51108157053CF2(class UClass* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ClientSkinModule.BP_ClientSkinModule_C.OnLoaded_7CA5D0824242E059BD51108157053CF2");

	ABP_ClientSkinModule_C_OnLoaded_7CA5D0824242E059BD51108157053CF2_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ClientSkinModule.BP_ClientSkinModule_C.OnLoaded_9D71FB2249394B73E0244BADAB9B1DF0
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ClientSkinModule_C::OnLoaded_9D71FB2249394B73E0244BADAB9B1DF0(class UClass* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ClientSkinModule.BP_ClientSkinModule_C.OnLoaded_9D71FB2249394B73E0244BADAB9B1DF0");

	ABP_ClientSkinModule_C_OnLoaded_9D71FB2249394B73E0244BADAB9B1DF0_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ClientSkinModule.BP_ClientSkinModule_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_ClientSkinModule_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ClientSkinModule.BP_ClientSkinModule_C.ReceiveBeginPlay");

	ABP_ClientSkinModule_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ClientSkinModule.BP_ClientSkinModule_C.ExecuteUbergraph_BP_ClientSkinModule
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ClientSkinModule_C::ExecuteUbergraph_BP_ClientSkinModule(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ClientSkinModule.BP_ClientSkinModule_C.ExecuteUbergraph_BP_ClientSkinModule");

	ABP_ClientSkinModule_C_ExecuteUbergraph_BP_ClientSkinModule_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
