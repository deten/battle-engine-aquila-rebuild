// auto-ported from 004160b0_vslot9.c (CBomber::vslot9, 236 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CAirUnit;
typedef char CBomber;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Bomber_cpp_00623a78 ((char*)0x00623a78)
typedef uint32_t (BEA_THISCALL* CAirUnit__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CAirUnit__vslot9_t> CAirUnit__vslot9 = {(CAirUnit__vslot9_t)0x00402ad0};
typedef void * (BEA_THISCALL* FUN_00402150_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00402150_t> FUN_00402150 = {(FUN_00402150_t)0x00402150};
typedef void * (BEA_THISCALL* FUN_004fe710_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fe710_t> FUN_004fe710 = {(FUN_004fe710_t)0x004fe710};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_004160b0(CBomber * this_, int param_1)
{
  undefined4 *puVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x80) = 2;
  CAirUnit__vslot9(bea_arg((CAirUnit *)this_), bea_arg(param_1));
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x30), bea_arg(0x17), bea_arg(s_C__dev_ONSLAUGHT2_Bomber_cpp_00623a78), bea_arg(0x11));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00402150(bea_arg(puVar1), bea_arg(this_));
    *puVar1 = ((void*)0x005d8dbc);
  }
  *(undefined4 **)(this_ + 0x208) = puVar1;
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(100), bea_arg(0x16), bea_arg(s_C__dev_ONSLAUGHT2_Bomber_cpp_00623a78), bea_arg(0x12));
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004fe710(bea_arg(puVar1), bea_arg(this_), bea_arg(param_1));
    *puVar1 = ((void*)0x005d8d88);
    puVar1[0x18] = 0;
    *(undefined4 **)(this_ + 0x13c) = puVar1;
    return;
  }
  *(undefined4 *)(this_ + 0x13c) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004160b0, ap_004160b0));
