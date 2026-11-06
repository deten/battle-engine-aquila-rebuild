// auto-ported from 00451c20_vslot3.c (CFEPBriefing::vslot3, 105 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPBriefing;
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_008a9ab4 GLOBAL_AT(int, 0x008a9ab4)
typedef uint32_t (BEA_STDCALL* FUN_00452db0_t)(uint32_t);
static const bea_guard<FUN_00452db0_t> FUN_00452db0 = {(FUN_00452db0_t)0x00452db0};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};

static void BEA_THISCALL ap_00451c20(CFEPBriefing * this_, int param_1, undefined4 param_2)
{
  undefined4 uVar1;
  
  if (param_1 == 0x2c) {
    FUN_00468770(1);
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(3), bea_arg(0x19));
  }
  else if (param_1 == 0x2e) {
    FUN_00468770(2);
    if (DAT_008a9ab4 == 0) {
      uVar1 = 0x14;
    }
    else {
      uVar1 = 7;
    }
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(uVar1), bea_arg(0x1e));
    FUN_00452db0(bea_arg(0));
    *(undefined4 *)(this_ + 0xc) = 0;
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00451c20, ap_00451c20));
