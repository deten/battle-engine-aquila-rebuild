// auto-ported from 00404170_vslot29.c (CActor::vslot29, 45 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef char CActor;

static float * BEA_THISCALL ap_00404170(CActor * this_, float *param_1)
{
  *(float *)(this_ + 0x7c) = *(float *)(this_ + 0x7c) + *param_1;
  *(float *)(this_ + 0x80) = param_1[1] + *(float *)(this_ + 0x80);
  *(float *)(this_ + 0x84) = param_1[2] + *(float *)(this_ + 0x84);
  return param_1;
  return param_1;
}

// @autoport-registration (verified: 271 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00404170, ap_00404170));
