// auto-ported from 004f4300_vslot0.c (CComplexThing::vslot0, 204 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (5 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_00533500_t)(uint32_t);
static const bea_guard<FUN_00533500_t> FUN_00533500 = {(FUN_00533500_t)0x00533500};
typedef uint32_t (BEA_THISCALL* FUN_005335a0_t)(uint32_t);
static const bea_guard<FUN_005335a0_t> FUN_005335a0 = {(FUN_005335a0_t)0x005335a0};

static void BEA_THISCALL ap_004f4300(CComplexThing * this_, int param_1)
{
  short sVar1;
  int iVar2;
  
  iVar2 = param_1;
  sVar1 = *(short *)(param_1 + 4);
  if (sVar1 == 2000) {
    if ((DAT_008a9ac0 < 4) && (*(int **)(this_ + 0x74) != (int *)0x0)) {
      bea_vcall<uint32_t>(*(int **)(this_ + 0x74), 0x8);
    }
    if (*(short *)(iVar2 + 4) != 2000) {
      if (*(short *)(iVar2 + 4) != 0x7d2) {
        return;
      }
      bea_vcall<uint32_t>(this_, 0xc8);
      return;
    }
  }
  else {
    if (sVar1 == 0x7d1) {
      if (*(void **)(this_ + 0x74) != (void *)0x0) {
        FUN_00533500(bea_arg(*(void **)(this_ + 0x74)));
      }
      if (((byte)this_[0x34] & 0x10) != 0) {
        return;
      }
      param_1 = 0xbf800000;
      FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0x7d3), bea_arg(this_), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(0));
      return;
    }
    if (sVar1 == 0x7d3) {
      if (*(void **)(this_ + 0x74) == (void *)0x0) {
        return;
      }
      FUN_005335a0(bea_arg(*(void **)(this_ + 0x74)));
      return;
    }
    if (sVar1 != 2000) {
      if (sVar1 != 0x7d2) {
        return;
      }
      bea_vcall<uint32_t>(this_, 0xc8);
      return;
    }
  }
  bea_vcall<uint32_t>(this_, 0x8);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f4300, ap_004f4300));
