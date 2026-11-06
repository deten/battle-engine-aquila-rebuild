// auto-ported from 0042d260_FUN_0042d260.c (FUN_0042d260, 66 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined1 * BEA_THISCALL ap_0042d260(undefined1 * in_ECX, undefined1 param_1, undefined4 param_2, undefined4 param_3, undefined2 param_4, undefined2 param_5)
{
  *(undefined4 *)(in_ECX + 4) = param_2;
  *(undefined4 *)(in_ECX + 0xc) = param_3;
  *in_ECX = param_1;
  *(undefined2 *)(in_ECX + 0x10) = param_4;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined2 *)(in_ECX + 0x12) = param_5;
  *(undefined4 *)(in_ECX + 0x14) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined2 *)(in_ECX + 0x1c) = 0;
  *(undefined2 *)(in_ECX + 0x1e) = 0;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 189 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0042d260, ap_0042d260));
