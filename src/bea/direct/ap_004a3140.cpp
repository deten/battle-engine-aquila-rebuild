// auto-ported from 004a3140_vslot7.c (CMenuItem::vslot7, 67 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMenuItem;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MenuItem_cpp_0062f7d8 ((char*)0x0062f7d8)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_THISCALL ap_004a3140(CMenuItem * this_)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x1c), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_MenuItem_cpp_0062f7d8), bea_arg(0x27));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = ((void*)0x005db440);
    puVar1[2] = *(undefined4 *)(this_ + 8);
    puVar1[4] = *(undefined4 *)(this_ + 0x10);
    puVar1[5] = *(undefined4 *)(this_ + 0x14);
    puVar1[3] = *(undefined4 *)(this_ + 0xc);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a3140, ap_004a3140));
