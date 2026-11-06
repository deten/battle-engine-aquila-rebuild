// auto-ported from 004cfd30_vslot15.c (CnVidia::vslot15, 23 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CnVidia;
#define DAT_009c648c GLOBAL_AT(int, 0x009c648c)

static uint BEA_THISCALL ap_004cfd30(CnVidia * this_)
{
  int iVar1;
  
  iVar1 = bea_vcall<uint32_t>(this_, 0x40);
  return ~-(uint)(iVar1 != 2) & DAT_009c648c;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cfd30, ap_004cfd30));
