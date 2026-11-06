// auto-ported from 004d6240_FUN_004d6240.c (FUN_004d6240, 38 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static char * BEA_CDECL ap_004d6240(char *param_1, char *param_2, int param_3)
{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  while( true ) {
    if (param_3 < 1) {
      return pcVar2;
    }
    cVar1 = *param_2;
    *param_1 = cVar1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (cVar1 == '\0') break;
    param_3 = param_3 + -1;
  }
  return pcVar2;
}

// @autoport-registration (verified: 153 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004d6240, ap_004d6240));
