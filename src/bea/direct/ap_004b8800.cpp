// auto-ported from 004b8800_FUN_004b8800.c (FUN_004b8800, 73 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00662f44 GLOBAL_AT(int, 0x00662f44)
#define DAT_008073d0 GLOBAL_AT(undefined4*, 0x008073d0)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
typedef uint32_t (BEA_THISCALL* FUN_004e1200_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e1200_t> FUN_004e1200 = {(FUN_004e1200_t)0x004e1200};

static void BEA_THISCALL ap_004b8800(void * this_)
{
  if (DAT_00662f44 == 0) {
    if (*(char *)((int)this_ + 0x1c0) != '\0') {
      *(undefined1 *)((int)this_ + 0x1c0) = 0;
    }
    if (DAT_008073d0 != (undefined4 *)0x0) {
      FUN_004e1200(bea_arg(&DAT_00896988), bea_arg(DAT_008073d0));
      if (DAT_008073d0 != (undefined4 *)0x0) {
        bea_vcall<uint32_t>(DAT_008073d0, 0x0, 1);
        DAT_008073d0 = (undefined4 *)0x0;
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b8800, ap_004b8800));
