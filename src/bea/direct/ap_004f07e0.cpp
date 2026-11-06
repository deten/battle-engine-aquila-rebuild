// auto-ported from 004f07e0_vslot118.c (CTentacle::vslot118, 123 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGuide;
typedef char CTentacle;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Tentacle_cpp_00632ccc ((char*)0x00632ccc)
typedef CGuide* (BEA_THISCALL* FUN_0047e290_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047e290_t> FUN_0047e290 = {(FUN_0047e290_t)0x0047e290};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_004f07e0(CTentacle * this_)
{
  undefined4 *this_00;
  undefined1 *puStack_8;
  undefined4 local_4;
  this_00 = (undefined4 *)
            FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x20), bea_arg(0x17), bea_arg(s_C__dev_ONSLAUGHT2_Tentacle_cpp_00632ccc), bea_arg(0x35));
  if (this_00 != (undefined4 *)0x0) {
    FUN_0047e290(bea_arg(this_00), bea_arg(this_));
    *this_00 = ((void*)0x005df46c);
    *(undefined4 **)(this_ + 0x208) = this_00;
    return;
  }
  *(undefined4 *)(this_ + 0x208) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f07e0, ap_004f07e0));
