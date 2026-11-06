// auto-ported from 00523b50_FUN_00523b50.c (FUN_00523b50, 100 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089bdf4 GLOBAL_AT(char, 0x0089bdf4)
#define DAT_00889008 GLOBAL_AT(int, 0x00889008)
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
#define DAT_0089bda8 GLOBAL_AT(int, 0x0089bda8)
#define DAT_0089bda4 GLOBAL_AT(int, 0x0089bda4)

static undefined4 BEA_CDECL ap_00523b50(float param_1, float param_2, float param_3, float param_4)
{
  if (DAT_0089bdf4 == '\0') {
    return 0;
  }
  if (DAT_00889008 == 0) {
    if ((((DAT_00662df4 == 0) && (param_1 <= (float)DAT_0089bda8)) &&
        ((float)DAT_0089bda8 < param_3)) &&
       ((param_2 <= (float)DAT_0089bda4 && ((float)DAT_0089bda4 < param_4)))) {
      return 1;
    }
    return 0;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00523b50, ap_00523b50));
