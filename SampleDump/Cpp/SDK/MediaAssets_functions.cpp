﻿// Name: Mordhau, Version: 4_25_hotfix

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
//		Offset -> 0x025B6CD0
//		Name   -> Function MediaAssets.MediaSource.Validate
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaSource::Validate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.Validate");

	UMediaSource_Validate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B6270
//		Name   -> Function MediaAssets.MediaSource.SetMediaOptionString
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSource::SetMediaOptionString(const struct FName& Key, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.SetMediaOptionString");

	UMediaSource_SetMediaOptionString_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x025B61A0
//		Name   -> Function MediaAssets.MediaSource.SetMediaOptionInt64
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int64_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSource::SetMediaOptionInt64(const struct FName& Key, int64_t Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.SetMediaOptionInt64");

	UMediaSource_SetMediaOptionInt64_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x025B60D0
//		Name   -> Function MediaAssets.MediaSource.SetMediaOptionFloat
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSource::SetMediaOptionFloat(const struct FName& Key, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.SetMediaOptionFloat");

	UMediaSource_SetMediaOptionFloat_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x025B6000
//		Name   -> Function MediaAssets.MediaSource.SetMediaOptionBool
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSource::SetMediaOptionBool(const struct FName& Key, bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.SetMediaOptionBool");

	UMediaSource_SetMediaOptionBool_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x025B4960
//		Name   -> Function MediaAssets.MediaSource.GetUrl
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMediaSource::GetUrl()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.GetUrl");

	UMediaSource_GetUrl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B5ED0
//		Name   -> Function MediaAssets.FileMediaSource.SetFilePath
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFileMediaSource::SetFilePath(const struct FString& Path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.FileMediaSource.SetFilePath");

	UFileMediaSource_SetFilePath_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x025B3870
//		Name   -> Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FMediaCaptureDevice>                 OutDevices                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Filter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaBlueprintFunctionLibrary::STATIC_EnumerateWebcamCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices");

	UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;

}


// Function:
//		Offset -> 0x025B3720
//		Name   -> Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FMediaCaptureDevice>                 OutDevices                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Filter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaBlueprintFunctionLibrary::STATIC_EnumerateVideoCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices");

	UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;

}


// Function:
//		Offset -> 0x025B35D0
//		Name   -> Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FMediaCaptureDevice>                 OutDevices                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Filter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaBlueprintFunctionLibrary::STATIC_EnumerateAudioCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices");

	UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;

}


// Function:
//		Offset -> 0x01FCE920
//		Name   -> Function MediaAssets.MediaComponent.GetMediaTexture
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UMediaTexture*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaTexture* UMediaComponent::GetMediaTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaComponent.GetMediaTexture");

	UMediaComponent_GetMediaTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3F30
//		Name   -> Function MediaAssets.MediaComponent.GetMediaPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UMediaPlayer*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaPlayer* UMediaComponent::GetMediaPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaComponent.GetMediaPlayer");

	UMediaComponent_GetMediaPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B6CA0
//		Name   -> Function MediaAssets.MediaPlayer.SupportsSeeking
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SupportsSeeking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsSeeking");

	UMediaPlayer_SupportsSeeking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B6C70
//		Name   -> Function MediaAssets.MediaPlayer.SupportsScrubbing
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SupportsScrubbing()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsScrubbing");

	UMediaPlayer_SupportsScrubbing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B6BA0
//		Name   -> Function MediaAssets.MediaPlayer.SupportsRate
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Unthinned                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsRate");

	UMediaPlayer_SupportsRate_Params params;
	params.Rate = Rate;
	params.Unthinned = Unthinned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B6AC0
//		Name   -> Function MediaAssets.MediaPlayer.SetViewRotation
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FRotator                                    Rotation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               Absolute                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetViewRotation(const struct FRotator& Rotation, bool Absolute)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetViewRotation");

	UMediaPlayer_SetViewRotation_Params params;
	params.Rotation = Rotation;
	params.Absolute = Absolute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B69B0
//		Name   -> Function MediaAssets.MediaPlayer.SetViewField
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Horizontal                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Vertical                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Absolute                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetViewField(float Horizontal, float Vertical, bool Absolute)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetViewField");

	UMediaPlayer_SetViewField_Params params;
	params.Horizontal = Horizontal;
	params.Vertical = Vertical;
	params.Absolute = Absolute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B68B0
//		Name   -> Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              FrameRate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetVideoTrackFrameRate(int TrackIndex, int FormatIndex, float FrameRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate");

	UMediaPlayer_SetVideoTrackFrameRate_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;
	params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B67B0
//		Name   -> Function MediaAssets.MediaPlayer.SetTrackFormat
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetTrackFormat(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex, int FormatIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetTrackFormat");

	UMediaPlayer_SetTrackFormat_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B6730
//		Name   -> Function MediaAssets.MediaPlayer.SetTimeDelay
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FTimespan                                   TimeDelay                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlayer::SetTimeDelay(const struct FTimespan& TimeDelay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetTimeDelay");

	UMediaPlayer_SetTimeDelay_Params params;
	params.TimeDelay = TimeDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x025B6580
//		Name   -> Function MediaAssets.MediaPlayer.SetRate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetRate(float Rate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetRate");

	UMediaPlayer_SetRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B64F0
//		Name   -> Function MediaAssets.MediaPlayer.SetNativeVolume
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetNativeVolume(float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetNativeVolume");

	UMediaPlayer_SetNativeVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B6370
//		Name   -> Function MediaAssets.MediaPlayer.SetMediaOptions
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMediaSource*                                Options                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlayer::SetMediaOptions(class UMediaSource* Options)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetMediaOptions");

	UMediaPlayer_SetMediaOptions_Params params;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x025B5F70
//		Name   -> Function MediaAssets.MediaPlayer.SetLooping
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Looping                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SetLooping(bool Looping)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetLooping");

	UMediaPlayer_SetLooping_Params params;
	params.Looping = Looping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B5C70
//		Name   -> Function MediaAssets.MediaPlayer.SetDesiredPlayerName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       PlayerName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlayer::SetDesiredPlayerName(const struct FName& PlayerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetDesiredPlayerName");

	UMediaPlayer_SetDesiredPlayerName_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x025B5BE0
//		Name   -> Function MediaAssets.MediaPlayer.SetBlockOnTime
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FTimespan                                   Time                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlayer::SetBlockOnTime(const struct FTimespan& Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetBlockOnTime");

	UMediaPlayer_SetBlockOnTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x025B5B20
//		Name   -> Function MediaAssets.MediaPlayer.SelectTrack
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::SelectTrack(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SelectTrack");

	UMediaPlayer_SelectTrack_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B5A80
//		Name   -> Function MediaAssets.MediaPlayer.Seek
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FTimespan                                   Time                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Seek(const struct FTimespan& Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Seek");

	UMediaPlayer_Seek_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B5A50
//		Name   -> Function MediaAssets.MediaPlayer.Rewind
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Rewind()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Rewind");

	UMediaPlayer_Rewind_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B5960
//		Name   -> Function MediaAssets.MediaPlayer.Reopen
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Reopen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Reopen");

	UMediaPlayer_Reopen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B5810
//		Name   -> Function MediaAssets.MediaPlayer.Previous
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Previous()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Previous");

	UMediaPlayer_Previous_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B57F0
//		Name   -> Function MediaAssets.MediaPlayer.PlayAndSeek
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMediaPlayer::PlayAndSeek()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.PlayAndSeek");

	UMediaPlayer_PlayAndSeek_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x025B57C0
//		Name   -> Function MediaAssets.MediaPlayer.Play
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Play()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Play");

	UMediaPlayer_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B5790
//		Name   -> Function MediaAssets.MediaPlayer.Pause
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Pause()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Pause");

	UMediaPlayer_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B56E0
//		Name   -> Function MediaAssets.MediaPlayer.OpenURL
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenURL(const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenURL");

	UMediaPlayer_OpenURL_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B55E0
//		Name   -> Function MediaAssets.MediaPlayer.OpenSourceWithOptions
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FMediaPlayerOptions                         Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenSourceWithOptions(class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSourceWithOptions");

	UMediaPlayer_OpenSourceWithOptions_Params params;
	params.MediaSource = MediaSource;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B5400
//		Name   -> Function MediaAssets.MediaPlayer.OpenSourceLatent
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FMediaPlayerOptions                         Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlayer::OpenSourceLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool* bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSourceLatent");

	UMediaPlayer_OpenSourceLatent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.MediaSource = MediaSource;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

}


// Function:
//		Offset -> 0x025B5370
//		Name   -> Function MediaAssets.MediaPlayer.OpenSource
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenSource(class UMediaSource* MediaSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSource");

	UMediaPlayer_OpenSource_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B52B0
//		Name   -> Function MediaAssets.MediaPlayer.OpenPlaylistIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMediaPlaylist*                              InPlaylist                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenPlaylistIndex");

	UMediaPlayer_OpenPlaylistIndex_Params params;
	params.InPlaylist = InPlaylist;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B5210
//		Name   -> Function MediaAssets.MediaPlayer.OpenPlaylist
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMediaPlaylist*                              InPlaylist                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenPlaylist(class UMediaPlaylist* InPlaylist)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenPlaylist");

	UMediaPlayer_OpenPlaylist_Params params;
	params.InPlaylist = InPlaylist;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B5160
//		Name   -> Function MediaAssets.MediaPlayer.OpenFile
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::OpenFile(const struct FString& FilePath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenFile");

	UMediaPlayer_OpenFile_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B5110
//		Name   -> Function MediaAssets.MediaPlayer.Next
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::Next()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Next");

	UMediaPlayer_Next_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B50E0
//		Name   -> Function MediaAssets.MediaPlayer.IsReady
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsReady");

	UMediaPlayer_IsReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B50B0
//		Name   -> Function MediaAssets.MediaPlayer.IsPreparing
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsPreparing()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPreparing");

	UMediaPlayer_IsPreparing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B5080
//		Name   -> Function MediaAssets.MediaPlayer.IsPlaying
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPlaying");

	UMediaPlayer_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B5050
//		Name   -> Function MediaAssets.MediaPlayer.IsPaused
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsPaused()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPaused");

	UMediaPlayer_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B5020
//		Name   -> Function MediaAssets.MediaPlayer.IsLooping
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsLooping()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsLooping");

	UMediaPlayer_IsLooping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B4FF0
//		Name   -> Function MediaAssets.MediaPlayer.IsConnecting
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsConnecting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsConnecting");

	UMediaPlayer_IsConnecting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B4FC0
//		Name   -> Function MediaAssets.MediaPlayer.IsClosed
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsClosed");

	UMediaPlayer_IsClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B4F90
//		Name   -> Function MediaAssets.MediaPlayer.IsBuffering
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::IsBuffering()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsBuffering");

	UMediaPlayer_IsBuffering_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B4EA0
//		Name   -> Function MediaAssets.MediaPlayer.HasError
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::HasError()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.HasError");

	UMediaPlayer_HasError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B4E30
//		Name   -> Function MediaAssets.MediaPlayer.GetViewRotation
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UMediaPlayer::GetViewRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetViewRotation");

	UMediaPlayer_GetViewRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B4D30
//		Name   -> Function MediaAssets.MediaPlayer.GetVideoTrackType
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMediaPlayer::GetVideoTrackType(int TrackIndex, int FormatIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackType");

	UMediaPlayer_GetVideoTrackType_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B4C60
//		Name   -> Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFloatRange                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFloatRange UMediaPlayer::GetVideoTrackFrameRates(int TrackIndex, int FormatIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates");

	UMediaPlayer_GetVideoTrackFrameRates_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B4BA0
//		Name   -> Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaPlayer::GetVideoTrackFrameRate(int TrackIndex, int FormatIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate");

	UMediaPlayer_GetVideoTrackFrameRate_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B4AD0
//		Name   -> Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntPoint                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntPoint UMediaPlayer::GetVideoTrackDimensions(int TrackIndex, int FormatIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackDimensions");

	UMediaPlayer_GetVideoTrackDimensions_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B4A10
//		Name   -> Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaPlayer::GetVideoTrackAspectRatio(int TrackIndex, int FormatIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio");

	UMediaPlayer_GetVideoTrackAspectRatio_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B49E0
//		Name   -> Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaPlayer::GetVerticalFieldOfView()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVerticalFieldOfView");

	UMediaPlayer_GetVerticalFieldOfView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B4920
//		Name   -> Function MediaAssets.MediaPlayer.GetUrl
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMediaPlayer::GetUrl()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetUrl");

	UMediaPlayer_GetUrl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B4810
//		Name   -> Function MediaAssets.MediaPlayer.GetTrackLanguage
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMediaPlayer::GetTrackLanguage(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackLanguage");

	UMediaPlayer_GetTrackLanguage_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B4750
//		Name   -> Function MediaAssets.MediaPlayer.GetTrackFormat
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetTrackFormat(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackFormat");

	UMediaPlayer_GetTrackFormat_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B4630
//		Name   -> Function MediaAssets.MediaPlayer.GetTrackDisplayName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMediaPlayer::GetTrackDisplayName(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackDisplayName");

	UMediaPlayer_GetTrackDisplayName_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B45F0
//		Name   -> Function MediaAssets.MediaPlayer.GetTimeDelay
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FTimespan                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FTimespan UMediaPlayer::GetTimeDelay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTimeDelay");

	UMediaPlayer_GetTimeDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B45B0
//		Name   -> Function MediaAssets.MediaPlayer.GetTime
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FTimespan                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FTimespan UMediaPlayer::GetTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTime");

	UMediaPlayer_GetTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B44B0
//		Name   -> Function MediaAssets.MediaPlayer.GetSupportedRates
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FFloatRange>                         OutRates                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Unthinned                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlayer::GetSupportedRates(TArray<struct FFloatRange>* OutRates, bool Unthinned)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetSupportedRates");

	UMediaPlayer_GetSupportedRates_Params params;
	params.Unthinned = Unthinned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutRates != nullptr)
		*OutRates = params.OutRates;

}


// Function:
//		Offset -> 0x025B43A0
//		Name   -> Function MediaAssets.MediaPlayer.GetSelectedTrack
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetSelectedTrack(MediaAssets_EMediaPlayerTrack TrackType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetSelectedTrack");

	UMediaPlayer_GetSelectedTrack_Params params;
	params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B4370
//		Name   -> Function MediaAssets.MediaPlayer.GetRate
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaPlayer::GetRate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetRate");

	UMediaPlayer_GetRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B4210
//		Name   -> Function MediaAssets.MediaPlayer.GetPlaylistIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetPlaylistIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlaylistIndex");

	UMediaPlayer_GetPlaylistIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B41F0
//		Name   -> Function MediaAssets.MediaPlayer.GetPlaylist
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UMediaPlaylist*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaPlaylist* UMediaPlayer::GetPlaylist()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlaylist");

	UMediaPlayer_GetPlaylist_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B41B0
//		Name   -> Function MediaAssets.MediaPlayer.GetPlayerName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UMediaPlayer::GetPlayerName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlayerName");

	UMediaPlayer_GetPlayerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B4120
//		Name   -> Function MediaAssets.MediaPlayer.GetNumTracks
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetNumTracks(MediaAssets_EMediaPlayerTrack TrackType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetNumTracks");

	UMediaPlayer_GetNumTracks_Params params;
	params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B4060
//		Name   -> Function MediaAssets.MediaPlayer.GetNumTrackFormats
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetNumTrackFormats(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetNumTrackFormats");

	UMediaPlayer_GetNumTrackFormats_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3E90
//		Name   -> Function MediaAssets.MediaPlayer.GetMediaName
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMediaPlayer::GetMediaName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetMediaName");

	UMediaPlayer_GetMediaName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3E50
//		Name   -> Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FTimespan                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FTimespan UMediaPlayer::GetLastVideoSampleProcessedTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime");

	UMediaPlayer_GetLastVideoSampleProcessedTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3E10
//		Name   -> Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FTimespan                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FTimespan UMediaPlayer::GetLastAudioSampleProcessedTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime");

	UMediaPlayer_GetLastAudioSampleProcessedTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3DE0
//		Name   -> Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaPlayer::GetHorizontalFieldOfView()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView");

	UMediaPlayer_GetHorizontalFieldOfView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3D40
//		Name   -> Function MediaAssets.MediaPlayer.GetDuration
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FTimespan                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FTimespan UMediaPlayer::GetDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetDuration");

	UMediaPlayer_GetDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3D00
//		Name   -> Function MediaAssets.MediaPlayer.GetDesiredPlayerName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UMediaPlayer::GetDesiredPlayerName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetDesiredPlayerName");

	UMediaPlayer_GetDesiredPlayerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3C00
//		Name   -> Function MediaAssets.MediaPlayer.GetAudioTrackType
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMediaPlayer::GetAudioTrackType(int TrackIndex, int FormatIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackType");

	UMediaPlayer_GetAudioTrackType_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3B40
//		Name   -> Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetAudioTrackSampleRate(int TrackIndex, int FormatIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate");

	UMediaPlayer_GetAudioTrackSampleRate_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3A80
//		Name   -> Function MediaAssets.MediaPlayer.GetAudioTrackChannels
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlayer::GetAudioTrackChannels(int TrackIndex, int FormatIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackChannels");

	UMediaPlayer_GetAudioTrackChannels_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B35B0
//		Name   -> Function MediaAssets.MediaPlayer.Close
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMediaPlayer::Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Close");

	UMediaPlayer_Close_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x025B3500
//		Name   -> Function MediaAssets.MediaPlayer.CanPlayUrl
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::CanPlayUrl(const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPlayUrl");

	UMediaPlayer_CanPlayUrl_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3470
//		Name   -> Function MediaAssets.MediaPlayer.CanPlaySource
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::CanPlaySource(class UMediaSource* MediaSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPlaySource");

	UMediaPlayer_CanPlaySource_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3440
//		Name   -> Function MediaAssets.MediaPlayer.CanPause
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlayer::CanPause()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPause");

	UMediaPlayer_CanPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B5990
//		Name   -> Function MediaAssets.MediaPlaylist.Replace
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMediaSource*                                Replacement                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::Replace(int Index, class UMediaSource* Replacement)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Replace");

	UMediaPlaylist_Replace_Params params;
	params.Index = Index;
	params.Replacement = Replacement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B58D0
//		Name   -> Function MediaAssets.MediaPlaylist.RemoveAt
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::RemoveAt(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.RemoveAt");

	UMediaPlaylist_RemoveAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B5840
//		Name   -> Function MediaAssets.MediaPlaylist.Remove
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::Remove(class UMediaSource* MediaSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Remove");

	UMediaPlaylist_Remove_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B5140
//		Name   -> Function MediaAssets.MediaPlaylist.Num
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaPlaylist::Num()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Num");

	UMediaPlaylist_Num_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B4ED0
//		Name   -> Function MediaAssets.MediaPlaylist.Insert
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaPlaylist::Insert(class UMediaSource* MediaSource, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Insert");

	UMediaPlaylist_Insert_Params params;
	params.MediaSource = MediaSource;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x025B42D0
//		Name   -> Function MediaAssets.MediaPlaylist.GetRandom
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMediaSource*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaSource* UMediaPlaylist::GetRandom(int* OutIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetRandom");

	UMediaPlaylist_GetRandom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B4230
//		Name   -> Function MediaAssets.MediaPlaylist.GetPrevious
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                InOutIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMediaSource*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaSource* UMediaPlaylist::GetPrevious(int* InOutIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetPrevious");

	UMediaPlaylist_GetPrevious_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InOutIndex != nullptr)
		*InOutIndex = params.InOutIndex;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3FC0
//		Name   -> Function MediaAssets.MediaPlaylist.GetNext
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                InOutIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMediaSource*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaSource* UMediaPlaylist::GetNext(int* InOutIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetNext");

	UMediaPlaylist_GetNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InOutIndex != nullptr)
		*InOutIndex = params.InOutIndex;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B39C0
//		Name   -> Function MediaAssets.MediaPlaylist.Get
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMediaSource*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaSource* UMediaPlaylist::Get(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Get");

	UMediaPlaylist_Get_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3140
//		Name   -> Function MediaAssets.MediaPlaylist.AddUrl
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::AddUrl(const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.AddUrl");

	UMediaPlaylist_AddUrl_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3090
//		Name   -> Function MediaAssets.MediaPlaylist.AddFile
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::AddFile(const struct FString& FilePath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.AddFile");

	UMediaPlaylist_AddFile_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3000
//		Name   -> Function MediaAssets.MediaPlaylist.Add
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaPlaylist::Add(class UMediaSource* MediaSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Add");

	UMediaPlaylist_Add_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B6610
//		Name   -> Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<float>                                      InFrequenciesToAnalyze                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MediaAssets_EMediaSoundComponentFFTSize            InFFTSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSoundComponent::SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, MediaAssets_EMediaSoundComponentFFTSize InFFTSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings");

	UMediaSoundComponent_SetSpectralAnalysisSettings_Params params;
	params.InFrequenciesToAnalyze = InFrequenciesToAnalyze;
	params.InFFTSize = InFFTSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x025B63F0
//		Name   -> Function MediaAssets.MediaSoundComponent.SetMediaPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMediaPlayer*                                NewMediaPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSoundComponent::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetMediaPlayer");

	UMediaSoundComponent_SetMediaPlayer_Params params;
	params.NewMediaPlayer = NewMediaPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x025B5E10
//		Name   -> Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                AttackTimeMsec                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReleaseTimeMsec                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSoundComponent::SetEnvelopeFollowingsettings(int AttackTimeMsec, int ReleaseTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings");

	UMediaSoundComponent_SetEnvelopeFollowingsettings_Params params;
	params.AttackTimeMsec = AttackTimeMsec;
	params.ReleaseTimeMsec = ReleaseTimeMsec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x025B5D80
//		Name   -> Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInSpectralAnalysisEnabled                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSoundComponent::SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis");

	UMediaSoundComponent_SetEnableSpectralAnalysis_Params params;
	params.bInSpectralAnalysisEnabled = bInSpectralAnalysisEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x025B5CF0
//		Name   -> Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInEnvelopeFollowing                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaSoundComponent::SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing");

	UMediaSoundComponent_SetEnableEnvelopeFollowing_Params params;
	params.bInEnvelopeFollowing = bInEnvelopeFollowing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x025B4430
//		Name   -> Function MediaAssets.MediaSoundComponent.GetSpectralData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FMediaSoundComponentSpectralData>    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FMediaSoundComponentSpectralData> UMediaSoundComponent::GetSpectralData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetSpectralData");

	UMediaSoundComponent_GetSpectralData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3F60
//		Name   -> Function MediaAssets.MediaSoundComponent.GetMediaPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UMediaPlayer*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaPlayer* UMediaSoundComponent::GetMediaPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetMediaPlayer");

	UMediaSoundComponent_GetMediaPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3D80
//		Name   -> Function MediaAssets.MediaSoundComponent.GetEnvelopeValue
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaSoundComponent::GetEnvelopeValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetEnvelopeValue");

	UMediaSoundComponent_GetEnvelopeValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B31F0
//		Name   -> Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSoundAttenuationSettings                   OutAttenuationSettings                                     (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaSoundComponent::BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply");

	UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAttenuationSettings != nullptr)
		*OutAttenuationSettings = params.OutAttenuationSettings;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B6470
//		Name   -> Function MediaAssets.MediaTexture.SetMediaPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMediaPlayer*                                NewMediaPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaTexture::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.SetMediaPlayer");

	UMediaTexture_SetMediaPlayer_Params params;
	params.NewMediaPlayer = NewMediaPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x025B4E70
//		Name   -> Function MediaAssets.MediaTexture.GetWidth
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaTexture::GetWidth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetWidth");

	UMediaTexture_GetWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3F90
//		Name   -> Function MediaAssets.MediaTexture.GetMediaPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UMediaPlayer*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaPlayer* UMediaTexture::GetMediaPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetMediaPlayer");

	UMediaTexture_GetMediaPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3DB0
//		Name   -> Function MediaAssets.MediaTexture.GetHeight
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMediaTexture::GetHeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetHeight");

	UMediaTexture_GetHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x025B3A50
//		Name   -> Function MediaAssets.MediaTexture.GetAspectRatio
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMediaTexture::GetAspectRatio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetAspectRatio");

	UMediaTexture_GetAspectRatio_Params params;

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
