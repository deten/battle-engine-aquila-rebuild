// auto-ported from 004662a0_FUN_004662a0.c (FUN_004662a0, 1493 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_00662f40 GLOBAL_AT(int, 0x00662f40)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_00660620 GLOBAL_AT(int, 0x00660620)
#define DAT_0089d760 GLOBAL_AT(int, 0x0089d760)
#define DAT_0089d91c GLOBAL_AT(int, 0x0089d91c)
#define DAT_00675688 GLOBAL_AT(int, 0x00675688)
#define DAT_008a9ab4 GLOBAL_AT(int, 0x008a9ab4)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008a9aac GLOBAL_AT(int, 0x008a9aac)
#define DAT_0066304c GLOBAL_AT(int, 0x0066304c)
#define DAT_008a9580 GLOBAL_AT(int, 0x008a9580)
#define DAT_008a9584 GLOBAL_AT(int, 0x008a9584)
#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)
#define DAT_0083d454 GLOBAL_AT(int, 0x0083d454)
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
#define DAT_00679ec1 GLOBAL_AT(char, 0x00679ec1)
#define DAT_006630cc GLOBAL_AT(int, 0x006630cc)
#define DAT_00662dd0 GLOBAL_AT(int, 0x00662dd0)
#define DAT_00662dcc GLOBAL_AT(int, 0x00662dcc)
#define DAT_00889a48 GLOBAL_AT(int, 0x00889a48)
#define s_FEP__d____00629e18 ((char*)0x00629e18)
#define s_C__dev_ONSLAUGHT2_FrontEnd_cpp_00629df0 ((char*)0x00629df0)
typedef undefined4 (BEA_CDECL* CFEPCredits__vslot0_t)(undefined4, ...);
static const bea_guard<CFEPCredits__vslot0_t> CFEPCredits__vslot0 = {(CFEPCredits__vslot0_t)0x004fdc10};
typedef uint32_t (BEA_THISCALL* FUN_0041bd00_t)(uint32_t);
static const bea_guard<FUN_0041bd00_t> FUN_0041bd00 = {(FUN_0041bd00_t)0x0041bd00};
typedef uint32_t (BEA_THISCALL* FUN_0042bbc0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042bbc0_t> FUN_0042bbc0 = {(FUN_0042bbc0_t)0x0042bbc0};
typedef uint32_t (BEA_THISCALL* FUN_0042cf40_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042cf40_t> FUN_0042cf40 = {(FUN_0042cf40_t)0x0042cf40};
typedef uint32_t (BEA_THISCALL* FUN_0042cf70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042cf70_t> FUN_0042cf70 = {(FUN_0042cf70_t)0x0042cf70};
typedef uint32_t (BEA_THISCALL* FUN_0044b060_t)(uint32_t);
static const bea_guard<FUN_0044b060_t> FUN_0044b060 = {(FUN_0044b060_t)0x0044b060};
typedef uint32_t (BEA_THISCALL* FUN_0044d320_t)(uint32_t);
static const bea_guard<FUN_0044d320_t> FUN_0044d320 = {(FUN_0044d320_t)0x0044d320};
typedef uint32_t (BEA_THISCALL* FUN_00459810_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00459810_t> FUN_00459810 = {(FUN_00459810_t)0x00459810};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef undefined4 (BEA_THISCALL* FUN_004687e0_t)(uint32_t);
static const bea_guard<FUN_004687e0_t> FUN_004687e0 = {(FUN_004687e0_t)0x004687e0};
typedef uint32_t (BEA_THISCALL* FUN_004bb8c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004bb8c0_t> FUN_004bb8c0 = {(FUN_004bb8c0_t)0x004bb8c0};
typedef uint32_t (BEA_THISCALL* FUN_004e2c50_t)(uint32_t);
static const bea_guard<FUN_004e2c50_t> FUN_004e2c50 = {(FUN_004e2c50_t)0x004e2c50};
typedef uint32_t (BEA_THISCALL* FUN_004f2150_t)(uint32_t);
static const bea_guard<FUN_004f2150_t> FUN_004f2150 = {(FUN_004f2150_t)0x004f2150};
typedef uint32_t (BEA_THISCALL* FUN_004f21f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f21f0_t> FUN_004f21f0 = {(FUN_004f21f0_t)0x004f21f0};
typedef void * (BEA_THISCALL* FUN_005145f0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005145f0_t> FUN_005145f0 = {(FUN_005145f0_t)0x005145f0};
typedef uint32_t (BEA_CDECL* FUN_005159b0_t)(void);
static const bea_guard<FUN_005159b0_t> FUN_005159b0 = {(FUN_005159b0_t)0x005159b0};
typedef undefined4 (BEA_THISCALL* FUN_00541240_t)(uint32_t);
static const bea_guard<FUN_00541240_t> FUN_00541240 = {(FUN_00541240_t)0x00541240};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static undefined4 BEA_THISCALL ap_004662a0(void * this_, int param_1, int param_2)
{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  int &local_24 = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0x24);
  undefined1 (&local_20)[20] = *reinterpret_cast<undefined1 (*)[20]>(bea_frame_ + 0x30 - 0x20);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x30 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x4);
  FUN_0042bbc0(bea_arg(&DAT_00663498), bea_arg(1), bea_arg(1), bea_arg(0));
  if (param_2 == 0) {
    uVar10 = 0x41c80000;
    uVar9 = 0;
  }
  else {
    uVar10 = 0x427a0000;
    uVar9 = 0x42480000;
  }
  FUN_0042cf40(bea_arg(&DAT_00663498), bea_arg(uVar9), bea_arg(uVar10));
  if (DAT_00662f40 != 0) {
    FUN_004e2c50(bea_arg(&DAT_00896988));
  }
  FUN_0044b060(bea_arg(&DAT_00672fc8));
  FUN_0041bd00(bea_arg(&DAT_00660620));
  if (param_2 == 0) {
    uVar10 = 0x42a00000;
    uVar9 = 0x41c80000;
  }
  else {
    uVar10 = 0x42b40000;
    uVar9 = 0x427a0000;
  }
  FUN_0042cf40(bea_arg(&DAT_00663498), bea_arg(uVar9), bea_arg(uVar10));
  iVar1 = FUN_004687e0(bea_arg(&DAT_0089d760));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = CFEPCredits__vslot0(0);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    uVar10 = 0x42b40000;
    uVar9 = 0x42a00000;
  }
  else {
    uVar10 = 0x42be0000;
    uVar9 = 0x42b40000;
  }
  FUN_0042cf40(bea_arg(&DAT_00663498), bea_arg(uVar9), bea_arg(uVar10));
  iVar1 = FUN_00541240(bea_arg(&DAT_0089d91c));
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0044d320(bea_arg(&DAT_00675688));
  if (param_2 == 0) {
    uVar9 = 0x42b40000;
  }
  else {
    uVar9 = 0x42be0000;
  }
  FUN_0042cf40(bea_arg(&DAT_00663498), bea_arg(uVar9), bea_arg(0x42c80000));
  piVar6 = (int *)((int)this_ + 0x214);
  piVar7 = piVar6;
  for (iVar1 = 0x18; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *piVar7 = (int)this_ + 0xbe04;
    piVar7 = piVar7 + 1;
  }
  *piVar6 = (int)this_ + 0x278;
  *(int *)((int)this_ + 0x218) = (int)this_ + 0x29c;
  *(int *)((int)this_ + 0x21c) = (int)this_ + 0x2b0;
  *(int *)((int)this_ + 0x220) = (int)this_ + 700;
  *(int *)((int)this_ + 0x224) = (int)this_ + 0x2ec;
  *(int *)((int)this_ + 0x228) = (int)this_ + 0x324;
  *(int *)((int)this_ + 0x22c) = (int)this_ + 0x338;
  *(int *)((int)this_ + 0x230) = (int)this_ + 0x360;
  *(int *)((int)this_ + 0x234) = (int)this_ + 0x37dc;
  *(int *)((int)this_ + 0x238) = (int)this_ + 0x39b8;
  *(int *)((int)this_ + 0x23c) = (int)this_ + 0x39d0;
  *(int *)((int)this_ + 0x240) = (int)this_ + 0x3c1c;
  *(int *)((int)this_ + 0x244) = (int)this_ + 0x4034;
  *(int *)((int)this_ + 0x254) = (int)this_ + 0x4050;
  *(int *)((int)this_ + 0x250) = (int)this_ + 0x40b8;
  *(int *)((int)this_ + 600) = (int)this_ + 0x40ec;
  *(int *)((int)this_ + 0x25c) = (int)this_ + 0x4118;
  *(int *)((int)this_ + 0x260) = (int)this_ + 0x4124;
  *(int *)((int)this_ + 0x248) = (int)this_ + 0x413c;
  *(int *)((int)this_ + 0x24c) = (int)this_ + 0x4834;
  *(int *)((int)this_ + 0x264) = (int)this_ + 0x8848;
  *(int *)((int)this_ + 0x268) = (int)this_ + 0xbcc8;
  *(int *)((int)this_ + 0x26c) = (int)this_ + 0xbde0;
  *(int *)((int)this_ + 0x270) = (int)this_ + 0xbe04;
  uVar4 = 1;
  local_24 = 0;
  do {
    FUN_0055de9b(local_20,s_FEP__d____00629e18,local_24);
    uVar2 = bea_vcall<uint32_t>(*piVar6, 0x0);
    uVar4 = uVar4 & uVar2;
    FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg((float)local_24 * 0.041666668f));
    local_24 = local_24 + 1;
    piVar6 = piVar6 + 1;
  } while (BEA_LOOP_GUARD((local_24 < 0x18)));
  if (uVar4 == 0) {
    return 0;
  }
  DAT_008a9ab4 = 1;
  iVar1 = 0;
  puVar5 = (undefined4 *)((int)this_ + 0xbe0c);
  do {
    pvVar3 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x178), bea_arg(0x27), bea_arg(s_C__dev_ONSLAUGHT2_FrontEnd_cpp_00629df0), bea_arg(0xb3));
    if (pvVar3 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_005145f0(bea_arg(pvVar3), bea_arg(this_), bea_arg(iVar1), bea_arg(1));
    }
    *puVar5 = uVar9;
    iVar1 = iVar1 + 1;
    puVar5 = puVar5 + 1;
  } while (BEA_LOOP_GUARD((iVar1 < 2)));
  FUN_005159b0();
  *(undefined4 *)((int)this_ + 0xbe18) = 0;
  *(undefined4 *)((int)this_ + 0xbe14) = 0xfffffffe;
  *(undefined4 *)((int)this_ + 0xbe20) = 0xc2c80000;
  DAT_008a9aac = 0;
  if (DAT_0066304c != -1) {
    *(undefined4 *)((int)this_ + 0x1f8) = 0x17;
    FUN_00466ae0(bea_arg(this_), bea_arg(0), bea_arg(0));
    DAT_008a9580 = 1;
    DAT_008a9584 = 1;
    FUN_00459810(bea_arg((void *)((int)this_ + 0x39b8)), bea_arg(DAT_0066304c));
    goto LAB_00466799;
  }
  if ((*(int *)((int)this_ + 0xbe1c) == 0) && (param_1 != 1)) {
    if (param_1 != 2) {
      iVar1 = *(int *)((int)this_ + 500);
      if ((iVar1 < 0x385) || (0x389 < iVar1)) {
        if ((iVar1 < 0x352) || (0x36f < iVar1)) {
          if (DAT_0083d448 == 0) {
            if ((((*(int *)((int)this_ + 0xbe2c) != 2) && (DAT_0083d454 == 0)) && (DAT_00662df4 == 0)
                ) && (DAT_00679ec1 == '\0')) {
              DAT_008a9580 = 1;
              *(undefined4 *)((int)this_ + 0x1f8) = 0x17;
              FUN_00466ae0(bea_arg(this_), bea_arg(0xb), bea_arg(0));
              *(undefined4 *)((int)this_ + 0xbf34) = 6;
              *(undefined4 *)((int)this_ + 0xbf38) = 0x32;
              goto LAB_00466799;
            }
          }
          else if (DAT_006630cc != 0) {
            *(undefined4 *)((int)this_ + 0x1f8) = 0xc;
            goto LAB_00466799;
          }
          *(undefined4 *)((int)this_ + 0x1f8) = 6;
        }
        else {
          *(undefined4 *)((int)this_ + 0x1f8) = 0x10;
        }
      }
      else if (((*(int *)((int)this_ + 0xbe2c) == 2) || (DAT_0083d454 != 0)) ||
              ((DAT_00662df4 != 0 || (DAT_00679ec1 != '\0')))) {
        *(undefined4 *)((int)this_ + 0x1f8) = 8;
      }
      else {
        DAT_008a9580 = 1;
        *(undefined4 *)((int)this_ + 0x1f8) = 0x17;
        FUN_00466ae0(bea_arg(this_), bea_arg(0xb), bea_arg(0));
        *(undefined4 *)((int)this_ + 0xbf34) = 8;
        *(undefined4 *)((int)this_ + 0xbf38) = 0x32;
      }
      goto LAB_00466799;
    }
    *(undefined4 *)((int)this_ + 0x1f8) = 0x17;
    uVar9 = 0;
  }
  else {
    *(undefined4 *)((int)this_ + 0xbe1c) = 0;
    bVar8 = DAT_00662dd0 == 0;
    *(undefined4 *)((int)this_ + 0x1f8) = 0x17;
    if ((bVar8) || ((DAT_0083d448 != 0 || (DAT_008a9ab4 == 0)))) {
      uVar9 = 0xc;
    }
    else {
      uVar9 = 0;
    }
  }
  FUN_00466ae0(bea_arg(this_), bea_arg(uVar9), bea_arg(0));
LAB_00466799:
  if (*(int *)((int)this_ + 0x1f8) == -1) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + *(int *)((int)this_ + 0x200) * 4 + 0x214), 0x18, 2);
  }
  else {
    bea_vcall<uint32_t>(*(int **)((int)this_ + *(int *)((int)this_ + 0x1f8) * 4 + 0x214), 0x18, 2);
    bea_vcall<uint32_t>(*(int **)((int)this_ + *(int *)((int)this_ + 0x1f8) * 4 + 0x214), 0x1c, 2);
  }
  *(undefined4 *)((int)this_ + 500) = 100;
  iVar1 = 0;
  pvVar3 = (void *)((int)this_ + 0xbf40);
  do {
    FUN_004f2150(bea_arg(pvVar3));
    FUN_004f21f0(bea_arg(pvVar3), bea_arg(iVar1));
    iVar1 = iVar1 + 1;
    pvVar3 = (void *)((int)pvVar3 + 0x30);
  } while (BEA_LOOP_GUARD((iVar1 < 5)));
  if (param_2 == 0) {
    uVar9 = 0x42b40000;
  }
  else {
    uVar9 = 0x42be0000;
  }
  FUN_0042cf40(bea_arg(&DAT_00663498), bea_arg(uVar9), bea_arg(0x42c80000));
  FUN_0042bbc0(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(1), bea_arg(0));
  if (DAT_00662dcc != 0) {
    FUN_004bb8c0(bea_arg(&DAT_00889a48), bea_arg(0), bea_arg(0));
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004662a0, ap_004662a0));
