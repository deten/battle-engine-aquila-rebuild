// auto-ported from 00404150_vslot28.c (CActor::vslot28, 32 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CActor;

static uint32_t BEA_THISCALL ap_00404150(CActor * this_, undefined4 *param_1)
{
  *(undefined4 *)(this_ + 0x7c) = *param_1;
  *(undefined4 *)(this_ + 0x80) = param_1[1];
  *(undefined4 *)(this_ + 0x84) = param_1[2];
  *(undefined4 *)(this_ + 0x88) = param_1[3];
  return *(uint32_t*)((char*)this_ + 0x88);
  return *(uint32_t*)((char*)this_ + 0x88);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00404150, ap_00404150));
