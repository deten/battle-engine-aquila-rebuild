// auto-ported from 0051de60_vslot3.c (CFEPMultiplayerStart::vslot3, 98 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPMultiplayerStart;
#define DAT_0089be64 GLOBAL_AT(int, 0x0089be64)
#define DAT_008a9560 GLOBAL_AT(int, 0x008a9560)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};

static void BEA_THISCALL ap_0051de60(CFEPMultiplayerStart * this_, int param_1, undefined4 param_2)
{
  int iVar1;
  
  if (DAT_0089be64 == 0) {
    iVar1 = -1;
    if (DAT_008a9560 == (char)this_[4]) {
      iVar1 = 0;
    }
    if ((DAT_008a9560 == (char)this_[5]) || (iVar1 != -1)) {
      if (param_1 == 0x2c) {
        *(undefined4 *)(this_ + 8) = 1;
        *(undefined4 *)(this_ + 0xc) = 1;
      }
      else if (param_1 == 0x2e) {
        FUN_00468770(2);
        FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0x10), bea_arg(0x1e));
        return;
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051de60, ap_0051de60));
