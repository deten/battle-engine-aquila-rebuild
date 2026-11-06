// auto-ported from 00403f80_FUN_00403f80.c (FUN_00403f80, 98 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_00403f80(void * this_)
{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this_ + 0x418)) {
    do {
      iVar1 = *(int *)(*(int *)((int)this_ + 0x414) + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar1));
        *(undefined4 *)(*(int *)((int)this_ + 0x414) + iVar2 * 4) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)this_ + 0x418))));
  }
  if (*(int *)((int)this_ + 0x414) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x414)));
    *(undefined4 *)((int)this_ + 0x414) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00403f80, ap_00403f80));
