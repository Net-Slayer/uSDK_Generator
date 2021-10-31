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

// Class MagicLeapARPin.MagicLeapARPinComponent
// 0x0130 (FullSize[0x0320] - InheritedSize[0x01F0])
class UMagicLeapARPinComponent : public USceneComponent
{
public:
	struct FString                                     ObjectUID;                                                 // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserIndex;                                                 // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapARPin_EMagicLeapAutoPinType               AutoPinType;                                               // 0x0204(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldPinActor;                                           // 0x0205(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RCQ7[0x2];                                     // 0x0206(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PinDataClass;                                              // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPersistentEntityPinned;                                  // 0x0210(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPersistentEntityPinLost;                                 // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FGuid                                       PinnedCFUID;                                               // 0x0230(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                             PinnedSceneComponent;                                      // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMagicLeapARPinSaveGame*                     PinData;                                                   // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FYGR[0xD0];                                    // 0x0250(0x00D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinComponent");
		return ptr;
	}



	void UnPin();
	bool PinSceneComponent(class USceneComponent* ComponentToPin);
	bool PinRestoredOrSynced();
	bool PinActor(class AActor* ActorToPin);
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);
	void PersistentEntityPinLost__DelegateSignature();
	bool IsPinned();
	bool GetPinState(struct FMagicLeapARPinState* State);
	bool GetPinnedPinID(struct FGuid* PinID);
	class UMagicLeapARPinSaveGame* GetPinData(class UClass* PinDataClass);
};

// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinFunctionLibrary");
		return ptr;
	}



	void STATIC_UnBindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate);
	bool STATIC_IsTrackerValid();
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_GetNumAvailableARPins(int* Count);
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_GetClosestARPin(const struct FVector& SearchPoint, struct FGuid* PinID);
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_GetAvailableARPins(int NumRequested, TArray<struct FGuid>* Pins);
	struct FString STATIC_GetARPinStateToString(const struct FMagicLeapARPinState& State);
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_GetARPinState(const struct FGuid& PinID, struct FMagicLeapARPinState* State);
	bool STATIC_GetARPinPositionAndOrientation_TrackingSpace(const struct FGuid& PinID, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	bool STATIC_GetARPinPositionAndOrientation(const struct FGuid& PinID, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_DestroyTracker();
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_CreateTracker();
	void STATIC_BindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate);
};

// Class MagicLeapARPin.MagicLeapARPinSettings
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UMagicLeapARPinSettings : public UObject
{
public:
	float                                              UpdateCheckFrequency;                                      // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMagicLeapARPinState                        OnUpdatedEventTriggerDelta;                                // 0x002C(0x0010) (Edit, Config, GlobalConfig, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D8JR[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinSettings");
		return ptr;
	}



};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
class UMagicLeapARPinSaveGame : public USaveGame
{
public:
	struct FGuid                                       PinnedID;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H1XN[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  ComponentWorldTransform;                                   // 0x0040(0x0030) (Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  PinTransform;                                              // 0x0070(0x0030) (Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinSaveGame");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
