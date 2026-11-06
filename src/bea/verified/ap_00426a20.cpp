// auto-ported from 00426a20_vslot0.c (CCSPersistentThing::vslot0, 24 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CCSPersistentThing;

static uint32_t BEA_THISCALL ap_00426a20(CCSPersistentThing * this_, int param_1)
{
  if (*(short *)(param_1 + 4) == 3000) {
    *(uint *)(this_ + 0xc) = *(uint *)(this_ + 0xc) | 0x400;
  }
  return *(uint32_t*)((char*)this_ + 0xc);
  return *(uint32_t*)((char*)this_ + 0xc);
}

// @autoport-registration (verified: 4906 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00426a20, ap_00426a20));
