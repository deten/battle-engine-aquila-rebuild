// hand-ported from 00447fa0_vslot59.c (CDropship::vslot59, 275 bytes)
// @hand-fixed 2026-10-29 written from the asm: slot 0x58 is called on the sub-object this+8 (00447fa7); vslot 0x24 of this+0x30 takes no argument, the string pushed before it is 0x4aa630's one argument (ret 4), and the pushes 1, 1 (00447fd7, 0044801e, 00448063, 00448088) are the trailing arguments of vslot 0xf0, which gets (0x4aa630's EAX, 1, 1) with ECX = this and the vtable read before that slot-0x24 call; vslot 0x1e0 takes no argument (0044803e); returns 1 when slot 0x58 gives -1, else 0
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef int (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

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

static int BEA_THISCALL ap_00447fa0(uint8_t *this_)
{
  int cur = bea_vcall<int>(this_ + 8, 0x58);                                    // 00447faa
  if (cur == -1) {
    return 1;
  }
  if (cur == anim_index(this_, 0x00628a98u)) {           // "dooropening"
    play_anim(this_, 0x00628ac0u);                       // "dooropen"
    *(uint32_t *)(this_ + 0x27c) = 4;                                           // 00447ff3
    return 0;
  }
  if (cur == anim_index(this_, 0x00628a8cu)) {           // "doorclosing"
    play_anim(this_, 0x00628a80u);                       // "doorclosed"
    bea_vcall<uint32_t>(this_, 0x1e0);                                          // 0044803e
    return 0;
  }
  if (cur == anim_index(this_, 0x00628aa4u)) {           // "wingfolded"
    play_anim(this_, 0x00628a80u);                       // "doorclosed"
    return 0;
  }
  if (cur == anim_index(this_, 0x00628ab0u)) {           // "wingunfolded"
    play_anim(this_, 0x00628a74u);                       // "wingflat"
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00447fa0, ap_00447fa0));
