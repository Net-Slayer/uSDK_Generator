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

// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature
struct UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Params
{
	MagicLeapIdentity_EMagicLeapIdentityError          ResultCode;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMagicLeapIdentityAttribute>         AttributeValue;                                            // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync
struct UMagicLeapIdentity_RequestAttributeValueAsync_Params
{
	TArray<MagicLeapIdentity_EMagicLeapIdentityKey>    RequestedAttributeList;                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ResultDelegate;                                            // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	MagicLeapIdentity_EMagicLeapIdentityError          ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue
struct UMagicLeapIdentity_RequestAttributeValue_Params
{
	TArray<MagicLeapIdentity_EMagicLeapIdentityKey>    RequestedAttributeList;                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMagicLeapIdentityAttribute>         RequestedAttributeValues;                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapIdentity_EMagicLeapIdentityError          ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature
struct UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Params
{
	MagicLeapIdentity_EMagicLeapIdentityError          ResultCode;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<MagicLeapIdentity_EMagicLeapIdentityKey>    AttributesUpdatedSuccessfully;                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync
struct UMagicLeapIdentity_GetAllAvailableAttributesAsync_Params
{
	struct FScriptDelegate                             ResultDelegate;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes
struct UMagicLeapIdentity_GetAllAvailableAttributes_Params
{
	TArray<MagicLeapIdentity_EMagicLeapIdentityKey>    AvailableAttributes;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapIdentity_EMagicLeapIdentityError          ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature
struct UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Params
{
	MagicLeapIdentity_EMagicLeapIdentityError          ResultCode;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<MagicLeapIdentity_EMagicLeapIdentityKey>    AvailableAttributes;                                       // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
