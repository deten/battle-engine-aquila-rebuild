// auto-ported from 004487e0_vslot3.c (CDropshipAI::vslot3, 89 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CDropshipAI;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};

static float10 BEA_THISCALL ap_004487e0(CDropshipAI * this_)
{
  int iVar1;
  uint uVar2;
  
  bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x158);
  iVar1 = bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x150);
  if (iVar1 != 0) {
    bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x128);
  }
  uVar2 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  uVar2 = uVar2 & 0x8000ffff;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xffff0000) + 1;
  }
  return (float10)(int)uVar2 * (float10)1.5258789e-05f + (float10)0.5f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004487e0, ap_004487e0));
