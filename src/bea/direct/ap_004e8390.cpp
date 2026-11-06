// auto-ported from 004e8390_vslot69.c (CNormalSquad::vslot69, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CNormalSquad;

static undefined4 BEA_THISCALL ap_004e8390(CNormalSquad * this_)
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)bea_vcall<uint32_t>(this_, 0x124);
  if (piVar1 != (int *)0x0) {
                    
                    
    uVar2 = bea_vcall<uint32_t>(piVar1, 0x164);
    return uVar2;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e8390, ap_004e8390));
