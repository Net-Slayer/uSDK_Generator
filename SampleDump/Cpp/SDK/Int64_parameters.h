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
// Parameters
//---------------------------------------------------------------------------

// Function Int64.Int64FunctionLibrary.MakeInt64
struct UInt64FunctionLibrary_MakeInt64_Params
{
	struct FString                                     Int64;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64FunctionLibrary.Conv_Int64ToString
struct UInt64FunctionLibrary_Conv_Int64ToString_Params
{
	struct FInt64                                      Int64;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64FunctionLibrary.Conv_Int64ToInt32
struct UInt64FunctionLibrary_Conv_Int64ToInt32_Params
{
	struct FInt64                                      Int64;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64FunctionLibrary.Conv_Int64ToFloat
struct UInt64FunctionLibrary_Conv_Int64ToFloat_Params
{
	struct FInt64                                      Int64;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64FunctionLibrary.Conv_Int32ToInt64
struct UInt64FunctionLibrary_Conv_Int32ToInt64_Params
{
	int                                                Int32;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64FunctionLibrary.Conv_FloatToInt64
struct UInt64FunctionLibrary_Conv_FloatToInt64_Params
{
	float                                              Float;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64MathLibrary.Subtract_Int64Int64
struct UInt64MathLibrary_Subtract_Int64Int64_Params
{
	struct FInt64                                      A;                                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      B;                                                         // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64MathLibrary.Subtract_Int64Float
struct UInt64MathLibrary_Subtract_Int64Float_Params
{
	struct FInt64                                      A;                                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              B;                                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64MathLibrary.Percent_Int64Int64
struct UInt64MathLibrary_Percent_Int64Int64_Params
{
	struct FInt64                                      A;                                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      B;                                                         // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64MathLibrary.NotEqual_Int64Int64
struct UInt64MathLibrary_NotEqual_Int64Int64_Params
{
	struct FInt64                                      A;                                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      B;                                                         // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64MathLibrary.Multiply_Int64Int64
struct UInt64MathLibrary_Multiply_Int64Int64_Params
{
	struct FInt64                                      A;                                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      B;                                                         // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64MathLibrary.Multiply_Int64Float
struct UInt64MathLibrary_Multiply_Int64Float_Params
{
	struct FInt64                                      A;                                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              B;                                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64MathLibrary.Min
struct UInt64MathLibrary_Min_Params
{
	struct FInt64                                      A;                                                         // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      B;                                                         // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64MathLibrary.Max
struct UInt64MathLibrary_Max_Params
{
	struct FInt64                                      A;                                                         // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      B;                                                         // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64MathLibrary.LessEqual_Int64Int64
struct UInt64MathLibrary_LessEqual_Int64Int64_Params
{
	struct FInt64                                      A;                                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      B;                                                         // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64MathLibrary.Less_Int64Int64
struct UInt64MathLibrary_Less_Int64Int64_Params
{
	struct FInt64                                      A;                                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      B;                                                         // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64MathLibrary.GreaterEqual_Int64Int64
struct UInt64MathLibrary_GreaterEqual_Int64Int64_Params
{
	struct FInt64                                      A;                                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      B;                                                         // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64MathLibrary.Greater_Int64Int64
struct UInt64MathLibrary_Greater_Int64Int64_Params
{
	struct FInt64                                      A;                                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      B;                                                         // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64MathLibrary.EqualEqual_Int64Int64
struct UInt64MathLibrary_EqualEqual_Int64Int64_Params
{
	struct FInt64                                      A;                                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      B;                                                         // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64MathLibrary.Divide_Int64Int64
struct UInt64MathLibrary_Divide_Int64Int64_Params
{
	struct FInt64                                      A;                                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      B;                                                         // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64MathLibrary.Divide_Int64Float
struct UInt64MathLibrary_Divide_Int64Float_Params
{
	struct FInt64                                      A;                                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              B;                                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64MathLibrary.Add_Int64Int64
struct UInt64MathLibrary_Add_Int64Int64_Params
{
	struct FInt64                                      A;                                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      B;                                                         // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64MathLibrary.Add_Int64Float
struct UInt64MathLibrary_Add_Int64Float_Params
{
	struct FInt64                                      A;                                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              B;                                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Int64.Int64MathLibrary.Abs_Int
struct UInt64MathLibrary_Abs_Int_Params
{
	struct FInt64                                      A;                                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt64                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
