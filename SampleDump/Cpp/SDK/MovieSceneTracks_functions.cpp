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
//		Name   -> Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
//		Flags  -> (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UMovieSceneTransformOrigin::BP_GetTransformOrigin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin");

	UMovieSceneTransformOrigin_BP_GetTransformOrigin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0235B9C0
//		Name   -> Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FMovieSceneObjectBindingID                  InConstraintBindingID                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieScene3DConstraintSection::SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID");

	UMovieScene3DConstraintSection_SetConstraintBindingID_Params params;
	params.InConstraintBindingID = InConstraintBindingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0235B940
//		Name   -> Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FMovieSceneObjectBindingID                  ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FMovieSceneObjectBindingID UMovieScene3DConstraintSection::GetConstraintBindingID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID");

	UMovieScene3DConstraintSection_GetConstraintBindingID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0235BB00
//		Name   -> Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FFrameNumber                                InStartOffset                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneAudioSection::SetStartOffset(const struct FFrameNumber& InStartOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset");

	UMovieSceneAudioSection_SetStartOffset_Params params;
	params.InStartOffset = InStartOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0235BA80
//		Name   -> Function MovieSceneTracks.MovieSceneAudioSection.SetSound
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USoundBase*                                  InSound                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneAudioSection::SetSound(class USoundBase* InSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.SetSound");

	UMovieSceneAudioSection_SetSound_Params params;
	params.InSound = InSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0235B9A0
//		Name   -> Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FFrameNumber                                ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFrameNumber UMovieSceneAudioSection::GetStartOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset");

	UMovieSceneAudioSection_GetStartOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0235B980
//		Name   -> Function MovieSceneTracks.MovieSceneAudioSection.GetSound
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class USoundBase*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USoundBase* UMovieSceneAudioSection::GetSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.GetSound");

	UMovieSceneAudioSection_GetSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0235B9C0
//		Name   -> Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FMovieSceneObjectBindingID                  InCameraBindingID                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneCameraCutSection::SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID");

	UMovieSceneCameraCutSection_SetCameraBindingID_Params params;
	params.InCameraBindingID = InCameraBindingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0235B940
//		Name   -> Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FMovieSceneObjectBindingID                  ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FMovieSceneObjectBindingID UMovieSceneCameraCutSection::GetCameraBindingID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID");

	UMovieSceneCameraCutSection_GetCameraBindingID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02362060
//		Name   -> Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InShotDisplayName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneCinematicShotSection::SetShotDisplayName(const struct FString& InShotDisplayName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName");

	UMovieSceneCinematicShotSection_SetShotDisplayName_Params params;
	params.InShotDisplayName = InShotDisplayName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02361EB0
//		Name   -> Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMovieSceneCinematicShotSection::GetShotDisplayName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName");

	UMovieSceneCinematicShotSection_GetShotDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02362160
//		Name   -> Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		MovieSceneTracks_ELevelVisibility                  InVisibility                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneLevelVisibilitySection::SetVisibility(MovieSceneTracks_ELevelVisibility InVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility");

	UMovieSceneLevelVisibilitySection_SetVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02361FB0
//		Name   -> Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FName>                               InLevelNames                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneLevelVisibilitySection::SetLevelNames(TArray<struct FName> InLevelNames)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames");

	UMovieSceneLevelVisibilitySection_SetLevelNames_Params params;
	params.InLevelNames = InLevelNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02361F80
//		Name   -> Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		MovieSceneTracks_ELevelVisibility                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MovieSceneTracks_ELevelVisibility UMovieSceneLevelVisibilitySection::GetVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility");

	UMovieSceneLevelVisibilitySection_GetVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02361E80
//		Name   -> Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FName>                               ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FName> UMovieSceneLevelVisibilitySection::GetLevelNames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames");

	UMovieSceneLevelVisibilitySection_GetLevelNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
