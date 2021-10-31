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
//		Offset -> 0x00D2AFB0
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     DataToStore                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_PutSecureVector(const struct FString& Key, const struct FVector& DataToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector");

	UMagicLeapSecureStorage_PutSecureVector_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2B2A0
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  DataToStore                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_PutSecureTransform(const struct FString& Key, const struct FTransform& DataToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform");

	UMagicLeapSecureStorage_PutSecureTransform_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2BA30
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     DataToStore                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_PutSecureString(const struct FString& Key, const struct FString& DataToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString");

	UMagicLeapSecureStorage_PutSecureString_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2B950
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USaveGame*                                   ObjectToStore                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_PutSecureSaveGame(const struct FString& Key, class USaveGame* ObjectToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame");

	UMagicLeapSecureStorage_PutSecureSaveGame_Params params;
	params.Key = Key;
	params.ObjectToStore = ObjectToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2AFB0
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    DataToStore                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_PutSecureRotator(const struct FString& Key, const struct FRotator& DataToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator");

	UMagicLeapSecureStorage_PutSecureRotator_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2B790
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int64_t                                            DataToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_PutSecureInt64(const struct FString& Key, int64_t DataToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64");

	UMagicLeapSecureStorage_PutSecureInt64_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2B870
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                DataToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_PutSecureInt(const struct FString& Key, int DataToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt");

	UMagicLeapSecureStorage_PutSecureInt_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2B6A0
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DataToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_PutSecureFloat(const struct FString& Key, float DataToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat");

	UMagicLeapSecureStorage_PutSecureFloat_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2B5C0
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      DataToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_PutSecureByte(const struct FString& Key, unsigned char DataToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte");

	UMagicLeapSecureStorage_PutSecureByte_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2B4E0
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               DataToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_PutSecureBool(const struct FString& Key, bool DataToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool");

	UMagicLeapSecureStorage_PutSecureBool_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2B3E0
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        DataToStore                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_PutSecureArray(const struct FString& Key, TArray<int> DataToStore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray");

	UMagicLeapSecureStorage_PutSecureArray_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2AFB0
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_GetSecureVector(const struct FString& Key, struct FVector* DataToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector");

	UMagicLeapSecureStorage_GetSecureVector_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2B2A0
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  DataToRetrieve                                             (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_GetSecureTransform(const struct FString& Key, struct FTransform* DataToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform");

	UMagicLeapSecureStorage_GetSecureTransform_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2B190
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_GetSecureString(const struct FString& Key, struct FString* DataToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString");

	UMagicLeapSecureStorage_GetSecureString_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2B0A0
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USaveGame*                                   ObjectToRetrieve                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_GetSecureSaveGame(const struct FString& Key, class USaveGame** ObjectToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame");

	UMagicLeapSecureStorage_GetSecureSaveGame_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ObjectToRetrieve != nullptr)
		*ObjectToRetrieve = params.ObjectToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2AFB0
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_GetSecureRotator(const struct FString& Key, struct FRotator* DataToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator");

	UMagicLeapSecureStorage_GetSecureRotator_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2ADD0
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int64_t                                            DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_GetSecureInt64(const struct FString& Key, int64_t* DataToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64");

	UMagicLeapSecureStorage_GetSecureInt64_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2AEC0
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_GetSecureInt(const struct FString& Key, int* DataToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt");

	UMagicLeapSecureStorage_GetSecureInt_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2ACE0
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_GetSecureFloat(const struct FString& Key, float* DataToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat");

	UMagicLeapSecureStorage_GetSecureFloat_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2ABF0
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_GetSecureByte(const struct FString& Key, unsigned char* DataToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte");

	UMagicLeapSecureStorage_GetSecureByte_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2ABF0
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_GetSecureBool(const struct FString& Key, bool* DataToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool");

	UMagicLeapSecureStorage_GetSecureBool_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2AAF0
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_GetSecureArray(const struct FString& Key, TArray<int>* DataToRetrieve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray");

	UMagicLeapSecureStorage_GetSecureArray_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D2AA50
//		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSecureStorage::STATIC_DeleteSecureData(const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData");

	UMagicLeapSecureStorage_DeleteSecureData_Params params;
	params.Key = Key;

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
