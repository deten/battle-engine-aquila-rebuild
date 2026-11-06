// auto-ported from 0054fee0_FUN_0054fee0.c (FUN_0054fee0, 59 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c64d0 GLOBAL_AT(int, 0x009c64d0)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_THISCALL* FUN_00550110_t)(uint32_t);
static const bea_guard<FUN_00550110_t> FUN_00550110 = {(FUN_00550110_t)0x00550110};

static void BEA_CDECL ap_0054fee0(void)
{
  void *pvVar1;
  void *pvVar2;
  
  if (DAT_009c64d0 != (void *)0x0) {
    do {
      pvVar2 = DAT_009c64d0;
      pvVar1 = *(void **)((int)DAT_009c64d0 + 0x1a0);
      if ((DAT_009c64d0 != (void *)0x0) && (DAT_009c64d0 != (void *)0x0)) {
        FUN_00550110(bea_arg(DAT_009c64d0));
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar2));
      }
      DAT_009c64d0 = pvVar1;
    } while (BEA_LOOP_GUARD((pvVar1 != (void *)0x0)));
    DAT_009c64d0 = (void *)0x0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0054fee0, ap_0054fee0));
