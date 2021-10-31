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

// Class MagicLeapPlanes.MagicLeapPlanesComponent
// 0x0070 (FullSize[0x0260] - InheritedSize[0x01F0])
class UMagicLeapPlanesComponent : public USceneComponent
{
public:
	TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  QueryFlags;                                                // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                               SearchVolume;                                              // 0x0200(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxResults;                                                // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinHolePerimeter;                                          // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinPlaneArea;                                              // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapPlanes_EMagicLeapPlaneQueryType           QueryType;                                                 // 0x0214(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EVUN[0x3];                                     // 0x0215(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SimilarityThreshold;                                       // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N5PL[0x4];                                     // 0x021C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPlanesQueryResult;                                       // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnPersistentPlanesQueryResult;                             // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DAG4[0x20];                                    // 0x0240(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapPlanes.MagicLeapPlanesComponent");
		return ptr;
	}



	bool RequestPlanesAsync();
};

// Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMagicLeapPlanesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary");
		return ptr;
	}



	void STATIC_ReorderPlaneFlags(TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InPriority, TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InFlagsToReorder, TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>* OutReorderedFlags);
	bool STATIC_RemovePersistentQuery(const struct FGuid& Handle);
	void STATIC_RemoveFlagsNotInQuery(TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InQueryFlags, TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InResultFlags, TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>* OutFlags);
	bool STATIC_PlanesQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const struct FScriptDelegate& ResultDelegate);
	bool STATIC_PlanesPersistentQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const struct FGuid& Handle, const struct FScriptDelegate& ResultDelegate);
	bool STATIC_IsTrackerValid();
	struct FTransform STATIC_GetContentScale(class AActor* ContentActor, const struct FMagicLeapPlaneResult& PlaneResult);
	bool STATIC_DestroyTracker();
	bool STATIC_CreateTracker();
	struct FGuid STATIC_AddPersistentQuery(MagicLeapPlanes_EMagicLeapPlaneQueryType PersistentQueryType);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
