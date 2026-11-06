// auto-ported from 004ef080_vslot64.c (CSubmarine::vslot64, 109 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CSubmarine;

static void BEA_THISCALL ap_004ef080(CSubmarine * this_)
{
  undefined4 local_4 = 0;
  
  *(undefined4 *)(this_ + 0x14c) = 0;
  *(undefined4 *)(this_ + 0x150) = 0;
  *(undefined4 *)(this_ + 0x154) = 0;
  *(undefined4 *)(this_ + 0x158) = local_4;
  *(undefined4 *)(this_ + 0x120) = *(undefined4 *)(this_ + 0x114);
  *(undefined4 *)(this_ + 0x124) = *(undefined4 *)(this_ + 0x118);
  *(undefined4 *)(this_ + 0x128) = *(undefined4 *)(this_ + 0x11c);
  if (*(int **)(this_ + 0x208) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)(this_ + 0x208), 0x20);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ef080, ap_004ef080));
