// auto-ported from 00538860_FUN_00538860.c (FUN_00538860, 110 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064fe98 ((char*)0x0064fe98)
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_00538860(void * this_)
{
  void *this_00;
  undefined1 *puStack_8;
  undefined4 local_4;
  this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x76), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fe98), bea_arg(0x42));
  if (this_00 != (void *)0x0) {
    FUN_004e5840(bea_arg(this_00));
    *(void **)((int)this_ + 8) = this_00;
    return;
  }
  *(undefined4 *)((int)this_ + 8) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00538860, ap_00538860));
