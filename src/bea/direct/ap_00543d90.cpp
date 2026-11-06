// auto-ported from 00543d90_FUN_00543d90.c (FUN_00543d90, 439 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_008aa8c0 GLOBAL_AT(int, 0x008aa8c0)
#define DAT_008aa8c4 GLOBAL_AT(int, 0x008aa8c4)
#define DAT_008aa8b8 GLOBAL_AT(int, 0x008aa8b8)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008aa8b4 GLOBAL_AT(int, 0x008aa8b4)
#define DAT_008aa8cc GLOBAL_AT(int, 0x008aa8cc)
#define DAT_00854dec GLOBAL_AT(int, 0x00854dec)
#define DAT_0067a67c GLOBAL_AT(int, 0x0067a67c)
#define s_C__dev_ONSLAUGHT2_DXImposter_cpp_006508cc ((char*)0x006508cc)
typedef uint (BEA_THISCALL* FUN_00423910_t)(uint32_t);
static const bea_guard<FUN_00423910_t> FUN_00423910 = {(FUN_00423910_t)0x00423910};
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef uint32_t (BEA_THISCALL* FUN_005003f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005003f0_t> FUN_005003f0 = {(FUN_005003f0_t)0x005003f0};
typedef uint32_t (BEA_THISCALL* FUN_00500540_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500540_t> FUN_00500540 = {(FUN_00500540_t)0x00500540};
typedef uint32_t (BEA_THISCALL* FUN_00500590_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500590_t> FUN_00500590 = {(FUN_00500590_t)0x00500590};
typedef undefined4 * (BEA_CDECL* FUN_00543f50_t)(uint32_t);
static const bea_guard<FUN_00543f50_t> FUN_00543f50 = {(FUN_00543f50_t)0x00543f50};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 * (BEA_CDECL* FUN_00559be0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00559be0_t> FUN_00559be0 = {(FUN_00559be0_t)0x00559be0};

static void BEA_CDECL ap_00543d90(void *param_1)
{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar1 = param_1;
  FUN_00423910(bea_arg(param_1));
  FUN_00423910(bea_arg(pvVar1));
  FUN_00423960(bea_arg(pvVar1), bea_arg(&DAT_008aa8c0), bea_arg(4), bea_arg(1));
  FUN_00423960(bea_arg(pvVar1), bea_arg(&DAT_008aa8c4), bea_arg(4), bea_arg(1));
  FUN_00423910(bea_arg(pvVar1));
  if (DAT_008aa8b8 != 0) {
    FUN_004f27e0(bea_arg((void *)(DAT_008aa8b8 + 8)));
    DAT_008aa8b8 = 0;
  }
  DAT_008aa8b8 = FUN_00559be0(bea_arg(0), bea_arg(pvVar1));
  *(int *)(DAT_008aa8b8 + 0xa4) = *(int *)(DAT_008aa8b8 + 0xa4) + 1;
  FUN_00423910(bea_arg(pvVar1));
  FUN_00423960(bea_arg(pvVar1), bea_arg(&param_1), bea_arg(4), bea_arg(1));
  iVar3 = 0;
  if (0 < (int)param_1) {
    do {
      FUN_00543f50(bea_arg(pvVar1));
      iVar3 = iVar3 + 1;
    } while (BEA_LOOP_GUARD((iVar3 < (int)param_1)));
  }
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x68), bea_arg(0x1f), bea_arg(s_C__dev_ONSLAUGHT2_DXImposter_cpp_006508cc), bea_arg(0x741));
  if (pvVar1 == (void *)0x0) {
    DAT_008aa8b4 = (void *)0x0;
  }
  else {
    DAT_008aa8b4 = (void *)FUN_005003f0(bea_arg(pvVar1), bea_arg(0));
  }
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x68), bea_arg(0x1f), bea_arg(s_C__dev_ONSLAUGHT2_DXImposter_cpp_006508cc), bea_arg(0x742));
  if (pvVar1 == (void *)0x0) {
    DAT_008aa8cc = (void *)0x0;
  }
  else {
    DAT_008aa8cc = (void *)FUN_005003f0(bea_arg(pvVar1), bea_arg(0));
  }
  uVar2 = (uint)(DAT_00854dec == 0);
  FUN_00500540(bea_arg(DAT_008aa8b4), bea_arg(0x152), bea_arg(8), bea_arg(0x24), bea_arg(4), bea_arg(uVar2));
  FUN_00500590(bea_arg(DAT_008aa8b4), bea_arg(0x65), bea_arg(8), bea_arg(2), bea_arg(uVar2));
  FUN_00500540(bea_arg(DAT_008aa8cc), bea_arg(0x152), bea_arg(8), bea_arg(0x24), bea_arg(4), bea_arg(uVar2));
  FUN_00500590(bea_arg(DAT_008aa8cc), bea_arg(0x65), bea_arg(8), bea_arg(2), bea_arg(uVar2));
  DAT_0067a67c = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00543d90, ap_00543d90));
