// auto-ported from 00441420_vslot37.c (CDebris::vslot37, 108 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CDebris;
#define _DAT_00628300 GLOBAL_AT(float, 0x00628300)
#define _DAT_00628304 GLOBAL_AT(float, 0x00628304)
#define DAT_0063012c GLOBAL_AT(int, 0x0063012c)

static void BEA_THISCALL ap_00441420(CDebris * this_)
{
  int local_8;
  
  if ((*(int *)(this_ + 0x30) != 0) && (((byte)this_[0x2c] & 8) == 0)) {
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
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0xc);
    DAT_0063012c = 0xff;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00441420, ap_00441420));
