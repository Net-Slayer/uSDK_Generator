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
//		Offset -> 0x011913E0
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.UnmountPak
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		struct FString                                     PakPath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOnlineUtilities::STATIC_UnmountPak(const struct FString& PakPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.UnmountPak");

	UOnlineUtilities_UnmountPak_Params params;
	params.PakPath = PakPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x011912A0
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.SanitizePlayerName
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		struct FString                                     InName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     InFallback                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UOnlineUtilities::STATIC_SanitizePlayerName(const struct FString& InName, const struct FString& InFallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.SanitizePlayerName");

	UOnlineUtilities_SanitizePlayerName_Params params;
	params.InName = InName;
	params.InFallback = InFallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x011911B0
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.RandomRangeExclude
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		int                                                Min                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Max                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Exclude                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UOnlineUtilities::STATIC_RandomRangeExclude(int Min, int Max, int Exclude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.RandomRangeExclude");

	UOnlineUtilities_RandomRangeExclude_Params params;
	params.Min = Min;
	params.Max = Max;
	params.Exclude = Exclude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x011910C0
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.MountPak
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		struct FString                                     PakPath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOnlineUtilities::STATIC_MountPak(const struct FString& PakPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.MountPak");

	UOnlineUtilities_MountPak_Params params;
	params.PakPath = PakPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190FD0
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.IsWindowsVersionOrGreater
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		int                                                MajorVersion                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MinorVersion                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ServicePackMajor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOnlineUtilities::STATIC_IsWindowsVersionOrGreater(int MajorVersion, int MinorVersion, int ServicePackMajor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.IsWindowsVersionOrGreater");

	UOnlineUtilities_IsWindowsVersionOrGreater_Params params;
	params.MajorVersion = MajorVersion;
	params.MinorVersion = MinorVersion;
	params.ServicePackMajor = ServicePackMajor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190F30
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.IsValidIPAddress
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		struct FString                                     IPAddress                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOnlineUtilities::STATIC_IsValidIPAddress(const struct FString& IPAddress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.IsValidIPAddress");

	UOnlineUtilities_IsValidIPAddress_Params params;
	params.IPAddress = IPAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190E90
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.IsPublicIPAddress
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		struct FString                                     IPAddress                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOnlineUtilities::STATIC_IsPublicIPAddress(const struct FString& IPAddress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.IsPublicIPAddress");

	UOnlineUtilities_IsPublicIPAddress_Params params;
	params.IPAddress = IPAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190DF0
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.IsPrivateIPAddress
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		struct FString                                     IPAddress                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOnlineUtilities::STATIC_IsPrivateIPAddress(const struct FString& IPAddress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.IsPrivateIPAddress");

	UOnlineUtilities_IsPrivateIPAddress_Params params;
	params.IPAddress = IPAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CC2F10
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.IsOfficialServer
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOnlineUtilities::STATIC_IsOfficialServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.IsOfficialServer");

	UOnlineUtilities_IsOfficialServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CC2F10
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.IsDevelopmentBuild
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOnlineUtilities::STATIC_IsDevelopmentBuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.IsDevelopmentBuild");

	UOnlineUtilities_IsDevelopmentBuild_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190D90
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.IsDevelopmentBranch
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOnlineUtilities::STATIC_IsDevelopmentBranch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.IsDevelopmentBranch");

	UOnlineUtilities_IsDevelopmentBranch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CC2F10
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.IsDedicatedServer
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOnlineUtilities::STATIC_IsDedicatedServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.IsDedicatedServer");

	UOnlineUtilities_IsDedicatedServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190D60
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetUseLegacyPakMounting
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOnlineUtilities::STATIC_GetUseLegacyPakMounting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetUseLegacyPakMounting");

	UOnlineUtilities_GetUseLegacyPakMounting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190D30
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetReleaseVersion
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UOnlineUtilities::STATIC_GetReleaseVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetReleaseVersion");

	UOnlineUtilities_GetReleaseVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190C70
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetRegionName
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		MordhauOnlineSubsystem_EServerRegion               Region                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UOnlineUtilities::STATIC_GetRegionName(MordhauOnlineSubsystem_EServerRegion Region)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetRegionName");

	UOnlineUtilities_GetRegionName_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190B90
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetRegionDisplayName
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		MordhauOnlineSubsystem_EServerRegion               Region                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UOnlineUtilities::STATIC_GetRegionDisplayName(MordhauOnlineSubsystem_EServerRegion Region)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetRegionDisplayName");

	UOnlineUtilities_GetRegionDisplayName_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190AF0
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetRegion
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		struct FString                                     RegionName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MordhauOnlineSubsystem_EServerRegion               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MordhauOnlineSubsystem_EServerRegion UOnlineUtilities::STATIC_GetRegion(const struct FString& RegionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetRegion");

	UOnlineUtilities_GetRegion_Params params;
	params.RegionName = RegionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190A30
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetPlayFabServer
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		struct FPlayFabServer                              ReturnValue                                                (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FPlayFabServer UOnlineUtilities::STATIC_GetPlayFabServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetPlayFabServer");

	UOnlineUtilities_GetPlayFabServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190920
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetPlayFabPlayer
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		struct FPlayFabPlayer                              ReturnValue                                                (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FPlayFabPlayer UOnlineUtilities::STATIC_GetPlayFabPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetPlayFabPlayer");

	UOnlineUtilities_GetPlayFabPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x011908F0
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetPlayFabAPI
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		class UPlayFabAPI*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPlayFabAPI* UOnlineUtilities::STATIC_GetPlayFabAPI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetPlayFabAPI");

	UOnlineUtilities_GetPlayFabAPI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190830
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetPlatformName
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		MordhauOnlineSubsystem_EPlatform                   Platform                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UOnlineUtilities::STATIC_GetPlatformName(MordhauOnlineSubsystem_EPlatform Platform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetPlatformName");

	UOnlineUtilities_GetPlatformName_Params params;
	params.Platform = Platform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190790
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetPlatformByName
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		struct FString                                     PlatformName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MordhauOnlineSubsystem_EPlatform                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MordhauOnlineSubsystem_EPlatform UOnlineUtilities::STATIC_GetPlatformByName(const struct FString& PlatformName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetPlatformByName");

	UOnlineUtilities_GetPlatformByName_Params params;
	params.PlatformName = PlatformName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190770
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetPlatform
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		MordhauOnlineSubsystem_EPlatform                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MordhauOnlineSubsystem_EPlatform UOnlineUtilities::STATIC_GetPlatform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetPlatform");

	UOnlineUtilities_GetPlatform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190740
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetPerforceRevision
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UOnlineUtilities::STATIC_GetPerforceRevision()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetPerforceRevision");

	UOnlineUtilities_GetPerforceRevision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x011906C0
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetOSVersion
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UOnlineUtilities::STATIC_GetOSVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetOSVersion");

	UOnlineUtilities_GetOSVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190600
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetLocationName
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		MordhauOnlineSubsystem_EServerLocation             Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UOnlineUtilities::STATIC_GetLocationName(MordhauOnlineSubsystem_EServerLocation Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetLocationName");

	UOnlineUtilities_GetLocationName_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190520
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetLocationDisplayName
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		MordhauOnlineSubsystem_EServerLocation             Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UOnlineUtilities::STATIC_GetLocationDisplayName(MordhauOnlineSubsystem_EServerLocation Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetLocationDisplayName");

	UOnlineUtilities_GetLocationDisplayName_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190480
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetLocation
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		struct FString                                     LocationName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MordhauOnlineSubsystem_EServerLocation             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MordhauOnlineSubsystem_EServerLocation UOnlineUtilities::STATIC_GetLocation(const struct FString& LocationName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetLocation");

	UOnlineUtilities_GetLocation_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190450
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetLocalNetworkVersion
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		uint32_t                                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
uint32_t UOnlineUtilities::STATIC_GetLocalNetworkVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetLocalNetworkVersion");

	UOnlineUtilities_GetLocalNetworkVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190380
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetGameServerGamePort
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UOnlineUtilities::STATIC_GetGameServerGamePort()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetGameServerGamePort");

	UOnlineUtilities_GetGameServerGamePort_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190280
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetEnumValue
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		struct FString                                     EnumName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     EnumKey                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UOnlineUtilities::STATIC_GetEnumValue(const struct FString& EnumName, const struct FString& EnumKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetEnumValue");

	UOnlineUtilities_GetEnumValue_Params params;
	params.EnumName = EnumName;
	params.EnumKey = EnumKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190160
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetEnumKey
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		struct FString                                     EnumName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                EnumValue                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UOnlineUtilities::STATIC_GetEnumKey(const struct FString& EnumName, int EnumValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetEnumKey");

	UOnlineUtilities_GetEnumKey_Params params;
	params.EnumName = EnumName;
	params.EnumValue = EnumValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x011900E0
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetCurrentPlatformName
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UOnlineUtilities::STATIC_GetCurrentPlatformName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetCurrentPlatformName");

	UOnlineUtilities_GetCurrentPlatformName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x011900B0
//		Name   -> Function MordhauOnlineSubsystem.OnlineUtilities.GetBuildVersion
//		Flags  -> (Final, Native, Static, Public)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UOnlineUtilities::STATIC_GetBuildVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.OnlineUtilities.GetBuildVersion");

	UOnlineUtilities_GetBuildVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01190DC0
//		Name   -> Function MordhauOnlineSubsystem.PlayFabAPI.IsPlayerLoggedIn
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPlayFabAPI::IsPlayerLoggedIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.PlayFabAPI.IsPlayerLoggedIn");

	UPlayFabAPI_IsPlayerLoggedIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x011903B0
//		Name   -> Function MordhauOnlineSubsystem.PlayFabAPI.GetLeaderboard
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     LeaderboardName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayFabAPI::GetLeaderboard(const struct FString& LeaderboardName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MordhauOnlineSubsystem.PlayFabAPI.GetLeaderboard");

	UPlayFabAPI_GetLeaderboard_Params params;
	params.LeaderboardName = LeaderboardName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
