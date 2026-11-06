// auto-ported from 0047e710_vslot39.c (CHazard::vslot39, 88 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CHazard;
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot39_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot39_t> CComplexThing__vslot39 = {(CComplexThing__vslot39_t)0x004f4480};
typedef uint32_t (BEA_THISCALL* FUN_0040dce0_t)(uint32_t);
static const bea_guard<FUN_0040dce0_t> FUN_0040dce0 = {(FUN_0040dce0_t)0x0040dce0};

static void BEA_THISCALL ap_0047e710(CHazard * this_, int *param_1, int *param_2)
{
  int iVar1;
  
  CComplexThing__vslot39(bea_arg((CComplexThing *)this_), bea_arg(param_1), bea_arg(param_2));
  if ((*(byte *)(param_1 + 0xd) & 0x10) != 0) {
    iVar1 = -1;
    if ((*param_2 != 0) && (0 < param_2[0x20])) {
      iVar1 = param_2[0x1a];
    }
    bea_vcall<uint32_t>(param_1, 0xa0, *(undefined4 *)(*(int *)(this_ + 0x7c) + 0x18),this_,1,iVar1);
    if ((*(byte *)(param_1 + 0xd) & 8) != 0) {
      FUN_0040dce0(bea_arg(param_1));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047e710, ap_0047e710));
