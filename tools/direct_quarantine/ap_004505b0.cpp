// auto-ported from 004505b0_vslot5.c (CFEPBEConfig::vslot5, 4968 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @hand-fixed 2026-10-28 check_fild: local_8c[3] = local_98 is a plain copy (mov eax,[esp+0x50]; mov [esp+0x68],eax at 0x450b90) -> bea_fcast<float>(local_98)
// @autoport-frame 0xe0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPBEConfig;
typedef char Vec3;
typedef char _DAT_0089d78c;
#define DAT_0089d8d0 GLOBAL_AT(int, 0x0089d8d0)
#define DAT_0089d8d4 GLOBAL_AT(int, 0x0089d8d4)
#define DAT_009c6994 GLOBAL_AT(undefined4, 0x009c6994)
#define DAT_006776f8 GLOBAL_AT(undefined4, 0x006776f8)
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
#define DAT_009c73ea GLOBAL_AT(char, 0x009c73ea)
#define DAT_0089d810 GLOBAL_AT(int, 0x0089d810)
#define DAT_0089da34 GLOBAL_AT(int, 0x0089da34)
#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)
#define DAT_0089da14 GLOBAL_AT(int, 0x0089da14)
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_006602a0 GLOBAL_AT(int, 0x006602a0)
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_0089d868 GLOBAL_AT(int, 0x0089d868)
#define DAT_0089d86c GLOBAL_AT(int, 0x0089d86c)
#define DAT_0089d870 GLOBAL_AT(int, 0x0089d870)
#define _DAT_008a9570 GLOBAL_AT(float, 0x008a9570)
#define DAT_0089d840 GLOBAL_AT(int, 0x0089d840)
#define DAT_0089da3c GLOBAL_AT(undefined4*, 0x0089da3c)
#define s_Unknown_Configuration_00628ea8 ((char*)0x00628ea8)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef void* (BEA_THISCALL* FUN_00406d30_t)(uint32_t);
static const bea_guard<FUN_00406d30_t> FUN_00406d30 = {(FUN_00406d30_t)0x00406d30};
typedef uint32_t (BEA_THISCALL* FUN_0044a5f0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044a5f0_t> FUN_0044a5f0 = {(FUN_0044a5f0_t)0x0044a5f0};
typedef undefined4 (BEA_CDECL* FUN_0044eab0_t)(int, ...);
static const bea_guard<FUN_0044eab0_t> FUN_0044eab0 = {(FUN_0044eab0_t)0x0044eab0};
typedef undefined4 (BEA_CDECL* FUN_0044f030_t)(int, int, int, ...);
static const bea_guard<FUN_0044f030_t> FUN_0044f030 = {(FUN_0044f030_t)0x0044f030};
typedef undefined4 (BEA_CDECL* FUN_0044f300_t)(int, int, int, ...);
static const bea_guard<FUN_0044f300_t> FUN_0044f300 = {(FUN_0044f300_t)0x0044f300};
typedef uint32_t (BEA_CDECL* FUN_0044f530_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044f530_t> FUN_0044f530 = {(FUN_0044f530_t)0x0044f530};
typedef uint32_t (BEA_CDECL* FUN_0044f830_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044f830_t> FUN_0044f830 = {(FUN_0044f830_t)0x0044f830};
typedef uint32_t (BEA_CDECL* FUN_00450460_t)(float, float, float, uint, ...);
static const bea_guard<FUN_00450460_t> FUN_00450460 = {(FUN_00450460_t)0x00450460};
typedef int (BEA_CDECL* FUN_00451930_t)(uint32_t);
static const bea_guard<FUN_00451930_t> FUN_00451930 = {(FUN_00451930_t)0x00451930};
typedef int * (BEA_THISCALL* FUN_00451a40_t)(uint32_t);
static const bea_guard<FUN_00451a40_t> FUN_00451a40 = {(FUN_00451a40_t)0x00451a40};
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
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef char (BEA_CDECL* FUN_00521650_t)(void);
static const bea_guard<FUN_00521650_t> FUN_00521650 = {(FUN_00521650_t)0x00521650};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};
typedef uint32_t (BEA_THISCALL* FUN_00550b10_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550b10_t> FUN_00550b10 = {(FUN_00550b10_t)0x00550b10};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};

static void BEA_THISCALL ap_004505b0(CFEPBEConfig * this_, float param_1, int param_2)
{
  float fVar1;
  float fVar2;
  byte bVar3;
  float fVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  void *pvVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  float *pfVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  float *pfVar16;
  undefined4 *puVar17;
  bool bVar18;
  float10 fVar19;
  float10 fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;

  alignas(16) uint8_t bea_frame_[0xe0] = {};   // the original stack frame (emulate_frame)
  int &local_d8 = *reinterpret_cast<int *>(bea_frame_ + 0xe0 - 0xd8);
  float &local_d4 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0xd4);
  int &local_d0 = *reinterpret_cast<int *>(bea_frame_ + 0xe0 - 0xd0);
  uint &local_c0 = *reinterpret_cast<uint *>(bea_frame_ + 0xe0 - 0xc0);
  undefined4 &local_ac = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xac);
  float &local_a4 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0xa4);
  float &local_a0 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0xa0);
  undefined4 &local_9c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x9c);
  undefined4 &local_98 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x98);
  int (&local_94)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0xe0 - 0x94);
  float (&local_8c)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0xe0 - 0x8c);
  float &local_7c = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x7c);
  float &local_78 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x78);
  undefined4 &local_74 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x74);
  undefined4 &local_70 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x70);
  undefined4 &local_6c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x6c);
  undefined4 &local_68 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x68);
  undefined4 &local_64 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x64);
  undefined4 &local_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x60);
  undefined4 &local_5c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x5c);
  undefined1 (&local_58)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xe0 - 0x58);
  undefined4 &local_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x44);
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x40);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x34);
  undefined4 &local_30 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x30);
  undefined4 &local_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x24);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x20);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x14);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xe0 - 0x10);
  fVar19 = (float10)fcos((float10)param_1 * (float10)3.1415927f);
  fVar19 = (-fVar19 - (float10)1.0f) * (float10)0.5f * (float10)600.0f;
  if (param_2 == 4) {
    fVar19 = -fVar19;
  }
  fVar1 = (float)fVar19;
  fVar4 = 162.0f - fVar1;
  uVar33 = 0;
  uVar31 = 0x3f800000;
  uVar29 = 0;
  uVar28 = 4;
  uVar27 = 0x3f3c28f5;
  uVar26 = 0x3f3c28f5;
  uVar25 = 0x3e000000;
  uVar23 = 0x3f63d70a;
  uVar32 = DAT_0089d8d0;
  fVar19 = (float10)FUN_00468730();
  fVar21 = (float)(fVar19 + (float10)267.0f);
  fVar19 = (float10)FUN_00468730();
  FUN_005563d0(bea_arg((float)(fVar19 + (float10)fVar4 + (float10)5.0f)), bea_arg(fVar21), bea_arg(uVar23), bea_arg(uVar32), bea_arg(uVar25), bea_arg(uVar26), bea_arg(uVar27), bea_arg(uVar28), bea_arg(uVar29), bea_arg(uVar31), bea_arg(uVar33));
  FUN_005563d0(bea_arg(fVar4), bea_arg(0x43830000), bea_arg(0x3f63d70a), bea_arg(DAT_0089d8d4), bea_arg(0xff037fa0), bea_arg(0x3f333333), bea_arg(0x3f333333), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
  FUN_005563d0(bea_arg(fVar4), bea_arg(0x43830000), bea_arg(0x3f63d70a), bea_arg(DAT_0089d8d0), bea_arg(0xffffffff), bea_arg(0x3f333333), bea_arg(0x3f333333), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
  puVar5 = &DAT_009c6994;
  puVar17 = &DAT_006776f8;
  for (iVar10 = 0x10; BEA_LOOP_GUARD((iVar10 != 0)); iVar10 = iVar10 + -1) {
    *puVar17 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar17 = puVar17 + 1;
  }
  FUN_00550b10(bea_arg(&DAT_009c65c0), bea_arg(0x3f800000), bea_arg(0x45dac000), bea_arg(0x3f800000), bea_arg(0x3f400000));
  fVar19 = (float10)param_1;
  if (0.0f <= param_1) {
    if (1.0f < param_1) {
      fVar19 = (float10)1.0f;
    }
  }
  else {
    fVar19 = (float10)0.0f;
  }
  fVar19 = ((float10)1.0f - fVar19) * ((float10)1.0f - fVar19) * (float10)3.0f;
  if (param_2 == 4) {
    fVar19 = -fVar19;
  }
  fVar20 = (float10)fcos(fVar19 - (float10)0.47f);
  fVar21 = (float)fVar20;
  fVar19 = (float10)fsin(fVar19 - (float10)0.47f);
  fVar20 = (float10)fcos((float10)0.0f);
  fVar2 = (float)fVar20;
  fVar20 = (float10)fsin((float10)0.0f);
  fVar22 = (float)fVar20;
  fVar20 = (float10)fcos((float10)0.1899999976158142);
  _DAT_0089d78c = (float)fVar20;
  fVar20 = (float10)fsin((float10)0.1899999976158142);
  DAT_0089d764 = (float)((float10)fVar2 * (float10)fVar21 - fVar20 * (float10)fVar22 * fVar19);
  DAT_0089d768 = (float)-((float10)_DAT_0089d78c * fVar19);
  _DAT_0089d76c = (float)((float10)fVar22 * (float10)fVar21 + fVar20 * (float10)fVar2 * fVar19);
  _DAT_0089d774 = (float)((float10)fVar2 * fVar19 + fVar20 * (float10)fVar22 * (float10)fVar21);
  _DAT_0089d778 = _DAT_0089d78c * fVar21;
  _DAT_0089d77c =
       (float)((float10)fVar22 * fVar19 -
              (float10)(float)(fVar20 * (float10)fVar2) * (float10)fVar21);
  _DAT_0089d784 = -(_DAT_0089d78c * fVar22);
  _DAT_0089d788 = (float)fVar20;
  _DAT_0089d78c = _DAT_0089d78c * fVar2;
  _DAT_0089d794 = 0;
  _DAT_0089d79c = 0xbfb33333;
  _DAT_0089d798 = 0xc0e00000;
  _DAT_0089d7a0 = local_ac;
  FUN_004685a0();
  local_5c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  FUN_0044a5f0(bea_arg(local_58), bea_arg(0), bea_arg(0), bea_arg(0));
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_0044a5f0(bea_arg(local_10), bea_arg(0), bea_arg(0), bea_arg(0));
  DAT_009c68a8 = 0;
  DAT_009c690c = 1;
  FUN_004901e0(bea_arg(&local_5c), bea_arg(0), bea_arg(0xbf311433), bea_arg(0x3f311433), bea_arg(0x3e547ea3), bea_arg(local_ac), bea_arg(0x3ef5c290), bea_arg(0x3e75c290), bea_arg(0x3df5c290));
  puVar5 = &local_5c;
  puVar17 = &DAT_009c65c0;
  for (iVar10 = 0x17; BEA_LOOP_GUARD((iVar10 != 0)); iVar10 = iVar10 + -1) {
    *puVar17 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar17 = puVar17 + 1;
  }
  DAT_009c68fc = 1;
  DAT_009c68a0 = 1;
  DAT_009c6904 = 1;
  FUN_004901e0(bea_arg(&local_5c), bea_arg(0), bea_arg(0x3f311433), bea_arg(0x3f311433), bea_arg(0x3e547ea3), bea_arg(local_ac), bea_arg(0x3df5c290), bea_arg(0x3e75c290), bea_arg(0x3ef5c290));
  local_a0 = 1000.0;
  local_9c = 0x43480000;
  puVar5 = &local_5c;
  puVar17 = &DAT_009c661c;
  for (iVar10 = 0x17; BEA_LOOP_GUARD((iVar10 != 0)); iVar10 = iVar10 + -1) {
    *puVar17 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar17 = puVar17 + 1;
  }
  local_a4 = 0.0f;
  DAT_009c68fd = 1;
  DAT_009c68a1 = 1;
  DAT_009c6905 = 1;
  FUN_004901e0(bea_arg(&local_5c), bea_arg(0), bea_arg(0), bea_arg(0x3f7b0756), bea_arg(0x3e48d2ab), bea_arg(local_98), bea_arg(0x3e75c290), bea_arg(0x3e75c290), bea_arg(0x3e75c290));
  puVar5 = &local_5c;
  puVar17 = &DAT_009c6678;
  for (iVar10 = 0x17; BEA_LOOP_GUARD((iVar10 != 0)); iVar10 = iVar10 + -1) {
    *puVar17 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar17 = puVar17 + 1;
  }
  DAT_009c68fe = 1;
  DAT_009c68a2 = 1;
  DAT_009c6906 = 1;
  DAT_009c68ad = 1;
  DAT_009c6910 = 1;
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  if (*(int *)(this_ + 8) != 0) {
    fVar19 = (float10)fcos((float10)*(float *)(this_ + 0xc));
    local_8c[2] = 0.0f;
    local_9c = 0;
    local_8c[0] = (float)fVar19;
    fVar20 = (float10)fsin((float10)*(float *)(this_ + 0xc));
    local_8c[3] = bea_fcast<float>(local_98);
    local_74 = 0;
    local_8c[1] = (float)-fVar20;
    local_a4 = (float)fVar20;
    local_a0 = (float)fVar19;
    local_70 = local_98;
    local_7c = local_a4;
    local_78 = local_a0;
    puVar5 = (undefined4 *)FUN_00401ec0(bea_arg(&local_a4), bea_arg(0), bea_arg(0), bea_arg(0x3f800000));
    local_6c = *puVar5;
    local_68 = puVar5[1];
    local_64 = puVar5[2];
    local_60 = puVar5[3];
    pfVar12 = local_8c;
    pfVar16 = (float *)(*(int *)(this_ + 8) + 0x14);
    for (iVar10 = 0xc; BEA_LOOP_GUARD((iVar10 != 0)); iVar10 = iVar10 + -1) {
      *pfVar16 = *pfVar12;
      pfVar12 = pfVar12 + 1;
      pfVar16 = pfVar16 + 1;
    }
    FUN_0046bc20(bea_arg(*(void **)(this_ + 8)));
  }
  DAT_009c68ad = 0;
  DAT_009c6910 = 1;
  FUN_00513bc0(bea_arg(0x1b), bea_arg(1));
  FUN_00513bc0(bea_arg(0x13), bea_arg(5));
  FUN_00513bc0(bea_arg(0x14), bea_arg(6));
  puVar5 = &DAT_006776f8;
  puVar17 = &DAT_009c6994;
  for (iVar10 = 0x10; BEA_LOOP_GUARD((iVar10 != 0)); iVar10 = iVar10 + -1) {
    *puVar17 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar17 = puVar17 + 1;
  }
  DAT_009c73ea = 1;
  if ((param_1 == 1.0f) || (param_2 == 4)) {
    FUN_00452fd0(bea_arg(0x3f800000));
  }
  if ((param_1 == 1.0f) || (param_2 == 4)) {
    FUN_005563d0(bea_arg(0x438e8000), bea_arg(0x43610000), bea_arg(0x3f666666), bea_arg(DAT_0089d810), bea_arg(0xffffffff), bea_arg(0x3fcccccd), bea_arg(0x3fcccccd), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
  }
  if ((param_1 == 1.0f) || (param_2 == 4)) {
    FUN_00452df0(bea_arg(0x3f800000));
  }
  piVar6 = (int *)FUN_00406d20(bea_arg(&DAT_0089da34));
  while (BEA_LOOP_GUARD((piVar6 != (int *)0x0))) {
    if (DAT_0089d94c == *piVar6) {
      if ((piVar6 != (int *)0x0) && (1 < piVar6[8])) {
        uVar32 = 5;
        goto LAB_00450d82;
      }
      break;
    }
    piVar6 = (int *)FUN_00406d30(bea_arg(&DAT_0089da34));
  }
  if ((DAT_0089d94c < 0xe7) || (iVar10 = FUN_00521650(), iVar10 == 0)) {
    uVar32 = 0;
  }
  else {
    uVar32 = 4;
  }
LAB_00450d82:
  FUN_00453140(bea_arg(uVar32), bea_arg(param_1));
  FUN_00453140(bea_arg(1), bea_arg(param_1));
  iVar10 = *(int *)(this_ + 0x10);
  iVar7 = FUN_00451a40(bea_arg(&DAT_0089da14));
  if (iVar7 != 0) {
    iVar13 = 0;
    piVar6 = (int *)FUN_00406d20(bea_arg((void *)(iVar7 + 0x14)));
    while (BEA_LOOP_GUARD((piVar6 != (int *)0x0))) {
      if (iVar13 == iVar10) {
        if ((*piVar6 != 0) && (iVar10 = FUN_00451930(bea_arg(*piVar6)), iVar10 != 0)) {
          switch(*(undefined4 *)(iVar10 + 0xa4)) {
          case 1:
            uVar32 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x97d47d6b));
            goto LAB_00450ddb;
          case 2:
            uVar32 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xe3fcbf7c));
            goto LAB_00450ddb;
          case 3:
            uVar32 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x3025018d));
            goto LAB_00450ddb;
          case 4:
            uVar32 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x7c4d439e));
            goto LAB_00450ddb;
          case 5:
            uVar32 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xc87585af));
            goto LAB_00450ddb;
          }
        }
        break;
      }
      iVar13 = iVar13 + 1;
      piVar6 = (int *)FUN_00406d30(bea_arg((void *)(iVar7 + 0x14)));
    }
  }
  uVar32 = FUN_004f7bf0(bea_arg(s_Unknown_Configuration_00628ea8));
