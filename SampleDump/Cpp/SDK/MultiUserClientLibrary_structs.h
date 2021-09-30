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
// Enums
//---------------------------------------------------------------------------

// Enum MultiUserClientLibrary.EMultiUserConnectionStatus
enum class MultiUserClientLibrary_EMultiUserConnectionStatus : uint8_t
{
	EMultiUserConnectionStatus__Connecting = 0,
	EMultiUserConnectionStatus__Connected = 1,
	EMultiUserConnectionStatus__Disconnecting = 2,
	EMultiUserConnectionStatus__Disconnected = 3,
	EMultiUserConnectionStatus__EMultiUserConnectionStatus_MAX = 4,

};

// Enum MultiUserClientLibrary.EMultiUserSourceValidationMode
enum class MultiUserClientLibrary_EMultiUserSourceValidationMode : uint8_t
{
	EMultiUserSourceValidationMode__Hard = 0,
	EMultiUserSourceValidationMode__Soft = 1,
	EMultiUserSourceValidationMode__SoftAutoProceed = 2,
	EMultiUserSourceValidationMode__EMultiUserSourceValidationMode_MAX = 3,

};

// Enum MultiUserClientLibrary.EMultiUserConnectionError
enum class MultiUserClientLibrary_EMultiUserConnectionError : uint8_t
{
	EMultiUserConnectionError__None = 0,
	EMultiUserConnectionError__Canceled = 1,
	EMultiUserConnectionError__ConnectionAttemptAborted = 2,
	EMultiUserConnectionError__ServerNotResponding = 3,
	EMultiUserConnectionError__ServerError = 4,
	EMultiUserConnectionError__WorkspaceValidationUnknown = 5,
	EMultiUserConnectionError__SourceControlValidationUnknown = 6,
	EMultiUserConnectionError__SourceControlValidationCanceled = 7,
	EMultiUserConnectionError__SourceControlValidationError = 8,
	EMultiUserConnectionError__DirtyPackageValidationError = 9,
	EMultiUserConnectionError__EMultiUserConnectionError_MAX = 10,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MultiUserClientLibrary.MultiUserClientConfig
// 0x0038
struct FMultiUserClientConfig
{
	struct FString                                     DefaultServerURL;                                          // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DefaultSessionName;                                        // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DefaultSessionToRestore;                                   // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MultiUserClientLibrary_EMultiUserSourceValidationMode ValidationMode;                                            // 0x0030(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KZPL[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MultiUserClientLibrary.MultiUserConnectionError
// 0x0020
struct FMultiUserConnectionError
{
	MultiUserClientLibrary_EMultiUserConnectionError   ErrorCode;                                                 // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YM93[0x3];                                     // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_IAIG[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ErrorMessage;                                              // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct MultiUserClientLibrary.MultiUserClientInfo
// 0x0040
struct FMultiUserClientInfo
{
	struct FGuid                                       ClientEndpointId;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                AvatarColor;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Tags;                                                      // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
