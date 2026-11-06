// auto-ported from 004413a0_vslot36.c (CDebris::vslot36, 121 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CDebris;
#define _DAT_00628300 GLOBAL_AT(float, 0x00628300)
#define _DAT_00628304 GLOBAL_AT(float, 0x00628304)
#define DAT_0063012c GLOBAL_AT(int, 0x0063012c)

static void BEA_THISCALL ap_004413a0(CDebris * this_, undefined4 param_1)
{
  int local_8;
  
  if ((((*(ushort *)(this_ + 0x2c) & 0x10) == 0) && (*(int *)(this_ + 0x30) != 0)) &&
     ((*(ushort *)(this_ + 0x2c) & 8) == 0)) {
    local_8 = (int)(longlong)
                   ROUND(((*(float *)(this_ + 0x80) - _DAT_00628300) * 255.0f) /
                         (_DAT_00628304 - _DAT_00628300));
    DAT_0063012c = 0xff - local_8;
    if (DAT_0063012c < 0) {
      DAT_0063012c = 0;
    }
    else if (0xff < DAT_0063012c) {
      DAT_0063012c = 0xff;
    }
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x8, param_1);
    DAT_0063012c = 0xff;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004413a0, ap_004413a0));
