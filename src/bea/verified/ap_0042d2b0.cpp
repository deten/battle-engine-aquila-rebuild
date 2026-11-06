// auto-ported from 0042d2b0_FUN_0042d2b0.c (FUN_0042d2b0, 76 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined1 * BEA_THISCALL ap_0042d2b0(undefined1 * in_ECX, undefined1 param_1, undefined4 param_2, undefined4 param_3, undefined2 param_4, undefined4 param_5, undefined2 param_6, undefined2 param_7, undefined2 param_8)
{
  *(undefined4 *)(in_ECX + 4) = param_2;
  *in_ECX = param_1;
  *(undefined4 *)(in_ECX + 0xc) = param_3;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined2 *)(in_ECX + 0x10) = param_4;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined2 *)(in_ECX + 0x12) = param_7;
  *(undefined4 *)(in_ECX + 0x18) = param_5;
  *(undefined2 *)(in_ECX + 0x1c) = param_6;
  *(undefined2 *)(in_ECX + 0x1e) = param_8;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 48 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0042d2b0, ap_0042d2b0));
