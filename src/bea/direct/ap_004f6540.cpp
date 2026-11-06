// auto-ported from 004f6540_vslot27_t8.c (CTree::vslot27_t8, 17 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CTree;

static uint BEA_THISCALL ap_004f6540(CTree * this_)
{
  *(undefined4 *)(this_ + 0x34) = 0;
  return (uint)(this_ + -8) >> 4 & 3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f6540, ap_004f6540));
