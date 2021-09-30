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
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_MordhauCharacterAnimation.AB_MordhauCharacterAnimation_C
// 0x1E638 (FullSize[0x1F498] - InheritedSize[0x0E60])
class UAB_MordhauCharacterAnimation_C : public UMordhauAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0E60(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_208;                              // 0x0E68(0x0108)
	struct FAnimNode_Dismemberment                     AnimGraphNode_Dismemberment;                               // 0x0F70(0x00D8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_4;                        // 0x1048(0x00F0)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_3;                        // 0x1138(0x00F0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_5;                         // 0x1228(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_4;                         // 0x1270(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_3;                         // 0x12B8(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_11;                            // 0x1300(0x00C8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_10;                            // 0x13C8(0x00C8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_207;                              // 0x1490(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_206;                              // 0x1598(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_205;                              // 0x16A0(0x0108)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_44;                                 // 0x17A8(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_43;                                 // 0x1898(0x00F0)
	struct FAnimNode_WeightShift                       AnimGraphNode_WeightShift;                                 // 0x1988(0x0118)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_204;                              // 0x1AA0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_203;                              // 0x1BA8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_202;                              // 0x1CB0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_201;                              // 0x1DB8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_200;                              // 0x1EC0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_199;                              // 0x1FC8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_198;                              // 0x20D0(0x0108)
	unsigned char                                      UnknownData_AKV4[0x8];                                     // 0x21D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIKOffset                   AnimGraphNode_TwoBoneIKOffset_8;                           // 0x21E0(0x0210)
	struct FAnimNode_TwoBoneIKOffset                   AnimGraphNode_TwoBoneIKOffset_7;                           // 0x23F0(0x0210)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_197;                              // 0x2600(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_196;                              // 0x2708(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_195;                              // 0x2810(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_194;                              // 0x2918(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_193;                              // 0x2A20(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_192;                              // 0x2B28(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_191;                              // 0x2C30(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_190;                              // 0x2D38(0x0108)
	struct FAnimNode_FaceCustomization                 AnimGraphNode_FaceCustomization;                           // 0x2E40(0x00E8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x2F28(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_141;                        // 0x2FE0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_140;                        // 0x3008(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_139;                        // 0x3030(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_138;                        // 0x3058(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_137;                        // 0x3080(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_136;                        // 0x30A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_135;                        // 0x30D0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_57;                           // 0x30F8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_68;                              // 0x3170(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_56;                           // 0x31A0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_67;                              // 0x3218(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_55;                           // 0x3248(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_66;                              // 0x32C0(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_189;                              // 0x32F0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_188;                              // 0x33F8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_187;                              // 0x3500(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_186;                              // 0x3608(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_185;                              // 0x3710(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_184;                              // 0x3818(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_183;                              // 0x3920(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_182;                              // 0x3A28(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_181;                              // 0x3B30(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_180;                              // 0x3C38(0x0108)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_9;                             // 0x3D40(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_54;                           // 0x3E08(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_53;                           // 0x3E80(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8;                             // 0x3EF8(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_31;                         // 0x3FC0(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_30;                         // 0x40A0(0x00E0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_28;                    // 0x4180(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_27;                    // 0x41A0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_179;                              // 0x41C0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_178;                              // 0x42C8(0x0108)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8;                           // 0x43D0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_65;                              // 0x4470(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_10;                             // 0x44A0(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_134;                        // 0x4550(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_133;                        // 0x4578(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_132;                        // 0x45A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_131;                        // 0x45C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_130;                        // 0x45F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_129;                        // 0x4618(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_128;                        // 0x4640(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_127;                        // 0x4668(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_126;                        // 0x4690(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_125;                        // 0x46B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_124;                        // 0x46E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_123;                        // 0x4708(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_122;                        // 0x4730(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_121;                        // 0x4758(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_120;                        // 0x4780(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_119;                        // 0x47A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_118;                        // 0x47D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_117;                        // 0x47F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_116;                        // 0x4820(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_115;                        // 0x4848(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_114;                        // 0x4870(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_113;                        // 0x4898(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_26;                    // 0x48C0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_52;                           // 0x48E0(0x0078)
	struct FAnimNode_RotateAroundPivot                 AnimGraphNode_RotateAroundPivot_16;                        // 0x4958(0x00F8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_177;                              // 0x4A50(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_27;                    // 0x4B58(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_64;                              // 0x4B78(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_51;                           // 0x4BA8(0x0078)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_15;                              // 0x4C20(0x00C8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_26;                    // 0x4CE8(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_25;                    // 0x4D08(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_25;                    // 0x4D28(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_176;                              // 0x4D48(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_24;                    // 0x4E50(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_175;                              // 0x4E70(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_174;                              // 0x4F78(0x0108)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_50;                           // 0x5080(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_63;                              // 0x50F8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_49;                           // 0x5128(0x0078)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_14;                              // 0x51A0(0x00C8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_23;                    // 0x5268(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_24;                    // 0x5288(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_173;                              // 0x52A8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_172;                              // 0x53B0(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_23;                    // 0x54B8(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_22;                    // 0x54D8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_171;                              // 0x54F8(0x0108)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_48;                           // 0x5600(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_62;                              // 0x5678(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_22;                    // 0x56A8(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_21;                    // 0x56C8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_170;                              // 0x56E8(0x0108)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_112;                        // 0x57F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_111;                        // 0x5818(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_47;                           // 0x5840(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_61;                              // 0x58B8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_46;                           // 0x58E8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_60;                              // 0x5960(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9;                              // 0x5990(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_59;                              // 0x5A40(0x0030)
	struct FAnimNode_RotateAroundPivot                 AnimGraphNode_RotateAroundPivot_15;                        // 0x5A70(0x00F8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_169;                              // 0x5B68(0x0108)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_42;                                 // 0x5C70(0x00F0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_20;                                // 0x5D60(0x01E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_168;                              // 0x5F40(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_167;                              // 0x6048(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_166;                              // 0x6150(0x0108)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_110;                        // 0x6258(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_109;                        // 0x6280(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_108;                        // 0x62A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_107;                        // 0x62D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_106;                        // 0x62F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_105;                        // 0x6320(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_104;                        // 0x6348(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_103;                        // 0x6370(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_102;                        // 0x6398(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_101;                        // 0x63C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_100;                        // 0x63E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_99;                         // 0x6410(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_98;                         // 0x6438(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_97;                         // 0x6460(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_96;                         // 0x6488(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_95;                         // 0x64B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_94;                         // 0x64D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_93;                         // 0x6500(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_92;                         // 0x6528(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_91;                         // 0x6550(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_90;                         // 0x6578(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_89;                         // 0x65A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_88;                         // 0x65C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87;                         // 0x65F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_86;                         // 0x6618(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_85;                         // 0x6640(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_84;                         // 0x6668(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_83;                         // 0x6690(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_82;                         // 0x66B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_81;                         // 0x66E0(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_29;                         // 0x6708(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_58;                              // 0x67E8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_45;                           // 0x6818(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_57;                              // 0x6890(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_44;                           // 0x68C0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_56;                              // 0x6938(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_8;                              // 0x6968(0x0018)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_13;                              // 0x6980(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_28;                         // 0x6A48(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_55;                              // 0x6B28(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_27;                         // 0x6B58(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_54;                              // 0x6C38(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_43;                           // 0x6C68(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_53;                              // 0x6CE0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_42;                           // 0x6D10(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_52;                              // 0x6D88(0x0030)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_12;                              // 0x6DB8(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_41;                           // 0x6E80(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_40;                           // 0x6EF8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_51;                              // 0x6F70(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_26;                         // 0x6FA0(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_50;                              // 0x7080(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_25;                         // 0x70B0(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_49;                              // 0x7190(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_39;                           // 0x71C0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_48;                              // 0x7238(0x0030)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_11;                              // 0x7268(0x00C8)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_7;                              // 0x7330(0x0018)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_24;                         // 0x7348(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_47;                              // 0x7428(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_6;                              // 0x7458(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_46;                              // 0x7470(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8;                              // 0x74A0(0x00B0)
	struct FAnimNode_AttackAngling                     AnimGraphNode_AttackAngling_3;                             // 0x7550(0x0200)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_165;                              // 0x7750(0x0108)
	unsigned char                                      UnknownData_VSZR[0x8];                                     // 0x7858(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_19;                                // 0x7860(0x01E0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_41;                                 // 0x7A40(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_40;                                 // 0x7B30(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_39;                                 // 0x7C20(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_38;                                 // 0x7D10(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_37;                                 // 0x7E00(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_36;                                 // 0x7EF0(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_35;                                 // 0x7FE0(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_34;                                 // 0x80D0(0x00F0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_21;                    // 0x81C0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_20;                    // 0x81E0(0x0020)
	struct FAnimNode_TwoBoneIKOffset                   AnimGraphNode_TwoBoneIKOffset_6;                           // 0x8200(0x0210)
	struct FAnimNode_TwoBoneIKOffset                   AnimGraphNode_TwoBoneIKOffset_5;                           // 0x8410(0x0210)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_164;                              // 0x8620(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_163;                              // 0x8728(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_162;                              // 0x8830(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_161;                              // 0x8938(0x0108)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_33;                                 // 0x8A40(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_32;                                 // 0x8B30(0x00F0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_2;                         // 0x8C20(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                           // 0x8C68(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_7;                             // 0x8CB0(0x00C8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_160;                              // 0x8D78(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_159;                              // 0x8E80(0x0108)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_31;                                 // 0x8F88(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_30;                                 // 0x9078(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_29;                                 // 0x9168(0x00F0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_158;                              // 0x9258(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_157;                              // 0x9360(0x0108)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_28;                                 // 0x9468(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_27;                                 // 0x9558(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_26;                                 // 0x9648(0x00F0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_156;                              // 0x9738(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_155;                              // 0x9840(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_154;                              // 0x9948(0x0108)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8;                          // 0x9A50(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6;                                      // 0x9B10(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_20;                    // 0x9B58(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_19;                    // 0x9B78(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_45;                              // 0x9B98(0x0030)
	struct FAnimNode_RotateAroundPivot                 AnimGraphNode_RotateAroundPivot_14;                        // 0x9BC8(0x00F8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_153;                              // 0x9CC0(0x0108)
	unsigned char                                      UnknownData_GO2D[0x8];                                     // 0x9DC8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_18;                                // 0x9DD0(0x01E0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_25;                                 // 0x9FB0(0x00F0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_17;                                // 0xA0A0(0x01E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_152;                              // 0xA280(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_151;                              // 0xA388(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_150;                              // 0xA490(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_149;                              // 0xA598(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_148;                              // 0xA6A0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_147;                              // 0xA7A8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_146;                              // 0xA8B0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_145;                              // 0xA9B8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_144;                              // 0xAAC0(0x0108)
	struct FAnimNode_RotateAroundPivot                 AnimGraphNode_RotateAroundPivot_13;                        // 0xABC8(0x00F8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_143;                              // 0xACC0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_142;                              // 0xADC8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_141;                              // 0xAED0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_140;                              // 0xAFD8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_139;                              // 0xB0E0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_138;                              // 0xB1E8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_137;                              // 0xB2F0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_136;                              // 0xB3F8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_135;                              // 0xB500(0x0108)
	struct FAnimNode_AttackAngling                     AnimGraphNode_AttackAngling_2;                             // 0xB608(0x0200)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_80;                         // 0xB808(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_79;                         // 0xB830(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_78;                         // 0xB858(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_77;                         // 0xB880(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_76;                         // 0xB8A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_75;                         // 0xB8D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_74;                         // 0xB8F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73;                         // 0xB920(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_72;                         // 0xB948(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_71;                         // 0xB970(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_70;                         // 0xB998(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_69;                         // 0xB9C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_68;                         // 0xB9E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_67;                         // 0xBA10(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_66;                         // 0xBA38(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_65;                         // 0xBA60(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_64;                         // 0xBA88(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_63;                         // 0xBAB0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_62;                         // 0xBAD8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_61;                         // 0xBB00(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_60;                         // 0xBB28(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_59;                         // 0xBB50(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_58;                         // 0xBB78(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_57;                         // 0xBBA0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_56;                         // 0xBBC8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_55;                         // 0xBBF0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_54;                         // 0xBC18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_53;                         // 0xBC40(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_52;                         // 0xBC68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_51;                         // 0xBC90(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_23;                         // 0xBCB8(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_44;                              // 0xBD98(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_38;                           // 0xBDC8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_43;                              // 0xBE40(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_37;                           // 0xBE70(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_42;                              // 0xBEE8(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_5;                              // 0xBF18(0x0018)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_10;                              // 0xBF30(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_22;                         // 0xBFF8(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_41;                              // 0xC0D8(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_21;                         // 0xC108(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_40;                              // 0xC1E8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_36;                           // 0xC218(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_39;                              // 0xC290(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_35;                           // 0xC2C0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_38;                              // 0xC338(0x0030)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_9;                               // 0xC368(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_34;                           // 0xC430(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_33;                           // 0xC4A8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_37;                              // 0xC520(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_20;                         // 0xC550(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_36;                              // 0xC630(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_19;                         // 0xC660(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_35;                              // 0xC740(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_32;                           // 0xC770(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_34;                              // 0xC7E8(0x0030)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_8;                               // 0xC818(0x00C8)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_4;                              // 0xC8E0(0x0018)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_18;                         // 0xC8F8(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_33;                              // 0xC9D8(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_3;                              // 0xCA08(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_32;                              // 0xCA20(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7;                              // 0xCA50(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_134;                              // 0xCB00(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_133;                              // 0xCC08(0x0108)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_16;                                // 0xCD10(0x01E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_132;                              // 0xCEF0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_131;                              // 0xCFF8(0x0108)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6;                             // 0xD100(0x00C8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_130;                              // 0xD1C8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_129;                              // 0xD2D0(0x0108)
	struct FAnimNode_RotateAroundPivot                 AnimGraphNode_RotateAroundPivot_12;                        // 0xD3D8(0x00F8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_128;                              // 0xD4D0(0x0108)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_50;                         // 0xD5D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_49;                         // 0xD600(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_48;                         // 0xD628(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_47;                         // 0xD650(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31;                           // 0xD678(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_31;                              // 0xD6F0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30;                           // 0xD720(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_30;                              // 0xD798(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_19;                    // 0xD7C8(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_18;                    // 0xD7E8(0x0020)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator;                         // 0xD808(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_29;                              // 0xD8F0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6;                              // 0xD920(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_46;                         // 0xD9D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_45;                         // 0xD9F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44;                         // 0xDA20(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_43;                         // 0xDA48(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29;                           // 0xDA70(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_28;                              // 0xDAE8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_28;                           // 0xDB18(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_27;                              // 0xDB90(0x0030)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5;                             // 0xDBC0(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27;                           // 0xDC88(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26;                           // 0xDD00(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_4;                             // 0xDD78(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_17;                         // 0xDE40(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_16;                         // 0xDF20(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7;                           // 0xE000(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_26;                              // 0xE0A0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5;                              // 0xE0D0(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_127;                              // 0xE180(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_126;                              // 0xE288(0x0108)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_24;                                 // 0xE390(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_23;                                 // 0xE480(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_22;                                 // 0xE570(0x00F0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_125;                              // 0xE660(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_124;                              // 0xE768(0x0108)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_21;                                 // 0xE870(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_20;                                 // 0xE960(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_19;                                 // 0xEA50(0x00F0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_123;                              // 0xEB40(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_122;                              // 0xEC48(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_121;                              // 0xED50(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_120;                              // 0xEE58(0x0108)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7;                          // 0xEF60(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5;                                      // 0xF020(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_18;                    // 0xF068(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_17;                    // 0xF088(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_25;                              // 0xF0A8(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_119;                              // 0xF0D8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_118;                              // 0xF1E0(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_17;                    // 0xF2E8(0x0020)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6;                          // 0xF308(0x00C0)
	unsigned char                                      UnknownData_LV5C[0x8];                                     // 0xF3C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_15;                                // 0xF3D0(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_14;                                // 0xF5B0(0x01E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_117;                              // 0xF790(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_16;                    // 0xF898(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_15;                         // 0xF8B8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_14;                         // 0xF998(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_116;                              // 0xFA78(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_115;                              // 0xFB80(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_114;                              // 0xFC88(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_113;                              // 0xFD90(0x0108)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_7;                               // 0xFE98(0x00C8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_112;                              // 0xFF60(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_111;                              // 0x10068(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_110;                              // 0x10170(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_109;                              // 0x10278(0x0108)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_13;                                // 0x10380(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_12;                                // 0x10560(0x01E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_108;                              // 0x10740(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_107;                              // 0x10848(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_106;                              // 0x10950(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_105;                              // 0x10A58(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_104;                              // 0x10B60(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_103;                              // 0x10C68(0x0108)
	struct FAnimNode_RotateAroundPivot                 AnimGraphNode_RotateAroundPivot_11;                        // 0x10D70(0x00F8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_13;                         // 0x10E68(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25;                           // 0x10F48(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                           // 0x10FC0(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_16;                    // 0x11060(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_15;                    // 0x11080(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_24;                              // 0x110A0(0x0030)
	struct FAnimNode_RotateAroundPivot                 AnimGraphNode_RotateAroundPivot_10;                        // 0x110D0(0x00F8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_102;                              // 0x111C8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_101;                              // 0x112D0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_100;                              // 0x113D8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_99;                               // 0x114E0(0x0108)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_12;                         // 0x115E8(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_42;                         // 0x116C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_41;                         // 0x116F0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24;                           // 0x11718(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_23;                              // 0x11790(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_23;                           // 0x117C0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_22;                              // 0x11838(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4;                              // 0x11868(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5;                          // 0x11918(0x00C0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_15;                    // 0x119D8(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_14;                    // 0x119F8(0x0020)
	unsigned char                                      UnknownData_50WC[0x8];                                     // 0x11A18(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_11;                                // 0x11A20(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_10;                                // 0x11C00(0x01E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_21;                              // 0x11DE0(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_98;                               // 0x11E10(0x0108)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_18;                                 // 0x11F18(0x00F0)
	struct FAnimNode_BlendBetweenBones                 AnimGraphNode_BlendBetweenBones_2;                         // 0x12008(0x0110)
	struct FAnimNode_BlendBetweenBones                 AnimGraphNode_BlendBetweenBones;                           // 0x12118(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_97;                               // 0x12228(0x0108)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_17;                                 // 0x12330(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_16;                                 // 0x12420(0x00F0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_96;                               // 0x12510(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_95;                               // 0x12618(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_94;                               // 0x12720(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_93;                               // 0x12828(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_92;                               // 0x12930(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_91;                               // 0x12A38(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_90;                               // 0x12B40(0x0108)
	struct FAnimNode_RotateAroundPivot                 AnimGraphNode_RotateAroundPivot_9;                         // 0x12C48(0x00F8)
	struct FAnimNode_RotateAroundPivot                 AnimGraphNode_RotateAroundPivot_8;                         // 0x12D40(0x00F8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_89;                               // 0x12E38(0x0108)
	struct FAnimNode_RotateAroundPivot                 AnimGraphNode_RotateAroundPivot_7;                         // 0x12F40(0x00F8)
	struct FAnimNode_RotateAroundPivot                 AnimGraphNode_RotateAroundPivot_6;                         // 0x13038(0x00F8)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_9;                                 // 0x13130(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_8;                                 // 0x13310(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_7;                                 // 0x134F0(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_6;                                 // 0x136D0(0x01E0)
	struct FAnimNode_RotateAroundPivot                 AnimGraphNode_RotateAroundPivot_5;                         // 0x138B0(0x00F8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_88;                               // 0x139A8(0x0108)
	struct FAnimNode_RotateAroundPivot                 AnimGraphNode_RotateAroundPivot_4;                         // 0x13AB0(0x00F8)
	struct FAnimNode_RotateAroundPivot                 AnimGraphNode_RotateAroundPivot_3;                         // 0x13BA8(0x00F8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_87;                               // 0x13CA0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_86;                               // 0x13DA8(0x0108)
	struct FAnimNode_TwoBoneIKOffset                   AnimGraphNode_TwoBoneIKOffset_4;                           // 0x13EB0(0x0210)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_85;                               // 0x140C0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_84;                               // 0x141C8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_83;                               // 0x142D0(0x0108)
	unsigned char                                      UnknownData_50O6[0x8];                                     // 0x143D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIKOffset                   AnimGraphNode_TwoBoneIKOffset_3;                           // 0x143E0(0x0210)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4;                                      // 0x145F0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_14;                    // 0x14638(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_82;                               // 0x14658(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_81;                               // 0x14760(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_80;                               // 0x14868(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_79;                               // 0x14970(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_13;                    // 0x14A78(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_78;                               // 0x14A98(0x0108)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22;                           // 0x14BA0(0x0078)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_15;                                 // 0x14C18(0x00F0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_77;                               // 0x14D08(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_76;                               // 0x14E10(0x0108)
	unsigned char                                      UnknownData_XNMY[0x8];                                     // 0x14F18(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_5;                                 // 0x14F20(0x01E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_75;                               // 0x15100(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_74;                               // 0x15208(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_73;                               // 0x15310(0x0108)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_6;                               // 0x15418(0x00C8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_72;                               // 0x154E0(0x0108)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21;                           // 0x155E8(0x0078)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_13;                    // 0x15660(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_12;                    // 0x15680(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20;                           // 0x156A0(0x0078)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_5;                               // 0x15718(0x00C8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_71;                               // 0x157E0(0x0108)
	struct FAnimNode_RotateAroundPivot                 AnimGraphNode_RotateAroundPivot_2;                         // 0x158E8(0x00F8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_70;                               // 0x159E0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_69;                               // 0x15AE8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_68;                               // 0x15BF0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_67;                               // 0x15CF8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_66;                               // 0x15E00(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_65;                               // 0x15F08(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_64;                               // 0x16010(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_63;                               // 0x16118(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_62;                               // 0x16220(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_61;                               // 0x16328(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_60;                               // 0x16430(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_59;                               // 0x16538(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_58;                               // 0x16640(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_57;                               // 0x16748(0x0108)
	struct FAnimNode_AttackAngling                     AnimGraphNode_AttackAngling;                               // 0x16850(0x0200)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_56;                               // 0x16A50(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_55;                               // 0x16B58(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_54;                               // 0x16C60(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_53;                               // 0x16D68(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_12;                    // 0x16E70(0x0020)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_14;                                 // 0x16E90(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_13;                                 // 0x16F80(0x00F0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4;                          // 0x17070(0x00C0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_11;                    // 0x17130(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_52;                               // 0x17150(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_51;                               // 0x17258(0x0108)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_12;                                 // 0x17360(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_11;                                 // 0x17450(0x00F0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_50;                               // 0x17540(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_49;                               // 0x17648(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_48;                               // 0x17750(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_47;                               // 0x17858(0x0108)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x17960(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                          // 0x17988(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                      // 0x17A48(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_10;                    // 0x17A90(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_46;                               // 0x17AB0(0x0108)
	unsigned char                                      UnknownData_LOQO[0x8];                                     // 0x17BB8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_4;                                 // 0x17BC0(0x01E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x17DA0(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_45;                               // 0x17DC8(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_11;                    // 0x17ED0(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                      // 0x17EF0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_44;                               // 0x17F38(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_43;                               // 0x18040(0x0108)
	unsigned char                                      UnknownData_LPBG[0x8];                                     // 0x18148(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_3;                                 // 0x18150(0x01E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_42;                               // 0x18330(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_41;                               // 0x18438(0x0108)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_40;                         // 0x18540(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_39;                         // 0x18568(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_38;                         // 0x18590(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_37;                         // 0x185B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_36;                         // 0x185E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_35;                         // 0x18608(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34;                         // 0x18630(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33;                         // 0x18658(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_32;                         // 0x18680(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31;                         // 0x186A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30;                         // 0x186D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29;                         // 0x186F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_28;                         // 0x18720(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27;                         // 0x18748(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26;                         // 0x18770(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25;                         // 0x18798(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24;                         // 0x187C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23;                         // 0x187E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22;                         // 0x18810(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21;                         // 0x18838(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20;                         // 0x18860(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                         // 0x18888(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                         // 0x188B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                         // 0x188D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                         // 0x18900(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                         // 0x18928(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                         // 0x18950(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                         // 0x18978(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                         // 0x189A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                         // 0x189C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                         // 0x189F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                          // 0x18A18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                          // 0x18A40(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x18A68(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19;                           // 0x18A90(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_20;                              // 0x18B08(0x0030)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_4;                               // 0x18B38(0x00C8)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_2;                              // 0x18C00(0x0018)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_11;                         // 0x18C18(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_19;                              // 0x18CF8(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_10;                         // 0x18D28(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_18;                              // 0x18E08(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18;                           // 0x18E38(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_17;                              // 0x18EB0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                           // 0x18EE0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_16;                              // 0x18F58(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9;                          // 0x18F88(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_15;                              // 0x19068(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8;                          // 0x19098(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                              // 0x19178(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                           // 0x191A8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                              // 0x19220(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                           // 0x19250(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                              // 0x192C8(0x0030)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_3;                               // 0x192F8(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                           // 0x193C0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                           // 0x19438(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                              // 0x194B0(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7;                          // 0x194E0(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                              // 0x195C0(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6;                          // 0x195F0(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                               // 0x196D0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                           // 0x19700(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                               // 0x19778(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5;                          // 0x197A8(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                               // 0x19888(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose;                                // 0x198B8(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                               // 0x198D0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                              // 0x19900(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3;                             // 0x199B0(0x00C8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_40;                               // 0x19A78(0x0108)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_10;                                 // 0x19B80(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_9;                                  // 0x19C70(0x00F0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x19D60(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                          // 0x19DA8(0x00C0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x19E68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x19E90(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x19EB8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x19EE0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x19F08(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_10;                    // 0x19F30(0x0020)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_8;                                  // 0x19F50(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_7;                                  // 0x1A040(0x00F0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_39;                               // 0x1A130(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9;                     // 0x1A238(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                           // 0x1A258(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x1A2D0(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_38;                               // 0x1A300(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9;                     // 0x1A408(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_37;                               // 0x1A428(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8;                     // 0x1A530(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_36;                               // 0x1A550(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7;                     // 0x1A658(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8;                     // 0x1A678(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_35;                               // 0x1A698(0x0108)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_6;                                  // 0x1A7A0(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_5;                                  // 0x1A890(0x00F0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_34;                               // 0x1A980(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7;                     // 0x1AA88(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6;                     // 0x1AAA8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                           // 0x1AAC8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                            // 0x1AB40(0x0078)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_2;                               // 0x1ABB8(0x00C8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x1AC80(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_33;                               // 0x1ACB0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_32;                               // 0x1ADB8(0x0108)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_4;                                  // 0x1AEC0(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_3;                                  // 0x1AFB0(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_2;                                  // 0x1B0A0(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone;                                    // 0x1B190(0x00F0)
	struct FAnimNode_RotateAroundPivot                 AnimGraphNode_RotateAroundPivot;                           // 0x1B280(0x00F8)
	unsigned char                                      UnknownData_MZAH[0x8];                                     // 0x1B378(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_2;                                 // 0x1B380(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK;                                   // 0x1B560(0x01E0)
	struct FAnimNode_SpeedWarping                      AnimGraphNode_SpeedWarping;                                // 0x1B740(0x0180)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                           // 0x1B8C0(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_31;                               // 0x1B960(0x0108)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                           // 0x1BA68(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                            // 0x1BB08(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                            // 0x1BB80(0x0078)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_30;                               // 0x1BBF8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_29;                               // 0x1BD00(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_28;                               // 0x1BE08(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_27;                               // 0x1BF10(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_26;                               // 0x1C018(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_25;                               // 0x1C120(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5;                     // 0x1C228(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6;                     // 0x1C248(0x0020)
	unsigned char                                      UnknownData_ROR4[0x8];                                     // 0x1C268(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIKOffset                   AnimGraphNode_TwoBoneIKOffset_2;                           // 0x1C270(0x0210)
	struct FAnimNode_TwoBoneIKOffset                   AnimGraphNode_TwoBoneIKOffset;                             // 0x1C480(0x0210)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_24;                               // 0x1C690(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_23;                               // 0x1C798(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5;                     // 0x1C8A0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                     // 0x1C8C0(0x0020)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                 // 0x1C8E0(0x00C8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_22;                               // 0x1C9A8(0x0108)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x1CAB0(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                           // 0x1CB28(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x1CBC8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x1CC68(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                          // 0x1CCE0(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                          // 0x1CDC0(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_21;                               // 0x1CEA0(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                     // 0x1CFA8(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                     // 0x1CFC8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_20;                               // 0x1CFE8(0x0108)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x1D0F0(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                          // 0x1D190(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x1D270(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                              // 0x1D2A0(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_19;                               // 0x1D350(0x0108)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x1D458(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x1D488(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                     // 0x1D4B0(0x0020)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                                // 0x1D4D0(0x0018)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt;                              // 0x1D4E8(0x00A0)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose;                                 // 0x1D588(0x0010)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x1D598(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x1D5B8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x1D630(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x1D6A8(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x1D720(0x00C0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x1D7E0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_18;                               // 0x1D800(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_17;                               // 0x1D908(0x0108)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2;                             // 0x1DA10(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x1DAD8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x1DBB8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x1DC30(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x1DC60(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x1DD10(0x0020)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                               // 0x1DD30(0x00C8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_16;                               // 0x1DDF8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_15;                               // 0x1DF00(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_14;                               // 0x1E008(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_13;                               // 0x1E110(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x1E218(0x0020)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x1E238(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_12;                               // 0x1E268(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_11;                               // 0x1E370(0x0108)
	struct FAnimNode_MordhauSpringBone                 AnimGraphNode_MordhauSpringBone_3;                         // 0x1E478(0x0148)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_10;                               // 0x1E5C0(0x0108)
	struct FAnimNode_MordhauSpringBone                 AnimGraphNode_MordhauSpringBone_2;                         // 0x1E6C8(0x0148)
	struct FAnimNode_MordhauSpringBone                 AnimGraphNode_MordhauSpringBone;                           // 0x1E810(0x0148)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9;                                // 0x1E958(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8;                                // 0x1EA60(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7;                                // 0x1EB68(0x0108)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_2;                        // 0x1EC70(0x00F0)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier;                          // 0x1ED60(0x00F0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                                // 0x1EE50(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                                // 0x1EF58(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                                // 0x1F060(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                                // 0x1F168(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x1F270(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x1F378(0x0108)
	class UAnimSequence*                               DeathAnim;                                                 // 0x1F480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      stickycomp;                                                // 0x1F488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                               StaticVehicleAnim;                                         // 0x1F490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_MordhauCharacterAnimation.AB_MordhauCharacterAnimation_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TwoWayBlend_9059E1824FA49318A87ADA8F917461D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TwoWayBlend_1309EBFB444A0D3F862309A49FCBA18F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_51F7EA974F2BCA0C271C72BBA1576FE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_BlendSpacePlayer_67DB726146EC0B98730855BDE98FC67F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_BlendSpacePlayer_DA30D1094110816E20A904BA396D15B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_6BFA4C3C4C30D6E45BBCBC893BECCF40();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_FDB5E6E9406B35228F737D9F76BEE0FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_C342AAE3429EC4F6D40C04B605A544FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_9080C2744337AAF26E9C3C8DF3D39C1E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_C2ED736A455C6441A81A95B82F022BD2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_D3E17D044464342D06AC1DAD8E49ACCF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_AB2B7AC64716D867E57B1D88E87153CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_AC51A0404473DE7A1EB738953CD58818();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_76F2BDC642C39E1F03C41B87CF9CC1F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_BlendSpacePlayer_887902844259022FD68685B95EA91126();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_BlendListByBool_DE4926054CA8A6A75C40E983AF86C624();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_8FCFD0724836C0ED3BC6B3A1800DA237();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_19A0046C486A8F281AB483A386963608();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_EE58C0684F482DE58232F0B7AAB4712B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_8C0367114D9D9B0B1C57A68DF4925E9F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_389F81ED4B5801F421FEBEADF592D97F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_70415063462C2517A68070B1E1521DE3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_F349B84B4E949F0E123A9B9A26A11C05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TwoWayBlend_5C7E5D0249BF3F9A402A439F8D5456BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_41E3C54A47E5151D06443B91C34D5409();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_F2E0A88F4550ABAC0005F9A1197521D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_07C3F0E44399AF282683C9B6970C3D9E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_1615ACA04185CF26EFBDD5877EA253F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_03694820428BF8D03D8817AC25F93447();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_F86F246949C1C2D3B44AF78BF7BCBC13();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_BlendSpacePlayer_B0F90B784B91E87CAC7E7AABFDE0039B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_E7FEF38A4D51810686A2678AFB5A29AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_927F2EBD4DEF93D4387449A6F10269D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TwoBoneIK_7D4D767F4CC945632D6890AACCB0531C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_5692AA004477968A8D84B6BBA08C2BDA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_3B3AF96940B999EF19EAF1A8CA8F3B9B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_D8C3A913468B2621A89EEBAB519D1ABB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TwoBoneIKOffset_B09EE86E451242D4CFB41CBCD7B6FC6D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_EEFE0C284590EACB0F590AA3B2B77E45();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_7268F94C4D4BF2A004408C92EF9795B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_A9B4875F4509A249EDEA33A2BA2F0885();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_AD9786B641F87AA333CE148E3E43E44C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_2F99943647A07260A9FB1EB9C82C57A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_B6AB734949359E77C844D19DCD009B53();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_450194A84BBC4B2C6F5779AB8B04D414();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_3A4C206041D7CCE4F9A52E9E6B08DEF5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_4A2391294111F7206E97F8B16F400BE5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_23BE3BF34793CEE01FA72B8A18343C57();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_7D4F5CA947EE1AF490375E941325B277();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_6A6B77684EE3708B10161687E154CA77();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_432D5D4440C5129A659A968241C3BF5A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_E19592134C061C077D468E8121871759();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_9204C1A344583529BEDCCFB8E6A3EC5A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_6566E22D472A286B026498AAE6EC1476();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_393C7D364E81077616977FB2707250D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_ED002F5649CB0C077957ACA034F87CE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_AFEA50BF4B0C4F09CD139EBA2502D7AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_478DB20C4AD2E0506FA75FAA21AB2EDE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_D81B043F44BBBEB272D0B681744CB48B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_0A96A7304C58C4C14A0969BEED9307D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_BBB99E3E42614ACBB46373A62C319A99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_9CC6749B49008962DB5847A6901172D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_3C572FFB467B39B6D5EC5ABCD3080A4F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_8925363D41E8FDFC8693F0A2BBB97177();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_2F89C05F497FD4C80235178BA5CA90F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_D929E41D4807B45618391CA6AFA70251();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_17BE25BB492B0670C4D3AA927F637BB0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_76D1B67B496C9E064E652D9F8CA5F0C3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_931F7E3A410906147DE8AEBBF62C0A08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_374747C8486EC95F2FF6A28CA2A772EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_645911E2437D441DC246B488B1A58564();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_CD8C2EF04ACB1FE80BA0C8980D1EA82D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_7DC012154C2AAB8001B4778ED56E903F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_A23F866D4750DFC0F9EB9C98A6547725();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_9F485EB0465130C6DFEA9EB278DCC68C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_B2783AF84CE4B4CCE04988AD557D0198();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_8026377F47F66F273F4984ABCA9DBC82();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_B4ABB6F74C8B435054E991BDED8EBB33();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_84E568994864EBED7D4FF3A7DD7C4CDA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_8BC970AE4BBF8804FAB69DB0B9D72C87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_93E5FBF84BD1B6BB626D1DB685A67FAE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_F5F50CC44BC40CAD8838B98C900D04A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_81BF16984081A53E0761269215A12E83();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_6EC12CBC4FD07FBD66254F97D286ACDB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_B57F16F64454230F5761E98DF8CC98A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_E61ABE7049AD0F0C318F899908AFB2DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_495A6E794CF4D606EDDFF894A5FDBF64();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TwoWayBlend_78E031EF476A76A52C68B9B0EB789839();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_50CA56AB4E7960D70DA0F883A1223663();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_2663FF614217772FEF2C1D882799C53E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_C3F78F5047A9526A5A6FF698A871116D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_E9477DA9423D4361B2ABCD9726A80346();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_5D5E3F53498A7AA1F23E34990F9F4CAB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_BB4EB0714B3F5FC10866EDB0FDDB4848();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_67FE8A144AAE7B689A14D2A4AA524A83();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_790287514C4B6C3B0A59DA8849BDFF1E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_653FA75F47D93D306BD15F84D76B5809();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_A367711641B06116DF9123A444E85451();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_67A0C73344FDEF0567055094F4E86281();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_9AB7702B40A915C7D9FACF944477723A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_2B1B3D6D4092690FDF01CFBAC65AEEFA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_2D478C78409C56ABE8F398B5DD8462CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_SequenceEvaluator_379E7BBB4E6DD6446F32F5AB8EE99887();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_629BCB60449BDB41B4BFDFACEE9B77F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_B2BFB3B748AE5ABF369C80A9E7F9C060();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_SequenceEvaluator_6F771663430412AFF8A8B2932C6083D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_5CF5A23049C9DDBB9B89B8A7B2429B3E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_2516FD47441137093A3501AAAEB5D478();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_3AE85A68440BBBBFF74595B487268997();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_77A2805A4F65CB3661C2AB9C70AD973D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_1AAE465E4282E19CBBD470BF3059E34F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_56A2F6164936D95746922992FAEFCF31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_B33644C14A2CCCBC863753B423E97E54();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_8B08C20844DE2C22BB543DAF2FC1C2FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_43717FB740DEC1230C8C29B18E8AA160();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_BCEC5C264F6D67CF6E1C79B828B810C5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_27CCADD34ED9584FAB738FB6D4966E8B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_3B788FB549EC6F09096B58A7D73F0DF7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_RotateAroundPivot_7860931D49314460852295970615FF11();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_D3C0E4B94C62EA7739F93A877DA1F8FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_2180010747A6BE270F70D2B674BA7283();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_E2338E8943F41EE2559DBDA73BA76BFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_FC57261047085EBF6B35E2B9D0F61D14();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_E787F9C947F3CD1309000EA83E8B6D46();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_FF4ADFE345B3092F0BA8988CA1AA174B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_62D22E5D4F53EB037D35198D6052327F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_AF1D9AC140D2C7D2DAA2E88D00E50B97();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_A9F8546F461D4ADAB1D2E39DBAE9D69D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_8FD2F44643B79D8390A300B25D9555AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TwoWayBlend_0B3B3C84471B130AC1B45980F510381A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_320720AF4B7AAACBC4D4FB9DDE334695();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_FDA881544CE9EE9569BEFEA78F2C7EE6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TwoWayBlend_CE149A36406451EFA2F67B9F37B3555A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TwoWayBlend_D1FCC0924F6437E7633B4C85466F1E4D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_8E2B342A453392DBFD48ADB067F4AC7E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_847DBE54428B349417B0F9AE8E33C82D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_92A9D4EA4A8F47ED86D6B88E9ED143EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_C8DCA4E844F3E580DB0E89B27B636B96();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_F61111234178308C89CF69BBC2E568AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_EA46C0FC45F6E7F83414C09986945704();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_6A94A1C24A15DEFD39AF7AB294AC1404();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_FDCAEBF6459E08AC9553748D30016A25();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_5C735F5D4DA365FA3F82B7A917BEC95B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_C386CE654772983DC1BB059D8A3EA90A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_6588BD264576B5F1CCFAD3B443FD3568();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_29F0C7E1418B8474418AF29B71AEA4BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_D0A5126842EC6B28C7CBC8A784935AEB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_A8B370C540C250BB8316E084D9AE8C1B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_23FE189741A508D6CD049CBAEDC8BBE6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_0772966547F528EC2498BFB2F94B93D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_F046862148325ECE197C9FACC12970C3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_E397D49D44A698CAC654BD9D5CF36DC8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_A57EEED341B21AF4E3C404A82CA991EA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_BlendListByInt_A4A8D8384A8FC4BF3FF2F38546339DFA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ApplyAdditive_D460BEC24DE10306CF888CB2565F1440();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_SequencePlayer_219231604249A52F248AE4950EE8002B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_5C849C174F520FBC7FE9D1B4B0AE200C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_194325BE415EC89D0F3D40B10BA56E5D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_8E6E037A42422CFAC9A1C9A6E5054062();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_49463D2F482E0D9CF3B7C8907966F726();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_4DFA671E487810A2D066AB93AF5C1D80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_0B6E5E0240641EBE5911919F4B838F4D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_4E2E80CB4FD0D7658A4FF89B7FE57BF6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_740384FB4A9BD56A63333D9C3682A5DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_3D7626974CDB58D77A34B09401FA0CB5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_36C2B1FF490542A2A9BDD48CF2885A4A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_RotateAroundPivot_F4BAF8EF46F8F17AF094CB9FDD163F96();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_6DF8766240F710E0B8B688B3AF013CFB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_DDE528C9464FE00C8E51F3811D4BB80B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_1981B97045640DF57DFB4A93C3581089();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_92FB67A84D90A055E42AFEAADF02F276();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_428265A84877F1DED437FB9C3D8B5FB4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_0B8F6D724251A7DE392BCDA5523457C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_3EDAE46B41DFB3AB5A88CF965BE07BC8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_A1423B324FFFD955A54F448D15E66DA2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_00D371994D0CF15D257A549C57223727();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_4F44779B4B3021544554148D1874FF42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_41D41E254B61569EAD682588EE074AD0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_3685028146A13828CD9F9E83DC5CC888();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_9FC70CB94A3803BA9369DA9C5877A818();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_457EBEDD45C5643A212B4EB5448EF4AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_C5A219864993064582F27C9DE487E1DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_53BBBADE48B1321D31B0DB8D2AA03FEC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_1EF1F78A4B4F441BAC34959F688A15AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_724E107B433CE5BF3C85F785F474AEC8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_AB3B51624860FCBF6273C2B820518A47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_28EEFD2D44AD125EC0E0209CE1B94509();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_537B7871491A445AA0BBA68CC6542558();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_FF910D30464379CBF5EC4EB3B280E3D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_BC37F13143D9AE17569BC6B2FBCE3E70();
	void AnimNotify_RightFootLanded();
	void AnimNotify_LeftFootLanded();
	void AnimNotify_AirborneToGround();
	void AnimNotify_BeginRagdoll();
	void PickDeathAnim(float Angle, class AActor* Agent, const struct FName& bone, const struct FVector& Point, unsigned char Type, unsigned char SubType);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_AD984F0F4FB46A2F6126F7B69F89DB54();
	void AnimNotify_GroundToJumped();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_0CE1BD844FE4816ECF2F6F9BD049B345();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_CD979AA944E88B1F3921E587305C22AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_TransitionResult_817A7DC240806F2D8EE684B6DE8FA74D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_9F0FA0E94FBE8D7162FD62B80F3C74C5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MordhauCharacterAnimation_AnimGraphNode_ModifyBone_D3136F5D4710ED98BA33E2B91972030B();
	void ExecuteUbergraph_AB_MordhauCharacterAnimation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
