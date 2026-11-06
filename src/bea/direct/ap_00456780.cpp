// auto-ported from 00456780_vslot0.c (CFEPDebriefing::vslot0, 176 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPDebriefing;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_FEPDebriefing__0062913c ((char*)0x0062913c)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static undefined4 BEA_THISCALL ap_00456780(CFEPDebriefing * this_)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *puStack_8;
  undefined4 local_4;
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x324), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_FEPDebriefing__0062913c), bea_arg(0x30));
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = 100;
    FUN_0055dc20(bea_arg(puVar2), bea_arg(8), bea_arg(100), bea_arg(((void*)0x00456830)), bea_arg(((void*)0x004cb050)));
  }
  *(undefined4 **)(this_ + 0x20) = puVar2;
  uVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x640), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_FEPDebriefing__0062913c), bea_arg(0x31));
  *(undefined4 *)(this_ + 0x24) = uVar3;
  *(undefined4 *)(this_ + 0x1c) = 0;
  *(undefined4 *)(this_ + 0x10) = 0;
  *(undefined4 *)(this_ + 0x18) = 0;
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00456780, ap_00456780));
