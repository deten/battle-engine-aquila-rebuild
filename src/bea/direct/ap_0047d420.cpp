// hand-ported from 0047d420_vslot87.c (CGroundVehicle::vslot87, 123 bytes)
// @hand-fixed 2026-10-29 written from the asm: vslot 0x24 of this+0x30 takes no argument (0047d440/0047d485); the string pushed before it is 0x4aa630's one argument (ret 4), and the earlier pushes 0, 1 (0047d454/0047d47a) are the trailing arguments of vslot 0xf0, which gets (0x4aa630's EAX, 1, 0) with ECX = this and the vtable read before the second slot-0x24 call (0047d452/0047d478). EAX is returned as the original leaves it (-1 from 0x4aa630 on the early exits, else slot 0xf0's EAX), since CUnit::vslot87 returns EAX
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef uint32_t (BEA_THISCALL* FUN_004fc170_t)(uint32_t);
static const bea_guard<FUN_004fc170_t> CUnit__vslot87 = {(FUN_004fc170_t)0x004fc170};
typedef int (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

typedef uint32_t (BEA_THISCALL* vslotf0_t)(uint32_t, uint32_t, uint32_t, uint32_t);

static uint32_t BEA_THISCALL ap_0047d420(uint8_t *this_)
{
  CUnit__vslot87((uint32_t)(uintptr_t)this_);                                   // 0047d424
  uint32_t name = (*(int *)(*(uint8_t **)(this_ + 0x164) + 0x1c) != 0)
                  ? 0x0062cb70u      // "postfire"
                  : 0x0062cb68u;     // "firing"
  uint32_t r = bea_vcall<uint32_t>(*(uint32_t *)(this_ + 0x30), 0x24);
  int idx = FUN_004aa630(r, name);
  if (idx == -1) {
    return (uint32_t)idx;
  }
  uint32_t obj = *(uint32_t *)(this_ + 0x30);
  void **vtbl = *(void ***)this_;                                               // mov edi, [esi]
  r = bea_vcall<uint32_t>(obj, 0x24);                                           // 0047d485
  idx = FUN_004aa630(r, name);                                                  // 0047d48a
  unsigned short expect = bea_x87_expect();
  uint32_t ret = ((vslotf0_t)vtbl[0xf0 / 4])((uint32_t)(uintptr_t)this_, (uint32_t)idx, 1, 0);   // 0047d492
  bea_x87_rebalance(expect);
  return ret;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047d420, ap_0047d420));
