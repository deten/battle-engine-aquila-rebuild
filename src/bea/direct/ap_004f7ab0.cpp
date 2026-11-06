// auto-ported from 004f7ab0_FUN_004f7ab0.c (FUN_004f7ab0, 169 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
// @hand-fixed 2026-10-28 compile: mangled 'return LAB_004f7b51:' tail restored as label + return of the vcall [eax+8] at 0x4f7b51-0x4f7b53
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_006fabcc GLOBAL_AT(int, 0x006fabcc)

static uint32_t BEA_THISCALL ap_004f7ab0(void * this_, undefined4 param_1, int param_2, undefined4 param_3)
{
  *(undefined4 *)((int)this_ + 0x14) = param_1;
  *(undefined4 *)((int)this_ + 0x18) = param_3;
  if (param_2 == 0) {
    *(undefined4 *)((int)this_ + 0xc) = 0x17;
    *(undefined4 *)((int)this_ + 0x10) = 1;
    *(undefined4 *)((int)this_ + 0x1c) = 0;
    return bea_vcall<uint32_t>(this_, 0x8);
  }
  if (param_2 == 3) {
    *(undefined4 *)((int)this_ + 0xc) = 0;
    *(undefined4 *)((int)this_ + 0x10) = 1;
    *(undefined4 *)((int)this_ + 0x1c) = 0;
    return bea_vcall<uint32_t>(this_, 0x8);
  }
  if (param_2 == 1) {
    *(undefined4 *)((int)this_ + 0xc) = 0x17;
    *(undefined4 *)((int)this_ + 0x10) = 0;
    if (DAT_006fabcc == 0) {
      *(undefined4 *)((int)this_ + 0x1c) = 0;
      return bea_vcall<uint32_t>(this_, 0x8);
    }
  }
  else {
    if (param_2 == 4) {
      *(undefined4 *)((int)this_ + 0xc) = 0x15;
      *(undefined4 *)((int)this_ + 0x10) = 0;
      *(undefined4 *)((int)this_ + 0x1c) = 1;
      return bea_vcall<uint32_t>(this_, 0x8);
    }
    if (param_2 != 5) goto LAB_004f7b51;
    *(undefined4 *)((int)this_ + 0xc) = 0x17;
    *(undefined4 *)((int)this_ + 0x10) = 0;
  }
  *(undefined4 *)((int)this_ + 0x1c) = 1;
LAB_004f7b51:
  return bea_vcall<uint32_t>(this_, 0x8);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f7ab0, ap_004f7ab0));
