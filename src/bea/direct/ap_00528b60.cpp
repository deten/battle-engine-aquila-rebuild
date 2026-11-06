// auto-ported from 00528b60_FUN_00528b60.c (FUN_00528b60, 82 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_STDCALL ap_00528b60(undefined4 *param_1)
{
  while(BEA_LOOP_GUARD(( true ))) {
    WaitForSingleObject((HANDLE)param_1[3],0xffffffff);
    if (*(char *)(param_1 + 5) != '\0') break;
    WaitForSingleObject((HANDLE)param_1[2],0xffffffff);
    bea_vcall<uint32_t>(param_1, 0x0);
    *(undefined1 *)((int)param_1 + 0x15) = 0;
    ReleaseMutex((HANDLE)param_1[2]);
    SetEvent((HANDLE)param_1[4]);
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00528b60, ap_00528b60));
