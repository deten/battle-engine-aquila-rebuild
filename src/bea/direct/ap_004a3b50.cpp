// auto-ported from 004a3b50_vslot12.c (CMenuMenuItem::vslot12, 16 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CMenuMenuItem;

static void BEA_THISCALL ap_004a3b50(CMenuMenuItem * this_)
{
  undefined4 uVar1;
  
  uVar1 = bea_vcall<uint32_t>(this_, 0x3c);
  *(undefined4 *)(this_ + 0x1c) = uVar1;
  *(undefined4 *)(this_ + 0x20) = uVar1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a3b50, ap_004a3b50));
