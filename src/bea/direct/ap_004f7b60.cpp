// auto-ported from 004f7b60_vslot2.c (CUMTexture::vslot2, 103 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CUMTexture;
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
typedef uint32_t (BEA_THISCALL* FUN_00513760_t)(uint32_t);
static const bea_guard<FUN_00513760_t> FUN_00513760 = {(FUN_00513760_t)0x00513760};
typedef uint32_t (BEA_THISCALL* FUN_00513a10_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a10_t> FUN_00513a10 = {(FUN_00513a10_t)0x00513a10};
typedef undefined4 (BEA_CDECL* FUN_0055a0f0_t)(uint32_t);
static const bea_guard<FUN_0055a0f0_t> FUN_0055a0f0 = {(FUN_0055a0f0_t)0x0055a0f0};

static uint BEA_THISCALL ap_004f7b60(CUMTexture * this_)
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  
  *(int *)(this_ + 0x24) = *(int *)(this_ + 0xc);
  if (*(int *)(this_ + 0xc) == 0) {
    uVar2 = FUN_00513760(bea_arg(&DAT_00855bb0));
    uVar2 = FUN_0055a0f0(bea_arg(uVar2));
    *(undefined4 *)(this_ + 0x24) = uVar2;
  }
  piVar1 = *(int **)(this_ + 8);
  if (piVar1 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
    *(undefined4 *)(this_ + 8) = 0;
  }
  uVar3 = FUN_00513a10(bea_arg(&DAT_00855bb0), bea_arg(*(undefined4 *)(this_ + 0x14)), bea_arg(*(undefined4 *)(this_ + 0x14)), bea_arg(*(undefined4 *)(this_ + 0x18)), bea_arg(*(undefined4 *)(this_ + 0x10)), bea_arg(*(undefined4 *)(this_ + 0x24)), bea_arg(*(undefined4 *)(this_ + 0x1c)), bea_arg(this_ + 8));
  return uVar3 & (-1 < (int)uVar3) - 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f7b60, ap_004f7b60));
