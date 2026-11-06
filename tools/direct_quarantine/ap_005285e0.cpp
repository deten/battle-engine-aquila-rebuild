// auto-ported from 005285e0_FUN_005285e0.c (FUN_005285e0, 161 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0089bec8 GLOBAL_AT(int, 0x0089bec8)
typedef uint32_t (BEA_CDECL* FUN_0055fa40_t)(void);
static const bea_guard<FUN_0055fa40_t> FUN_0055fa40 = {(FUN_0055fa40_t)0x0055fa40};

static void BEA_CDECL ap_005285e0(float param_1)
{
  int *piVar1;
  float10 fVar2;
  undefined4 local_8;
  
  piVar1 = DAT_0089bec8;
  if (DAT_0089bec8 != (int *)0x0) {
    fVar2 = (float10)FUN_0055fa40();
    if ((float10)0.0f <= fVar2) {
      if ((float10)1.0f < fVar2) {
        fVar2 = (float10)1.0f;
      }
    }
    else {
      fVar2 = (float10)0.0f;
    }
    local_8 = (undefined4)(longlong)ROUND(fVar2 * (float10)10000.0f - (float10)10000.0f);
    bea_vcall<uint32_t>(piVar1, 0x3c, piVar1,local_8);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005285e0, ap_005285e0));
