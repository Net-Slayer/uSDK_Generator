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
//		Name   -> DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UWebBrowser::OnUrlChanged__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature");

	UWebBrowser_OnUrlChanged__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Frame                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebBrowser::OnBeforePopup__DelegateSignature(const struct FString& URL, const struct FString& Frame)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature");

	UWebBrowser_OnBeforePopup__DelegateSignature_Params params;
	params.URL = URL;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0062C610
//		Name   -> Function WebBrowserWidget.WebBrowser.LoadURL
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     NewURL                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebBrowser::LoadURL(const struct FString& NewURL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.LoadURL");

	UWebBrowser_LoadURL_Params params;
	params.NewURL = NewURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0062C480
//		Name   -> Function WebBrowserWidget.WebBrowser.LoadString
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Contents                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     DummyURL                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebBrowser::LoadString(const struct FString& Contents, const struct FString& DummyURL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.LoadString");

	UWebBrowser_LoadString_Params params;
	params.Contents = Contents;
	params.DummyURL = DummyURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0062C400
//		Name   -> Function WebBrowserWidget.WebBrowser.GetUrl
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UWebBrowser::GetUrl()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.GetUrl");

	UWebBrowser_GetUrl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0062C360
//		Name   -> Function WebBrowserWidget.WebBrowser.GetTitleText
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UWebBrowser::GetTitleText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.GetTitleText");

	UWebBrowser_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0062C2C0
//		Name   -> Function WebBrowserWidget.WebBrowser.ExecuteJavascript
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ScriptText                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebBrowser::ExecuteJavascript(const struct FString& ScriptText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.ExecuteJavascript");

	UWebBrowser_ExecuteJavascript_Params params;
	params.ScriptText = ScriptText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
