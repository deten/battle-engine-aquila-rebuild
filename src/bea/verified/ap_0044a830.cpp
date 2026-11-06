// auto-ported from 0044a830_vslot3.c (CEquipment::vslot3, 24 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CEquipment;

static uint32_t BEA_THISCALL ap_0044a830(CEquipment * this_, undefined4 *param_1)
{
  *(undefined4 *)(this_ + 8) = *param_1;
  *(undefined4 *)(this_ + 0xc) = param_1[1];
  *(undefined4 *)(this_ + 0x10) = param_1[2];
  return *(uint32_t*)((char*)this_ + 0x10);
  return *(uint32_t*)((char*)this_ + 0x10);
}

// @autoport-registration (verified: 2928 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0044a830, ap_0044a830));
