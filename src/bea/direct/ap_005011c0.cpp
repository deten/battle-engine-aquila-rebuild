// auto-ported from 005011c0_FUN_005011c0.c (FUN_005011c0, 192 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c741c GLOBAL_AT(char, 0x009c741c)
#define _DAT_009c73d4 GLOBAL_AT(int, 0x009c73d4)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_00854e04 GLOBAL_AT(char, 0x00854e04)
typedef int (BEA_THISCALL* FUN_005001e0_t)(uint32_t);
static const bea_guard<FUN_005001e0_t> FUN_005001e0 = {(FUN_005001e0_t)0x005001e0};
typedef int (BEA_THISCALL* FUN_00500cb0_t)(uint32_t);
static const bea_guard<FUN_00500cb0_t> FUN_00500cb0 = {(FUN_00500cb0_t)0x00500cb0};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};

static void BEA_THISCALL ap_005011c0(void * this_, undefined4 param_1, int param_2)
{
  if (*(int *)((int)this_ + 0x1c) != 0) {
    if (*(char *)((int)this_ + 0x10) != '\0') {
      FUN_005001e0(bea_arg(*(void **)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x40)));
      *(undefined4 *)((int)this_ + 0x38) = 0;
      *(undefined1 *)((int)this_ + 0x10) = 0;
    }
    if (param_2 == 0) {
      param_2 = FUN_00500cb0(bea_arg(this_));
    }
    if (*(int *)((int)this_ + 4) != 0) {
      DAT_009c741c = 1;
      _DAT_009c73d4 = *(int *)((int)this_ + 4);
    }
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    bea_vcall<uint32_t>(DAT_00888a50, 0x190, DAT_00888a50,0,
               *(undefined4 *)(*(int *)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x40) + 8),0,
               *(undefined4 *)((int)this_ + 0x54));
    bea_vcall<uint32_t>(DAT_00888a50, 0x144, DAT_00888a50,*(undefined4 *)((int)this_ + 0x50),0,param_2);
    if ((char)param_1 != '\0') {
      if (*(int *)((int)this_ + 0x1c) != 0) {
        *(int *)((int)this_ + 100) = *(int *)((int)this_ + 0x1c);
      }
      *(undefined4 *)((int)this_ + 0x1c) = 0;
      if (DAT_00854e04 != '\0') {
        *(uint *)((int)this_ + 0x48) = *(uint *)((int)this_ + 0x48) ^ 1;
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005011c0, ap_005011c0));
