// auto-ported from 005046a0_vslot12.c (CWarspiteAI::vslot12, 76 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CWarspiteAI;
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};

static void BEA_THISCALL ap_005046a0(CWarspiteAI * this_)
{
  CWarspiteAI *pCStack_4;
  
  if (*(int *)(*(int *)(this_ + 8) + 0x38) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(this_ + 8) + 0x38) + 0x20) = 0;
  }
  pCStack_4 = this_;
  bea_vcall<uint32_t>(this_, 0x18);
  if (*(int *)(*(int *)(this_ + 8) + 0x74) != 0) {
    pCStack_4 = (CWarspiteAI *)0xbf800000;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0x7d3), bea_arg(*(int *)(this_ + 8)), bea_arg(&pCStack_4), bea_arg(0), bea_arg(0), bea_arg(0));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005046a0, ap_005046a0));
