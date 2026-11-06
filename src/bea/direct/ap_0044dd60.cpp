// auto-ported from 0044dd60_FUN_0044dd60.c (FUN_0044dd60, 299 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};

static void BEA_THISCALL ap_0044dd60(void * this_, int param_1, undefined4 param_2)
{
  if ((*(int *)((int)this_ + 0x1f80) == 1) && (*(int *)((int)this_ + 0x1f8c) != 0)) {
    switch(*(undefined4 *)((int)this_ + 0x1f98)) {
    case 1:
      if (param_1 == 0x2c) {
        FUN_00468770(1);
        if (*(int *)((int)this_ + 0x1fa8) != -2) {
          FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(*(int *)((int)this_ + 0x1fa8)), bea_arg(*(undefined4 *)((int)this_ + 0x1fac)));
        }
LAB_0044ddd4:
        *(undefined4 *)((int)this_ + 0x1f7c) = 0;
        *(undefined4 *)((int)this_ + 0x1f80) = 2;
        *(undefined4 *)((int)this_ + 0x1fa8) = 0xfffffffe;
        return;
      }
      break;
    case 2:
      if (param_1 == 0x2a) {
        FUN_00468770(0);
        if (*(int *)((int)this_ + 0x1fa0) != 1) {
          *(undefined4 *)((int)this_ + 0x1fa0) = 1;
        }
      }
      else if (param_1 == 0x2b) {
        FUN_00468770(0);
        if (*(int *)((int)this_ + 0x1fa0) != 0) {
          *(undefined4 *)((int)this_ + 0x1fa0) = 0;
          return;
        }
      }
      else if (param_1 == 0x2c) {
        FUN_00468770(1);
        *(undefined4 *)((int)this_ + 0x1fa4) = *(undefined4 *)((int)this_ + 0x1fa0);
        goto LAB_0044ddd4;
      }
      break;
    case 3:
    case 4:
      if (param_1 == 0x2c) {
        FUN_00468770(1);
        if (*(int *)((int)this_ + 0x1fa8) != -2) {
          FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(*(int *)((int)this_ + 0x1fa8)), bea_arg(*(undefined4 *)((int)this_ + 0x1fac)));
        }
        *(undefined4 *)((int)this_ + 0x1fa4) = 1;
        goto LAB_0044ddd4;
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044dd60, ap_0044dd60));
