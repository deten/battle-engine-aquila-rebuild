// auto-ported from 004f35d0_vslot34.c (CThing::vslot34, 38 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CThing;
typedef int * (BEA_CDECL* FUN_005164b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005164b0_t> FUN_005164b0 = {(FUN_005164b0_t)0x005164b0};

static uint32_t BEA_THISCALL ap_004f35d0(CThing * this_, undefined4 param_1)
{
  CThing *pCVar1;
  undefined4 uVar2;
  
  if (this_ == (CThing *)0x0) {
    pCVar1 = (CThing *)0x0;
  }
  else {
    pCVar1 = this_ + 8;
  }
  uVar2 = bea_vcall<uint32_t>(this_, 0x20);
  uVar2 = FUN_005164b0(bea_arg(uVar2), bea_arg(pCVar1));
  *(undefined4 *)(this_ + 0x30) = uVar2;
  return *(uint32_t*)((char*)this_ + 0x30);
  return *(uint32_t*)((char*)this_ + 0x30);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f35d0, ap_004f35d0));
