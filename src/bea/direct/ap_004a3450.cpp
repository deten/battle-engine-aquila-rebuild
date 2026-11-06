// auto-ported from 004a3450_vslot7.c (CScaleMenuItem::vslot7, 188 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CScaleMenuItem;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MenuItem_cpp_0062f7d8 ((char*)0x0062f7d8)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_THISCALL ap_004a3450(CScaleMenuItem * this_)
{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  puVar2 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x38), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_MenuItem_cpp_0062f7d8), bea_arg(0xad));
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = ((void*)0x005db440);
    puVar2[2] = *(undefined4 *)(this_ + 8);
    puVar2[4] = *(undefined4 *)(this_ + 0x10);
    puVar2[5] = *(undefined4 *)(this_ + 0x14);
    puVar2[3] = *(undefined4 *)(this_ + 0xc);
    puVar2[0xd] = 0;
    *puVar2 = ((void*)0x005dc520);
    FUN_00401000(bea_arg(puVar2 + 0xd), bea_arg(*(undefined4 *)(this_ + 0x34)));
    uVar1 = *(undefined4 *)(this_ + 0x24);
    puVar2[7] = 0;
    puVar2[9] = uVar1;
    puVar2[8] = 0;
    return puVar2;
  }
  return (undefined4 *)0x0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a3450, ap_004a3450));
