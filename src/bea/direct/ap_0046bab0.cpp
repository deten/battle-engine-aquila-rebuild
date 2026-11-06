// hand-ported from 0046bab0 (FUN_0046bab0, 59 bytes)
// @hand-fixed 2026-10-29 written from the asm: thiscall(param_1), ret 4 (0046bae8). 0x4aa630 is a thiscall on slot 0x24's result taking ONE argument (param_1, ret 4); the earlier push of this+0x44 (0046bacc) is the second argument of slot 0x38, which gets (0x4aa630's EAX, this+0x44) with ECX reloaded from this+0x58 (0046bad5) and the vtable read before the 0x4aa630 call (0046bac6). Slot 0x38's result is ST0 (fstp [esi+0x48] at 0046badc)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef int (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

typedef float10 (BEA_THISCALL* vslot38_t)(uint32_t, uint32_t, uint32_t);

static void BEA_THISCALL ap_0046bab0(uint8_t *this_, uint32_t param_1)
{
  uint32_t r = bea_vcall<uint32_t>(*(uint32_t *)(this_ + 0x58), 0x24);         // 0046bab8
  if (r != 0) {
    void **vtbl = **(void ****)(this_ + 0x58);                                  // 0046bac6 mov edi, [ecx]
    int idx = FUN_004aa630(r, param_1);                                         // 0046bad0
    uint32_t obj = *(uint32_t *)(this_ + 0x58);                                 // 0046bad5
    float10 v = ((vslot38_t)vtbl[0x38 / 4])(obj, (uint32_t)idx, (uint32_t)(uintptr_t)(this_ + 0x44));
    *(float *)(this_ + 0x48) = (float)v;                                        // 0046badc
    *(uint32_t *)(this_ + 0x4c) = 0;
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046bab0, ap_0046bab0));
