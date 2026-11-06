// auto-ported from 004cb5c0_FUN_004cb5c0.c (FUN_004cb5c0, 823 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-uninit local_10: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_0082b3ec GLOBAL_AT(int, 0x0082b3ec)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0082b3e0 GLOBAL_AT(int, 0x0082b3e0)
#define DAT_0082b3f0 GLOBAL_AT(int, 0x0082b3f0)
#define DAT_0082b3f4 GLOBAL_AT(int, 0x0082b3f4)
#define DAT_0082b3d0 GLOBAL_AT(int, 0x0082b3d0)
#define DAT_0082b3d4 GLOBAL_AT(int, 0x0082b3d4)
#define DAT_0082b3d8 GLOBAL_AT(int, 0x0082b3d8)
#define DAT_0082b3dc GLOBAL_AT(int, 0x0082b3dc)
#define DAT_0082b3a0 GLOBAL_AT(undefined4, 0x0082b3a0)
#define DAT_009c6400 GLOBAL_AT(float, 0x009c6400)
#define s_C__dev_ONSLAUGHT2_ParticleManage_00630e60 ((char*)0x00630e60)
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef uint32_t (BEA_THISCALL* FUN_004c0510_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004c0510_t> FUN_004c0510 = {(FUN_004c0510_t)0x004c0510};
typedef uint32_t (BEA_THISCALL* FUN_004c0560_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004c0560_t> FUN_004c0560 = {(FUN_004c0560_t)0x004c0560};
typedef int (BEA_THISCALL* FUN_004cae50_t)(uint32_t);
static const bea_guard<FUN_004cae50_t> FUN_004cae50 = {(FUN_004cae50_t)0x004cae50};
typedef void * (BEA_THISCALL* FUN_004cb0e0_t)(uint32_t);
static const bea_guard<FUN_004cb0e0_t> FUN_004cb0e0 = {(FUN_004cb0e0_t)0x004cb0e0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_THISCALL ap_004cb5c0(void * this_, int *param_1, int param_2)
{
  undefined4 *a1;
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_10 = 0;
  undefined1 *puStack_8;
  undefined4 local_4;
  if (param_1 == (int *)0x0) {
    return (undefined4 *)((undefined4 *)0x0);
  }
  if (*(int *)((int)this_ + 8) == 0) {
    iVar1 = FUN_004725d0(bea_arg(&DAT_008a9a98));
    if (DAT_0082b3ec < (-(uint)(iVar1 != 0) & 4) + 8) {
      pvVar2 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x10), bea_arg(s_C__dev_ONSLAUGHT2_ParticleManage_00630e60), bea_arg(0x2e2));
      if (pvVar2 != (void *)0x0) {
        FUN_004cb0e0(bea_arg(pvVar2));
      }
    }
    else {
      if (param_2 == 0) {
        return (undefined4 *)((undefined4 *)0x0);
      }
      pvVar2 = *(void **)this_;
      if (pvVar2 == (void *)0x0) {
        return (undefined4 *)((undefined4 *)0x0);
      }
      while (((((*(int **)((int)pvVar2 + 0x5c) == (int *)0x0 ||
              (iVar1 = bea_vcall<uint32_t>(*(int **)((int)pvVar2 + 0x5c), 0x4), iVar1 != 1)) ||
             (*(int *)((int)pvVar2 + 0x58) != 0))))) {
        pvVar2 = *(void **)((int)pvVar2 + 0x68);
        if (pvVar2 == (void *)0x0) {
          return (undefined4 *)((undefined4 *)0x0);
        }
      }
      if (*(int *)((int)pvVar2 + 0x6c) == 0) {
        *(undefined4 *)this_ = *(undefined4 *)((int)pvVar2 + 0x68);
      }
      else {
        *(undefined4 *)(*(int *)((int)pvVar2 + 0x6c) + 0x68) = *(undefined4 *)((int)pvVar2 + 0x68);
      }
      if (*(int *)((int)pvVar2 + 0x68) != 0) {
        *(undefined4 *)(*(int *)((int)pvVar2 + 0x68) + 0x6c) = *(undefined4 *)((int)pvVar2 + 0x6c);
      }
      FUN_004cae50(bea_arg(pvVar2));
      *(undefined4 *)((int)pvVar2 + 0x68) = *(undefined4 *)((int)this_ + 8);
      *(void **)((int)this_ + 8) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        return (undefined4 *)((undefined4 *)0x0);
      }
    }
  }
  iVar1 = FUN_004725d0(bea_arg(&DAT_008a9a98));
  DAT_0082b3e0 = ((*(int *)((int)this_ + 0x1c) + DAT_0082b3f0) * 1000) /
                 (int)(((-(uint)(iVar1 != 0) & 4) + 8) * 0x200);
  DAT_0082b3f4 = DAT_0082b3f4 + 1;
  if (param_2 == 0) {
    uVar3 = bea_vcall<uint32_t>(param_1, 0x4);
    switch(uVar3) {
    case 1:
    case 0xb:
      if (700 < DAT_0082b3e0) {
        return (undefined4 *)((undefined4 *)0x0);
      }
      if ((400 < DAT_0082b3e0) && (DAT_0082b3f4 % 300 < DAT_0082b3e0 + -400)) {
        return (undefined4 *)((undefined4 *)0x0);
      }
      break;
    case 2:
      if (900 < DAT_0082b3e0) {
        return (undefined4 *)((undefined4 *)0x0);
      }
      if ((800 < DAT_0082b3e0) && (DAT_0082b3f4 % 100 < DAT_0082b3e0 + -800)) {
        return (undefined4 *)((undefined4 *)0x0);
      }
      break;
    case 8:
    case 0xd:
      if (800 < DAT_0082b3e0) {
        return (undefined4 *)((undefined4 *)0x0);
      }
      if ((600 < DAT_0082b3e0) && (DAT_0082b3f4 % 200 < DAT_0082b3e0 + -600)) {
        return (undefined4 *)((undefined4 *)0x0);
      }
    }
  }
  a1 = *(undefined4 **)((int)this_ + 8);
  *(undefined4 *)((int)this_ + 8) = a1[0x1a];
  a1[0xe] = 0;
  a1[0xf] = 0;
  a1[0x10] = 0;
  a1[0x11] = local_10;
  a1[0x12] = DAT_0082b3d0;
  a1[0x13] = DAT_0082b3d4;
  a1[0x14] = DAT_0082b3d8;
  a1[0x15] = DAT_0082b3dc;
  puVar4 = &DAT_0082b3a0;
  puVar5 = a1 + 2;
  for (iVar1 = 0xc; ((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  a1[0x16] = 0;
  *(undefined2 *)((int)a1 + 0x7e) = 0;
  a1[0x20] = 0;
  a1[0x18] = 0x42c80000;
  a1[0x1d] = 0x3f800000;
  a1[0x1e] = 0;
  *(undefined2 *)(a1 + 0x1f) = 0;
  a1[0x21] = 0;
  a1[0x17] = 0;
  a1[0x22] = 0;
  a1[0x23] = 0;
  a1[0x19] = 0;
  a1[1] = 0;
  *a1 = 0;
  if (a1 != (undefined4 *)0x0) {
    a1[0x1a] = *(undefined4 *)this_;
    *(undefined4 **)this_ = a1;
    if (a1[0x1a] != 0) {
      *(undefined4 **)(a1[0x1a] + 0x6c) = a1;
    }
    a1[0x1b] = 0;
    if ((void *)a1[0x17] != (void *)0x0) {
      FUN_004c0560(bea_arg((void *)a1[0x17]), bea_arg(a1));
    }
    a1[0x17] = param_1;
    FUN_004c0510(bea_arg(param_1), bea_arg(a1));
    a1[0x21] = bea_piece32(DAT_009c6400);
    bea_vcall<uint32_t>(param_1, 0x24, a1);
  }
  DAT_0082b3f0 = DAT_0082b3f0 + 1;
  return (undefined4 *)(a1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cb5c0, ap_004cb5c0));
