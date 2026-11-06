// auto-ported from 005000c0_FUN_005000c0.c (FUN_005000c0, 84 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_vbuffer_cpp_00633d08 ((char*)0x00633d08)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_005000c0(void * this_, int param_1, int param_2, undefined4 param_3)
{
  undefined4 uVar1;
  int iVar2;
  
  *(int *)((int)this_ + 0x1c) = param_2;
  *(undefined4 *)((int)this_ + 0x18) = param_3;
  *(int *)((int)this_ + 0x10) = param_1 * param_2;
  *(undefined4 *)((int)this_ + 0x14) = 8;
  *(undefined4 *)((int)this_ + 0x20) = 1;
  uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(param_1 * param_2), bea_arg(0x2d), bea_arg(s_C__dev_ONSLAUGHT2_vbuffer_cpp_00633d08), bea_arg(0x53));
  *(undefined4 *)((int)this_ + 0x24) = uVar1;
  iVar2 = bea_vcall<uint32_t>(this_, 0x4);
  return -1 < iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005000c0, ap_005000c0));
