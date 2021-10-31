// Name: Mordhau, Version: Patch23

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
//		Offset -> 0x0061CCF0
//		Name   -> Function modio.CallbackProxy_AddMetadataKVP.AddMetadataKVP
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TMap<struct FString, struct FString>               MetadataKVP                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UCallbackProxy_AddMetadataKVP*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_AddMetadataKVP* UCallbackProxy_AddMetadataKVP::STATIC_AddMetadataKVP(class UObject* WorldContext, int ModId, TMap<struct FString, struct FString> MetadataKVP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_AddMetadataKVP.AddMetadataKVP");

	UCallbackProxy_AddMetadataKVP_AddMetadataKVP_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.MetadataKVP = MetadataKVP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0061D030
//		Name   -> Function modio.CallbackProxy_AddMod.AddMod
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FModioModCreator                            ModCreator                                                 (Parm, NativeAccessSpecifierPublic)
//		class UCallbackProxy_AddMod*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_AddMod* UCallbackProxy_AddMod::STATIC_AddMod(class UObject* WorldContext, const struct FModioModCreator& ModCreator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_AddMod.AddMod");

	UCallbackProxy_AddMod_AddMod_Params params;
	params.WorldContext = WorldContext;
	params.ModCreator = ModCreator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0061D6A0
//		Name   -> Function modio.CallbackProxy_AddModDependencies.AddModDependencies
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        Dependencies                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_AddModDependencies*           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_AddModDependencies* UCallbackProxy_AddModDependencies::STATIC_AddModDependencies(class UObject* WorldContext, int ModId, TArray<int> Dependencies)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_AddModDependencies.AddModDependencies");

	UCallbackProxy_AddModDependencies_AddModDependencies_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.Dependencies = Dependencies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0061D980
//		Name   -> Function modio.CallbackProxy_AddModImages.AddModImages
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             ImagePaths                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_AddModImages*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_AddModImages* UCallbackProxy_AddModImages::STATIC_AddModImages(class UObject* WorldContext, int ModId, TArray<struct FString> ImagePaths)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_AddModImages.AddModImages");

	UCallbackProxy_AddModImages_AddModImages_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.ImagePaths = ImagePaths;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0061DC80
//		Name   -> Function modio.CallbackProxy_AddModLogo.AddModLogo
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     LogoPath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_AddModLogo*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_AddModLogo* UCallbackProxy_AddModLogo::STATIC_AddModLogo(class UObject* WorldContext, int ModId, const struct FString& LogoPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_AddModLogo.AddModLogo");

	UCallbackProxy_AddModLogo_AddModLogo_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.LogoPath = LogoPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0061DF60
//		Name   -> Function modio.CallbackProxy_AddModRating.AddModRating
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsRatingPositive                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_AddModRating*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_AddModRating* UCallbackProxy_AddModRating::STATIC_AddModRating(class UObject* WorldContext, int ModId, bool IsRatingPositive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_AddModRating.AddModRating");

	UCallbackProxy_AddModRating_AddModRating_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.IsRatingPositive = IsRatingPositive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0061E200
//		Name   -> Function modio.CallbackProxy_AddModSketchfabLinks.AddModSketchfabLinks
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             SketchfabLinks                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_AddModSketchfabLinks*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_AddModSketchfabLinks* UCallbackProxy_AddModSketchfabLinks::STATIC_AddModSketchfabLinks(class UObject* WorldContext, int ModId, TArray<struct FString> SketchfabLinks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_AddModSketchfabLinks.AddModSketchfabLinks");

	UCallbackProxy_AddModSketchfabLinks_AddModSketchfabLinks_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.SketchfabLinks = SketchfabLinks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0061E500
//		Name   -> Function modio.CallbackProxy_AddModTags.AddModTags
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             Tags                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_AddModTags*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_AddModTags* UCallbackProxy_AddModTags::STATIC_AddModTags(class UObject* WorldContext, int ModId, TArray<struct FString> Tags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_AddModTags.AddModTags");

	UCallbackProxy_AddModTags_AddModTags_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0061E800
//		Name   -> Function modio.CallbackProxy_AddModYoutubeLinks.AddModYoutubeLinks
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             YoutubeLinks                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_AddModYoutubeLinks*           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_AddModYoutubeLinks* UCallbackProxy_AddModYoutubeLinks::STATIC_AddModYoutubeLinks(class UObject* WorldContext, int ModId, TArray<struct FString> YoutubeLinks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_AddModYoutubeLinks.AddModYoutubeLinks");

	UCallbackProxy_AddModYoutubeLinks_AddModYoutubeLinks_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.YoutubeLinks = YoutubeLinks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0061EB00
//		Name   -> Function modio.CallbackProxy_DeleteMetadataKVP.DeleteMetadataKVP
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TMap<struct FString, struct FString>               MetadataKVP                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UCallbackProxy_DeleteMetadataKVP*            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_DeleteMetadataKVP* UCallbackProxy_DeleteMetadataKVP::STATIC_DeleteMetadataKVP(class UObject* WorldContext, int ModId, TMap<struct FString, struct FString> MetadataKVP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_DeleteMetadataKVP.DeleteMetadataKVP");

	UCallbackProxy_DeleteMetadataKVP_DeleteMetadataKVP_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.MetadataKVP = MetadataKVP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0061EE40
//		Name   -> Function modio.CallbackProxy_DeleteModDependencies.DeleteModDependencies
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        Dependencies                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_DeleteModDependencies*        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_DeleteModDependencies* UCallbackProxy_DeleteModDependencies::STATIC_DeleteModDependencies(class UObject* WorldContext, int ModId, TArray<int> Dependencies)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_DeleteModDependencies.DeleteModDependencies");

	UCallbackProxy_DeleteModDependencies_DeleteModDependencies_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.Dependencies = Dependencies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0061F120
//		Name   -> Function modio.CallbackProxy_DeleteModImages.DeleteModImages
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             ImagePaths                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_DeleteModImages*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_DeleteModImages* UCallbackProxy_DeleteModImages::STATIC_DeleteModImages(class UObject* WorldContext, int ModId, TArray<struct FString> ImagePaths)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_DeleteModImages.DeleteModImages");

	UCallbackProxy_DeleteModImages_DeleteModImages_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.ImagePaths = ImagePaths;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0061F420
//		Name   -> Function modio.CallbackProxy_DeleteModSketchfabLinks.DeleteModSketchfabLinks
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             SketchfabLinks                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_DeleteModSketchfabLinks*      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_DeleteModSketchfabLinks* UCallbackProxy_DeleteModSketchfabLinks::STATIC_DeleteModSketchfabLinks(class UObject* WorldContext, int ModId, TArray<struct FString> SketchfabLinks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_DeleteModSketchfabLinks.DeleteModSketchfabLinks");

	UCallbackProxy_DeleteModSketchfabLinks_DeleteModSketchfabLinks_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.SketchfabLinks = SketchfabLinks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0061F720
//		Name   -> Function modio.CallbackProxy_DeleteModTags.DeleteModTags
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             Tags                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_DeleteModTags*                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_DeleteModTags* UCallbackProxy_DeleteModTags::STATIC_DeleteModTags(class UObject* WorldContext, int ModId, TArray<struct FString> Tags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_DeleteModTags.DeleteModTags");

	UCallbackProxy_DeleteModTags_DeleteModTags_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0061FA20
//		Name   -> Function modio.CallbackProxy_DeleteModYoutubeLinks.DeleteModYoutubeLinks
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             YoutubeLinks                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_DeleteModYoutubeLinks*        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_DeleteModYoutubeLinks* UCallbackProxy_DeleteModYoutubeLinks::STATIC_DeleteModYoutubeLinks(class UObject* WorldContext, int ModId, TArray<struct FString> YoutubeLinks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_DeleteModYoutubeLinks.DeleteModYoutubeLinks");

	UCallbackProxy_DeleteModYoutubeLinks_DeleteModYoutubeLinks_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.YoutubeLinks = YoutubeLinks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0061FD30
//		Name   -> Function modio.CallbackProxy_DownloadModfilesById.DownloadModfilesById
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        ModIds                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_DownloadModfilesById*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_DownloadModfilesById* UCallbackProxy_DownloadModfilesById::STATIC_DownloadModfilesById(class UObject* WorldContext, TArray<int> ModIds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_DownloadModfilesById.DownloadModfilesById");

	UCallbackProxy_DownloadModfilesById_DownloadModfilesById_Params params;
	params.WorldContext = WorldContext;
	params.ModIds = ModIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0061FFD0
//		Name   -> Function modio.CallbackProxy_DownloadSubscribedModfiles.DownloadSubscribedModfiles
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               UninstallUnsubscribed                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_DownloadSubscribedModfiles*   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_DownloadSubscribedModfiles* UCallbackProxy_DownloadSubscribedModfiles::STATIC_DownloadSubscribedModfiles(class UObject* WorldContext, bool UninstallUnsubscribed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_DownloadSubscribedModfiles.DownloadSubscribedModfiles");

	UCallbackProxy_DownloadSubscribedModfiles_DownloadSubscribedModfiles_Params params;
	params.WorldContext = WorldContext;
	params.UninstallUnsubscribed = UninstallUnsubscribed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00620240
//		Name   -> Function modio.CallbackProxy_EditMod.EditMod
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FModioModEditor                             ModEditor                                                  (Parm, NativeAccessSpecifierPublic)
//		class UCallbackProxy_EditMod*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_EditMod* UCallbackProxy_EditMod::STATIC_EditMod(class UObject* WorldContext, int ModId, const struct FModioModEditor& ModEditor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_EditMod.EditMod");

	UCallbackProxy_EditMod_EditMod_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;
	params.ModEditor = ModEditor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00620770
//		Name   -> Function modio.CallbackProxy_EmailExchange.EmailExchange
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     SecurityCode                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_EmailExchange*                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_EmailExchange* UCallbackProxy_EmailExchange::STATIC_EmailExchange(class UObject* WorldContext, const struct FString& SecurityCode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_EmailExchange.EmailExchange");

	UCallbackProxy_EmailExchange_EmailExchange_Params params;
	params.WorldContext = WorldContext;
	params.SecurityCode = SecurityCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00620A00
//		Name   -> Function modio.CallbackProxy_EmailRequest.EmailRequest
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Email                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_EmailRequest*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_EmailRequest* UCallbackProxy_EmailRequest::STATIC_EmailRequest(class UObject* WorldContext, const struct FString& Email)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_EmailRequest.EmailRequest");

	UCallbackProxy_EmailRequest_EmailRequest_Params params;
	params.WorldContext = WorldContext;
	params.Email = Email;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00620C90
//		Name   -> Function modio.CallbackProxy_GalaxyAuth.GalaxyAuth
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Appdata                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_GalaxyAuth*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_GalaxyAuth* UCallbackProxy_GalaxyAuth::STATIC_GalaxyAuth(class UObject* WorldContext, const struct FString& Appdata)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GalaxyAuth.GalaxyAuth");

	UCallbackProxy_GalaxyAuth_GalaxyAuth_Params params;
	params.WorldContext = WorldContext;
	params.Appdata = Appdata;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00620F20
//		Name   -> Function modio.CallbackProxy_GetAllMetadataKVP.GetAllMetadataKVP
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_GetAllMetadataKVP*            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_GetAllMetadataKVP* UCallbackProxy_GetAllMetadataKVP::STATIC_GetAllMetadataKVP(class UObject* WorldContext, int ModId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetAllMetadataKVP.GetAllMetadataKVP");

	UCallbackProxy_GetAllMetadataKVP_GetAllMetadataKVP_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00621190
//		Name   -> Function modio.CallbackProxy_GetAllModDependencies.GetAllModDependencies
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_GetAllModDependencies*        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_GetAllModDependencies* UCallbackProxy_GetAllModDependencies::STATIC_GetAllModDependencies(class UObject* WorldContext, int ModId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetAllModDependencies.GetAllModDependencies");

	UCallbackProxy_GetAllModDependencies_GetAllModDependencies_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00621400
//		Name   -> Function modio.CallbackProxy_GetAllModfiles.GetAllModfiles
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_GetAllModfiles*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_GetAllModfiles* UCallbackProxy_GetAllModfiles::STATIC_GetAllModfiles(class UObject* WorldContext, int ModId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetAllModfiles.GetAllModfiles");

	UCallbackProxy_GetAllModfiles_GetAllModfiles_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x006217A0
//		Name   -> Function modio.CallbackProxy_GetAllMods.GetAllMods
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FModioFilterCreator                         Filter                                                     (Parm, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             ModTags                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Limit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_GetAllMods*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_GetAllMods* UCallbackProxy_GetAllMods::STATIC_GetAllMods(class UObject* WorldContext, const struct FModioFilterCreator& Filter, TArray<struct FString> ModTags, int Limit, int Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetAllMods.GetAllMods");

	UCallbackProxy_GetAllMods_GetAllMods_Params params;
	params.WorldContext = WorldContext;
	params.Filter = Filter;
	params.ModTags = ModTags;
	params.Limit = Limit;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00621C70
//		Name   -> Function modio.CallbackProxy_GetAllModTags.GetAllModTags
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_GetAllModTags*                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_GetAllModTags* UCallbackProxy_GetAllModTags::STATIC_GetAllModTags(class UObject* WorldContext, int ModId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetAllModTags.GetAllModTags");

	UCallbackProxy_GetAllModTags_GetAllModTags_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00621EE0
//		Name   -> Function modio.CallbackProxy_GetAuthenticatedUser.GetAuthenticatedUser
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_GetAuthenticatedUser*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_GetAuthenticatedUser* UCallbackProxy_GetAuthenticatedUser::STATIC_GetAuthenticatedUser(class UObject* WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetAuthenticatedUser.GetAuthenticatedUser");

	UCallbackProxy_GetAuthenticatedUser_GetAuthenticatedUser_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00622110
//		Name   -> Function modio.CallbackProxy_GetGame.GetGame
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                GameId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_GetGame*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_GetGame* UCallbackProxy_GetGame::STATIC_GetGame(class UObject* WorldContext, int GameId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetGame.GetGame");

	UCallbackProxy_GetGame_GetGame_Params params;
	params.WorldContext = WorldContext;
	params.GameId = GameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00622380
//		Name   -> Function modio.CallbackProxy_GetMod.GetMod
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_GetMod*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_GetMod* UCallbackProxy_GetMod::STATIC_GetMod(class UObject* WorldContext, int ModId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetMod.GetMod");

	UCallbackProxy_GetMod_GetMod_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x006225F0
//		Name   -> Function modio.CallbackProxy_GetUserEvents.GetUserEvents
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Limit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_GetUserEvents*                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_GetUserEvents* UCallbackProxy_GetUserEvents::STATIC_GetUserEvents(class UObject* WorldContext, int Limit, int Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetUserEvents.GetUserEvents");

	UCallbackProxy_GetUserEvents_GetUserEvents_Params params;
	params.WorldContext = WorldContext;
	params.Limit = Limit;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00622890
//		Name   -> Function modio.CallbackProxy_GetUserModfiles.GetUserModfiles
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Limit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_GetUserModfiles*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_GetUserModfiles* UCallbackProxy_GetUserModfiles::STATIC_GetUserModfiles(class UObject* WorldContext, int Limit, int Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetUserModfiles.GetUserModfiles");

	UCallbackProxy_GetUserModfiles_GetUserModfiles_Params params;
	params.WorldContext = WorldContext;
	params.Limit = Limit;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00622B30
//		Name   -> Function modio.CallbackProxy_GetUserMods.GetUserMods
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FModioFilterCreator                         FilterCreator                                              (Parm, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             ModTags                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Limit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_GetUserMods*                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_GetUserMods* UCallbackProxy_GetUserMods::STATIC_GetUserMods(class UObject* WorldContext, const struct FModioFilterCreator& FilterCreator, TArray<struct FString> ModTags, int Limit, int Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetUserMods.GetUserMods");

	UCallbackProxy_GetUserMods_GetUserMods_Params params;
	params.WorldContext = WorldContext;
	params.FilterCreator = FilterCreator;
	params.ModTags = ModTags;
	params.Limit = Limit;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00623000
//		Name   -> Function modio.CallbackProxy_GetUserRatings.GetUserRatings
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Limit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_GetUserRatings*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_GetUserRatings* UCallbackProxy_GetUserRatings::STATIC_GetUserRatings(class UObject* WorldContext, int Limit, int Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetUserRatings.GetUserRatings");

	UCallbackProxy_GetUserRatings_GetUserRatings_Params params;
	params.WorldContext = WorldContext;
	params.Limit = Limit;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x006232A0
//		Name   -> Function modio.CallbackProxy_GetUserSubscriptions.GetUserSubscriptions
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FModioFilterCreator                         FilterCreator                                              (Parm, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             ModTags                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Limit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_GetUserSubscriptions*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_GetUserSubscriptions* UCallbackProxy_GetUserSubscriptions::STATIC_GetUserSubscriptions(class UObject* WorldContext, const struct FModioFilterCreator& FilterCreator, TArray<struct FString> ModTags, int Limit, int Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_GetUserSubscriptions.GetUserSubscriptions");

	UCallbackProxy_GetUserSubscriptions_GetUserSubscriptions_Params params;
	params.WorldContext = WorldContext;
	params.FilterCreator = FilterCreator;
	params.ModTags = ModTags;
	params.Limit = Limit;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00623770
//		Name   -> Function modio.CallbackProxy_OculusAuth.OculusAuth
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Nonce                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OculusUserId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     AccessToken                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Email                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Device                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                DateExpires                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_OculusAuth*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_OculusAuth* UCallbackProxy_OculusAuth::STATIC_OculusAuth(class UObject* WorldContext, const struct FString& Nonce, const struct FString& OculusUserId, const struct FString& AccessToken, const struct FString& Email, const struct FString& Device, int DateExpires)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_OculusAuth.OculusAuth");

	UCallbackProxy_OculusAuth_OculusAuth_Params params;
	params.WorldContext = WorldContext;
	params.Nonce = Nonce;
	params.OculusUserId = OculusUserId;
	params.AccessToken = AccessToken;
	params.Email = Email;
	params.Device = Device;
	params.DateExpires = DateExpires;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00623BA0
//		Name   -> Function modio.CallbackProxy_SetModDownloadListener.SetModDownloadListener
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_SetModDownloadListener*       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_SetModDownloadListener* UCallbackProxy_SetModDownloadListener::STATIC_SetModDownloadListener(class UObject* WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_SetModDownloadListener.SetModDownloadListener");

	UCallbackProxy_SetModDownloadListener_SetModDownloadListener_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00623DD0
//		Name   -> Function modio.CallbackProxy_SetModEventListener.SetModEventListener
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_SetModEventListener*          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_SetModEventListener* UCallbackProxy_SetModEventListener::STATIC_SetModEventListener(class UObject* WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_SetModEventListener.SetModEventListener");

	UCallbackProxy_SetModEventListener_SetModEventListener_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00624000
//		Name   -> Function modio.CallbackProxy_SetModfileUploadListener.SetModfileUploadListener
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_SetModfileUploadListener*     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_SetModfileUploadListener* UCallbackProxy_SetModfileUploadListener::STATIC_SetModfileUploadListener(class UObject* WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_SetModfileUploadListener.SetModfileUploadListener");

	UCallbackProxy_SetModfileUploadListener_SetModfileUploadListener_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00624230
//		Name   -> Function modio.CallbackProxy_SteamAuth.SteamAuth
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Base64Ticket                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_SteamAuth*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_SteamAuth* UCallbackProxy_SteamAuth::STATIC_SteamAuth(class UObject* WorldContext, const struct FString& Base64Ticket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_SteamAuth.SteamAuth");

	UCallbackProxy_SteamAuth_SteamAuth_Params params;
	params.WorldContext = WorldContext;
	params.Base64Ticket = Base64Ticket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x006244C0
//		Name   -> Function modio.CallbackProxy_SubmitReport.SubmitReport
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<modio_EModioResourceType>              Resource                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<modio_EModioReportType>                Report                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Summary                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_SubmitReport*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_SubmitReport* UCallbackProxy_SubmitReport::STATIC_SubmitReport(class UObject* WorldContext, TEnumAsByte<modio_EModioResourceType> Resource, int ID, TEnumAsByte<modio_EModioReportType> Report, const struct FString& Name, const struct FString& Summary)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_SubmitReport.SubmitReport");

	UCallbackProxy_SubmitReport_SubmitReport_Params params;
	params.WorldContext = WorldContext;
	params.Resource = Resource;
	params.ID = ID;
	params.Report = Report;
	params.Name = Name;
	params.Summary = Summary;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00624860
//		Name   -> Function modio.CallbackProxy_SubscribeToMod.SubscribeToMod
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_SubscribeToMod*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_SubscribeToMod* UCallbackProxy_SubscribeToMod::STATIC_SubscribeToMod(class UObject* WorldContext, int ModId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_SubscribeToMod.SubscribeToMod");

	UCallbackProxy_SubscribeToMod_SubscribeToMod_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00624AD0
//		Name   -> Function modio.CallbackProxy_UninstallUnavailableMods.UninstallUnavailableMods
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_UninstallUnavailableMods*     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_UninstallUnavailableMods* UCallbackProxy_UninstallUnavailableMods::STATIC_UninstallUnavailableMods(class UObject* WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_UninstallUnavailableMods.UninstallUnavailableMods");

	UCallbackProxy_UninstallUnavailableMods_UninstallUnavailableMods_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00624D00
//		Name   -> Function modio.CallbackProxy_UnsubscribeFromMod.UnsubscribeFromMod
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxy_UnsubscribeFromMod*           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxy_UnsubscribeFromMod* UCallbackProxy_UnsubscribeFromMod::STATIC_UnsubscribeFromMod(class UObject* WorldContext, int ModId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.CallbackProxy_UnsubscribeFromMod.UnsubscribeFromMod");

	UCallbackProxy_UnsubscribeFromMod_UnsubscribeFromMod_Params params;
	params.WorldContext = WorldContext;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x006277A0
//		Name   -> Function modio.ModioFunctionLibrary.ModioUninstallMod
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               SuccessfullyUninstalled                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioUninstallMod(class UObject* WorldContextObject, int ModId, bool* SuccessfullyUninstalled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioUninstallMod");

	UModioFunctionLibrary_ModioUninstallMod_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SuccessfullyUninstalled != nullptr)
		*SuccessfullyUninstalled = params.SuccessfullyUninstalled;

}


// Function:
//		Offset -> 0x006276F0
//		Name   -> Function modio.ModioFunctionLibrary.ModioSetUserEventsPollInterval
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                IntervalInSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioSetUserEventsPollInterval(class UObject* WorldContextObject, int IntervalInSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioSetUserEventsPollInterval");

	UModioFunctionLibrary_ModioSetUserEventsPollInterval_Params params;
	params.WorldContextObject = WorldContextObject;
	params.IntervalInSeconds = IntervalInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00627640
//		Name   -> Function modio.ModioFunctionLibrary.ModioSetModEventsPollInterval
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                IntervalInSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioSetModEventsPollInterval(class UObject* WorldContextObject, int IntervalInSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioSetModEventsPollInterval");

	UModioFunctionLibrary_ModioSetModEventsPollInterval_Params params;
	params.WorldContextObject = WorldContextObject;
	params.IntervalInSeconds = IntervalInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x006275D0
//		Name   -> Function modio.ModioFunctionLibrary.ModioResumeDownloads
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioResumeDownloads(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioResumeDownloads");

	UModioFunctionLibrary_ModioResumeDownloads_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00627560
//		Name   -> Function modio.ModioFunctionLibrary.ModioProcess
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioProcess(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioProcess");

	UModioFunctionLibrary_ModioProcess_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x006274B0
//		Name   -> Function modio.ModioFunctionLibrary.ModioPrioritizeModDownload
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioPrioritizeModDownload(class UObject* WorldContextObject, int ModId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioPrioritizeModDownload");

	UModioFunctionLibrary_ModioPrioritizeModDownload_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00627440
//		Name   -> Function modio.ModioFunctionLibrary.ModioPollEvents
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioPollEvents(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioPollEvents");

	UModioFunctionLibrary_ModioPollEvents_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x006273D0
//		Name   -> Function modio.ModioFunctionLibrary.ModioPauseDownloads
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioPauseDownloads(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioPauseDownloads");

	UModioFunctionLibrary_ModioPauseDownloads_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00627360
//		Name   -> Function modio.ModioFunctionLibrary.ModioLogout
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioLogout(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioLogout");

	UModioFunctionLibrary_ModioLogout_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x006272A0
//		Name   -> Function modio.ModioFunctionLibrary.ModioIsLoggedIn
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsLoggedIn                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioIsLoggedIn(class UObject* WorldContextObject, bool* IsLoggedIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioIsLoggedIn");

	UModioFunctionLibrary_ModioIsLoggedIn_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsLoggedIn != nullptr)
		*IsLoggedIn = params.IsLoggedIn;

}


// Function:
//		Offset -> 0x006271A0
//		Name   -> Function modio.ModioFunctionLibrary.ModioIsCurrentUserSubscribed
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsSubscribed                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioIsCurrentUserSubscribed(class UObject* WorldContextObject, int ModId, bool* IsSubscribed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioIsCurrentUserSubscribed");

	UModioFunctionLibrary_ModioIsCurrentUserSubscribed_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSubscribed != nullptr)
		*IsSubscribed = params.IsSubscribed;

}


// Function:
//		Offset -> 0x00627130
//		Name   -> Function modio.ModioFunctionLibrary.ModioInstallDownloadedMods
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioInstallDownloadedMods(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioInstallDownloadedMods");

	UModioFunctionLibrary_ModioInstallDownloadedMods_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00626F20
//		Name   -> Function modio.ModioFunctionLibrary.ModioGetModState
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      ModState                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioGetModState(class UObject* WorldContextObject, int ModId, unsigned char* ModState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioGetModState");

	UModioFunctionLibrary_ModioGetModState_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ModState != nullptr)
		*ModState = params.ModState;

}


// Function:
//		Offset -> 0x00627020
//		Name   -> Function modio.ModioFunctionLibrary.ModioGetModfileUploadQueue
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FModioQueuedModfileUpload>           UploadQueue                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioGetModfileUploadQueue(class UObject* WorldContextObject, TArray<struct FModioQueuedModfileUpload>* UploadQueue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioGetModfileUploadQueue");

	UModioFunctionLibrary_ModioGetModfileUploadQueue_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UploadQueue != nullptr)
		*UploadQueue = params.UploadQueue;

}


// Function:
//		Offset -> 0x00626E10
//		Name   -> Function modio.ModioFunctionLibrary.ModioGetModDownloadQueue
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FModioQueuedModDownload>             QueuedMods                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioGetModDownloadQueue(class UObject* WorldContextObject, TArray<struct FModioQueuedModDownload>* QueuedMods)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioGetModDownloadQueue");

	UModioFunctionLibrary_ModioGetModDownloadQueue_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QueuedMods != nullptr)
		*QueuedMods = params.QueuedMods;

}


// Function:
//		Offset -> 0x00626C70
//		Name   -> Function modio.ModioFunctionLibrary.ModioGetInstalledMod
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Path                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FModioMod                                   Mod                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioGetInstalledMod(class UObject* WorldContextObject, int ModId, struct FString* Path, struct FModioMod* Mod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioGetInstalledMod");

	UModioFunctionLibrary_ModioGetInstalledMod_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
	if (Mod != nullptr)
		*Mod = params.Mod;

}


// Function:
//		Offset -> 0x00626B90
//		Name   -> Function modio.ModioFunctionLibrary.ModioGetCurrentUserSubscriptions
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        ModIds                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioGetCurrentUserSubscriptions(class UObject* WorldContextObject, TArray<int>* ModIds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioGetCurrentUserSubscriptions");

	UModioFunctionLibrary_ModioGetCurrentUserSubscriptions_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ModIds != nullptr)
		*ModIds = params.ModIds;

}


// Function:
//		Offset -> 0x00626A90
//		Name   -> Function modio.ModioFunctionLibrary.ModioGetCurrentUserModRating
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      ModRating                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioGetCurrentUserModRating(class UObject* WorldContextObject, int ModId, unsigned char* ModRating)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioGetCurrentUserModRating");

	UModioFunctionLibrary_ModioGetCurrentUserModRating_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ModRating != nullptr)
		*ModRating = params.ModRating;

}


// Function:
//		Offset -> 0x00626980
//		Name   -> Function modio.ModioFunctionLibrary.ModioGetAllInstalledMods
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FModioInstalledMod>                  InstalledMods                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioGetAllInstalledMods(class UObject* WorldContextObject, TArray<struct FModioInstalledMod>* InstalledMods)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioGetAllInstalledMods");

	UModioFunctionLibrary_ModioGetAllInstalledMods_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InstalledMods != nullptr)
		*InstalledMods = params.InstalledMods;

}


// Function:
//		Offset -> 0x006268A0
//		Name   -> Function modio.ModioFunctionLibrary.ModioGetAllDownloadedMods
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        DownloadedMods                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioGetAllDownloadedMods(class UObject* WorldContextObject, TArray<int>* DownloadedMods)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioGetAllDownloadedMods");

	UModioFunctionLibrary_ModioGetAllDownloadedMods_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DownloadedMods != nullptr)
		*DownloadedMods = params.DownloadedMods;

}


// Function:
//		Offset -> 0x006267F0
//		Name   -> Function modio.ModioFunctionLibrary.ModioDownloadMod
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioDownloadMod(class UObject* WorldContextObject, int ModId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioDownloadMod");

	UModioFunctionLibrary_ModioDownloadMod_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00626650
//		Name   -> Function modio.ModioFunctionLibrary.ModioCurrentUser
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FModioUser                                  User                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioCurrentUser(class UObject* WorldContextObject, struct FModioUser* User)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioCurrentUser");

	UModioFunctionLibrary_ModioCurrentUser_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (User != nullptr)
		*User = params.User;

}


// Function:
//		Offset -> 0x006265A0
//		Name   -> Function modio.ModioFunctionLibrary.ModioCancelModDownload
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioCancelModDownload(class UObject* WorldContextObject, int ModId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioCancelModDownload");

	UModioFunctionLibrary_ModioCancelModDownload_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00626310
//		Name   -> Function modio.ModioFunctionLibrary.ModioAddModfile
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FModioModfileCreator                        ModfileCreator                                             (Parm, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_ModioAddModfile(class UObject* WorldContextObject, int ModId, const struct FModioModfileCreator& ModfileCreator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.ModioAddModfile");

	UModioFunctionLibrary_ModioAddModfile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ModId = ModId;
	params.ModfileCreator = ModfileCreator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00626240
//		Name   -> Function modio.ModioFunctionLibrary.AuthenticateViaToken
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     AccessToken                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UModioFunctionLibrary::STATIC_AuthenticateViaToken(class UObject* WorldContextObject, const struct FString& AccessToken)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function modio.ModioFunctionLibrary.AuthenticateViaToken");

	UModioFunctionLibrary_AuthenticateViaToken_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AccessToken = AccessToken;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
