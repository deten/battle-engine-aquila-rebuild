// auto-ported from 00498bf0_FUN_00498bf0.c (FUN_00498bf0, 67 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_00498bf0(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
  *(undefined4 *)((int)this_ + 0x98) = param_1;
  *(undefined4 *)((int)this_ + 0x9c) = param_2;
  *(undefined4 *)((int)this_ + 0xa0) = param_3;
  *(undefined4 *)((int)this_ + 0xa4) = param_6;
  *(undefined4 *)((int)this_ + 0xc) = param_4;
  *(undefined4 *)((int)this_ + 0x10) = param_5;
  *(undefined4 *)((int)this_ + 0xc4) = param_7;
  return param_7;
  return param_7;
}

// @autoport-registration (verified: 93 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00498bf0, ap_00498bf0));
