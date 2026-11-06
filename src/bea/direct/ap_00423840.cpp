// auto-ported from 00423840_FUN_00423840.c (FUN_00423840, 46 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (5 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00547d90_t)(uint32_t);
static const bea_guard<FUN_00547d90_t> FUN_00547d90 = {(FUN_00547d90_t)0x00547d90};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_00423840(void * this_)
{
  void *this_00;
  
  if ((*(int *)((int)this_ + 0xc) != 0) &&
     (this_00 = *(void **)((int)this_ + 4), this_00 != (void *)0x0)) {
    FUN_00547d90(bea_arg(this_00));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
    *(undefined4 *)((int)this_ + 4) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00423840, ap_00423840));
