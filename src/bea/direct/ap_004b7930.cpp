// auto-ported from 004b7930_FUN_004b7930.c (FUN_004b7930, 384 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008073d0 GLOBAL_AT(undefined4*, 0x008073d0)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_00704e74 GLOBAL_AT(char, 0x00704e74)
#define DAT_00704e70 GLOBAL_AT(int, 0x00704e70)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_004bac40_t)(uint32_t);
static const bea_guard<FUN_004bac40_t> FUN_004bac40 = {(FUN_004bac40_t)0x004bac40};
typedef uint32_t (BEA_THISCALL* FUN_004e1200_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e1200_t> FUN_004e1200 = {(FUN_004e1200_t)0x004e1200};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};

static uint32_t BEA_THISCALL ap_004b7930(void * this_)
{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int local_14;
  undefined1 *puStack_8;
  uint local_4;
  *(undefined ***)this_ = ((void*)0x005dc6d4);
  local_4 = 1;
  piVar2 = (int *)((int)this_ + 0x34);
  local_14 = 0xd;
  do {
    iVar3 = 6;
    do {
      if (*piVar2 != 0) {
        FUN_004f27e0(bea_arg((void *)(*piVar2 + 8)));
        *piVar2 = 0;
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (BEA_LOOP_GUARD((iVar3 != 0)));
    local_14 = local_14 + -1;
  } while (BEA_LOOP_GUARD((local_14 != 0)));
  if (*(int *)((int)this_ + 0x1a4) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x1a4) + 8)));
    *(undefined4 *)((int)this_ + 0x1a4) = 0;
  }
  if (*(int *)((int)this_ + 0x1a0) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x1a0) + 8)));
    *(undefined4 *)((int)this_ + 0x1a0) = 0;
  }
  if ((DAT_008073d0 != (undefined4 *)0x0) &&
     (FUN_004e1200(bea_arg(&DAT_00896988), bea_arg(DAT_008073d0)), DAT_008073d0 != (undefined4 *)0x0)) {
    bea_vcall<uint32_t>(DAT_008073d0, 0x0, 1);
    DAT_008073d0 = (undefined4 *)0x0;
  }
  puVar1 = *(undefined4 **)((int)this_ + 0xc);
  *(undefined4 **)((int)this_ + 0x14) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*puVar1;
  }
  while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
    if (piVar2 != (int *)0x0) {
      bea_vcall<uint32_t>(piVar2, 0x4, 1);
    }
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x14) + 4);
    *(undefined4 **)((int)this_ + 0x14) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar1;
    }
  }
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0xc)));
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0x30) = 1;
  *(undefined4 *)((int)this_ + 0x2c0) = 1;
  *(undefined4 *)((int)this_ + 0x2c4) = 0;
  if ((DAT_008073d0 != (undefined4 *)0x0) &&
     (FUN_004e1200(bea_arg(&DAT_00896988), bea_arg(DAT_008073d0)), DAT_008073d0 != (undefined4 *)0x0)) {
    bea_vcall<uint32_t>(DAT_008073d0, 0x0, 1);
    DAT_008073d0 = (undefined4 *)0x0;
  }
  (*(uint8_t*)((char*)&DAT_00704e74 + 0)) = 0;
  FUN_00401000(bea_arg(&DAT_00704e70), bea_arg(0));
  local_4 = local_4 & 0xffffff00;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0xc)));
  local_4 = 0xffffffff;
  return FUN_004bac40(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b7930, ap_004b7930));
