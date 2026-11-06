// hand-ported from 00489de0_vslot59.c (CInfantryUnit::vslot59, 229 bytes)
// @hand-fixed 2026-10-29 written from the asm: slot 0x58 is called on the sub-object this+8 (lea ecx, [esi+8] at 00489de7); vslot 0x24 of this+0x30 takes no argument, the string pushed before it is 0x4aa630's one argument (ret 4), and the pushes 1, 1 (e.g. 00489e17/00489e94) are the trailing arguments of vslot 0xf0, which gets (0x4aa630's EAX, 1, 1) with ECX = this and the vtable read before the last slot-0x24 call; returns 0 (00489ec1)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef int (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

typedef uint32_t (BEA_THISCALL* vslotf0_t)(uint32_t, uint32_t, uint32_t, uint32_t);

static int BEA_THISCALL ap_00489de0(uint8_t *this_)
{
  int cur = bea_vcall<int>(this_ + 8, 0x58);                                    // 00489dea
  if (cur == -1) {
    return 0;
  }
  static const uint32_t die[4]  = {0x0062d560u, 0x0062d530u, 0x0062d53cu, 0x0062d548u};  // die_up/back/left/right
  static const uint32_t dead[4] = {0x0062d528u, 0x0062d4f4u, 0x0062d500u, 0x0062d50cu};  // dead_up/back/left/right
  uint32_t name = 0x0062d518u;                                                  // dead_forward
  for (int i = 0; i < 4; i++) {
    uint32_t r = bea_vcall<uint32_t>(*(uint32_t *)(this_ + 0x30), 0x24);
    if (cur == FUN_004aa630(r, die[i])) {
      name = dead[i];
      break;
    }
  }
  void **vtbl = *(void ***)this_;                                               // mov edi, [esi]
  uint32_t r = bea_vcall<uint32_t>(*(uint32_t *)(this_ + 0x30), 0x24);
  int idx = FUN_004aa630(r, name);                                              // 00489eb2
  unsigned short expect = bea_x87_expect();
  ((vslotf0_t)vtbl[0xf0 / 4])((uint32_t)(uintptr_t)this_, (uint32_t)idx, 1, 1);   // 00489eba
  bea_x87_rebalance(expect);
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00489de0, ap_00489de0));
