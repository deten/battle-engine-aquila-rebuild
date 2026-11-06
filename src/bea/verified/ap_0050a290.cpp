// auto-ported from 0050a290_FUN_0050a290.c (FUN_0050a290, 31 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_0050a290(int in_ECX)
{
  if (((*(int *)(in_ECX + 0xa0) != 0) && (*(int *)(in_ECX + 0x6c) != 0)) &&
     (*(int *)(in_ECX + 0x6c) < *(int *)(*(int *)(in_ECX + 0xa0) + 0x44))) {
    return 1;
  }
  return 0;
}

// @autoport-registration (verified: 31261 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0050a290, ap_0050a290));
