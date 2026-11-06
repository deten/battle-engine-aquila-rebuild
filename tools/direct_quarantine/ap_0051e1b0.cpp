// auto-ported from 0051e1b0_vslot5.c (CFEPMultiplayerStart::vslot5, 4506 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @hand-fixed 2026-10-28 check_fild: undefined8 local_138 read as its low dword (mov after fistp qword at 0x51e268/0x51e5ba, fild dword at 0x51e5f5, fld dword at 0x51e9ee/0x51ead0) -> (int)(uint32_t)/bea_fcast<float>((uint32_t)x); local_e0/local_c0 copied with mov (0x51eb19/0x51ec68) -> bea_fcast<float>
// @autoport-frame 0x170: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPMultiplayerStart;
typedef char _DAT_0089d78c;
#define DAT_0089d810 GLOBAL_AT(int, 0x0089d810)
#define DAT_0089d8d0 GLOBAL_AT(int, 0x0089d8d0)
#define DAT_0089d8d4 GLOBAL_AT(int, 0x0089d8d4)
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define DAT_00700283 GLOBAL_AT(int, 0x00700283)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_0070caa4 GLOBAL_AT(int, 0x0070caa4)
#define _DAT_008a9570 GLOBAL_AT(float, 0x008a9570)
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_009c68a8 GLOBAL_AT(int, 0x009c68a8)
#define DAT_009c690c GLOBAL_AT(char, 0x009c690c)
#define DAT_009c65c0 GLOBAL_AT(undefined4, 0x009c65c0)
#define DAT_009c68fc GLOBAL_AT(char, 0x009c68fc)
#define DAT_009c68a0 GLOBAL_AT(char, 0x009c68a0)
#define DAT_009c6904 GLOBAL_AT(char, 0x009c6904)
#define DAT_009c661c GLOBAL_AT(undefined4, 0x009c661c)
#define DAT_009c68fd GLOBAL_AT(char, 0x009c68fd)
#define DAT_009c68a1 GLOBAL_AT(char, 0x009c68a1)
#define DAT_009c6905 GLOBAL_AT(char, 0x009c6905)
#define DAT_009c6678 GLOBAL_AT(undefined4, 0x009c6678)
#define DAT_009c68fe GLOBAL_AT(char, 0x009c68fe)
#define DAT_009c68a2 GLOBAL_AT(char, 0x009c68a2)
#define DAT_009c6906 GLOBAL_AT(char, 0x009c6906)
#define DAT_009c68ad GLOBAL_AT(char, 0x009c68ad)
#define DAT_009c6910 GLOBAL_AT(char, 0x009c6910)
#define _DAT_0089d78c GLOBAL_AT(float, 0x0089d78c)
#define DAT_0089d764 GLOBAL_AT(float, 0x0089d764)
#define DAT_0089d768 GLOBAL_AT(float, 0x0089d768)
#define _DAT_0089d76c GLOBAL_AT(float, 0x0089d76c)
#define _DAT_0089d774 GLOBAL_AT(float, 0x0089d774)
#define _DAT_0089d778 GLOBAL_AT(float, 0x0089d778)
#define _DAT_0089d77c GLOBAL_AT(float, 0x0089d77c)
#define _DAT_0089d784 GLOBAL_AT(float, 0x0089d784)
#define _DAT_0089d788 GLOBAL_AT(float, 0x0089d788)
#define _DAT_0089d794 GLOBAL_AT(int, 0x0089d794)
#define _DAT_0089d79c GLOBAL_AT(int, 0x0089d79c)
#define _DAT_0089d798 GLOBAL_AT(int, 0x0089d798)
#define _DAT_0089d7a0 GLOBAL_AT(int, 0x0089d7a0)
#define DAT_008a180c GLOBAL_AT(int, 0x008a180c)
#define DAT_0089d840 GLOBAL_AT(int, 0x0089d840)
#define DAT_0089d868 GLOBAL_AT(int, 0x0089d868)
#define DAT_0089d86c GLOBAL_AT(int, 0x0089d86c)
#define DAT_0089d870 GLOBAL_AT(int, 0x0089d870)
#define DAT_008a9564 GLOBAL_AT(int, 0x008a9564)
typedef uint32_t (BEA_THISCALL* FUN_0044a5f0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044a5f0_t> FUN_0044a5f0 = {(FUN_0044a5f0_t)0x0044a5f0};
typedef uint32_t (BEA_CDECL* FUN_0044eb30_t)(uint32_t);
static const bea_guard<FUN_0044eb30_t> FUN_0044eb30 = {(FUN_0044eb30_t)0x0044eb30};
typedef undefined4 (BEA_CDECL* FUN_0044ed40_t)(int, ...);
static const bea_guard<FUN_0044ed40_t> FUN_0044ed40 = {(FUN_0044ed40_t)0x0044ed40};
typedef int (BEA_CDECL* FUN_0044eea0_t)(int, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, ...);
static const bea_guard<FUN_0044eea0_t> FUN_0044eea0 = {(FUN_0044eea0_t)0x0044eea0};
typedef undefined4 (BEA_CDECL* FUN_0044f030_t)(int, int, int, ...);
static const bea_guard<FUN_0044f030_t> FUN_0044f030 = {(FUN_0044f030_t)0x0044f030};
typedef undefined4 (BEA_CDECL* FUN_0044f300_t)(int, int, int, ...);
static const bea_guard<FUN_0044f300_t> FUN_0044f300 = {(FUN_0044f300_t)0x0044f300};
typedef uint32_t (BEA_CDECL* FUN_00450400_t)(void);
static const bea_guard<FUN_00450400_t> FUN_00450400 = {(FUN_00450400_t)0x00450400};
typedef uint32_t (BEA_CDECL* FUN_00450440_t)(void);
static const bea_guard<FUN_00450440_t> FUN_00450440 = {(FUN_00450440_t)0x00450440};
typedef uint32_t (BEA_CDECL* FUN_00450460_t)(float, float, float, uint, ...);
static const bea_guard<FUN_00450460_t> FUN_00450460 = {(FUN_00450460_t)0x00450460};
typedef uint32_t (BEA_STDCALL* FUN_00452df0_t)(uint32_t);
static const bea_guard<FUN_00452df0_t> FUN_00452df0 = {(FUN_00452df0_t)0x00452df0};
typedef uint32_t (BEA_STDCALL* FUN_00452fd0_t)(uint32_t);
static const bea_guard<FUN_00452fd0_t> FUN_00452fd0 = {(FUN_00452fd0_t)0x00452fd0};
typedef uint32_t (BEA_STDCALL* FUN_00453140_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00453140_t> FUN_00453140 = {(FUN_00453140_t)0x00453140};
typedef uint32_t (BEA_STDCALL* FUN_00465710_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00465710_t> FUN_00465710 = {(FUN_00465710_t)0x00465710};
typedef uint32_t (BEA_STDCALL* FUN_00467bd0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00467bd0_t> FUN_00467bd0 = {(FUN_00467bd0_t)0x00467bd0};
typedef uint32_t (BEA_CDECL* FUN_004685a0_t)(void);
static const bea_guard<FUN_004685a0_t> FUN_004685a0 = {(FUN_004685a0_t)0x004685a0};
typedef float10 (BEA_CDECL* FUN_00468730_t)(void);
static const bea_guard<FUN_00468730_t> FUN_00468730 = {(FUN_00468730_t)0x00468730};
typedef undefined * (BEA_CDECL* FUN_0046a2a0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0046a2a0_t> FUN_0046a2a0 = {(FUN_0046a2a0_t)0x0046a2a0};
typedef uint32_t (BEA_THISCALL* FUN_0046bc20_t)(uint32_t);
static const bea_guard<FUN_0046bc20_t> FUN_0046bc20 = {(FUN_0046bc20_t)0x0046bc20};
typedef uint32_t (BEA_THISCALL* FUN_004901e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004901e0_t> FUN_004901e0 = {(FUN_004901e0_t)0x004901e0};
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef uint32_t (BEA_THISCALL* FUN_0051ddd0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0051ddd0_t> FUN_0051ddd0 = {(FUN_0051ddd0_t)0x0051ddd0};
typedef uint (BEA_CDECL* FUN_00523cc0_t)(float, float, float, float, ...);
static const bea_guard<FUN_00523cc0_t> FUN_00523cc0 = {(FUN_00523cc0_t)0x00523cc0};
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};
typedef uint32_t (BEA_STDCALL* FUN_00527990_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00527990_t> FUN_00527990 = {(FUN_00527990_t)0x00527990};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};

static void BEA_THISCALL ap_0051e1b0(CFEPMultiplayerStart * this_, float param_1, undefined4 param_2)
{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  float *pfVar13;
  uint uVar14;
  undefined4 *puVar15;
  float *pfVar16;
  int iVar17;
  float10 fVar18;
  float10 fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  int iVar28;
  undefined4 uVar29;
  int *piVar30;
  undefined8 *puVar31;

  alignas(16) uint8_t bea_frame_[0x170] = {};   // the original stack frame (emulate_frame)
  int &local_164 = *reinterpret_cast<int *>(bea_frame_ + 0x170 - 0x164);
  int &local_15c = *reinterpret_cast<int *>(bea_frame_ + 0x170 - 0x15c);
  int &local_158 = *reinterpret_cast<int *>(bea_frame_ + 0x170 - 0x158);
  uint &local_154 = *reinterpret_cast<uint *>(bea_frame_ + 0x170 - 0x154);
  float &local_14c = *reinterpret_cast<float *>(bea_frame_ + 0x170 - 0x14c);
  undefined4 &local_148 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x148);
  undefined4 &local_144 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x144);
  undefined4 &local_140 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x140);
  int &local_13c = *reinterpret_cast<int *>(bea_frame_ + 0x170 - 0x13c);
  undefined8 &local_138 = *reinterpret_cast<undefined8 *>(bea_frame_ + 0x170 - 0x138);
  undefined4 &local_130 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x130);
  undefined4 &local_12c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x12c);
  uint &local_128 = *reinterpret_cast<uint *>(bea_frame_ + 0x170 - 0x128);
  int (&local_124)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0x170 - 0x124);
  undefined4 &local_11c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x11c);
  undefined4 &local_118 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x118);
  undefined4 &local_114 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x114);
  undefined4 &local_110 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x110);
  float &local_10c = *reinterpret_cast<float *>(bea_frame_ + 0x170 - 0x10c);
  float &local_108 = *reinterpret_cast<float *>(bea_frame_ + 0x170 - 0x108);
  undefined4 &local_104 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x104);
  undefined4 &local_100 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x100);
  undefined4 &local_fc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xfc);
  undefined4 &local_f8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xf8);
  undefined4 &local_f4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xf4);
  undefined4 &local_f0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xf0);
  float &local_ec = *reinterpret_cast<float *>(bea_frame_ + 0x170 - 0xec);
  float &local_e8 = *reinterpret_cast<float *>(bea_frame_ + 0x170 - 0xe8);
  undefined4 &local_e4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xe4);
  undefined4 &local_e0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xe0);
  float &local_dc = *reinterpret_cast<float *>(bea_frame_ + 0x170 - 0xdc);
  float &local_d8 = *reinterpret_cast<float *>(bea_frame_ + 0x170 - 0xd8);
  undefined4 &local_d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xd4);
  undefined4 &local_d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xd0);
  float &local_cc = *reinterpret_cast<float *>(bea_frame_ + 0x170 - 0xcc);
  float &local_c8 = *reinterpret_cast<float *>(bea_frame_ + 0x170 - 0xc8);
  undefined4 &local_c4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xc4);
  undefined4 &local_c0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xc0);
  float (&local_bc)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x170 - 0xbc);
  float &local_ac = *reinterpret_cast<float *>(bea_frame_ + 0x170 - 0xac);
  float &local_a8 = *reinterpret_cast<float *>(bea_frame_ + 0x170 - 0xa8);
  undefined4 &local_a4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xa4);
  undefined4 &local_a0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xa0);
  undefined4 &local_9c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x9c);
  undefined4 &local_98 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x98);
  undefined4 &local_94 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x94);
  undefined4 &local_90 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x90);
  float (&local_8c)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x170 - 0x8c);
  float &local_7c = *reinterpret_cast<float *>(bea_frame_ + 0x170 - 0x7c);
  float &local_78 = *reinterpret_cast<float *>(bea_frame_ + 0x170 - 0x78);
  undefined4 &local_74 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x74);
  undefined4 &local_70 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x70);
  undefined4 &local_6c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x6c);
  undefined4 &local_68 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x68);
  undefined4 &local_64 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x64);
  undefined4 &local_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x60);
  undefined4 (&local_5c)[5] = *reinterpret_cast<undefined4 (*)[5]>(bea_frame_ + 0x170 - 0x5c);
  undefined4 &local_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x44);
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x40);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x34);
  undefined4 &local_30 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x30);
  undefined4 &local_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x24);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x20);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x14);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x170 - 0x10);
  if (param_1 == 1.0f) {
    FUN_00452fd0(bea_arg(0x3f800000));
    FUN_00452df0(bea_arg(0x3f800000));
    FUN_005563d0(bea_arg(0x438e8000), bea_arg(0x43610000), bea_arg(0x3f666666), bea_arg(DAT_0089d810), bea_arg(0xffffffff), bea_arg(0x3fcccccd), bea_arg(0x3fcccccd), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
  }
  fVar20 = (param_1 - 0.75f) * 4.0f;
  if (0.0f <= fVar20) {
    if (1.0f < fVar20) {
      fVar20 = 1.0f;
    }
  }
  else {
    fVar20 = 0.0f;
  }
  local_138 = (longlong)ROUND(fVar20 * 255.0f);
  local_13c = (int)(uint32_t)local_138;
  if ((int)(uint32_t)local_138 < 0) {
    local_13c = 0;
  }
  else if (0xff < (int)(uint32_t)local_138) {
    local_13c = 0xff;
  }
  uVar14 = local_13c * 0xff0000;
  uVar29 = 0;
  uVar27 = 0x3f800000;
  local_128 = ~uVar14 & 0xffffff ^ uVar14;
  uVar26 = 0;
  uVar25 = 4;
  uVar23 = 0x3f3c28f5;
  iVar9 = (local_13c * 0x3f & 0xff00U) << 0x10;
  uVar22 = 0x3f3c28f5;
  uVar21 = 0x3f63d70a;
  uVar11 = (-(uint)(*(int *)(this_ + 8) != 0) & 0x3c7f9f) - 0xfc8060;
  uVar5 = DAT_0089d8d0;
  iVar10 = iVar9;
  fVar18 = (float10)FUN_00468730();
  fVar20 = (float)(fVar18 + (float10)267.0f);
  fVar18 = (float10)FUN_00468730();
  FUN_005563d0(bea_arg((float)(fVar18 + (float10)167.0f)), bea_arg(fVar20), bea_arg(uVar21), bea_arg(uVar5), bea_arg(iVar10), bea_arg(uVar22), bea_arg(uVar23), bea_arg(uVar25), bea_arg(uVar26), bea_arg(uVar27), bea_arg(uVar29));
  uVar4 = uVar11 >> 8;
  FUN_005563d0(bea_arg(0x43220000), bea_arg(0x43830000), bea_arg(0x3f63d70a), bea_arg(DAT_0089d8d4), bea_arg(((uVar4 & 0xffff0000) * local_13c ^ uVar11) & 0xffffff ^
               (uVar4 & 0xff0000) * local_13c), bea_arg(0x3f333333), bea_arg(0x3f333333), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
  FUN_005563d0(bea_arg(0x43220000), bea_arg(0x43830000), bea_arg(0x3f63d70a), bea_arg(DAT_0089d8d0), bea_arg(local_128), bea_arg(0x3f333333), bea_arg(0x3f333333), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
  uVar29 = 0;
  uVar27 = 0x3f800000;
  uVar26 = 0;
  uVar25 = 4;
  uVar23 = 0x3f3c28f5;
  uVar22 = 0x3f3c28f5;
  uVar21 = 0x3f63d70a;
  uVar11 = (-(uint)(*(int *)(this_ + 0xc) != 0) & 0x3c7f9f) - 0xfc8060;
  uVar5 = DAT_0089d8d0;
  fVar18 = (float10)FUN_00468730();
  fVar20 = (float)(fVar18 + (float10)267.0f);
  fVar18 = (float10)FUN_00468730();
  FUN_005563d0(bea_arg((float)(fVar18 + (float10)467.0f)), bea_arg(fVar20), bea_arg(uVar21), bea_arg(uVar5), bea_arg(iVar9), bea_arg(uVar22), bea_arg(uVar23), bea_arg(uVar25), bea_arg(uVar26), bea_arg(uVar27), bea_arg(uVar29));
  iVar10 = local_13c;
  uVar4 = uVar11 >> 8;
  FUN_005563d0(bea_arg(0x43e70000), bea_arg(0x43830000), bea_arg(0x3f63d70a), bea_arg(DAT_0089d8d4), bea_arg(((uVar4 & 0xffff0000) * local_13c ^ uVar11) & 0xffffff ^
               (uVar4 & 0xff0000) * local_13c), bea_arg(0x3f333333), bea_arg(0x3f333333), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
  FUN_005563d0(bea_arg(0x43e70000), bea_arg(0x43830000), bea_arg(0x3f63d70a), bea_arg(DAT_0089d8d0), bea_arg(local_128), bea_arg(0x3f333333), bea_arg(0x3f333333), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
  piVar30 = local_124;
  uVar5 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(&DAT_00700283));
  pvVar6 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  FUN_00540680(bea_arg(pvVar6), bea_arg(uVar5), bea_arg(piVar30));
  uVar29 = 0;
  uVar27 = 0;
  uVar26 = 0x447a0000;
  uVar14 = uVar14 | 0xffffff;
  uVar5 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(&DAT_00700283));
  uVar25 = 0x3f800000;
  uVar23 = 0x3f800000;
  uVar22 = 0x3dcccccd;
  uVar21 = 0x42fa0000;
  fVar20 = 162.0f - (float)local_124[0] * 0.5f;
  uVar4 = uVar14;
  FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  FUN_00465710(bea_arg(fVar20), bea_arg(uVar21), bea_arg(uVar22), bea_arg(uVar23), bea_arg(uVar25), bea_arg(uVar4), bea_arg(uVar5), bea_arg(uVar26), bea_arg(uVar27), bea_arg(uVar29));
  piVar30 = local_124;
  uVar5 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(&DAT_0070caa4));
  pvVar6 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  FUN_00540680(bea_arg(pvVar6), bea_arg(uVar5), bea_arg(piVar30));
  uVar29 = 0;
  uVar27 = 0;
  uVar26 = 0x447a0000;
  uVar5 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(&DAT_0070caa4));
  uVar25 = 0x3f800000;
  uVar23 = 0x3f800000;
  uVar22 = 0x3dcccccd;
  uVar21 = 0x42fa0000;
  fVar20 = 462.0f - (float)local_124[0] * 0.5f;
  uVar4 = uVar14;
  FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  FUN_00465710(bea_arg(fVar20), bea_arg(uVar21), bea_arg(uVar22), bea_arg(uVar23), bea_arg(uVar25), bea_arg(uVar4), bea_arg(uVar5), bea_arg(uVar26), bea_arg(uVar27), bea_arg(uVar29));
  if (this_[5] == (CFEPMultiplayerStart)0xff) {
    local_138 = (longlong)ROUND(_DAT_008a9570);
    uVar4 = (uint)(uint32_t)local_138 & 0x8000003f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
    }
    if ((int)uVar4 < 0x32) {
      uVar21 = FUN_00524830(0x75);
      puVar31 = &local_138;
      uVar5 = uVar21;
      pvVar6 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
      FUN_00540680(bea_arg(pvVar6), bea_arg(uVar5), bea_arg(puVar31));
      uVar29 = 0;
      uVar27 = 0;
      uVar26 = 0x447a0000;
      uVar25 = 0x3f800000;
      uVar23 = 0x3f800000;
      uVar22 = 0x3dcccccd;
      fVar20 = 462.0f - (float)(int)(uint32_t)local_138 * 0.5f;
      uVar5 = 0x437e0000;
      FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
      FUN_00465710(bea_arg(fVar20), bea_arg(uVar5), bea_arg(uVar22), bea_arg(uVar23), bea_arg(uVar25), bea_arg(uVar14), bea_arg(uVar21), bea_arg(uVar26), bea_arg(uVar27), bea_arg(uVar29));
    }
  }
  DAT_009c68ac = 0;
  DAT_009c690d = 1;
  FUN_00450400();
  local_5c[0] = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_5c[1] = 0;
  local_5c[2] = 0;
  local_5c[3] = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_0044a5f0(bea_arg(local_10), bea_arg(0), bea_arg(0), bea_arg(0));
  local_14c = -0.69171447;
  local_148 = 0x3f311433;
  local_144 = 0x3e547ea3;
  DAT_009c68a8 = 0;
  DAT_009c690c = 1;
  FUN_004901e0(bea_arg(local_5c), bea_arg(0), bea_arg(0xbf311433), bea_arg(0x3f311433), bea_arg(0x3e547ea3), bea_arg(local_140), bea_arg(0x3ef5c290), bea_arg(0x3e75c290), bea_arg(0x3df5c290));
  local_14c = -local_14c;
  puVar12 = local_5c;
  puVar15 = &DAT_009c65c0;
  for (iVar9 = 0x17; ((iVar9 != 0)); iVar9 = iVar9 + -1) {
    *puVar15 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar15 = puVar15 + 1;
  }
  DAT_009c68fc = 1;
  DAT_009c68a0 = 1;
  DAT_009c6904 = 1;
  FUN_004901e0(bea_arg(local_5c), bea_arg(0), bea_arg(local_14c), bea_arg(local_148), bea_arg(local_144), bea_arg(local_140), bea_arg(0x3df5c290), bea_arg(0x3e75c290), bea_arg(0x3ef5c290));
  local_130 = 0x43480000;
  puVar12 = local_5c;
  puVar15 = &DAT_009c661c;
  for (iVar9 = 0x17; ((iVar9 != 0)); iVar9 = iVar9 + -1) {
    *puVar15 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar15 = puVar15 + 1;
  }
  (*(uint32_t*)((char*)&local_138 + 0)) = 0.0f;
  (*(uint32_t*)((char*)&local_138 + 4)) = 0x447a0000;
  DAT_009c68fd = 1;
  DAT_009c68a1 = 1;
  DAT_009c6905 = 1;
  local_14c = 0.0f;
  local_148 = 0x3f7b0756;
  local_144 = 0x3e48d2ab;
  FUN_004901e0(bea_arg(local_5c), bea_arg(0), bea_arg(0), bea_arg(0x3f7b0756), bea_arg(0x3e48d2ab), bea_arg(local_12c), bea_arg(0x3e75c290), bea_arg(0x3e75c290), bea_arg(0x3e75c290));
  puVar12 = local_5c;
  puVar15 = &DAT_009c6678;
  for (iVar9 = 0x17; ((iVar9 != 0)); iVar9 = iVar9 + -1) {
    *puVar15 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar15 = puVar15 + 1;
  }
  DAT_009c68fe = 1;
  DAT_009c68a2 = 1;
  DAT_009c6906 = 1;
  DAT_009c68ad = 1;
  DAT_009c6910 = 1;
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  iVar9 = 0;
  do {
    if ((param_1 == 1.0f) &&
       (((iVar9 != 1 || (-1 < (char)this_[5])) && (*(int *)(this_ + iVar9 * 4 + 8) == 0)))) {
      fVar18 = (float10)-0.47f;
      if (iVar9 == 1) {
        fVar18 = (float10)0.43f;
      }
      fVar19 = (float10)fcos(fVar18);
      local_14c = 0.0f;
      fVar20 = (float)fVar19;
      fVar18 = (float10)fsin(fVar18);
      fVar19 = (float10)fcos((float10)0.0f);
      fVar1 = (float)fVar19;
      fVar19 = (float10)fsin((float10)0.0f);
      fVar2 = (float)fVar19;
      fVar19 = (float10)fcos((float10)0.1899999976158142);
      _DAT_0089d78c = (float)fVar19;
      fVar19 = (float10)fsin((float10)0.1899999976158142);
      DAT_0089d764 = (float)((float10)fVar1 * (float10)fVar20 - fVar19 * (float10)fVar2 * fVar18);
      DAT_0089d768 = (float)-((float10)_DAT_0089d78c * fVar18);
      (*(uint32_t*)((char*)&local_138 + 0)) = bea_piece32((float)(fVar19 * (float10)fVar1));
      _DAT_0089d76c = (float)((float10)fVar2 * (float10)fVar20 + fVar19 * (float10)fVar1 * fVar18);
      _DAT_0089d774 = (float)((float10)fVar1 * fVar18 + fVar19 * (float10)fVar2 * (float10)fVar20);
      _DAT_0089d778 = _DAT_0089d78c * fVar20;
      _DAT_0089d77c = (float)((float10)fVar2 * fVar18 - (float10)bea_fcast<float>((uint32_t)local_138) * (float10)fVar20)
      ;
      _DAT_0089d784 = -(_DAT_0089d78c * fVar2);
      _DAT_0089d788 = (float)fVar19;
      _DAT_0089d78c = _DAT_0089d78c * fVar1;
      local_144 = 0xbfb33333;
      local_148 = 0xc0e00000;
      _DAT_0089d794 = 0;
      _DAT_0089d79c = 0xbfb33333;
      _DAT_0089d798 = 0xc0e00000;
      _DAT_0089d7a0 = local_140;
      FUN_004685a0();
      if ((iVar9 == 1) && (0 < DAT_008a180c)) {
        if (*(int *)(this_ + 0x14) != 0) {
          (*(uint32_t*)((char*)&local_138 + 0)) = bea_piece32((float)-(float10)*(float *)(this_ + 0x30));
          fVar18 = (float10)fcos(-(float10)*(float *)(this_ + 0x30));
          local_e4 = 0;
          local_d4 = 0;
          local_11c = 0;
          local_118 = 0;
          local_114 = 0x3f800000;
          local_ec = (float)fVar18;
          fVar19 = (float10)fsin((float10)bea_fcast<float>((uint32_t)local_138));
          local_bc[0] = local_ec;
          local_bc[2] = 0.0f;
          local_e8 = (float)-fVar19;
          local_dc = (float)fVar19;
          local_bc[1] = local_e8;
          local_ac = local_dc;
          local_d8 = (float)fVar18;
          local_bc[3] = bea_fcast<float>(local_e0);
          local_a4 = 0;
          local_a8 = local_d8;
          local_9c = 0;
          local_a0 = local_d0;
          local_94 = 0x3f800000;
          local_98 = 0;
          local_90 = local_110;
          pfVar13 = local_bc;
          pfVar16 = (float *)(*(int *)(this_ + 0x14) + 0x14);
          for (iVar8 = 0xc; ((iVar8 != 0)); iVar8 = iVar8 + -1) {
            *pfVar16 = *pfVar13;
            pfVar13 = pfVar13 + 1;
            pfVar16 = pfVar16 + 1;
          }
          pvVar6 = *(void **)(this_ + 0x14);
LAB_0051ecaa:
          FUN_0046bc20(bea_arg(pvVar6));
        }
      }
      else if (*(int *)(this_ + 0x10) != 0) {
        fVar18 = (float10)*(float *)(this_ + 0x30);
        if (iVar9 != 0) {
          fVar18 = -fVar18;
        }
        fVar19 = (float10)fcos(fVar18);
        local_c4 = 0;
        local_104 = 0;
        local_f8 = 0;
        local_fc = 0;
        local_f4 = 0x3f800000;
        local_108 = (float)fVar19;
        local_cc = (float)fVar19;
        fVar18 = (float10)fsin(fVar18);
        local_8c[0] = local_cc;
        local_8c[2] = 0.0f;
        local_78 = local_108;
        local_70 = local_100;
        local_68 = 0;
        local_60 = local_f0;
        local_c8 = (float)-fVar18;
        local_10c = (float)fVar18;
        local_8c[1] = local_c8;
        local_8c[3] = bea_fcast<float>(local_c0);
        local_7c = local_10c;
        local_74 = 0;
        local_6c = 0;
        local_64 = 0x3f800000;
        pfVar13 = local_8c;
        pfVar16 = (float *)(*(int *)(this_ + 0x10) + 0x14);
        for (iVar8 = 0xc; ((iVar8 != 0)); iVar8 = iVar8 + -1) {
          *pfVar16 = *pfVar13;
          pfVar13 = pfVar13 + 1;
          pfVar16 = pfVar16 + 1;
        }
        pvVar6 = *(void **)(this_ + 0x10);
        (*(uint32_t*)((char*)&local_138 + 0)) = bea_piece32(local_108);
        goto LAB_0051ecaa;
      }
    }
    iVar9 = iVar9 + 1;
    if (1 < iVar9) {
      DAT_009c68ad = 0;
      DAT_009c6910 = 1;
      FUN_00513bc0(bea_arg(0x1b), bea_arg(1));
      FUN_00513bc0(bea_arg(0x13), bea_arg(5));
      FUN_00513bc0(bea_arg(0x14), bea_arg(6));
      FUN_00450440();
      iVar9 = 0;
      do {
        uVar4 = local_128;
        if ((-1 < (char)this_[iVar9 + 4]) && (*(int *)(this_ + iVar9 * 4 + 8) == 0)) {
          if (iVar9 == 0) {
            fVar20 = 162.0f;
          }
          else {
            fVar20 = 462.0f;
          }
          local_154 = (uint)(longlong)ROUND(_DAT_008a9570);
          local_154 = local_154 & 0x8000003f;
          if ((int)local_154 < 0) {
            local_154 = (local_154 - 1 | 0xffffffc0) + 1;
          }
          if (((int)local_154 < 0x32) || (0.0f < *(float *)(this_ + iVar9 * 4 + 0x20))) {
            (*(uint32_t*)((char*)&local_138 + 0)) = bea_piece32(fVar20);
            FUN_005563d0(bea_arg(fVar20), bea_arg(0x432b0000), bea_arg(0x3dcccccd), bea_arg(DAT_0089d840), bea_arg(local_128), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0xbfc90fdb));
            local_154 = (uint)(longlong)ROUND(*(float *)(this_ + iVar9 * 4 + 0x20) * 255.0f);
            fVar1 = (1.0f - *(float *)(this_ + iVar9 * 4 + 0x20)) + 1.0f;
            uVar14 = ~(local_154 * 0xff0000) & 0xffffff ^ local_154 * 0xff0000;
            uVar11 = uVar14 >> 8;
            FUN_005563d0(bea_arg(fVar20), bea_arg(0x432b0000), bea_arg(0x3dcccccd), bea_arg(DAT_0089d840), bea_arg(((uVar11 & 0xffff0000) * iVar10 ^ uVar14) & 0xffffff ^
                         (uVar11 & 0xff0000) * iVar10), bea_arg(fVar1), bea_arg(fVar1), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0xbfc90fdb));
            fVar20 = bea_fcast<float>((uint32_t)local_138);
          }
          (*(uint32_t*)((char*)&local_138 + 0)) = bea_piece32(fVar20 + 32.0f);
          cVar3 = FUN_00523cc0(fVar20 - 32.0f,0x430b0000,bea_fcast<float>((uint32_t)local_138),0x434b0000);
          if (cVar3 != '\0') {
            FUN_0051ddd0(bea_arg(this_), bea_arg(0x2a), bea_arg(iVar9));
          }
          local_154 = (uint)(longlong)ROUND(_DAT_008a9570);
          local_154 = local_154 & 0x8000003f;
          if ((int)local_154 < 0) {
            local_154 = (local_154 - 1 | 0xffffffc0) + 1;
          }
          if (((int)local_154 < 0x32) || (0.0f < *(float *)(this_ + iVar9 * 4 + 0x28))) {
            FUN_005563d0(bea_arg(fVar20), bea_arg(0x43c00000), bea_arg(0x3dcccccd), bea_arg(DAT_0089d840), bea_arg(uVar4), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0x3fc90fdb));
            local_154 = (uint)(longlong)ROUND(*(float *)(this_ + iVar9 * 4 + 0x28) * 255.0f);
            fVar1 = (1.0f - *(float *)(this_ + iVar9 * 4 + 0x28)) + 1.0f;
            uVar14 = ~(local_154 * 0xff0000) & 0xffffff ^ local_154 * 0xff0000;
            uVar11 = uVar14 >> 8;
            FUN_005563d0(bea_arg(fVar20), bea_arg(0x43c00000), bea_arg(0x3dcccccd), bea_arg(DAT_0089d840), bea_arg(((uVar11 & 0xffff0000) * iVar10 ^ uVar14) & 0xffffff ^
                         (uVar11 & 0xff0000) * iVar10), bea_arg(fVar1), bea_arg(fVar1), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0x3fc90fdb));
          }
          cVar3 = FUN_00523cc0(fVar20 - 32.0f,0x43b00000,bea_fcast<float>((uint32_t)local_138),0x43d00000);
          if (cVar3 != '\0') {
            FUN_0051ddd0(bea_arg(this_), bea_arg(0x2b), bea_arg(iVar9));
          }
          uVar21 = FUN_0044eb30(bea_arg(*(undefined4 *)(this_ + iVar9 * 4 + 0x18)));
          pfVar13 = &local_14c;
          uVar5 = uVar21;
          pvVar6 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
          FUN_00540680(bea_arg(pvVar6), bea_arg(uVar5), bea_arg(pfVar13));
          if (iVar9 == 0) {
            fVar20 = 162.0f;
          }
          else {
            fVar20 = 462.0f;
          }
          uVar29 = 0;
          uVar27 = 0;
          uVar26 = 0x447a0000;
          uVar25 = 0x3f800000;
          uVar23 = 0x3f800000;
          uVar22 = 0x3dcccccd;
          uVar5 = 0x433e0000;
          fVar20 = fVar20 - (float)(int)local_14c * 0.5f;
          uVar11 = uVar4;
          FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
          FUN_00465710(bea_arg(fVar20), bea_arg(uVar5), bea_arg(uVar22), bea_arg(uVar23), bea_arg(uVar25), bea_arg(uVar11), bea_arg(uVar21), bea_arg(uVar26), bea_arg(uVar27), bea_arg(uVar29));
          DAT_009c68ac = 0;
          DAT_009c690d = 1;
          if (iVar9 == 0) {
            fVar20 = -182.0f;
          }
          else {
            fVar20 = 115.0f;
          }
          FUN_005563d0(bea_arg((fVar20 + 310.0f) - 15.0f), bea_arg(0x43a00000), bea_arg(0x3dcccccd), bea_arg(DAT_0089d868), bea_arg(uVar4), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
          if (iVar9 == 0) {
            fVar20 = -182.0f;
          }
          else {
            fVar20 = 115.0f;
          }
          FUN_005563d0(bea_arg((fVar20 + 345.0f) - 15.0f), bea_arg(0x43a00000), bea_arg(0x3dcccccd), bea_arg(DAT_0089d86c), bea_arg(uVar4), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
          if (iVar9 == 0) {
            fVar20 = -182.0f;
          }
          else {
            fVar20 = 115.0f;
          }
          uVar27 = 0;
          uVar26 = 0;
          uVar25 = 0x3f800000;
          uVar23 = 0x3f800000;
          uVar22 = 0x3dcccccd;
          fVar20 = (fVar20 + 380.0f) - 15.0f;
          uVar21 = 0x43a00000;
          uVar5 = DAT_0089d870;
          FUN_005563d0(bea_arg(fVar20), bea_arg(0x43a00000), bea_arg(0x3dcccccd), bea_arg(DAT_0089d870), bea_arg(uVar4), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
          iVar10 = 0;
          iVar17 = 0;
          local_158 = 0;
          local_15c = 0;
          local_164 = 0;
          iVar8 = FUN_0044eea0(*(undefined4 *)(this_ + iVar9 * 4 + 0x18),fVar20,uVar21,uVar22,uVar5,
                               uVar4,uVar23,uVar25,uVar26,uVar27);
          if (0 < iVar8) {
            do {
              uVar5 = *(undefined4 *)(this_ + iVar9 * 4 + 0x18);
              uVar26 = 0;
              iVar28 = iVar17;
              iVar8 = FUN_0044f030(uVar5,iVar17,0);
              uVar21 = *(undefined4 *)(this_ + iVar9 * 4 + 0x18);
              uVar25 = 1;
              iVar10 = iVar10 + iVar8;
              iVar24 = iVar17;
              iVar8 = FUN_0044f030(uVar21,iVar17,1);
              uVar23 = 2;
              local_158 = local_158 + iVar8;
              uVar22 = *(undefined4 *)(this_ + iVar9 * 4 + 0x18);
              iVar8 = iVar17;
              iVar7 = FUN_0044f030(uVar22,iVar17,2);
              local_15c = local_15c + iVar7;
              local_164 = local_164 + 1;
              iVar17 = iVar17 + 1;
              iVar8 = FUN_0044eea0(*(undefined4 *)(this_ + iVar9 * 4 + 0x18),uVar22,iVar8,uVar23,
                                   uVar21,iVar24,uVar25,uVar5,iVar28,uVar26);
            } while (((iVar17 < iVar8)));
          }
          iVar17 = 0;
          iVar8 = FUN_0044ed40(*(undefined4 *)(this_ + iVar9 * 4 + 0x18));
          if (0 < iVar8) {
            do {
              iVar8 = FUN_0044f300(*(undefined4 *)(this_ + iVar9 * 4 + 0x18),iVar17,0);
              iVar10 = iVar10 + iVar8;
              iVar8 = FUN_0044f300(*(undefined4 *)(this_ + iVar9 * 4 + 0x18),iVar17,1);
              local_158 = local_158 + iVar8;
              iVar8 = FUN_0044f300(*(undefined4 *)(this_ + iVar9 * 4 + 0x18),iVar17,2);
              local_15c = local_15c + iVar8;
              local_164 = local_164 + 1;
              iVar17 = iVar17 + 1;
              iVar8 = FUN_0044ed40(*(undefined4 *)(this_ + iVar9 * 4 + 0x18));
            } while (((iVar17 < iVar8)));
          }
          uVar4 = local_128;
          if (iVar9 == 0) {
            fVar20 = -182.0f;
          }
          else {
            fVar20 = 115.0f;
          }
          fVar1 = (float)local_164;
          FUN_00450460(fVar20 + 310.0f,0x43b40000,((float)iVar10 / fVar1) * 0.2f,local_128);
          if (iVar9 == 0) {
            fVar20 = -182.0f;
          }
          else {
            fVar20 = 115.0f;
          }
          FUN_00450460(fVar20 + 345.0f,0x43b40000,((float)local_158 / fVar1) * 0.2f,uVar4);
          if (iVar9 == 0) {
            fVar20 = -182.0f;
          }
          else {
            fVar20 = 115.0f;
          }
          FUN_00450460(fVar20 + 380.0f,0x43b40000,((float)local_15c / fVar1) * 0.2f,uVar4);
          iVar10 = local_13c;
        }
        iVar9 = iVar9 + 1;
      } while (((iVar9 < 2)));
      if (this_[5] != (CFEPMultiplayerStart)0xff) {
        FUN_00527990(bea_arg(0), bea_arg((&DAT_008a9564)[(char)this_[5]]), bea_arg(1));
      }
      fVar20 = param_1;
      uVar5 = FUN_0046a2a0(0x14,0);
      FUN_00467bd0(bea_arg(uVar5), bea_arg(fVar20), bea_arg(param_2));
      FUN_00453140(bea_arg(5), bea_arg(param_1));
      FUN_00453140(bea_arg(1), bea_arg(param_1));
      return;
    }
  } while((( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051e1b0, ap_0051e1b0));
