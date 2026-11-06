// auto-ported from 004ec250_FUN_004ec250.c (FUN_004ec250, 145 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};

static void * BEA_THISCALL ap_004ec250(void * this_, uint param_1)
{
  int iVar1;
  
  if ((param_1 & 2) != 0) {
    FUN_0055db0a(bea_arg(this_), bea_arg(0x1c), bea_arg(*(undefined4 *)((int)this_ + -4)), bea_arg(((void*)0x004ebdf0)));
    if ((param_1 & 1) != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg((void *)((int)this_ + -4)));
    }
    return (void *)((void *)((int)this_ + -4));
  }
  if (*(int *)((int)this_ + 0x10) != 0) {
    iVar1 = 0;
    if (0 < *(int *)((int)this_ + 0xc) * *(int *)((int)this_ + 8)) {
      do {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x10) + iVar1 * 4)));
        iVar1 = iVar1 + 1;
      } while (BEA_LOOP_GUARD((iVar1 < *(int *)((int)this_ + 0xc) * *(int *)((int)this_ + 8))));
    }
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x10)));
  }
  if ((param_1 & 1) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_));
  }
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ec250, ap_004ec250));
