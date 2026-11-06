// auto-ported from 0040dda0_FUN_0040dda0.c (FUN_0040dda0, 159 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_008a9d7c GLOBAL_AT(int, 0x008a9d7c)
#define DAT_008a9d80 GLOBAL_AT(int, 0x008a9d80)
typedef undefined4 (BEA_THISCALL* FUN_0044c720_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044c720_t> FUN_0044c720 = {(FUN_0044c720_t)0x0044c720};

static void BEA_THISCALL ap_0040dda0(void * this_)
{
  int iVar1;
  int iVar2;
  
  if ((*(float *)((int)this_ + 0x2e8) < DAT_00672fd0 - 8.0f) &&
     (iVar1 = bea_vcall<uint32_t>(this_, 0x10c), iVar1 != 0)) {
    iVar1 = FUN_0044c720(bea_arg(DAT_008a9d7c), bea_arg(*(undefined4 *)((int)this_ + 0x1c)), bea_arg(*(undefined4 *)((int)this_ + 0x20)), bea_arg(*(undefined4 *)((int)this_ + 0x24)), bea_arg(*(undefined4 *)((int)this_ + 0x28)));
    iVar2 = FUN_0044c720(bea_arg(DAT_008a9d80), bea_arg(*(undefined4 *)((int)this_ + 0x1c)), bea_arg(*(undefined4 *)((int)this_ + 0x20)), bea_arg(*(undefined4 *)((int)this_ + 0x24)), bea_arg(*(undefined4 *)((int)this_ + 0x28)));
    if ((iVar2 != 0) || (iVar1 != 0)) {
      *(float *)((int)this_ + 0x2e8) = DAT_00672fd0;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040dda0, ap_0040dda0));
