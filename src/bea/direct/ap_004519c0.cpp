// auto-ported from 004519c0_vslot6.c (CFEPBEConfig::vslot6, 117 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPBEConfig;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)
#define DAT_0089da3c GLOBAL_AT(undefined4*, 0x0089da3c)
#define DAT_0089da34 GLOBAL_AT(undefined4*, 0x0089da34)
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};

static undefined4 BEA_THISCALL ap_004519c0(CFEPBEConfig * this_, undefined4 param_1)
{
  int *piVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  *(float *)(this_ + 4) = (float)fVar2;
  *(undefined4 *)(this_ + 0x10) = 0;
  piVar1 = DAT_0089d94c;
  if (DAT_0089d94c == (int *)0x2c6) {
    DAT_0089da3c = DAT_0089da34;
    if (DAT_0089da34 == (undefined4 *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)*DAT_0089da34;
    }
    if (piVar1 != (int *)0x0) {
      while (BEA_LOOP_GUARD((*piVar1 != 0x2c6))) {
        DAT_0089da3c = (undefined4 *)DAT_0089da3c[1];
        if (DAT_0089da3c == (undefined4 *)0x0) {
          piVar1 = (int *)0x0;
        }
        else {
          piVar1 = (int *)*DAT_0089da3c;
        }
        if (piVar1 == (int *)0x0) {
          return 0;
        }
      }
      if ((piVar1 != (int *)0x0) && (3 < piVar1[8])) {
        *(undefined4 *)(this_ + 0x10) = 1;
      }
    }
  }
  return piVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004519c0, ap_004519c0));