LAB_00450ddb:
  piVar6 = local_94;
  uVar23 = uVar32;
  pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  FUN_00540680(bea_arg(pvVar8), bea_arg(uVar23), bea_arg(piVar6));
  uVar33 = 0;
  uVar31 = 0;
  uVar29 = 0x447a0000;
  uVar28 = 0xffffffff;
  uVar27 = 0x3f800000;
  uVar26 = 0x3f800000;
  uVar25 = 0x3dcccccd;
  uVar23 = 0x42c80000;
  fVar21 = (400.0f - (float)local_94[0] * 0.5f) - fVar1;
  FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  FUN_00465710(bea_arg(fVar21), bea_arg(uVar23), bea_arg(uVar25), bea_arg(uVar26), bea_arg(uVar27), bea_arg(uVar28), bea_arg(uVar32), bea_arg(uVar29), bea_arg(uVar31), bea_arg(uVar33));
  fVar19 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  fVar21 = *(float *)(this_ + 0x1c);
  uVar23 = FUN_0046a2a0(0x16,0);
  piVar6 = local_94;
  uVar32 = uVar23;
  pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
  FUN_00540680(bea_arg(pvVar8), bea_arg(uVar32), bea_arg(piVar6));
  fVar2 = 280.0f - fVar1;
  uVar33 = 0;
  uVar31 = 0;
  uVar29 = 0x447a0000;
  uVar28 = 0xffff6f1f;
  uVar27 = 0x3f800000;
  uVar26 = 0x3f800000;
  uVar25 = 0x3dcccccd;
  uVar32 = 0x43520000;
  fVar22 = fVar2;
  FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
  FUN_00465710(bea_arg(fVar22), bea_arg(uVar32), bea_arg(uVar25), bea_arg(uVar26), bea_arg(uVar27), bea_arg(uVar28), bea_arg(uVar23), bea_arg(uVar29), bea_arg(uVar31), bea_arg(uVar33));
  local_d4 = 226.0;
  local_d8 = 0;
  do {
    uVar32 = *(undefined4 *)(this_ + 0x10);
    local_d0 = 0;
    piVar6 = (int *)FUN_00406d20(bea_arg(&DAT_0089da34));
    while (BEA_LOOP_GUARD((piVar6 != (int *)0x0))) {
      if (DAT_0089d94c == *piVar6) {
        if ((piVar6 != (int *)0x0) && (pbVar9 = (byte *)FUN_0044eab0(uVar32), pbVar9 != (byte *)0x0)
           ) {
          iVar10 = FUN_00406d20(bea_arg(&DAT_006602a0));
          goto joined_r0x00450fcd;
        }
        break;
      }
      piVar6 = (int *)FUN_00406d30(bea_arg(&DAT_0089da34));
    }
LAB_00451031:
    if (local_d0 <= local_d8) goto LAB_004510b7;
    uVar23 = FUN_0044f530(bea_arg(*(undefined4 *)(this_ + 0x10)), bea_arg(local_d8));
    piVar6 = local_94;
    uVar32 = uVar23;
    pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
    FUN_00540680(bea_arg(pvVar8), bea_arg(uVar32), bea_arg(piVar6));
    uVar29 = 0;
    uVar28 = 0;
    uVar27 = 0xffffffff;
    uVar26 = 0x3f800000;
    uVar25 = 0x3f800000;
    uVar32 = 0x3dcccccd;
    fVar22 = fVar2;
    fVar24 = local_d4;
    fVar30 = (float)(fVar19 - (float10)fVar21);
    FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
    FUN_00465710(bea_arg(fVar22), bea_arg(fVar24), bea_arg(uVar32), bea_arg(uVar25), bea_arg(uVar26), bea_arg(uVar27), bea_arg(uVar23), bea_arg(fVar30), bea_arg(uVar28), bea_arg(uVar29));
    local_d4 = local_d4 + 16.0f;
    local_d8 = local_d8 + 1;
  } while(BEA_LOOP_GUARD(( true )));
