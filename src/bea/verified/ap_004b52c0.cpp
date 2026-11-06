// auto-ported from 004b52c0_FUN_004b52c0.c (FUN_004b52c0, 112 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int BEA_CDECL ap_004b52c0(float *param_1, float param_2)
{
  int iVar1;
  int iVar2;
  int local_8;
  
  local_8 = (int)(longlong)ROUND(*param_1 * 127.0f + 128.0f);
  iVar1 = local_8;
  local_8 = (int)(longlong)ROUND(param_2 * -255.0f);
  iVar2 = local_8 * -0x100;
  local_8 = (int)(longlong)ROUND(param_1[1] * 127.0f + 128.0f);
  iVar2 = (iVar1 + iVar2) * 0x100 + local_8;
  local_8 = (int)(longlong)ROUND(param_1[2] * 127.0f + 128.0f);
  return iVar2 * 0x100 + local_8;
}

// @autoport-registration (verified: 3675 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004b52c0, ap_004b52c0));
