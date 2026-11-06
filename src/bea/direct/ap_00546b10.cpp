// auto-ported from 00546b10_FUN_00546b10.c (FUN_00546b10, 43 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (5 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};

static void BEA_THISCALL ap_00546b10(void * this_)
{
  int iVar1;
  
  if (*(int *)((int)this_ + 0x24) != 0) {
    *(undefined4 *)(*(int *)((int)this_ + 0x24) + 0x14) = 0x4996b438;
    iVar1 = FUN_004725d0(bea_arg(&DAT_008a9a98));
    if (iVar1 != 0) {
      *(undefined4 *)(*(int *)((int)this_ + 0x24) + 0x48) = 0x4996b438;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00546b10, ap_00546b10));