joined_r0x00450fcd:
  if (iVar10 == 0) goto LAB_00451031;
  pbVar11 = *(byte **)(iVar10 + 0xa8);
  pbVar14 = pbVar9;
  do {
    bVar3 = *pbVar11;
    bVar18 = bVar3 < *pbVar14;
    if (bVar3 != *pbVar14) {
LAB_00450ffb:
      iVar7 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
      goto LAB_00451000;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar11[1];
    bVar18 = bVar3 < pbVar14[1];
    if (bVar3 != pbVar14[1]) goto LAB_00450ffb;
    pbVar11 = pbVar11 + 2;
    pbVar14 = pbVar14 + 2;
  } while (BEA_LOOP_GUARD((bVar3 != 0)));
  iVar7 = 0;
LAB_00451000:
  if (iVar7 == 0) {
    if (iVar10 != 0) {
      local_d0 = (uint)(*(int *)(iVar10 + 0x60) != 0) + *(int *)(iVar10 + 0x4c);
    }
    goto LAB_00451031;
  }
  iVar10 = FUN_00406d30(bea_arg(&DAT_006602a0));
  goto joined_r0x00450fcd;
LAB_004510b7:
  local_d4 = local_d4 + 16.0f;
  uVar23 = FUN_0046a2a0(0x17,0);
  piVar6 = local_94;
  uVar32 = uVar23;
  pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
  FUN_00540680(bea_arg(pvVar8), bea_arg(uVar32), bea_arg(piVar6));
  uVar31 = 0;
  uVar29 = 0;
  uVar28 = 0x447a0000;
  uVar27 = 0xffff6f1f;
  uVar26 = 0x3f800000;
  uVar25 = 0x3f800000;
  uVar32 = 0x3dcccccd;
  fVar22 = fVar2;
  fVar24 = local_d4;
  FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
  FUN_00465710(bea_arg(fVar22), bea_arg(fVar24), bea_arg(uVar32), bea_arg(uVar25), bea_arg(uVar26), bea_arg(uVar27), bea_arg(uVar23), bea_arg(uVar28), bea_arg(uVar29), bea_arg(uVar31));
  local_d8 = 0;
  do {
    local_d4 = local_d4 + 16.0f;
    uVar32 = *(undefined4 *)(this_ + 0x10);
    piVar6 = (int *)FUN_00406d20(bea_arg(&DAT_0089da34));
    while (BEA_LOOP_GUARD((piVar6 != (int *)0x0))) {
      if (DAT_0089d94c == *piVar6) {
        if ((piVar6 != (int *)0x0) && (pbVar9 = (byte *)FUN_0044eab0(uVar32), pbVar9 != (byte *)0x0)
           ) {
          iVar10 = FUN_00406d20(bea_arg(&DAT_006602a0));
          goto joined_r0x0045121b;
        }
        break;
      }
      piVar6 = (int *)FUN_00406d30(bea_arg(&DAT_0089da34));
    }
LAB_0045116c:
    iVar10 = 0;
LAB_0045116e:
    if (iVar10 <= local_d8) goto LAB_0045127b;
    uVar23 = FUN_0044f830(bea_arg(*(undefined4 *)(this_ + 0x10)), bea_arg(local_d8));
    piVar6 = local_94;
    uVar32 = uVar23;
    pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
    FUN_00540680(bea_arg(pvVar8), bea_arg(uVar32), bea_arg(piVar6));
    uVar29 = 0;
    uVar28 = 0;
    uVar27 = 0xffffffff;
    uVar26 = 0x3f800000;
    uVar25 = 0x3f800000;
    uVar32 = 0x3dcccccd;
    fVar22 = fVar2;
    fVar24 = local_d4;
    fVar30 = (float)(fVar19 - (float10)fVar21);
    FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
    FUN_00465710(bea_arg(fVar22), bea_arg(fVar24), bea_arg(uVar32), bea_arg(uVar25), bea_arg(uVar26), bea_arg(uVar27), bea_arg(uVar23), bea_arg(fVar30), bea_arg(uVar28), bea_arg(uVar29));
    local_d8 = local_d8 + 1;
  } while(BEA_LOOP_GUARD(( true )));
joined_r0x0045121b:
  if (iVar10 == 0) goto LAB_0045116c;
  pbVar11 = *(byte **)(iVar10 + 0xa8);
  pbVar14 = pbVar9;
  do {
    bVar3 = *pbVar11;
    bVar18 = bVar3 < *pbVar14;
    if (bVar3 != *pbVar14) {
LAB_0045124d:
      iVar7 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
      goto LAB_00451252;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar11[1];
    bVar18 = bVar3 < pbVar14[1];
    if (bVar3 != pbVar14[1]) goto LAB_0045124d;
    pbVar11 = pbVar11 + 2;
    pbVar14 = pbVar14 + 2;
  } while (BEA_LOOP_GUARD((bVar3 != 0)));
  iVar7 = 0;
LAB_00451252:
  if (iVar7 == 0) {
    if (iVar10 != 0) {
      iVar10 = *(int *)(iVar10 + 0x5c);
      goto LAB_0045116e;
    }
    goto LAB_0045116c;
  }
  iVar10 = FUN_00406d30(bea_arg(&DAT_006602a0));
  goto joined_r0x0045121b;
LAB_0045127b:
  DAT_009c68ac = 0;
  DAT_009c690d = 1;
  FUN_005159e0(bea_arg(&DAT_0088a0a8));
  FUN_005563d0(bea_arg(445.0f - fVar1), bea_arg(0x43340000), bea_arg(0x3dcccccd), bea_arg(DAT_0089d868), bea_arg(0xffffffff), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
  FUN_005563d0(bea_arg(480.0f - fVar1), bea_arg(0x43340000), bea_arg(0x3dcccccd), bea_arg(DAT_0089d86c), bea_arg(0xffffffff), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
  FUN_005563d0(bea_arg(515.0f - fVar1), bea_arg(0x43340000), bea_arg(0x3dcccccd), bea_arg(DAT_0089d870), bea_arg(0xffffffff), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
  local_d4 = 234.0;
  iVar10 = 0;
LAB_0045135d:
  iVar7 = *(int *)(this_ + 0x10);
  local_d8 = 0;
  piVar6 = (int *)FUN_00406d20(bea_arg(&DAT_0089da34));
  while (BEA_LOOP_GUARD((piVar6 != (int *)0x0))) {
    if (DAT_0089d94c == *piVar6) {
      if ((piVar6 != (int *)0x0) && (iVar13 = FUN_00451a40(bea_arg(&DAT_0089da14)), iVar13 != 0)) {
        iVar15 = 0;
        piVar6 = (int *)FUN_00406d20(bea_arg((void *)(iVar13 + 0x14)));
        if (piVar6 != (int *)0x0) goto LAB_004513b4;
      }
      break;
    }
    piVar6 = (int *)FUN_00406d30(bea_arg(&DAT_0089da34));
  }
  goto LAB_004513f2;
  while(BEA_LOOP_GUARD(( true ))) {
    iVar15 = iVar15 + 1;
    piVar6 = (int *)FUN_00406d30(bea_arg((void *)(iVar13 + 0x14)));
    if (piVar6 == (int *)0x0) break;
LAB_004513b4:
    if (iVar15 == iVar7) {
      if ((*piVar6 != 0) && (iVar7 = FUN_00451930(bea_arg(*piVar6)), iVar7 != 0)) {
        local_d8 = (uint)(*(int *)(iVar7 + 0x60) != 0) + *(int *)(iVar7 + 0x4c);
      }
      break;
    }
  }
LAB_004513f2:
  if (local_d8 <= iVar10) goto LAB_004514eb;
  iVar7 = FUN_0044f030(*(undefined4 *)(this_ + 0x10),iVar10,0);
  FUN_00450460(460.0f - fVar1,local_d4,(float)iVar7 * 0.2f,0xffff6f4f);
  iVar7 = FUN_0044f030(*(undefined4 *)(this_ + 0x10),iVar10,1);
  FUN_00450460(495.0f - fVar1,local_d4,(float)iVar7 * 0.2f,0xff6fff4f);
  iVar7 = FUN_0044f030(*(undefined4 *)(this_ + 0x10),iVar10,2);
  FUN_00450460(530.0f - fVar1,local_d4,(float)iVar7 * 0.2f,0xff4f6fff);
  local_d4 = local_d4 + 16.0f;
  iVar10 = iVar10 + 1;
  goto LAB_0045135d;
LAB_004514eb:
  local_d4 = local_d4 + 16.0f;
  iVar10 = 0;
LAB_00451501:
  local_d4 = local_d4 + 16.0f;
  iVar7 = *(int *)(this_ + 0x10);
  piVar6 = (int *)FUN_00406d20(bea_arg(&DAT_0089da34));
  while (BEA_LOOP_GUARD((piVar6 != (int *)0x0))) {
    if (DAT_0089d94c == *piVar6) {
      if ((piVar6 != (int *)0x0) && (iVar13 = FUN_00451a40(bea_arg(&DAT_0089da14)), iVar13 != 0)) {
        iVar15 = 0;
        piVar6 = (int *)FUN_00406d20(bea_arg((void *)(iVar13 + 0x14)));
        if (piVar6 != (int *)0x0) goto LAB_00451659;
      }
      break;
    }
    piVar6 = (int *)FUN_00406d30(bea_arg(&DAT_0089da34));
  }
  goto LAB_00451534;
  while(BEA_LOOP_GUARD(( true ))) {
    iVar15 = iVar15 + 1;
    piVar6 = (int *)FUN_00406d30(bea_arg((void *)(iVar13 + 0x14)));
    if (piVar6 == (int *)0x0) break;
LAB_00451659:
    if (iVar15 == iVar7) {
      if ((*piVar6 != 0) && (iVar7 = FUN_00451930(bea_arg(*piVar6)), iVar7 != 0)) {
        iVar7 = *(int *)(iVar7 + 0x5c);
        goto LAB_00451536;
      }
      break;
    }
  }
LAB_00451534:
  iVar7 = 0;
LAB_00451536:
  if (iVar7 <= iVar10) goto LAB_00451693;
  iVar7 = FUN_0044f300(*(undefined4 *)(this_ + 0x10),iVar10,0);
  FUN_00450460(460.0f - fVar1,local_d4,(float)iVar7 * 0.2f,0xffff6f4f);
  iVar7 = FUN_0044f300(*(undefined4 *)(this_ + 0x10),iVar10,1);
  FUN_00450460(495.0f - fVar1,local_d4,(float)iVar7 * 0.2f,0xff6fff4f);
  iVar7 = FUN_0044f300(*(undefined4 *)(this_ + 0x10),iVar10,2);
  FUN_00450460(530.0f - fVar1,local_d4,(float)iVar7 * 0.2f,0xff4f6fff);
  iVar10 = iVar10 + 1;
  goto LAB_00451501;
LAB_00451693:
  piVar6 = (int *)FUN_00406d20(bea_arg(&DAT_0089da34));
  do {
    if (piVar6 == (int *)0x0) {
LAB_004518d6:
      if (param_2 == 4) {
        param_2 = 4;
        param_1 = 1.0f;
      }
      uVar32 = FUN_0046a2a0(0x14,0);
      FUN_00467bd0(bea_arg(uVar32), bea_arg(param_1), bea_arg(param_2));
      return;
    }
    if (DAT_0089d94c == *piVar6) {
      if ((piVar6 != (int *)0x0) && (1 < piVar6[8])) {
        FUN_00469390(fVar4 - 40.0f,0x42ca0000,fVar4 + 40.0f,0x43350000,0x2a);
        local_c0 = (uint)(longlong)ROUND(_DAT_008a9570);
        local_c0 = local_c0 & 0x8000003f;
        if ((int)local_c0 < 0) {
          local_c0 = (local_c0 - 1 | 0xffffffc0) + 1;
        }
        if (((int)local_c0 < 0x32) || (0.0f < *(float *)(this_ + 0x14))) {
          FUN_005563d0(bea_arg(fVar4), bea_arg(0x430d0000), bea_arg(0x3dcccccd), bea_arg(DAT_0089d840), bea_arg(0xffffffff), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0xbfc90fdb));
          local_c0 = (uint)(longlong)ROUND(*(float *)(this_ + 0x14) * 255.0f);
          fVar1 = (1.0f - *(float *)(this_ + 0x14)) + 1.0f;
          FUN_005563d0(bea_arg(fVar4), bea_arg(0x430d0000), bea_arg(0x3dcccccd), bea_arg(DAT_0089d840), bea_arg(~(local_c0 * 0xff0000) & 0xffffff ^ local_c0 * 0xff0000), bea_arg(fVar1), bea_arg(fVar1), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0xbfc90fdb));
        }
        local_c0 = (uint)(longlong)ROUND(_DAT_008a9570);
        local_c0 = local_c0 & 0x8000003f;
        if ((int)local_c0 < 0) {
          local_c0 = (local_c0 - 1 | 0xffffffc0) + 1;
        }
        if (((int)local_c0 < 0x32) || (0.0f < *(float *)(this_ + 0x18))) {
          FUN_00469390(fVar4 - 40.0f,0x43ac0000,fVar4 + 40.0f,0x43d40000,0x2b);
          FUN_005563d0(bea_arg(fVar4), bea_arg(0x43c00000), bea_arg(0x3dcccccd), bea_arg(DAT_0089d840), bea_arg(0xffffffff), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0x3fc90fdb));
          local_c0 = (uint)(longlong)ROUND(*(float *)(this_ + 0x18) * 255.0f);
          fVar1 = (1.0f - *(float *)(this_ + 0x18)) + 1.0f;
          FUN_005563d0(bea_arg(fVar4), bea_arg(0x43c00000), bea_arg(0x3dcccccd), bea_arg(DAT_0089d840), bea_arg(~(local_c0 * 0xff0000) & 0xffffff ^ local_c0 * 0xff0000), bea_arg(fVar1), bea_arg(fVar1), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0x3fc90fdb));
        }
      }
      goto LAB_004518d6;
    }
    DAT_0089da3c = (undefined4 *)DAT_0089da3c[1];
    if (DAT_0089da3c == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)*DAT_0089da3c;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004505b0, ap_004505b0));
