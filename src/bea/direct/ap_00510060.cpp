// auto-ported from 00510060_FUN_00510060.c (FUN_00510060, 140 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c51f0 GLOBAL_AT(int, 0x009c51f0)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798 ((char*)0x0063d798)
typedef void * (BEA_THISCALL* FUN_004f3e10_t)(uint32_t);
static const bea_guard<FUN_004f3e10_t> FUN_004f3e10 = {(FUN_004f3e10_t)0x004f3e10};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_CDECL ap_00510060(int param_1)
{
  undefined4 *this_local;
  undefined1 *puStack_8;
  undefined4 local_4;
  if ((0x27ff < DAT_009c51f0) && (-1 < param_1)) {
    this_local = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xf4), bea_arg(0x41), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x116));
    if (this_local != (undefined4 *)0x0) {
      FUN_004f3e10(bea_arg(this_local));
      *this_local = ((void*)0x005e45e0);
      this_local[2] = ((void*)0x005e4568);
      return this_local;
    }
  }
  return (undefined4 *)0x0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00510060, ap_00510060));
