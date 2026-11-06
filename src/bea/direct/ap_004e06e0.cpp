// auto-ported from 004e06e0_FUN_004e06e0.c (FUN_004e06e0, 309 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_0083cfe8 GLOBAL_AT(int, 0x0083cfe8)
typedef void * (BEA_THISCALL* FUN_004e0820_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e0820_t> FUN_004e0820 = {(FUN_004e0820_t)0x004e0820};
typedef uint32_t (BEA_THISCALL* FUN_004e2b30_t)(uint32_t);
static const bea_guard<FUN_004e2b30_t> FUN_004e2b30 = {(FUN_004e2b30_t)0x004e2b30};
typedef uint32_t (BEA_THISCALL* FUN_005171e0_t)(uint32_t);
static const bea_guard<FUN_005171e0_t> FUN_005171e0 = {(FUN_005171e0_t)0x005171e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004e06e0(void * this_)
{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  void *this_00;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = *(int *)((int)this_ + 0xc);
  while (BEA_LOOP_GUARD((iVar5 != 0))) {
    iVar2 = *(int *)(iVar5 + 0x74);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x78) = *(undefined4 *)(iVar5 + 0x78);
    }
    if (*(int *)(iVar5 + 0x78) == 0) {
      *(undefined4 *)((int)this_ + 0xc) = *(undefined4 *)(iVar5 + 0x74);
    }
    else {
      *(undefined4 *)(*(int *)(iVar5 + 0x78) + 0x74) = *(undefined4 *)(iVar5 + 0x74);
    }
    *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + -1;
    *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)((int)this_ + 0x34);
    *(undefined4 *)(iVar5 + 0x78) = 0;
    if (*(int *)((int)this_ + 0x34) != 0) {
      *(int *)(*(int *)((int)this_ + 0x34) + 0x78) = iVar5;
    }
    *(int *)((int)this_ + 0x34) = iVar5;
    iVar5 = iVar2;
  }
  *(undefined4 *)((int)this_ + 0xc) = 0;
  pvVar3 = *(void **)((int)this_ + 0x34);
  while (BEA_LOOP_GUARD((this_00 = pvVar3, this_00 != (void *)0x0))) {
    pvVar3 = *(void **)((int)this_00 + 0x74);
    if (this_00 != (void *)0x0) {
      FUN_004e2b30(bea_arg(this_00));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
    }
  }
  puVar4 = *(undefined4 **)this_;
  while (BEA_LOOP_GUARD((puVar6 = puVar4, puVar6 != (undefined4 *)0x0))) {
    puVar4 = (undefined4 *)puVar6[0x1d];
    if (puVar6 != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(puVar6, 0x0, 1);
    }
  }
  *(undefined4 *)this_ = 0;
  FUN_005171e0(bea_arg(&DAT_00896988));
  iVar5 = DAT_0083cfe8;
  if (*(int *)((int)this_ + 0x10) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x10)));
    *(undefined4 *)((int)this_ + 0x10) = 0;
    iVar5 = DAT_0083cfe8;
  }
  while (BEA_LOOP_GUARD((iVar2 = iVar5, iVar2 != 0))) {
    piVar1 = (int *)(iVar2 + 0xd8);
    iVar5 = *piVar1;
    if (iVar2 != 0) {
      if (*(void **)(iVar2 + 0xd4) != (void *)0x0) {
        FUN_004e0820(bea_arg(*(void **)(iVar2 + 0xd4)), bea_arg(1));
        *(undefined4 *)(iVar2 + 0xd4) = 0;
      }
      iVar7 = 0;
      for (iVar8 = DAT_0083cfe8; BEA_LOOP_GUARD((iVar8 != 0)); iVar8 = *(int *)(iVar8 + 0xd8)) {
        if (iVar8 == iVar2) {
          if (iVar7 == 0) {
            DAT_0083cfe8 = *piVar1;
          }
          else {
            *(int *)(iVar7 + 0xd8) = *piVar1;
          }
        }
        iVar7 = iVar8;
      }
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
    }
  }
  *(undefined1 *)((int)this_ + 4) = 0;
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004e06e0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
