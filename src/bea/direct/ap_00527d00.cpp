// auto-ported from 00527d00_vslot0.c (CRenderMethod::vslot0, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CRenderMethod;

static uint32_t BEA_THISCALL ap_00527d00(CRenderMethod * this_, float param_1)
{
  undefined4 local_8;
  
  local_8 = (undefined4)(longlong)ROUND(param_1);
  *(undefined4 *)(this_ + 0x10) = 1;
  *(undefined4 *)(this_ + 0xc) = local_8;
  return *(uint32_t*)((char*)this_ + 0xc);
  return *(uint32_t*)((char*)this_ + 0xc);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00527d00, ap_00527d00));
