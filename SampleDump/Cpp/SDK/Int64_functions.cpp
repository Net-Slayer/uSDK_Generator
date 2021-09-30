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
//		Offset -> 0x006286D0
//		Name   -> Function Int64.Int64FunctionLibrary.MakeInt64
//		Flags  -> (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Int64                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FInt64 UInt64FunctionLibrary::STATIC_MakeInt64(const struct FString& Int64)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64FunctionLibrary.MakeInt64");

	UInt64FunctionLibrary_MakeInt64_Params params;
	params.Int64 = Int64;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00627FD0
//		Name   -> Function Int64.Int64FunctionLibrary.Conv_Int64ToString
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      Int64                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UInt64FunctionLibrary::STATIC_Conv_Int64ToString(const struct FInt64& Int64)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64FunctionLibrary.Conv_Int64ToString");

	UInt64FunctionLibrary_Conv_Int64ToString_Params params;
	params.Int64 = Int64;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00627F40
//		Name   -> Function Int64.Int64FunctionLibrary.Conv_Int64ToInt32
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      Int64                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UInt64FunctionLibrary::STATIC_Conv_Int64ToInt32(const struct FInt64& Int64)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64FunctionLibrary.Conv_Int64ToInt32");

	UInt64FunctionLibrary_Conv_Int64ToInt32_Params params;
	params.Int64 = Int64;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00627EB0
//		Name   -> Function Int64.Int64FunctionLibrary.Conv_Int64ToFloat
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      Int64                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UInt64FunctionLibrary::STATIC_Conv_Int64ToFloat(const struct FInt64& Int64)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64FunctionLibrary.Conv_Int64ToFloat");

	UInt64FunctionLibrary_Conv_Int64ToFloat_Params params;
	params.Int64 = Int64;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00627E20
//		Name   -> Function Int64.Int64FunctionLibrary.Conv_Int32ToInt64
//		Flags  -> (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Int32                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FInt64 UInt64FunctionLibrary::STATIC_Conv_Int32ToInt64(int Int32)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64FunctionLibrary.Conv_Int32ToInt64");

	UInt64FunctionLibrary_Conv_Int32ToInt64_Params params;
	params.Int32 = Int32;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00627D90
//		Name   -> Function Int64.Int64FunctionLibrary.Conv_FloatToInt64
//		Flags  -> (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              Float                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FInt64 UInt64FunctionLibrary::STATIC_Conv_FloatToInt64(float Float)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64FunctionLibrary.Conv_FloatToInt64");

	UInt64FunctionLibrary_Conv_FloatToInt64_Params params;
	params.Float = Float;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00628DA0
//		Name   -> Function Int64.Int64MathLibrary.Subtract_Int64Int64
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FInt64 UInt64MathLibrary::STATIC_Subtract_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Subtract_Int64Int64");

	UInt64MathLibrary_Subtract_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00628CC0
//		Name   -> Function Int64.Int64MathLibrary.Subtract_Int64Float
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UInt64MathLibrary::STATIC_Subtract_Int64Float(const struct FInt64& A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Subtract_Int64Float");

	UInt64MathLibrary_Subtract_Int64Float_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00628BE0
//		Name   -> Function Int64.Int64MathLibrary.Percent_Int64Int64
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FInt64 UInt64MathLibrary::STATIC_Percent_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Percent_Int64Int64");

	UInt64MathLibrary_Percent_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00628B00
//		Name   -> Function Int64.Int64MathLibrary.NotEqual_Int64Int64
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInt64MathLibrary::STATIC_NotEqual_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.NotEqual_Int64Int64");

	UInt64MathLibrary_NotEqual_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00628A20
//		Name   -> Function Int64.Int64MathLibrary.Multiply_Int64Int64
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FInt64 UInt64MathLibrary::STATIC_Multiply_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Multiply_Int64Int64");

	UInt64MathLibrary_Multiply_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00628940
//		Name   -> Function Int64.Int64MathLibrary.Multiply_Int64Float
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UInt64MathLibrary::STATIC_Multiply_Int64Float(const struct FInt64& A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Multiply_Int64Float");

	UInt64MathLibrary_Multiply_Int64Float_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00628880
//		Name   -> Function Int64.Int64MathLibrary.Min
//		Flags  -> (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FInt64 UInt64MathLibrary::STATIC_Min(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Min");

	UInt64MathLibrary_Min_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x006287C0
//		Name   -> Function Int64.Int64MathLibrary.Max
//		Flags  -> (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FInt64 UInt64MathLibrary::STATIC_Max(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Max");

	UInt64MathLibrary_Max_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00628510
//		Name   -> Function Int64.Int64MathLibrary.LessEqual_Int64Int64
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInt64MathLibrary::STATIC_LessEqual_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.LessEqual_Int64Int64");

	UInt64MathLibrary_LessEqual_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x006285F0
//		Name   -> Function Int64.Int64MathLibrary.Less_Int64Int64
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInt64MathLibrary::STATIC_Less_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Less_Int64Int64");

	UInt64MathLibrary_Less_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00628350
//		Name   -> Function Int64.Int64MathLibrary.GreaterEqual_Int64Int64
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInt64MathLibrary::STATIC_GreaterEqual_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.GreaterEqual_Int64Int64");

	UInt64MathLibrary_GreaterEqual_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00628430
//		Name   -> Function Int64.Int64MathLibrary.Greater_Int64Int64
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInt64MathLibrary::STATIC_Greater_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Greater_Int64Int64");

	UInt64MathLibrary_Greater_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00628270
//		Name   -> Function Int64.Int64MathLibrary.EqualEqual_Int64Int64
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInt64MathLibrary::STATIC_EqualEqual_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.EqualEqual_Int64Int64");

	UInt64MathLibrary_EqualEqual_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00628190
//		Name   -> Function Int64.Int64MathLibrary.Divide_Int64Int64
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FInt64 UInt64MathLibrary::STATIC_Divide_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Divide_Int64Int64");

	UInt64MathLibrary_Divide_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x006280B0
//		Name   -> Function Int64.Int64MathLibrary.Divide_Int64Float
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UInt64MathLibrary::STATIC_Divide_Int64Float(const struct FInt64& A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Divide_Int64Float");

	UInt64MathLibrary_Divide_Int64Float_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00627CB0
//		Name   -> Function Int64.Int64MathLibrary.Add_Int64Int64
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FInt64 UInt64MathLibrary::STATIC_Add_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Add_Int64Int64");

	UInt64MathLibrary_Add_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00627BD0
//		Name   -> Function Int64.Int64MathLibrary.Add_Int64Float
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UInt64MathLibrary::STATIC_Add_Int64Float(const struct FInt64& A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Add_Int64Float");

	UInt64MathLibrary_Add_Int64Float_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00627B30
//		Name   -> Function Int64.Int64MathLibrary.Abs_Int
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInt64                                      A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FInt64                                      ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FInt64 UInt64MathLibrary::STATIC_Abs_Int(const struct FInt64& A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Abs_Int");

	UInt64MathLibrary_Abs_Int_Params params;
	params.A = A;

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
