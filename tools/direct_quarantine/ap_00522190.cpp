// auto-ported from 00522190_vslot5.c (CFEPWingmen::vslot5, 3886 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @hand-fixed 2026-10-28 check_fild: undefined8 locals local_148/130/120 read as their low dword (fld dword / mov at 0x5225a1, 0x522ed5, 0x522fa8, 0x522f51, 0x52301c; no fild qword in the original) -> bea_fcast<float>((uint32_t)x) / (int)(uint32_t)x; fistp-qword low word stored as int (uint32_t)lVar1
// @autoport-frame 0x150: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPWingmen;
typedef char Mat34;
typedef char Vec3;
typedef char _DAT_0089d78c;
#define DAT_0089d8d0 GLOBAL_AT(int, 0x0089d8d0)
#define DAT_0089d8d4 GLOBAL_AT(int, 0x0089d8d4)
#define DAT_009c6994 GLOBAL_AT(undefined4, 0x009c6994)
#define DAT_0089bd00 GLOBAL_AT(undefined4, 0x0089bd00)
#define DAT_009c65c0 GLOBAL_AT(undefined4, 0x009c65c0)
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
#define DAT_009c68a8 GLOBAL_AT(int, 0x009c68a8)
#define DAT_009c690c GLOBAL_AT(char, 0x009c690c)
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
#define DAT_0089da44 GLOBAL_AT(int, 0x0089da44)
#define DAT_0089d86c GLOBAL_AT(int, 0x0089d86c)
#define DAT_009c73ea GLOBAL_AT(char, 0x009c73ea)
#define DAT_0089d870 GLOBAL_AT(int, 0x0089d870)
#define DAT_0089d810 GLOBAL_AT(int, 0x0089d810)
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_0089d87c GLOBAL_AT(int, 0x0089d87c)
#define DAT_0089d874 GLOBAL_AT(int, 0x0089d874)
#define DAT_0089d878 GLOBAL_AT(int, 0x0089d878)
#define _DAT_008a9570 GLOBAL_AT(float, 0x008a9570)
#define DAT_0089d840 GLOBAL_AT(int, 0x0089d840)
#define s_Unknown_Wingman_0063fd3c ((char*)0x0063fd3c)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef uint32_t (BEA_THISCALL* FUN_0044a5f0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044a5f0_t> FUN_0044a5f0 = {(FUN_0044a5f0_t)0x0044a5f0};
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
typedef uint (BEA_CDECL* FUN_00469390_t)(undefined4, undefined4, undefined4, undefined4, undefined4, ...);
static const bea_guard<FUN_00469390_t> FUN_00469390 = {(FUN_00469390_t)0x00469390};
typedef undefined * (BEA_CDECL* FUN_0046a2a0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0046a2a0_t> FUN_0046a2a0 = {(FUN_0046a2a0_t)0x0046a2a0};
typedef uint32_t (BEA_THISCALL* FUN_0046bc20_t)(uint32_t);
static const bea_guard<FUN_0046bc20_t> FUN_0046bc20 = {(FUN_0046bc20_t)0x0046bc20};
typedef uint32_t (BEA_THISCALL* FUN_004901e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004901e0_t> FUN_004901e0 = {(FUN_004901e0_t)0x004901e0};
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef int * (BEA_THISCALL* FUN_005230e0_t)(uint32_t);
static const bea_guard<FUN_005230e0_t> FUN_005230e0 = {(FUN_005230e0_t)0x005230e0};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};
typedef uint32_t (BEA_THISCALL* FUN_00550b10_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550b10_t> FUN_00550b10 = {(FUN_00550b10_t)0x00550b10};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};

static void BEA_THISCALL ap_00522190(CFEPWingmen * this_, float param_1, undefined4 param_2)
{
  longlong lVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char cVar11;
  byte bVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int *piVar24;

  alignas(16) uint8_t bea_frame_[0x150] = {};   // the original stack frame (emulate_frame)
  undefined8 &local_148 = *reinterpret_cast<undefined8 *>(bea_frame_ + 0x150 - 0x148);
  undefined4 &local_140 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x140);
  undefined4 &local_13c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x13c);
  float &local_138 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x138);
  float &local_134 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x134);
  undefined8 &local_130 = *reinterpret_cast<undefined8 *>(bea_frame_ + 0x150 - 0x130);
  undefined8 &local_120 = *reinterpret_cast<undefined8 *>(bea_frame_ + 0x150 - 0x120);
  undefined4 &local_118 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x118);
  undefined4 &local_114 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x114);
  float &local_110 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x110);
  float &local_10c = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x10c);
  float &local_108 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x108);
  float &local_f4 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xf4);
  float &local_f0 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xf0);
  float &local_ec = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xec);
  float &local_e8 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xe8);
  float &local_e4 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xe4);
  float &local_e0 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xe0);
  float &local_dc = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xdc);
  float &local_d8 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xd8);
  float &local_c4 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xc4);
  float &local_c0 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xc0);
  float &local_bc = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xbc);
  float &local_b8 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xb8);
  float &local_b4 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xb4);
  float &local_b0 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xb0);
  float &local_ac = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xac);
  float &local_a8 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xa8);
  int (&local_a4)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0x150 - 0xa4);
  undefined4 &local_9c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x9c);
  undefined1 (&local_98)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0x98);
  undefined4 &local_88 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x88);
  undefined4 &local_84 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x84);
  undefined4 &local_80 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x80);
  undefined4 &local_78 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x78);
  undefined4 &local_74 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x74);
  undefined4 &local_70 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x70);
  undefined4 &local_6c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x6c);
  undefined4 &local_68 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x68);
  undefined4 &local_64 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x64);
  undefined4 &local_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x60);
  undefined4 &local_5c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x5c);
  undefined4 &local_58 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x58);
  undefined4 &local_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x54);
  undefined1 (&local_50)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0x50);
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0x40);
  undefined4 (&local_30)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x150 - 0x30);
  fVar13 = (float10)fcos((float10)param_1 * (float10)3.1415927f);
  uVar23 = 0;
  uVar22 = 0x3f800000;
  uVar21 = 0;
  uVar20 = 4;
  uVar19 = 0x3f3c28f5;
  uVar18 = 0x3f3c28f5;
  local_130 = CONCAT44((*(uint32_t*)((char*)&local_130 + 4)),this_);
  uVar17 = 0x3e000000;
  uVar16 = 0x3f733333;
  local_134 = (float)((-fVar13 - (float10)1.0f) * (float10)0.5f * (float10)600.0f);
  local_138 = 162.0f - local_134;
  uVar5 = DAT_0089d8d0;
  fVar13 = (float10)FUN_00468730();
  fVar15 = (float)(fVar13 + (float10)267.0f);
  fVar13 = (float10)FUN_00468730();
  FUN_005563d0(bea_arg((float)(fVar13 + (float10)local_138 + (float10)5.0f)), bea_arg(fVar15), bea_arg(uVar16), bea_arg(uVar5), bea_arg(uVar17), bea_arg(uVar18), bea_arg(uVar19), bea_arg(uVar20), bea_arg(uVar21), bea_arg(uVar22), bea_arg(uVar23));
  fVar15 = local_138;
  FUN_005563d0(bea_arg(local_138), bea_arg(0x43830000), bea_arg(0x3f733333), bea_arg(DAT_0089d8d4), bea_arg(0xff037fa0), bea_arg(0x3f333333), bea_arg(0x3f333333), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
  FUN_005563d0(bea_arg(fVar15), bea_arg(0x43830000), bea_arg(0x3f733333), bea_arg(DAT_0089d8d0), bea_arg(0xffffffff), bea_arg(0x3f333333), bea_arg(0x3f333333), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
  puVar9 = &DAT_009c6994;
  puVar10 = &DAT_0089bd00;
  for (iVar8 = 0x10; ((iVar8 != 0)); iVar8 = iVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_00550b10(bea_arg(&DAT_009c65c0), bea_arg(0x3f800000), bea_arg(0x45dac000), bea_arg(0x3f800000), bea_arg(0x3f400000));
  fVar13 = (float10)param_1;
  if (0.0f <= param_1) {
    if (1.0f < param_1) {
      fVar13 = (float10)1.0f;
    }
  }
  else {
    fVar13 = (float10)0.0f;
  }
  fVar13 = ((float10)1.0f - fVar13) * ((float10)1.0f - fVar13) * (float10)3.0f + (float10)0.3f;
  fVar14 = (float10)fcos(fVar13);
  local_110 = (float)fVar14;
  fVar13 = (float10)fsin(fVar13);
  fVar14 = (float10)fcos((float10)0.0f);
  _DAT_0089d78c = (float)fVar14;
  local_120 = CONCAT44((*(uint32_t*)((char*)&local_120 + 4)),_DAT_0089d78c);
  fVar14 = (float10)fsin((float10)0.0f);
  local_10c = (float)fVar14;
  fVar14 = (float10)fcos((float10)0.1899999976158142);
  local_108 = (float)fVar14;
  fVar14 = (float10)fsin((float10)0.1899999976158142);
  DAT_0089d764 = (float)((float10)_DAT_0089d78c * (float10)local_110 -
                        fVar14 * (float10)local_10c * fVar13);
  DAT_0089d768 = (float)-((float10)local_108 * fVar13);
  _DAT_0089d76c =
       (float)((float10)(float)(fVar14 * (float10)_DAT_0089d78c) * fVar13 +
              (float10)local_10c * (float10)local_110);
  _DAT_0089d774 =
       (float)(fVar14 * (float10)local_10c * (float10)local_110 + (float10)_DAT_0089d78c * fVar13);
  _DAT_0089d778 = local_108 * local_110;
  _DAT_0089d77c =
       (float)((float10)local_10c * fVar13 -
              (float10)(float)(fVar14 * (float10)_DAT_0089d78c) * (float10)local_110);
  _DAT_0089d784 = -(local_108 * local_10c);
  _DAT_0089d788 = (float)fVar14;
  local_140 = 0xbfcccccd;
  _DAT_0089d78c = local_108 * _DAT_0089d78c;
  local_148 = 0xc0a0000000000000;
  _DAT_0089d794 = 0;
  _DAT_0089d79c = 0xbfcccccd;
  _DAT_0089d798 = 0xc0a00000;
  _DAT_0089d7a0 = local_13c;
  FUN_004685a0();
  local_9c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  FUN_0044a5f0(bea_arg(local_98), bea_arg(0), bea_arg(0), bea_arg(0));
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  FUN_0044a5f0(bea_arg(local_50), bea_arg(0), bea_arg(0), bea_arg(0));
  (*(uint32_t*)((char*)&local_148 + 0)) = bea_piece32(-0.69171447);
  (*(uint32_t*)((char*)&local_148 + 4)) = 0x3f311433;
  local_140 = 0x3e547ea3;
  DAT_009c68a8 = 0;
  DAT_009c690c = 1;
  FUN_004901e0(bea_arg(&local_9c), bea_arg(0), bea_arg(0xbf311433), bea_arg(0x3f311433), bea_arg(0x3e547ea3), bea_arg(local_13c), bea_arg(0x3ef5c290), bea_arg(0x3e75c290), bea_arg(0x3df5c290));
  (*(uint32_t*)((char*)&local_148 + 0)) = bea_piece32(-bea_fcast<float>((uint32_t)local_148));
  puVar9 = &local_9c;
  puVar10 = &DAT_009c65c0;
  for (iVar8 = 0x17; ((iVar8 != 0)); iVar8 = iVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  DAT_009c68fc = 1;
  DAT_009c68a0 = 1;
  DAT_009c6904 = 1;
  FUN_004901e0(bea_arg(&local_9c), bea_arg(0), bea_arg(bea_fcast<float>((uint32_t)local_148)), bea_arg(0x3f311433), bea_arg(0x3e547ea3), bea_arg(local_13c), bea_arg(0x3df5c290), bea_arg(0x3e75c290), bea_arg(0x3ef5c290));
  local_118 = 0x43480000;
  puVar9 = &local_9c;
  puVar10 = &DAT_009c661c;
  for (iVar8 = 0x17; ((iVar8 != 0)); iVar8 = iVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  local_120 = 0x447a000000000000;
  DAT_009c68fd = 1;
  DAT_009c68a1 = 1;
  DAT_009c6905 = 1;
  local_148 = 0x3f7b075600000000;
  local_140 = 0x3e48d2ab;
  FUN_004901e0(bea_arg(&local_9c), bea_arg(0), bea_arg(0), bea_arg(0x3f7b0756), bea_arg(0x3e48d2ab), bea_arg(local_114), bea_arg(0x3e75c290), bea_arg(0x3e75c290), bea_arg(0x3e75c290));
  puVar9 = &local_9c;
  puVar10 = &DAT_009c6678;
  for (iVar8 = 0x17; ((iVar8 != 0)); iVar8 = iVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  DAT_009c68fe = 1;
  DAT_009c68a2 = 1;
  DAT_009c6906 = 1;
  DAT_009c68ad = 1;
  DAT_009c6910 = 1;
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  iVar2 = FUN_005230e0(bea_arg(&DAT_0089da44));
  iVar8 = (int)(uint32_t)local_130;
  if (iVar2 != 0) {
    cVar11 = *(int *)(iVar2 + 4) != 0;
    if (*(int *)(iVar2 + 0xc) != 0) {
      cVar11 = cVar11 + '\x01';
    }
    if (*(int *)(iVar2 + 8) != 0) {
      cVar11 = cVar11 + '\x01';
    }
    if (cVar11 != '\0') {
      iVar2 = *(int *)(uintptr_t)bea_piece32(((int)(uint32_t)local_130 + 0x18));
      iVar3 = FUN_005230e0(bea_arg(&DAT_0089da44));
      if (iVar3 == 0) {
LAB_0052279c:
        iVar2 = -1;
      }
      else if (*(int *)(iVar3 + 4) == 0) {
LAB_00522777:
        if (*(int *)(iVar3 + 8) != 0) {
          if (iVar2 == 0) {
            iVar2 = 1;
            goto LAB_0052279f;
          }
          iVar2 = iVar2 + -1;
        }
        if ((*(int *)(iVar3 + 0xc) == 0) || (iVar2 != 0)) goto LAB_0052279c;
        iVar2 = 2;
      }
      else {
        if (iVar2 != 0) {
          iVar2 = iVar2 + -1;
          goto LAB_00522777;
        }
        iVar2 = 0;
      }
LAB_0052279f:
      if (iVar2 == 0) {
        pvVar6 = *(void **)(iVar8 + 8);
      }
      else if (iVar2 == 1) {
        pvVar6 = *(void **)(iVar8 + 0xc);
      }
      else {
        if (iVar2 != 2) goto LAB_00522a05;
        pvVar6 = *(void **)(iVar8 + 0x10);
      }
      if (pvVar6 != (void *)0x0) {
        fVar13 = (float10)fcos((float10)*(float *)(iVar8 + 0x14));
        fVar14 = (float10)fsin((float10)*(float *)(iVar8 + 0x14));
        local_120 = CONCAT44((float)-fVar14,(float)fVar13);
        (*(uint32_t*)((char*)&local_148 + 0)) = bea_piece32((float)fVar14);
        (*(uint32_t*)((char*)&local_130 + 0)) = bea_piece32((float)fVar13);
        pfVar4 = (float *)FUN_00401ec0(bea_arg(&local_148), bea_arg((float)fVar14), bea_arg((float)fVar13), bea_arg(0));
        local_c4 = *pfVar4;
        local_c0 = pfVar4[1];
        local_bc = pfVar4[2];
        local_b8 = pfVar4[3];
        pfVar4 = (float *)FUN_00401ec0(bea_arg(&local_148), bea_arg(0), bea_arg(0), bea_arg(0x3f800000));
        fVar13 = (float10)fsin((float10)-0.10000000149011612);
        local_b4 = *pfVar4;
        local_b0 = pfVar4[1];
        local_ac = pfVar4[2];
        local_a8 = pfVar4[3];
        local_148 = CONCAT44((*(uint32_t*)((char*)&local_148 + 4)),(float)fVar13);
        fVar14 = (float10)fcos((float10)-0.10000000149011612);
        fVar15 = (float)fVar14;
        local_130 = CONCAT44((*(uint32_t*)((char*)&local_130 + 4)),fVar15);
        pfVar4 = (float *)FUN_00401ec0(bea_arg(&local_130), bea_arg(0), bea_arg(fVar15), bea_arg(-(float)fVar13));
        local_f4 = *pfVar4;
        local_f0 = pfVar4[1];
        local_ec = pfVar4[2];
        local_e8 = pfVar4[3];
        pfVar4 = (float *)FUN_00401ec0(bea_arg(&local_148), bea_arg(0), bea_arg(bea_fcast<float>((uint32_t)local_148)), bea_arg(fVar15));
        local_e4 = *pfVar4;
        local_e0 = pfVar4[1];
        local_dc = pfVar4[2];
        local_d8 = pfVar4[3];
        uVar5 = FUN_00401ec0(bea_arg(&local_148), bea_arg(local_e4 * bea_fcast<float>((uint32_t)local_120) + local_e0 * local_c4 + local_dc * local_b4), bea_arg(local_e4 * bea_fcast<float>((*(uint32_t*)((char*)&local_120 + 4))) + local_e0 * local_c0 + local_dc * local_b0), bea_arg(local_e0 * local_bc + local_dc * local_ac));
        uVar16 = FUN_00401ec0(bea_arg(&local_130), bea_arg(local_f4 * bea_fcast<float>((uint32_t)local_120) +
                              local_f0 * local_c4 + local_ec * local_b4), bea_arg(local_f4 * bea_fcast<float>((*(uint32_t*)((char*)&local_120 + 4))) + local_f0 * local_c0 + local_ec * local_b0), bea_arg(local_f0 * local_bc + local_ec * local_ac));
        uVar17 = FUN_00401ec0(bea_arg(local_40), bea_arg(bea_fcast<float>((uint32_t)local_120)), bea_arg((*(uint32_t*)((char*)&local_120 + 4))), bea_arg(0));
        FUN_00401f10(bea_arg(local_30), bea_arg(uVar17), bea_arg(uVar16), bea_arg(uVar5));
        puVar9 = local_30;
        puVar10 = (undefined4 *)((int)pvVar6 + 0x14);
        for (iVar2 = 0xc; ((iVar2 != 0)); iVar2 = iVar2 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        FUN_0046bc20(bea_arg(pvVar6));
      }
    }
  }
LAB_00522a05:
  DAT_009c68ad = 0;
  DAT_009c6910 = 1;
  FUN_00513bc0(bea_arg(0x1b), bea_arg(1));
  FUN_00513bc0(bea_arg(0x13), bea_arg(5));
  FUN_00513bc0(bea_arg(0x14), bea_arg(6));
  uVar5 = DAT_0089d86c;
  puVar9 = &DAT_0089bd00;
  puVar10 = &DAT_009c6994;
  for (iVar2 = 0x10; ((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  DAT_009c73ea = 1;
  FUN_005563d0(bea_arg(480.0f - local_134), bea_arg(0x43340000), bea_arg(0x3dcccccd), bea_arg(uVar5), bea_arg(0xffffffff), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
  FUN_005563d0(bea_arg(515.0f - local_134), bea_arg(0x43340000), bea_arg(0x3dcccccd), bea_arg(DAT_0089d870), bea_arg(0xffffffff), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
  iVar2 = *(int *)(iVar8 + 0x18);
  iVar3 = FUN_005230e0(bea_arg(&DAT_0089da44));
  if (iVar3 == 0) {
LAB_00522b16:
    iVar2 = -1;
  }
  else if (*(int *)(iVar3 + 4) == 0) {
LAB_00522af1:
    if (*(int *)(iVar3 + 8) != 0) {
      if (iVar2 == 0) {
        iVar2 = 1;
        goto LAB_00522b19;
      }
      iVar2 = iVar2 + -1;
    }
    if ((*(int *)(iVar3 + 0xc) == 0) || (iVar2 != 0)) goto LAB_00522b16;
    iVar2 = 2;
  }
  else {
    if (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      goto LAB_00522af1;
    }
    iVar2 = 0;
  }
LAB_00522b19:
  if (iVar2 == 0) {
    local_130 = CONCAT44((*(uint32_t*)((char*)&local_130 + 4)),0x3f1c28f6);
    local_120 = CONCAT44((*(uint32_t*)((char*)&local_120 + 4)),0x3f1c28f6);
  }
  else if (iVar2 == 1) {
    local_130 = CONCAT44((*(uint32_t*)((char*)&local_130 + 4)),0x3f800000);
    local_120 = CONCAT44((*(uint32_t*)((char*)&local_120 + 4)),0x3e570a3d);
  }
  else if (iVar2 == 2) {
    local_130 = CONCAT44((*(uint32_t*)((char*)&local_130 + 4)),0x3e570a3d);
    local_120 = CONCAT44((*(uint32_t*)((char*)&local_120 + 4)),0x3f800000);
  }
  FUN_00450460(495.0f - local_134,0x435a0000,bea_fcast<float>((uint32_t)local_130),0xff6fff4f);
  FUN_00450460(530.0f - local_134,0x435a0000,bea_fcast<float>((uint32_t)local_120),0xff4f6fff);
  if (param_1 == 1.0f) {
    FUN_00452fd0(bea_arg(0x3f800000));
    FUN_005563d0(bea_arg(0x438e8000), bea_arg(0x43610000), bea_arg(0x3f666666), bea_arg(DAT_0089d810), bea_arg(0xffffffff), bea_arg(0x3fcccccd), bea_arg(0x3fcccccd), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
  }
  iVar2 = FUN_005230e0(bea_arg(&DAT_0089da44));
  if (iVar2 == 0) {
LAB_00522c36:
    uVar5 = 0;
  }
  else {
    bVar12 = *(int *)(iVar2 + 4) != 0;
    if (*(int *)(iVar2 + 0xc) != 0) {
      bVar12 = bVar12 + 1;
    }
    if (*(int *)(iVar2 + 8) != 0) {
      bVar12 = bVar12 + 1;
    }
    if (bVar12 < 2) goto LAB_00522c36;
    uVar5 = 5;
  }
  FUN_00453140(bea_arg(uVar5), bea_arg(param_1));
  FUN_00453140(bea_arg(1), bea_arg(param_1));
  iVar2 = FUN_005230e0(bea_arg(&DAT_0089da44));
  if (iVar2 == 0) goto LAB_0052306a;
  cVar11 = *(int *)(iVar2 + 4) != 0;
  if (*(int *)(iVar2 + 0xc) != 0) {
    cVar11 = cVar11 + '\x01';
  }
  if (*(int *)(iVar2 + 8) != 0) {
    cVar11 = cVar11 + '\x01';
  }
  if (cVar11 == '\0') goto LAB_0052306a;
  iVar2 = *(int *)(iVar8 + 0x18);
  iVar3 = FUN_005230e0(bea_arg(&DAT_0089da44));
  if (iVar3 == 0) {
LAB_00522cf6:
    uVar5 = FUN_004f7bf0(bea_arg(s_Unknown_Wingman_0063fd3c));
  }
  else if (*(int *)(iVar3 + 4) == 0) {
LAB_00522cbd:
    if (*(int *)(iVar3 + 8) != 0) {
      if (iVar2 == 0) {
        uVar5 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xcb1fd));
        goto LAB_00522d03;
      }
      iVar2 = iVar2 + -1;
    }
    if ((*(int *)(iVar3 + 0xc) == 0) || (iVar2 != 0)) goto LAB_00522cf6;
    uVar5 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x19f8cf));
  }
  else {
    if (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      goto LAB_00522cbd;
    }
    uVar5 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x3c345));
  }
LAB_00522d03:
  piVar24 = local_a4;
  uVar16 = uVar5;
  pvVar6 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  FUN_00540680(bea_arg(pvVar6), bea_arg(uVar16), bea_arg(piVar24));
  uVar23 = 0;
  uVar22 = 0;
  uVar21 = 0x447a0000;
  uVar20 = 0xffffffff;
  uVar19 = 0x3f800000;
  uVar18 = 0x3f800000;
  uVar17 = 0x3dcccccd;
  uVar16 = 0x43160000;
  fVar15 = (360.0f - (float)local_a4[0] * 0.5f) - local_134;
  FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  FUN_00465710(bea_arg(fVar15), bea_arg(uVar16), bea_arg(uVar17), bea_arg(uVar18), bea_arg(uVar19), bea_arg(uVar20), bea_arg(uVar5), bea_arg(uVar21), bea_arg(uVar22), bea_arg(uVar23));
  DAT_009c68ac = 0;
  DAT_009c690d = 1;
  iVar2 = *(int *)(iVar8 + 0x18);
  iVar3 = FUN_005230e0(bea_arg(&DAT_0089da44));
  if (iVar3 == 0) {
LAB_00522dc3:
    iVar2 = -1;
  }
  else if (*(int *)(iVar3 + 4) == 0) {
LAB_00522d9e:
    if (*(int *)(iVar3 + 8) != 0) {
      if (iVar2 == 0) {
        iVar2 = 1;
        goto LAB_00522dc6;
      }
      iVar2 = iVar2 + -1;
    }
    if ((*(int *)(iVar3 + 0xc) == 0) || (iVar2 != 0)) goto LAB_00522dc3;
    iVar2 = 2;
  }
  else {
    if (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      goto LAB_00522d9e;
    }
    iVar2 = 0;
  }
LAB_00522dc6:
  uVar5 = DAT_0089d87c;
  if (((iVar2 != 0) && (uVar5 = DAT_0089d874, iVar2 != 1)) && (uVar5 = DAT_0089d878, iVar2 != 2)) {
    uVar5 = bea_piece32(bea_fcast<float>((uint32_t)local_148));
  }
  FUN_005563d0(bea_arg(local_138), bea_arg(0x43830000), bea_arg(0x3dcccccd), bea_arg(uVar5), bea_arg(0xffffffff), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
  iVar2 = FUN_005230e0(bea_arg(&DAT_0089da44));
  if (iVar2 != 0) {
    bVar12 = *(int *)(iVar2 + 4) != 0;
    if (*(int *)(iVar2 + 0xc) != 0) {
      bVar12 = bVar12 + 1;
    }
    if (*(int *)(iVar2 + 8) != 0) {
      bVar12 = bVar12 + 1;
    }
    if (1 < bVar12) {
      fVar15 = local_138 - 90.0f;
      local_130 = CONCAT44((*(uint32_t*)((char*)&local_130 + 4)),fVar15);
      FUN_00469390(fVar15 - 40.0f,0x435e0000,fVar15 + 40.0f,0x43970000,0x36);
      local_148 = CONCAT44((*(uint32_t*)((char*)&local_148 + 4)),local_138 + 90.0f);
      FUN_00469390((local_138 + 90.0f) - 40.0f,0x435e0000,local_138 + 130.0f,0x43970000,0x37);
      local_120 = (longlong)ROUND(_DAT_008a9570);
      uVar7 = (uint)(uint32_t)local_120 & 0x8000003f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
      }
      if (((int)uVar7 < 0x32) || (0.0f < *(float *)(iVar8 + 0x1c))) {
        uVar5 = bea_piece32(bea_fcast<float>((uint32_t)local_130));
        FUN_005563d0(bea_arg(bea_fcast<float>((uint32_t)local_130)), bea_arg(0x43830000), bea_arg(0x3dcccccd), bea_arg(DAT_0089d840), bea_arg(0xffffffff), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0xc0490fdb));
        lVar1 = (longlong)ROUND(*(float *)(iVar8 + 0x1c) * 255.0f);
        (*(uint32_t*)((char*)&local_130 + 0)) = (uint32_t)lVar1;
        uVar7 = (int)(uint32_t)local_130 * 0xff0000;
        fVar15 = (1.0f - *(float *)(iVar8 + 0x1c)) + 1.0f;
        (*(uint32_t*)((char*)&local_130 + 4)) = (undefined4)((ulonglong)lVar1 >> 0x20);
        local_130 = CONCAT44((*(uint32_t*)((char*)&local_130 + 4)),fVar15);
        FUN_005563d0(bea_arg(uVar5), bea_arg(0x43830000), bea_arg(0x3dcccccd), bea_arg(DAT_0089d840), bea_arg(~uVar7 & 0xffffff ^ uVar7), bea_arg(fVar15), bea_arg(fVar15), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0xc0490fdb));
      }
      local_130 = (longlong)ROUND(_DAT_008a9570);
      uVar7 = (uint)(uint32_t)local_130 & 0x8000003f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
      }
      if (((int)uVar7 < 0x32) || (0.0f < *(float *)(iVar8 + 0x20))) {
        uVar5 = bea_piece32(bea_fcast<float>((uint32_t)local_148));
        FUN_005563d0(bea_arg(bea_fcast<float>((uint32_t)local_148)), bea_arg(0x43830000), bea_arg(0x3dcccccd), bea_arg(DAT_0089d840), bea_arg(0xffffffff), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
        local_148 = (longlong)ROUND(*(float *)(iVar8 + 0x20) * 255.0f);
        fVar15 = (1.0f - *(float *)(iVar8 + 0x20)) + 1.0f;
        local_130 = CONCAT44((*(uint32_t*)((char*)&local_130 + 4)),fVar15);
        FUN_005563d0(bea_arg(uVar5), bea_arg(0x43830000), bea_arg(0x3dcccccd), bea_arg(DAT_0089d840), bea_arg(~((int)(uint32_t)local_148 * 0xff0000) & 0xffffffU ^
                     (int)(uint32_t)local_148 * 0xff0000), bea_arg(fVar15), bea_arg(fVar15), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
      }
    }
  }
LAB_0052306a:
  if (param_1 == 1.0f) {
    uVar16 = 0x3f800000;
    uVar5 = FUN_0046a2a0(0x14,0);
    FUN_00467bd0(bea_arg(uVar5), bea_arg(uVar16), bea_arg(param_2));
    FUN_00452df0(bea_arg(0x3f800000));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00522190, ap_00522190));
