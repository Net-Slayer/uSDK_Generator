#pragma once

// Name: Mordhau, Version: 4_25_hotfix


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

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
// 0x0010
struct FMagicLeapSharedWorldSharedData
{
	TArray<struct FGuid>                               PinIDs;                                                    // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
// 0x0010
struct FMagicLeapSharedWorldAlignmentTransforms
{
	TArray<struct FTransform>                          AlignmentTransforms;                                       // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldPinData
// 0x0020
struct FMagicLeapSharedWorldPinData
{
	struct FGuid                                       PinID;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMagicLeapARPinState                        PinState;                                                  // 0x0010(0x0010) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
// 0x0010
struct FMagicLeapSharedWorldLocalData
{
	TArray<struct FMagicLeapSharedWorldPinData>        LocalPins;                                                 // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
