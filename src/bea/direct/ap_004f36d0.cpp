// auto-ported from 004f36d0_vslot36.c (CThing::vslot36, 61 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (7 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CThing;
#define DAT_0089ce54 GLOBAL_AT(char, 0x0089ce54)
typedef uint32_t (BEA_THISCALL* FUN_004f37c0_t)(uint32_t);
static const bea_guard<FUN_004f37c0_t> FUN_004f37c0 = {(FUN_004f37c0_t)0x004f37c0};

static void BEA_THISCALL ap_004f36d0(CThing * this_, uint param_1)
{
  ushort uVar1;
  
  uVar1 = *(ushort *)(this_ + 0x2c);
  if ((uVar1 & 0x10) == 0) {
    if ((uVar1 & 0x20) != 0) {
      param_1 = param_1 | 2;
    }
    if ((*(int **)(this_ + 0x30) != (int *)0x0) && ((uVar1 & 8) == 0)) {
      bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x8, param_1);
      if ((DAT_0089ce54 & 0x20) != 0) {
        FUN_004f37c0(bea_arg(this_));
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f36d0, ap_004f36d0));
