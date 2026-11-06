// auto-ported from 0047a760_vslot119.c (CGillMHead::vslot119, 143 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGillMHead;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_GillMHead_cpp_0062ca6c ((char*)0x0062ca6c)
typedef void * (BEA_THISCALL* FUN_004fe710_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fe710_t> FUN_004fe710 = {(FUN_004fe710_t)0x004fe710};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_0047a760(CGillMHead * this_, undefined4 param_1)
{
  undefined4 *this_00;
  undefined1 *puStack_8;
  undefined4 local_4;
  this_00 = (undefined4 *)
            FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(100), bea_arg(0x16), bea_arg(s_C__dev_ONSLAUGHT2_GillMHead_cpp_0062ca6c), bea_arg(0x13));
  if (this_00 != (undefined4 *)0x0) {
    FUN_004fe710(bea_arg(this_00), bea_arg(this_), bea_arg(param_1));
    *this_00 = ((void*)0x005dbcec);
    this_00[0x18] = 0;
    *(undefined4 **)(this_ + 0x13c) = this_00;
    return;
  }
  *(undefined4 *)(this_ + 0x13c) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047a760, ap_0047a760));
