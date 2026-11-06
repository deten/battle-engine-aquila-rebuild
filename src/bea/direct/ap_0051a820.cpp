// auto-ported from 0051a820_vslot2.c (CFEPCredits::vslot2, 81 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPCredits;
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_00889a48 GLOBAL_AT(int, 0x00889a48)
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint (BEA_CDECL* FUN_00469390_t)(undefined4, undefined4, undefined4, undefined4, undefined4, ...);
static const bea_guard<FUN_00469390_t> FUN_00469390 = {(FUN_00469390_t)0x00469390};
typedef uint32_t (BEA_THISCALL* FUN_004bb8c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004bb8c0_t> FUN_004bb8c0 = {(FUN_004bb8c0_t)0x004bb8c0};

static void BEA_THISCALL ap_0051a820(CFEPCredits * this_, int param_1)
{
  if (param_1 == 0) {
    if (*(int *)(this_ + 8) != 0) {
      FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0x11), bea_arg(0x1e));
      FUN_004bb8c0(bea_arg(&DAT_00889a48), bea_arg(0), bea_arg(1));
      *(undefined4 *)(this_ + 8) = 0;
    }
    FUN_00469390(0,0,0x44200000,0x43f00000,0x2e);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051a820, ap_0051a820));
