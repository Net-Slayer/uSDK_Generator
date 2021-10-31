#pragma once

// Name: Mordhau, Version: Patch23


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

// DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
struct UWebBrowser_OnUrlChanged__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
struct UWebBrowser_OnBeforePopup__DelegateSignature_Params
{
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Frame;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WebBrowserWidget.WebBrowser.LoadURL
struct UWebBrowser_LoadURL_Params
{
	struct FString                                     NewURL;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WebBrowserWidget.WebBrowser.LoadString
struct UWebBrowser_LoadString_Params
{
	struct FString                                     Contents;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DummyURL;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WebBrowserWidget.WebBrowser.GetUrl
struct UWebBrowser_GetUrl_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function WebBrowserWidget.WebBrowser.GetTitleText
struct UWebBrowser_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function WebBrowserWidget.WebBrowser.ExecuteJavascript
struct UWebBrowser_ExecuteJavascript_Params
{
	struct FString                                     ScriptText;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
