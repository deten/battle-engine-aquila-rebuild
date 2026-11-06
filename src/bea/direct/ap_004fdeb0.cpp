// hand-ported from 004fdeb0_vslot59.c (CUnit::vslot59, 382 bytes)
// @hand-fixed 2026-10-29 written from the asm: slot 0x58 is called on the sub-object this+8 (004fdeb8), again after each 0x4aa630 lookup; vslot 0x24 of this+0x30 takes no argument, the string pushed before it is 0x4aa630's one argument (ret 4), and the pushes 1, 1 (004fdef1, 004fdf42, 004fdf91, 004fdff1) are the trailing arguments of vslot 0xf0, which gets (0x4aa630's EAX, 1, 1) with ECX = this and the vtable read before that slot-0x24 call; the fall-through returns CComplexThing::vslot59's EAX (004fdfdd), -1 from slot 0x58 returns 1, the rest 0
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef int (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef int (BEA_THISCALL* FUN_004f45a0_t)(uint32_t);
static const bea_guard<FUN_004f45a0_t> CComplexThing__vslot59 = {(FUN_004f45a0_t)0x004f45a0};

typedef uint32_t (BEA_THISCALL* vslotf0_t)(uint32_t, uint32_t, uint32_t, uint32_t);

// index of the named animation: vslot 0x24 of this+0x30, then 0x4aa630
static inline int anim_index(uint8_t *this_, uint32_t name)
{
  uint32_t r = bea_vcall<uint32_t>(*(uint32_t *)(this_ + 0x30), 0x24);
  return FUN_004aa630(r, name);
}

// mov edi, [esi]; push 1; push 1; push name; slot 0x24; 0x4aa630; push eax; call [edi+0xf0]
static inline void play_anim(uint8_t *this_, uint32_t name)
{
  void **vtbl = *(void ***)this_;
  int idx = anim_index(this_, name);
  unsigned short expect = bea_x87_expect();
  ((vslotf0_t)vtbl[0xf0 / 4])((uint32_t)(uintptr_t)this_, (uint32_t)idx, 1, 1);
  bea_x87_rebalance(expect);
}

// lookup first, then slot 0x58 of this+8 (004fded8 / 004fdee3)
static inline bool is_current(uint8_t *this_, uint32_t name)
{
  int idx = anim_index(this_, name);
  int cur = bea_vcall<int>(this_ + 8, 0x58);
  return cur == idx;
}

static int BEA_THISCALL ap_004fdeb0(uint8_t *this_)
{
  if (bea_vcall<int>(this_ + 8, 0x58) == -1) {                                  // 004fdebd
    return 1;
  }
  if (is_current(this_, 0x006239ccu)) {                  // "deploying"
    play_anim(this_, 0x006239ecu);                       // "deployed"
    *(uint32_t *)(this_ + 0x244) = 4;                                           // 004fdf0d
    return 0;
  }
  if (is_current(this_, 0x006239d8u)) {                  // "undeploying"
    play_anim(this_, 0x006239e4u);                       // "normal"
    *(uint32_t *)(this_ + 0x244) = 0;                                           // 004fdf5e
    return 0;
  }
  if (is_current(this_, 0x0062cb60u)) {                  // "prefire"
    play_anim(this_, 0x00633c70u);                       // "prefirehold"
    return 0;
  }
  if (!is_current(this_, 0x0062cb68u) &&                 // "firing"
      !is_current(this_, 0x0062cb70u)) {                 // "postfire"
    return CComplexThing__vslot59((uint32_t)(uintptr_t)this_);                  // 004fdfdd
  }
  // 004fdfe6: back to the resting pose
  play_anim(this_, *(int *)(this_ + 0x244) == 0 ? 0x006239e4u    // "normal"
                                                : 0x006239ecu);  // "deployed"
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fdeb0, ap_004fdeb0));
