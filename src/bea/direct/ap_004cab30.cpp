// auto-ported from 004cab30_FUN_004cab30.c (FUN_004cab30, 272 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_CDECL ap_004cab30(uint param_1, uint param_2, float param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined8 local_8;
  
  fVar1 = 1.0f - param_3;
  local_8 = (ulonglong)(param_2 >> 0x10 & 0xff);
  (*(uint32_t*)((char*)&local_8 + 0)) =
       (int)(longlong)ROUND((float)(param_1 >> 0x10 & 0xff) * param_3 + (float)local_8 * fVar1);
  iVar3 = (int)local_8;
  local_8 = (ulonglong)(param_2 >> 0x18);
  fVar2 = (float)local_8;
  local_8 = (ulonglong)(param_1 >> 0x18);
  (*(uint32_t*)((char*)&local_8 + 0)) = (int)(longlong)ROUND((float)local_8 * param_3 + fVar2 * fVar1);
  iVar4 = (int)local_8 * 0x100;
  (*(uint32_t*)((char*)&local_8 + 0)) =
       (int)(longlong)
            ROUND((float)(param_1 >> 8 & 0xff) * param_3 + (float)(param_2 >> 8 & 0xff) * fVar1);
  iVar3 = (iVar3 + iVar4) * 0x100 + (int)local_8;
  local_8 = (ulonglong)(param_2 & 0xff);
  fVar2 = (float)local_8;
  local_8 = (ulonglong)(param_1 & 0xff);
  (*(uint32_t*)((char*)&local_8 + 0)) = (int)(longlong)ROUND((float)local_8 * param_3 + fVar2 * fVar1);
  return iVar3 * 0x100 + (int)local_8;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cab30, ap_004cab30));
