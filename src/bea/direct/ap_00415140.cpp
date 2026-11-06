// auto-ported from 00415140_vslot93.c (CBoat::vslot93, 92 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CBoat;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_landed______________006239ac ((char*)0x006239ac)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static void BEA_THISCALL ap_00415140(CBoat * this_)
{
  if (*(int *)(this_ + 0x264) != 1) {
    FUN_00441740(&DAT_0066f580,s_landed______________006239ac);
    *(undefined4 *)(this_ + 300) = 0;
    bea_vcall<uint32_t>(this_, 0x110);
    bea_vcall<uint32_t>(this_, 0x100);
    if (*(int *)(this_ + 0x214) != 0) {
      bea_vcall<uint32_t>(this_, 0x148);
    }
    *(undefined4 *)(this_ + 0x264) = 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00415140, ap_00415140));
