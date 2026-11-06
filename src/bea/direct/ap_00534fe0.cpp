// auto-ported from 00534fe0_FUN_00534fe0.c (FUN_00534fe0, 41 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: thiscall, 3 stack args (ret 0xc, only param_1 read); the `push edi` at 0x534ff0 saves a register, so slot 0x38 on *param_1 takes no args (Ghidra's unaff_EDI); slot 0x19c uses the vtable of [this+0x10] read before the first call (0x534ff1) with ECX = [this+0x10] re-read (0x534ffa) and one pushed arg (the slot-0x38 result), thiscall pops it; EAX is reproduced: the 0x19c result, or [this+0x10] when the flag test fails
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef uint32_t (BEA_THISCALL* VFn1_t)(uint32_t, uint32_t);

static uint32_t BEA_THISCALL ap_00534fe0(void * this_, uint32_t * param_1, uint32_t param_2, uint32_t param_3)
{
  char *s = (char *)this_;
  uint32_t o = *(uint32_t *)(s + 0x10);
  if ((*(uint8_t *)(uintptr_t)(o + 0x34) & 0x10) == 0) {
    return o;
  }
  uint32_t *vt = *(uint32_t **)(uintptr_t)o;                        // 0x534ff1
  uint32_t a = bea_vcall<uint32_t>(*param_1, 0x38);
  const bea_guard<VFn1_t> F = {(VFn1_t)vt[0x19c / 4]};
  return F(*(uint32_t *)(s + 0x10), a);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00534fe0, ap_00534fe0));
