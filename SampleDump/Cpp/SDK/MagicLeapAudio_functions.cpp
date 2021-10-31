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
//		Offset -> 0x00D0D060
//		Name   -> Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackUnpluggedDelegate
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             ResultDelegate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapAudioFunctionLibrary::STATIC_SetOnAudioJackUnpluggedDelegate(const struct FScriptDelegate& ResultDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackUnpluggedDelegate");

	UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Params params;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D0CFB0
//		Name   -> Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackPluggedDelegate
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             ResultDelegate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapAudioFunctionLibrary::STATIC_SetOnAudioJackPluggedDelegate(const struct FScriptDelegate& ResultDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackPluggedDelegate");

	UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Params params;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D0CF30
//		Name   -> Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetMicMute
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               IsMuted                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapAudioFunctionLibrary::STATIC_SetMicMute(bool IsMuted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetMicMute");

	UMagicLeapAudioFunctionLibrary_SetMicMute_Params params;
	params.IsMuted = IsMuted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00632370
//		Name   -> Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.IsMicMuted
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapAudioFunctionLibrary::STATIC_IsMicMuted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.IsMicMuted");

	UMagicLeapAudioFunctionLibrary_IsMicMuted_Params params;

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
