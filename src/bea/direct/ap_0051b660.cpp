// auto-ported from 0051b660_vslot3.c (CFEPIntro::vslot3, 77 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPIntro;
#define DAT_006630cc GLOBAL_AT(int, 0x006630cc)
#define DAT_008a9ab4 GLOBAL_AT(int, 0x008a9ab4)
#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};

static void BEA_THISCALL ap_0051b660(CFEPIntro * this_, int param_1, undefined4 param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0x2c) && (*(int *)(this_ + 0xc) == 0)) {
    DAT_006630cc = 0;
    if (DAT_008a9ab4 == 0) {
      uVar2 = 1;
      uVar1 = 0x14;
    }
    else {
      uVar2 = 0x32;
      if (DAT_0083d448 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0x16;
      }
    }
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(uVar1), bea_arg(uVar2));
    FUN_00468770(1);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051b660, ap_0051b660));
