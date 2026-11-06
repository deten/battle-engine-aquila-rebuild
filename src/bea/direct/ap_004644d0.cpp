// auto-ported from 004644d0_vslot6.c (CFEPMain::vslot6, 75 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPMain;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00662aa8 GLOBAL_AT(int, 0x00662aa8)
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};

static void BEA_THISCALL ap_004644d0(CFEPMain * this_, undefined4 param_1)
{
  float10 fVar1;
  
  *(undefined4 *)(this_ + 0x14) = 0xbf800000;
  fVar1 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  *(float *)(this_ + 4) = (float)(fVar1 + (float10)1.0f);
  if ((*(int *)(this_ + 8) == 0) && (DAT_00662aa8 != 0)) {
    *(undefined4 *)(this_ + 8) = 1;
  }
  *(int *)(this_ + 0xc) = *(int *)(this_ + 8);
  *(float *)(this_ + 0x10) = (float)*(int *)(this_ + 8);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004644d0, ap_004644d0));
