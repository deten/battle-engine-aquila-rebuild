// auto-ported from 004ebdf0_FUN_004ebdf0.c (FUN_004ebdf0, 70 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 BEA_THISCALL ap_004ebdf0(void * this_)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)((int)this_ + 0x10) != 0) {
    iVar2 = 0;
    if (0 < *(int *)((int)this_ + 8) * *(int *)((int)this_ + 0xc)) {
      do {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x10) + iVar2 * 4)));
        iVar2 = iVar2 + 1;
      } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)this_ + 8) * *(int *)((int)this_ + 0xc))));
    }
    uVar1 = FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x10)));
  }
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ebdf0, ap_004ebdf0));
