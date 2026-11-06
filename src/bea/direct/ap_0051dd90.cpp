// auto-ported from 0051dd90_vslot1.c (CFEPMultiplayerStart::vslot1, 57 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPMultiplayerStart;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_0046ba90_t)(uint32_t);
static const bea_guard<FUN_0046ba90_t> FUN_0046ba90 = {(FUN_0046ba90_t)0x0046ba90};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_0051dd90(CFEPMultiplayerStart * this_)
{
  void *pvVar1;
  
  pvVar1 = *(void **)(this_ + 0x10);
  if (pvVar1 != (void *)0x0) {
    FUN_0046ba90(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
  }
  pvVar1 = *(void **)(this_ + 0x14);
  if (pvVar1 != (void *)0x0) {
    FUN_0046ba90(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051dd90, ap_0051dd90));
