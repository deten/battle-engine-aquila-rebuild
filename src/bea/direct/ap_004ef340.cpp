// auto-ported from 004ef340_vslot9.c (CSubmarineAI::vslot9, 311 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CSubmarineAI;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef undefined4 (BEA_THISCALL* FUN_004fb670_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb670_t> FUN_004fb670 = {(FUN_004fb670_t)0x004fb670};
typedef uint32_t (BEA_THISCALL* FUN_004fce40_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fce40_t> FUN_004fce40 = {(FUN_004fce40_t)0x004fce40};
typedef uint32_t (BEA_THISCALL* FUN_004fce80_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fce80_t> FUN_004fce80 = {(FUN_004fce80_t)0x004fce80};

static void BEA_THISCALL ap_004ef340(CSubmarineAI * this_, undefined4 param_1)
{
  int iVar1;
  uint uVar2;
  CSubmarineAI *pCStack_4;
  
  if ((*(int *)(this_ + 0x20) != 0) && ((*(byte *)(*(int *)(this_ + 8) + 0x2c) & 4) == 0)) {
    pCStack_4 = this_;
    bea_vcall<uint32_t>(this_, 0xc);
    if (*(int *)(this_ + 0xc) == 0) {
      iVar1 = bea_vcall<uint32_t>(this_, 0x14);
      if (iVar1 != 0) {
        return;
      }
      bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x100);
    }
    else {
      iVar1 = FUN_004fb670(bea_arg(*(void **)(this_ + 8)), bea_arg(*(int *)(this_ + 0xc)));
      if (iVar1 == 1) {
        iVar1 = *(int *)(this_ + 0xc);
        bea_vcall<uint32_t>(*(int **)(this_ + 8), 0xf4, *(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x20),
                   *(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x28),0);
      }
      else if (iVar1 == 2) {
        iVar1 = *(int *)(this_ + 0xc);
        FUN_004fce40(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)(iVar1 + 0x1c)), bea_arg(*(undefined4 *)(iVar1 + 0x20)), bea_arg(*(undefined4 *)(iVar1 + 0x24)), bea_arg(*(undefined4 *)(iVar1 + 0x28)));
      }
      else {
        iVar1 = *(int *)(this_ + 0xc);
        FUN_004fce80(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)(iVar1 + 0x1c)), bea_arg(*(undefined4 *)(iVar1 + 0x20)), bea_arg(*(undefined4 *)(iVar1 + 0x24)), bea_arg(*(undefined4 *)(iVar1 + 0x28)));
      }
    }
    uVar2 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar2 = uVar2 & 0x8000ffff;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffff0000) + 1;
    }
    pCStack_4 = (CSubmarineAI *)(uintptr_t)bea_piece32(((float)(int)uVar2 * 1.5258789e-05f + DAT_00672fd0));
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&pCStack_4), bea_arg(0), bea_arg(0), bea_arg(param_1));
  }
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004ef340.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
