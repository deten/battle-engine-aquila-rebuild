// auto-ported from 00421a80_vslot9.c (CCarrier::vslot9, 241 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CAirUnit;
typedef char CCarrier;
typedef char CGuide;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Carrier_cpp_006243bc ((char*)0x006243bc)
typedef uint32_t (BEA_THISCALL* CAirUnit__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CAirUnit__vslot9_t> CAirUnit__vslot9 = {(CAirUnit__vslot9_t)0x00402ad0};
typedef CGuide* (BEA_THISCALL* FUN_0047e290_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047e290_t> FUN_0047e290 = {(FUN_0047e290_t)0x0047e290};
typedef void * (BEA_THISCALL* FUN_004fe710_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fe710_t> FUN_004fe710 = {(FUN_004fe710_t)0x004fe710};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_00421a80(CCarrier * this_, int param_1)
{
  undefined4 *puVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x80) = 2;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0xa100100;
  CAirUnit__vslot9(bea_arg((CAirUnit *)this_), bea_arg(param_1));
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x20), bea_arg(0x17), bea_arg(s_C__dev_ONSLAUGHT2_Carrier_cpp_006243bc), bea_arg(0x1a));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_0047e290(bea_arg(puVar1), bea_arg(this_));
    *puVar1 = ((void*)0x005d940c);
  }
  *(undefined4 **)(this_ + 0x208) = puVar1;
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x60), bea_arg(0x16), bea_arg(s_C__dev_ONSLAUGHT2_Carrier_cpp_006243bc), bea_arg(0x1b));
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004fe710(bea_arg(puVar1), bea_arg(this_), bea_arg(param_1));
    *puVar1 = ((void*)0x005d93d4);
    *(undefined4 **)(this_ + 0x13c) = puVar1;
    return;
  }
  *(undefined4 *)(this_ + 0x13c) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00421a80, ap_00421a80));
