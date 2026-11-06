// auto-ported from 004dbc50_FUN_004dbc50.c (FUN_004dbc50, 195 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004dbc50(void * this_)
{
  int iVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005dea38);
  if (*(char *)((int)this_ + 0x20) != '\0') {
    if (*(int *)((int)this_ + 0x14) != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x14)));
      *(undefined4 *)((int)this_ + 0x14) = 0;
    }
    *(undefined1 *)((int)this_ + 0x20) = 0;
    *(undefined4 *)((int)this_ + 0x24) = 0xffffffff;
  }
  if (*(int *)((int)this_ + 0x14) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x14)));
    *(undefined4 *)((int)this_ + 0x14) = 0;
  }
  iVar1 = 0;
  if (0 < *(int *)((int)this_ + 0x18)) {
    do {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x1c) + iVar1 * 4)));
      iVar1 = iVar1 + 1;
    } while (BEA_LOOP_GUARD((iVar1 < *(int *)((int)this_ + 0x18))));
  }
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x1c)));
  *(undefined ***)this_ = ((void*)0x005deaac);
  if (*(undefined4 **)((int)this_ + 0x10) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x10), 0x0, 1);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dbc50, ap_004dbc50));
