// auto-ported from 005010e0_FUN_005010e0.c (FUN_005010e0, 215 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-31 the reset after the draw tests param_1's low byte (0x50118c `mov al, [esp+0x14]`); the
// autoport had the constant '\0' for Ghidra's `(char)param_1`, so +0x1c / +0x34 were never cleared and +0x48 never
// flipped.  Found by a scan for parameters the original uses and a port ignores (2026-10-31).
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_00854e04 GLOBAL_AT(char, 0x00854e04)
typedef int (BEA_THISCALL* FUN_004883f0_t)(uint32_t);
static const bea_guard<FUN_004883f0_t> FUN_004883f0 = {(FUN_004883f0_t)0x004883f0};
typedef int (BEA_THISCALL* FUN_005001e0_t)(uint32_t);
static const bea_guard<FUN_005001e0_t> FUN_005001e0 = {(FUN_005001e0_t)0x005001e0};
typedef int (BEA_THISCALL* FUN_00500c50_t)(uint32_t);
static const bea_guard<FUN_00500c50_t> FUN_00500c50 = {(FUN_00500c50_t)0x00500c50};
typedef uint32_t (BEA_THISCALL* FUN_00513c70_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513c70_t> FUN_00513c70 = {(FUN_00513c70_t)0x00513c70};

static void BEA_THISCALL ap_005010e0(void * this_, undefined4 param_1, int param_2, int param_3)
{
  char cVar1;
  
  if ((*(int *)((int)this_ + 0x1c) != 0) && (*(int *)((int)this_ + 0x34) != 0)) {
    if (*(char *)((int)this_ + 0x10) != '\0') {
      FUN_005001e0(bea_arg(*(void **)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x40)));
      *(undefined4 *)((int)this_ + 0x38) = 0;
      *(undefined1 *)((int)this_ + 0x10) = 0;
    }
    if (*(char *)((int)this_ + 0x2c) != '\0') {
      FUN_004883f0(bea_arg(*(void **)((int)this_ + 0x4c)));
      *(undefined4 *)((int)this_ + 0x3c) = 0;
      *(undefined1 *)((int)this_ + 0x2c) = 0;
    }
    if (param_2 == 0) {
      param_2 = *(int *)((int)this_ + 0x1c) / *(int *)((int)this_ + 0x54);
    }
    if (param_3 == 0) {
      param_3 = FUN_00500c50(bea_arg(this_));
    }
    cVar1 = (char)param_1;            // mov al, [esp+0x14] (0x50118c)
    bea_vcall<uint32_t>(DAT_00888a50, 0x190, DAT_00888a50,0,
               *(undefined4 *)(*(int *)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x40) + 8),0,
               *(undefined4 *)((int)this_ + 0x54));
    bea_vcall<uint32_t>(DAT_00888a50, 0x1a0, DAT_00888a50,*(undefined4 *)(*(int *)((int)this_ + 0x4c) + 8));
    FUN_00513c70(bea_arg(&DAT_00855bb0), bea_arg(*(undefined4 *)((int)this_ + 0x50)), bea_arg(0), bea_arg(param_2), bea_arg(0), bea_arg(param_3));
    if (cVar1 != '\0') {
      if (*(int *)((int)this_ + 0x1c) != 0) {
        *(int *)((int)this_ + 100) = *(int *)((int)this_ + 0x1c);
      }
      *(undefined4 *)((int)this_ + 0x1c) = 0;
      *(undefined4 *)((int)this_ + 0x34) = 0;
      if (DAT_00854e04 != '\0') {
        *(uint *)((int)this_ + 0x48) = *(uint *)((int)this_ + 0x48) ^ 1;
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005010e0, ap_005010e0));
