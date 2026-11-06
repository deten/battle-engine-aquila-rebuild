// auto-ported from 005593a0_vslot8.c (CDXTexture::vslot8, 105 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CDXTexture;
#define DAT_00704e48 GLOBAL_AT(int, 0x00704e48)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
typedef float10 (BEA_CDECL* FUN_0044a0c0_t)(void);
static const bea_guard<FUN_0044a0c0_t> FUN_0044a0c0 = {(FUN_0044a0c0_t)0x0044a0c0};
typedef uint32_t (BEA_THISCALL* FUN_00513a50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a50_t> FUN_00513a50 = {(FUN_00513a50_t)0x00513a50};

static void BEA_THISCALL ap_005593a0(CDXTexture * this_)
{
  float10 fVar1;
  int local_8;
  
  if (DAT_00704e48 != 5) {
    if (*(int *)(this_ + 0x138) == 1) {
      FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(*(undefined4 *)(this_ + 0xb8)));
      return;
    }
    fVar1 = (float10)FUN_0044a0c0();
    local_8 = (int)(longlong)ROUND(fVar1 * (float10)20.0f);
    FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(*(undefined4 *)(this_ + (local_8 % *(int *)(this_ + 0x138)) * 4 + 0xb8)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005593a0, ap_005593a0));
