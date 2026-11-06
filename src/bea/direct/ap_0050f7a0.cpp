// auto-ported from 0050f7a0_FUN_0050f7a0.c (FUN_0050f7a0, 230 bytes) by tools/autoport.py
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
typedef void * (BEA_THISCALL* FUN_004d81e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d81e0_t> FUN_004d81e0 = {(FUN_004d81e0_t)0x004d81e0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_CDECL ap_0050f7a0(int param_1)
{
  undefined4 *puVar1;
  void *this_local;
  undefined1 *puStack_8;
  undefined4 local_4;
  if ((0x31fff < DAT_009c51f0) && (param_1 != 0)) {
    if (*(int *)(param_1 + 0x70) == 0) {
      this_local = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x134), bea_arg(0xd), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0xd5));
      if (this_local != (void *)0x0) {
        puVar1 = (undefined4 *)FUN_004d81e0(bea_arg(this_local), bea_arg(param_1));
        return puVar1;
      }
    }
    else {
      puVar1 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x134), bea_arg(0xd), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0xd3));
      if (puVar1 != (undefined4 *)0x0) {
        FUN_004d81e0(bea_arg(puVar1), bea_arg(param_1));
        *puVar1 = ((void*)0x005e3ba4);
        puVar1[2] = ((void*)0x005e3b2c);
        return puVar1;
      }
    }
  }
  return (undefined4 *)0x0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050f7a0, ap_0050f7a0));
